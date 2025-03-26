/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/JsonMatchPattern.h>
#include <aws/wafv2/model/JsonMatchScope.h>
#include <aws/wafv2/model/BodyParsingFallbackBehavior.h>
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
   * <p>Inspect the body of the web request as JSON. The body immediately follows the
   * request headers. </p> <p>This is used to indicate the web request component to
   * inspect, in the <a>FieldToMatch</a> specification. </p> <p>Use the
   * specifications in this object to indicate which parts of the JSON body to
   * inspect using the rule's inspection criteria. WAF inspects only the parts of the
   * JSON that result from the matches that you indicate. </p> <p>Example JSON:
   * <code>"JsonBody": { "MatchPattern": { "All": {} }, "MatchScope": "ALL" }</code>
   * </p> <p>For additional information about this request component option, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-fields-list.html#waf-rule-statement-request-component-json-body">JSON
   * body</a> in the <i>WAF Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/JsonBody">AWS API
   * Reference</a></p>
   */
  class JsonBody
  {
  public:
    AWS_WAFV2_API JsonBody() = default;
    AWS_WAFV2_API JsonBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API JsonBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The patterns to look for in the JSON body. WAF inspects the results of these
     * pattern matches against the rule inspection criteria. </p>
     */
    inline const JsonMatchPattern& GetMatchPattern() const { return m_matchPattern; }
    inline bool MatchPatternHasBeenSet() const { return m_matchPatternHasBeenSet; }
    template<typename MatchPatternT = JsonMatchPattern>
    void SetMatchPattern(MatchPatternT&& value) { m_matchPatternHasBeenSet = true; m_matchPattern = std::forward<MatchPatternT>(value); }
    template<typename MatchPatternT = JsonMatchPattern>
    JsonBody& WithMatchPattern(MatchPatternT&& value) { SetMatchPattern(std::forward<MatchPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>ALL</code>, WAF matches against keys and values. </p> <p>
     * <code>All</code> does not require a match to be found in the keys and a match to
     * be found in the values. It requires a match to be found in the keys or the
     * values or both. To require a match in the keys and in the values, use a logical
     * <code>AND</code> statement to combine two match rules, one that inspects the
     * keys and another that inspects the values. </p>
     */
    inline JsonMatchScope GetMatchScope() const { return m_matchScope; }
    inline bool MatchScopeHasBeenSet() const { return m_matchScopeHasBeenSet; }
    inline void SetMatchScope(JsonMatchScope value) { m_matchScopeHasBeenSet = true; m_matchScope = value; }
    inline JsonBody& WithMatchScope(JsonMatchScope value) { SetMatchScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>What WAF should do if it fails to completely parse the JSON body. The options
     * are the following:</p> <ul> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect
     * the body as plain text. WAF applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string.</p>
     * </li> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>If you don't provide this setting, WAF parses and
     * evaluates the content only up to the first parsing failure that it encounters.
     * </p>  <p>WAF parsing doesn't fully validate the input JSON string, so
     * parsing can succeed even for invalid JSON. When parsing succeeds, WAF doesn't
     * apply the fallback behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-fields-list.html#waf-rule-statement-request-component-json-body">JSON
     * body</a> in the <i>WAF Developer Guide</i>.</p> 
     */
    inline BodyParsingFallbackBehavior GetInvalidFallbackBehavior() const { return m_invalidFallbackBehavior; }
    inline bool InvalidFallbackBehaviorHasBeenSet() const { return m_invalidFallbackBehaviorHasBeenSet; }
    inline void SetInvalidFallbackBehavior(BodyParsingFallbackBehavior value) { m_invalidFallbackBehaviorHasBeenSet = true; m_invalidFallbackBehavior = value; }
    inline JsonBody& WithInvalidFallbackBehavior(BodyParsingFallbackBehavior value) { SetInvalidFallbackBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. </p> <p>WAF
     * does not support inspecting the entire contents of the web request body if the
     * body exceeds the limit for the resource type. When a web request body is larger
     * than the limit, the underlying host service only forwards the contents that are
     * within the limit to WAF for inspection. </p> <ul> <li> <p>For Application Load
     * Balancer and AppSync, the limit is fixed at 8 KB (8,192 bytes).</p> </li> <li>
     * <p>For CloudFront, API Gateway, Amazon Cognito, App Runner, and Verified Access,
     * the default limit is 16 KB (16,384 bytes), and you can increase the limit for
     * each resource type in the web ACL <code>AssociationConfig</code>, for additional
     * processing fees. </p> </li> <li> <p>For Amplify, use the CloudFront limit.</p>
     * </li> </ul> <p>The options for oversize handling are the following:</p> <ul>
     * <li> <p> <code>CONTINUE</code> - Inspect the available body contents normally,
     * according to the rule inspection criteria. </p> </li> <li> <p>
     * <code>MATCH</code> - Treat the web request as matching the rule statement. WAF
     * applies the rule action to the request.</p> </li> <li> <p> <code>NO_MATCH</code>
     * - Treat the web request as not matching the rule statement.</p> </li> </ul>
     * <p>You can combine the <code>MATCH</code> or <code>NO_MATCH</code> settings for
     * oversize handling with your rule and web ACL action settings, so that you block
     * any request whose body is over the limit. </p> <p>Default: <code>CONTINUE</code>
     * </p>
     */
    inline OversizeHandling GetOversizeHandling() const { return m_oversizeHandling; }
    inline bool OversizeHandlingHasBeenSet() const { return m_oversizeHandlingHasBeenSet; }
    inline void SetOversizeHandling(OversizeHandling value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = value; }
    inline JsonBody& WithOversizeHandling(OversizeHandling value) { SetOversizeHandling(value); return *this;}
    ///@}
  private:

    JsonMatchPattern m_matchPattern;
    bool m_matchPatternHasBeenSet = false;

    JsonMatchScope m_matchScope{JsonMatchScope::NOT_SET};
    bool m_matchScopeHasBeenSet = false;

    BodyParsingFallbackBehavior m_invalidFallbackBehavior{BodyParsingFallbackBehavior::NOT_SET};
    bool m_invalidFallbackBehaviorHasBeenSet = false;

    OversizeHandling m_oversizeHandling{OversizeHandling::NOT_SET};
    bool m_oversizeHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
