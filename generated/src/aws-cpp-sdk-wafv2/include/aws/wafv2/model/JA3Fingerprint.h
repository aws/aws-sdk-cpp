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
   * <p>Match against the request's JA3 fingerprint. The JA3 fingerprint is a
   * 32-character hash derived from the TLS Client Hello of an incoming request. This
   * fingerprint serves as a unique identifier for the client's TLS configuration.
   * WAF calculates and logs this fingerprint for each request that has enough TLS
   * Client Hello information for the calculation. Almost all web requests include
   * this information.</p>  <p>You can use this choice only with a string match
   * <code>ByteMatchStatement</code> with the <code>PositionalConstraint</code> set
   * to <code>EXACTLY</code>. </p>  <p>You can obtain the JA3 fingerprint for
   * client requests from the web ACL logs. If WAF is able to calculate the
   * fingerprint, it includes it in the logs. For information about the logging
   * fields, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging-fields.html">Log
   * fields</a> in the <i>WAF Developer Guide</i>. </p> <p>Provide the JA3
   * fingerprint string from the logs in your string match statement specification,
   * to match with any future requests that have the same TLS
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/JA3Fingerprint">AWS
   * API Reference</a></p>
   */
  class JA3Fingerprint
  {
  public:
    AWS_WAFV2_API JA3Fingerprint();
    AWS_WAFV2_API JA3Fingerprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API JA3Fingerprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * JA3 fingerprint. </p> <p>You can specify the following fallback behaviors:</p>
     * <ul> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul>
     */
    inline const FallbackBehavior& GetFallbackBehavior() const{ return m_fallbackBehavior; }

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * JA3 fingerprint. </p> <p>You can specify the following fallback behaviors:</p>
     * <ul> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul>
     */
    inline bool FallbackBehaviorHasBeenSet() const { return m_fallbackBehaviorHasBeenSet; }

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * JA3 fingerprint. </p> <p>You can specify the following fallback behaviors:</p>
     * <ul> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul>
     */
    inline void SetFallbackBehavior(const FallbackBehavior& value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = value; }

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * JA3 fingerprint. </p> <p>You can specify the following fallback behaviors:</p>
     * <ul> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul>
     */
    inline void SetFallbackBehavior(FallbackBehavior&& value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = std::move(value); }

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * JA3 fingerprint. </p> <p>You can specify the following fallback behaviors:</p>
     * <ul> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul>
     */
    inline JA3Fingerprint& WithFallbackBehavior(const FallbackBehavior& value) { SetFallbackBehavior(value); return *this;}

    /**
     * <p>The match status to assign to the web request if the request doesn't have a
     * JA3 fingerprint. </p> <p>You can specify the following fallback behaviors:</p>
     * <ul> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul>
     */
    inline JA3Fingerprint& WithFallbackBehavior(FallbackBehavior&& value) { SetFallbackBehavior(std::move(value)); return *this;}

  private:

    FallbackBehavior m_fallbackBehavior;
    bool m_fallbackBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
