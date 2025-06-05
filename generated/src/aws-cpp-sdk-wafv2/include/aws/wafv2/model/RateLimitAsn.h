/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
   * <p>Specifies an Autonomous System Number (ASN) derived from the request's
   * originating or forwarded IP address as an aggregate key for a rate-based rule.
   * Each distinct ASN contributes to the aggregation instance. If you use a single
   * ASN as your custom key, then each ASN fully defines an aggregation instance.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateLimitAsn">AWS
   * API Reference</a></p>
   */
  class RateLimitAsn
  {
  public:
    AWS_WAFV2_API RateLimitAsn() = default;
    AWS_WAFV2_API RateLimitAsn(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitAsn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
