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
   * <p>Available for use with Amazon CloudFront distributions and Application Load
   * Balancers. Match against the request's JA4 fingerprint. The JA4 fingerprint is a
   * 36-character hash derived from the TLS Client Hello of an incoming request. This
   * fingerprint serves as a unique identifier for the client's TLS configuration.
   * WAF calculates and logs this fingerprint for each request that has enough TLS
   * Client Hello information for the calculation. Almost all web requests include
   * this information.</p>  <p>You can use this choice only with a string match
   * <code>ByteMatchStatement</code> with the <code>PositionalConstraint</code> set
   * to <code>EXACTLY</code>. </p>  <p>You can obtain the JA4 fingerprint for
   * client requests from the web ACL logs. If WAF is able to calculate the
   * fingerprint, it includes it in the logs. For information about the logging
   * fields, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging-fields.html">Log
   * fields</a> in the <i>WAF Developer Guide</i>. </p> <p>Provide the JA4
   * fingerprint string from the logs in your string match statement specification,
   * to match with any future requests that have the same TLS
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/JA4Fingerprint">AWS
   * API Reference</a></p>
   */
  class JA4Fingerprint
  {
  public:
    AWS_WAFV2_API JA4Fingerprint() = default;
    AWS_WAFV2_API JA4Fingerprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API JA4Fingerprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * JA4 fingerprint. </p> <p>You can specify the following fallback behaviors:</p>
     * <ul> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul>
     */
    inline FallbackBehavior GetFallbackBehavior() const { return m_fallbackBehavior; }
    inline bool FallbackBehaviorHasBeenSet() const { return m_fallbackBehaviorHasBeenSet; }
    inline void SetFallbackBehavior(FallbackBehavior value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = value; }
    inline JA4Fingerprint& WithFallbackBehavior(FallbackBehavior value) { SetFallbackBehavior(value); return *this;}
    ///@}
  private:

    FallbackBehavior m_fallbackBehavior{FallbackBehavior::NOT_SET};
    bool m_fallbackBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
