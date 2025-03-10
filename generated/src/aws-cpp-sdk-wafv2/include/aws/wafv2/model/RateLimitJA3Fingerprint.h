﻿/**
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
   * <p> Use the request's JA3 fingerprint derived from the TLS Client Hello of an
   * incoming request as an aggregate key. If you use a single JA3 fingerprint as
   * your custom key, then each value fully defines an aggregation instance.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateLimitJA3Fingerprint">AWS
   * API Reference</a></p>
   */
  class RateLimitJA3Fingerprint
  {
  public:
    AWS_WAFV2_API RateLimitJA3Fingerprint();
    AWS_WAFV2_API RateLimitJA3Fingerprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitJA3Fingerprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The match status to assign to the web request if there is insufficient TSL
     * Client Hello information to compute the JA3 fingerprint.</p> <p>You can specify
     * the following fallback behaviors:</p> <ul> <li> <p> <code>MATCH</code> - Treat
     * the web request as matching the rule statement. WAF applies the rule action to
     * the request.</p> </li> <li> <p> <code>NO_MATCH</code> - Treat the web request as
     * not matching the rule statement.</p> </li> </ul>
     */
    inline const FallbackBehavior& GetFallbackBehavior() const{ return m_fallbackBehavior; }
    inline bool FallbackBehaviorHasBeenSet() const { return m_fallbackBehaviorHasBeenSet; }
    inline void SetFallbackBehavior(const FallbackBehavior& value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = value; }
    inline void SetFallbackBehavior(FallbackBehavior&& value) { m_fallbackBehaviorHasBeenSet = true; m_fallbackBehavior = std::move(value); }
    inline RateLimitJA3Fingerprint& WithFallbackBehavior(const FallbackBehavior& value) { SetFallbackBehavior(value); return *this;}
    inline RateLimitJA3Fingerprint& WithFallbackBehavior(FallbackBehavior&& value) { SetFallbackBehavior(std::move(value)); return *this;}
    ///@}
  private:

    FallbackBehavior m_fallbackBehavior;
    bool m_fallbackBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
