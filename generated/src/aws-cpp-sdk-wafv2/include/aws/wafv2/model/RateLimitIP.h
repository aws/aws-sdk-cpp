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
   * <p>Specifies the IP address in the web request as an aggregate key for a
   * rate-based rule. Each distinct IP address contributes to the aggregation
   * instance. </p> <p>This setting is used only in the
   * <code>RateBasedStatementCustomKey</code> specification of a rate-based rule
   * statement. To use this in the custom key settings, you must specify at least one
   * other key to use, along with the IP address. To aggregate on only the IP
   * address, in your rate-based statement's <code>AggregateKeyType</code>, specify
   * <code>IP</code>.</p> <p>JSON specification: <code>"RateLimitIP": {}</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateLimitIP">AWS
   * API Reference</a></p>
   */
  class RateLimitIP
  {
  public:
    AWS_WAFV2_API RateLimitIP();
    AWS_WAFV2_API RateLimitIP(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitIP& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
