﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CookieMatchPattern.h>
#include <aws/wafv2/model/MapMatchScope.h>
#include <aws/wafv2/model/OversizeHandling.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Inspect the cookies in the web request. You can specify the parts of the
   * cookies to inspect and you can narrow the set of cookies to inspect by including
   * or excluding specific keys.</p> <p>This is used to indicate the web request
   * component to inspect, in the <a>FieldToMatch</a> specification. </p> <p>Example
   * JSON: <code>"Cookies": { "MatchPattern": { "All": {} }, "MatchScope": "KEY",
   * "OversizeHandling": "MATCH" }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Cookies">AWS API
   * Reference</a></p>
   */
  class Cookies
  {
  public:
    AWS_WAFV2_API Cookies() = default;
    AWS_WAFV2_API Cookies(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Cookies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter to use to identify the subset of cookies to inspect in a web
     * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
     * <code>IncludedCookies</code>, or <code>ExcludedCookies</code>.</p> <p>Example
     * JSON: <code>"MatchPattern": { "IncludedCookies": [ "session-id-time",
     * "session-id" ] }</code> </p>
     */
    inline const CookieMatchPattern& GetMatchPattern() const { return m_matchPattern; }
    inline bool MatchPatternHasBeenSet() const { return m_matchPatternHasBeenSet; }
    template<typename MatchPatternT = CookieMatchPattern>
    void SetMatchPattern(MatchPatternT&& value) { m_matchPatternHasBeenSet = true; m_matchPattern = std::forward<MatchPatternT>(value); }
    template<typename MatchPatternT = CookieMatchPattern>
    Cookies& WithMatchPattern(MatchPatternT&& value) { SetMatchPattern(std::forward<MatchPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parts of the cookies to inspect with the rule inspection criteria. If you
     * specify <code>ALL</code>, WAF inspects both keys and values. </p> <p>
     * <code>All</code> does not require a match to be found in the keys and a match to
     * be found in the values. It requires a match to be found in the keys or the
     * values or both. To require a match in the keys and in the values, use a logical
     * <code>AND</code> statement to combine two match rules, one that inspects the
     * keys and another that inspects the values. </p>
     */
    inline MapMatchScope GetMatchScope() const { return m_matchScope; }
    inline bool MatchScopeHasBeenSet() const { return m_matchScopeHasBeenSet; }
    inline void SetMatchScope(MapMatchScope value) { m_matchScopeHasBeenSet = true; m_matchScope = value; }
    inline Cookies& WithMatchScope(MapMatchScope value) { SetMatchScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>What WAF should do if the cookies of the request are more numerous or larger
     * than WAF can inspect. WAF does not support inspecting the entire contents of
     * request cookies when they exceed 8 KB (8192 bytes) or 200 total cookies. The
     * underlying host service forwards a maximum of 200 cookies and at most 8 KB of
     * cookie contents to WAF. </p> <p>The options for oversize handling are the
     * following:</p> <ul> <li> <p> <code>CONTINUE</code> - Inspect the available
     * cookies normally, according to the rule inspection criteria. </p> </li> <li> <p>
     * <code>MATCH</code> - Treat the web request as matching the rule statement. WAF
     * applies the rule action to the request.</p> </li> <li> <p> <code>NO_MATCH</code>
     * - Treat the web request as not matching the rule statement.</p> </li> </ul>
     */
    inline OversizeHandling GetOversizeHandling() const { return m_oversizeHandling; }
    inline bool OversizeHandlingHasBeenSet() const { return m_oversizeHandlingHasBeenSet; }
    inline void SetOversizeHandling(OversizeHandling value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = value; }
    inline Cookies& WithOversizeHandling(OversizeHandling value) { SetOversizeHandling(value); return *this;}
    ///@}
  private:

    CookieMatchPattern m_matchPattern;
    bool m_matchPatternHasBeenSet = false;

    MapMatchScope m_matchScope{MapMatchScope::NOT_SET};
    bool m_matchScopeHasBeenSet = false;

    OversizeHandling m_oversizeHandling{OversizeHandling::NOT_SET};
    bool m_oversizeHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
