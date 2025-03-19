/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/FallbackBehavior.h>
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
   * <p>Inspect fragments of the request URI. You can specify the parts of the URI
   * fragment to inspect and you can narrow the set of URI fragments to inspect by
   * including or excluding specific keys. </p> <p>This is used to indicate the web
   * request component to inspect, in the <a>FieldToMatch</a> specification. </p>
   * <p>Example JSON: <code>"UriFragment": { "MatchPattern": { "All": {} },
   * "MatchScope": "KEY", "OversizeHandling": "MATCH" }</code> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UriFragment">AWS
   * API Reference</a></p>
   */
  class UriFragment
  {
  public:
    AWS_WAFV2_API UriFragment() = default;
    AWS_WAFV2_API UriFragment(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API UriFragment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * </p> <p>Example JSON: <code>{ "UriFragment": { "FallbackBehavior": "MATCH"}
     * }</code> </p>  <p>WAF parsing doesn't fully validate the input JSON
     * string, so parsing can succeed even for invalid JSON. When parsing succeeds, WAF
     * doesn't apply the fallback behavior. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-fields-list.html#waf-rule-statement-request-component-json-body">JSON
     * body</a> in the <i>WAF Developer Guide</i>.</p> 
     */
    inline FallbackBehavior GetFallbackBehavior() const { return m_fallbackBehavior; }
    inline bool FallbackBehaviorHasBeenSet() const { return m_fallbackBehaviorHasBeenSet; }
    inline void SetFallbackBehavior(FallbackBehavior value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = value; }
    inline UriFragment& WithFallbackBehavior(FallbackBehavior value) { SetFallbackBehavior(value); return *this;}
    ///@}
  private:

    FallbackBehavior m_fallbackBehavior{FallbackBehavior::NOT_SET};
    bool m_fallbackBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
