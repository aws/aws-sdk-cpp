/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/HeaderMatchPattern.h>
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
   * <p>Inspect all headers in the web request. You can specify the parts of the
   * headers to inspect and you can narrow the set of headers to inspect by including
   * or excluding specific keys.</p> <p>This is used to indicate the web request
   * component to inspect, in the <a>FieldToMatch</a> specification. </p> <p>If you
   * want to inspect just the value of a single header, use the
   * <code>SingleHeader</code> <code>FieldToMatch</code> setting instead.</p>
   * <p>Example JSON: <code>"Headers": { "MatchPattern": { "All": {} }, "MatchScope":
   * "KEY", "OversizeHandling": "MATCH" }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Headers">AWS API
   * Reference</a></p>
   */
  class Headers
  {
  public:
    AWS_WAFV2_API Headers() = default;
    AWS_WAFV2_API Headers(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Headers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter to use to identify the subset of headers to inspect in a web
     * request. </p> <p>You must specify exactly one setting: either <code>All</code>,
     * <code>IncludedHeaders</code>, or <code>ExcludedHeaders</code>.</p> <p>Example
     * JSON: <code>"MatchPattern": { "ExcludedHeaders": [ "KeyToExclude1",
     * "KeyToExclude2" ] }</code> </p>
     */
    inline const HeaderMatchPattern& GetMatchPattern() const { return m_matchPattern; }
    inline bool MatchPatternHasBeenSet() const { return m_matchPatternHasBeenSet; }
    template<typename MatchPatternT = HeaderMatchPattern>
    void SetMatchPattern(MatchPatternT&& value) { m_matchPatternHasBeenSet = true; m_matchPattern = std::forward<MatchPatternT>(value); }
    template<typename MatchPatternT = HeaderMatchPattern>
    Headers& WithMatchPattern(MatchPatternT&& value) { SetMatchPattern(std::forward<MatchPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parts of the headers to match with the rule inspection criteria. If you
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
    inline Headers& WithMatchScope(MapMatchScope value) { SetMatchScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>What WAF should do if the headers determined by your match scope are more
     * numerous or larger than WAF can inspect. WAF does not support inspecting the
     * entire contents of request headers when they exceed 8 KB (8192 bytes) or 200
     * total headers. The underlying host service forwards a maximum of 200 headers and
     * at most 8 KB of header contents to WAF. </p> <p>The options for oversize
     * handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> - Inspect
     * the available headers normally, according to the rule inspection criteria. </p>
     * </li> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul>
     */
    inline OversizeHandling GetOversizeHandling() const { return m_oversizeHandling; }
    inline bool OversizeHandlingHasBeenSet() const { return m_oversizeHandlingHasBeenSet; }
    inline void SetOversizeHandling(OversizeHandling value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = value; }
    inline Headers& WithOversizeHandling(OversizeHandling value) { SetOversizeHandling(value); return *this;}
    ///@}
  private:

    HeaderMatchPattern m_matchPattern;
    bool m_matchPatternHasBeenSet = false;

    MapMatchScope m_matchScope{MapMatchScope::NOT_SET};
    bool m_matchScopeHasBeenSet = false;

    OversizeHandling m_oversizeHandling{OversizeHandling::NOT_SET};
    bool m_oversizeHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
