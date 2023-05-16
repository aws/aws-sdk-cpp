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
   * <p>Specifies the first IP address in an HTTP header as an aggregate key for a
   * rate-based rule. Each distinct forwarded IP address contributes to the
   * aggregation instance.</p> <p>This setting is used only in the
   * <code>RateBasedStatementCustomKey</code> specification of a rate-based rule
   * statement. When you specify an IP or forwarded IP in the custom key settings,
   * you must also specify at least one other key to use. You can aggregate on only
   * the forwarded IP address by specifying <code>FORWARDED_IP</code> in your
   * rate-based statement's <code>AggregateKeyType</code>. </p> <p>This data type
   * supports using the forwarded IP address in the web request aggregation for a
   * rate-based rule, in <code>RateBasedStatementCustomKey</code>. The JSON
   * specification for using the forwarded IP address doesn't explicitly use this
   * data type. </p> <p>JSON specification: <code>"ForwardedIP": {}</code> </p>
   * <p>When you use this specification, you must also configure the forwarded IP
   * address in the rate-based statement's <code>ForwardedIPConfig</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateLimitForwardedIP">AWS
   * API Reference</a></p>
   */
  class RateLimitForwardedIP
  {
  public:
    AWS_WAFV2_API RateLimitForwardedIP();
    AWS_WAFV2_API RateLimitForwardedIP(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitForwardedIP& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
