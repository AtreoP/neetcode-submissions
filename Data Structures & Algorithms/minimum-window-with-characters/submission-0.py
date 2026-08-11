class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if t=="":
            return ""
        cnt,win={},{}
        for c in t:
            cnt[c]=1+cnt.get(c,0)
        have,need=0,len(cnt)
        res,reslen=[-1,-1],float("inf")
        l=0
        for r in range(len(s)):
            c=s[r]
            win[c]=1+win.get(c,0)
            if c in cnt and win[c]==cnt[c]:
                have+=1
            while have==need:
                if (r-l+1)<reslen:
                    res=[l,r]
                    reslen=(r-l+1)
                win[s[l]]-=1
                if s[l] in cnt and win[s[l]]<cnt[s[l]]:
                    have-=1
                l+=1
        l,r=res
        return s[l:r+1] if reslen!=float("inf") else ""
            