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
   * <p>Specifies the request's HTTP method as an aggregate key for a rate-based
   * rule. Each distinct HTTP method contributes to the aggregation instance. If you
   * use just the HTTP method as your custom key, then each method fully defines an
   * aggregation instance. </p> <p>JSON specification: <code>"RateLimitHTTPMethod":
   * {}</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateLimitHTTPMethod">AWS
   * API Reference</a></p>
   */
  class RateLimitHTTPMethod
  {
  public:
    AWS_WAFV2_API RateLimitHTTPMethod();
    AWS_WAFV2_API RateLimitHTTPMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitHTTPMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
