/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RateBasedStatementAggregateKeyType.h>
#include <aws/wafv2/model/ForwardedIPConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/RateBasedStatementCustomKey.h>
#include <utility>
#include <memory>

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
  class Statement;

  /**
   * <p>A rate-based rule counts incoming requests and rate limits requests when they
   * are coming at too fast a rate. The rule categorizes requests according to your
   * aggregation criteria, collects them into aggregation instances, and counts and
   * rate limits the requests for each instance. </p>  <p>If you change any of
   * these settings in a rule that's currently in use, the change resets the rule's
   * rate limiting counts. This can pause the rule's rate limiting activities for up
   * to a minute. </p>  <p>You can specify individual aggregation keys, like
   * IP address or HTTP method. You can also specify aggregation key combinations,
   * like IP address and HTTP method, or HTTP method, query argument, and cookie.
   * </p> <p>Each unique set of values for the aggregation keys that you specify is a
   * separate aggregation instance, with the value from each key contributing to the
   * aggregation instance definition. </p> <p>For example, assume the rule evaluates
   * web requests with the following IP address and HTTP method values: </p> <ul>
   * <li> <p>IP address 10.1.1.1, HTTP method POST</p> </li> <li> <p>IP address
   * 10.1.1.1, HTTP method GET</p> </li> <li> <p>IP address 127.0.0.0, HTTP method
   * POST</p> </li> <li> <p>IP address 10.1.1.1, HTTP method GET</p> </li> </ul>
   * <p>The rule would create different aggregation instances according to your
   * aggregation criteria, for example: </p> <ul> <li> <p>If the aggregation criteria
   * is just the IP address, then each individual address is an aggregation instance,
   * and WAF counts requests separately for each. The aggregation instances and
   * request counts for our example would be the following: </p> <ul> <li> <p>IP
   * address 10.1.1.1: count 3</p> </li> <li> <p>IP address 127.0.0.0: count 1</p>
   * </li> </ul> </li> <li> <p>If the aggregation criteria is HTTP method, then each
   * individual HTTP method is an aggregation instance. The aggregation instances and
   * request counts for our example would be the following: </p> <ul> <li> <p>HTTP
   * method POST: count 2</p> </li> <li> <p>HTTP method GET: count 2</p> </li> </ul>
   * </li> <li> <p>If the aggregation criteria is IP address and HTTP method, then
   * each IP address and each HTTP method would contribute to the combined
   * aggregation instance. The aggregation instances and request counts for our
   * example would be the following: </p> <ul> <li> <p>IP address 10.1.1.1, HTTP
   * method POST: count 1</p> </li> <li> <p>IP address 10.1.1.1, HTTP method GET:
   * count 2</p> </li> <li> <p>IP address 127.0.0.0, HTTP method POST: count 1</p>
   * </li> </ul> </li> </ul> <p>For any n-tuple of aggregation keys, each unique
   * combination of values for the keys defines a separate aggregation instance,
   * which WAF counts and rate-limits individually. </p> <p>You can optionally nest
   * another statement inside the rate-based statement, to narrow the scope of the
   * rule so that it only counts and rate limits requests that match the nested
   * statement. You can use this nested scope-down statement in conjunction with your
   * aggregation key specifications or you can just count and rate limit all requests
   * that match the scope-down statement, without additional aggregation. When you
   * choose to just manage all requests that match a scope-down statement, the
   * aggregation instance is singular for the rule. </p> <p>You cannot nest a
   * <code>RateBasedStatement</code> inside another statement, for example inside a
   * <code>NotStatement</code> or <code>OrStatement</code>. You can define a
   * <code>RateBasedStatement</code> inside a web ACL and inside a rule group. </p>
   * <p>For additional information about the options, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rate-based-rules.html">Rate
   * limiting web requests using rate-based rules</a> in the <i>WAF Developer
   * Guide</i>. </p> <p>If you only aggregate on the individual IP address or
   * forwarded IP address, you can retrieve the list of IP addresses that WAF is
   * currently rate limiting for a rule through the API call
   * <code>GetRateBasedStatementManagedKeys</code>. This option is not available for
   * other aggregation configurations.</p> <p>WAF tracks and manages web requests
   * separately for each instance of a rate-based rule that you use. For example, if
   * you provide the same rate-based rule settings in two web ACLs, each of the two
   * rule statements represents a separate instance of the rate-based rule and gets
   * its own tracking and management by WAF. If you define a rate-based rule inside a
   * rule group, and then use that rule group in multiple places, each use creates a
   * separate instance of the rate-based rule that gets its own tracking and
   * management by WAF. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateBasedStatement">AWS
   * API Reference</a></p>
   */
  class RateBasedStatement
  {
  public:
    AWS_WAFV2_API RateBasedStatement();
    AWS_WAFV2_API RateBasedStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateBasedStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The limit on requests per 5-minute period for a single aggregation instance
     * for the rate-based rule. If the rate-based statement includes a
     * <code>ScopeDownStatement</code>, this limit is applied only to the requests that
     * match the statement.</p> <p>Examples: </p> <ul> <li> <p>If you aggregate on just
     * the IP address, this is the limit on requests from any single IP address. </p>
     * </li> <li> <p>If you aggregate on the HTTP method and the query argument name
     * "city", then this is the limit on requests for any single method, city pair.
     * </p> </li> </ul>
     */
    inline long long GetLimit() const{ return m_limit; }

    /**
     * <p>The limit on requests per 5-minute period for a single aggregation instance
     * for the rate-based rule. If the rate-based statement includes a
     * <code>ScopeDownStatement</code>, this limit is applied only to the requests that
     * match the statement.</p> <p>Examples: </p> <ul> <li> <p>If you aggregate on just
     * the IP address, this is the limit on requests from any single IP address. </p>
     * </li> <li> <p>If you aggregate on the HTTP method and the query argument name
     * "city", then this is the limit on requests for any single method, city pair.
     * </p> </li> </ul>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The limit on requests per 5-minute period for a single aggregation instance
     * for the rate-based rule. If the rate-based statement includes a
     * <code>ScopeDownStatement</code>, this limit is applied only to the requests that
     * match the statement.</p> <p>Examples: </p> <ul> <li> <p>If you aggregate on just
     * the IP address, this is the limit on requests from any single IP address. </p>
     * </li> <li> <p>If you aggregate on the HTTP method and the query argument name
     * "city", then this is the limit on requests for any single method, city pair.
     * </p> </li> </ul>
     */
    inline void SetLimit(long long value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The limit on requests per 5-minute period for a single aggregation instance
     * for the rate-based rule. If the rate-based statement includes a
     * <code>ScopeDownStatement</code>, this limit is applied only to the requests that
     * match the statement.</p> <p>Examples: </p> <ul> <li> <p>If you aggregate on just
     * the IP address, this is the limit on requests from any single IP address. </p>
     * </li> <li> <p>If you aggregate on the HTTP method and the query argument name
     * "city", then this is the limit on requests for any single method, city pair.
     * </p> </li> </ul>
     */
    inline RateBasedStatement& WithLimit(long long value) { SetLimit(value); return *this;}


    /**
     * <p>The amount of time, in seconds, that WAF should include in its request
     * counts, looking back from the current time. For example, for a setting of 120,
     * when WAF checks the rate, it counts the requests for the 2 minutes immediately
     * preceding the current time. Valid settings are 60, 120, 300, and 600. </p>
     * <p>This setting doesn't determine how often WAF checks the rate, but how far
     * back it looks each time it checks. WAF checks the rate about every 10
     * seconds.</p> <p>Default: <code>300</code> (5 minutes)</p>
     */
    inline long long GetEvaluationWindowSec() const{ return m_evaluationWindowSec; }

    /**
     * <p>The amount of time, in seconds, that WAF should include in its request
     * counts, looking back from the current time. For example, for a setting of 120,
     * when WAF checks the rate, it counts the requests for the 2 minutes immediately
     * preceding the current time. Valid settings are 60, 120, 300, and 600. </p>
     * <p>This setting doesn't determine how often WAF checks the rate, but how far
     * back it looks each time it checks. WAF checks the rate about every 10
     * seconds.</p> <p>Default: <code>300</code> (5 minutes)</p>
     */
    inline bool EvaluationWindowSecHasBeenSet() const { return m_evaluationWindowSecHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that WAF should include in its request
     * counts, looking back from the current time. For example, for a setting of 120,
     * when WAF checks the rate, it counts the requests for the 2 minutes immediately
     * preceding the current time. Valid settings are 60, 120, 300, and 600. </p>
     * <p>This setting doesn't determine how often WAF checks the rate, but how far
     * back it looks each time it checks. WAF checks the rate about every 10
     * seconds.</p> <p>Default: <code>300</code> (5 minutes)</p>
     */
    inline void SetEvaluationWindowSec(long long value) { m_evaluationWindowSecHasBeenSet = true; m_evaluationWindowSec = value; }

    /**
     * <p>The amount of time, in seconds, that WAF should include in its request
     * counts, looking back from the current time. For example, for a setting of 120,
     * when WAF checks the rate, it counts the requests for the 2 minutes immediately
     * preceding the current time. Valid settings are 60, 120, 300, and 600. </p>
     * <p>This setting doesn't determine how often WAF checks the rate, but how far
     * back it looks each time it checks. WAF checks the rate about every 10
     * seconds.</p> <p>Default: <code>300</code> (5 minutes)</p>
     */
    inline RateBasedStatement& WithEvaluationWindowSec(long long value) { SetEvaluationWindowSec(value); return *this;}


    /**
     * <p>Setting that indicates how to aggregate the request counts. </p> 
     * <p>Web requests that are missing any of the components specified in the
     * aggregation keys are omitted from the rate-based rule evaluation and handling.
     * </p>  <ul> <li> <p> <code>CONSTANT</code> - Count and limit the requests
     * that match the rate-based rule's scope-down statement. With this option, the
     * counted requests aren't further aggregated. The scope-down statement is the only
     * specification used. When the count of all requests that satisfy the scope-down
     * statement goes over the limit, WAF applies the rule action to all requests that
     * satisfy the scope-down statement. </p> <p>With this option, you must configure
     * the <code>ScopeDownStatement</code> property. </p> </li> <li> <p>
     * <code>CUSTOM_KEYS</code> - Aggregate the request counts using one or more web
     * request components as the aggregate keys.</p> <p>With this option, you must
     * specify the aggregate keys in the <code>CustomKeys</code> property. </p> <p>To
     * aggregate on only the IP address or only the forwarded IP address, don't use
     * custom keys. Instead, set the aggregate key type to <code>IP</code> or
     * <code>FORWARDED_IP</code>.</p> </li> <li> <p> <code>FORWARDED_IP</code> -
     * Aggregate the request counts on the first IP address in an HTTP header. </p>
     * <p>With this option, you must specify the header to use in the
     * <code>ForwardedIPConfig</code> property. </p> <p>To aggregate on a combination
     * of the forwarded IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> <li> <p> <code>IP</code> - Aggregate the
     * request counts on the IP address from the web request origin.</p> <p>To
     * aggregate on a combination of the IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> </ul>
     */
    inline const RateBasedStatementAggregateKeyType& GetAggregateKeyType() const{ return m_aggregateKeyType; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. </p> 
     * <p>Web requests that are missing any of the components specified in the
     * aggregation keys are omitted from the rate-based rule evaluation and handling.
     * </p>  <ul> <li> <p> <code>CONSTANT</code> - Count and limit the requests
     * that match the rate-based rule's scope-down statement. With this option, the
     * counted requests aren't further aggregated. The scope-down statement is the only
     * specification used. When the count of all requests that satisfy the scope-down
     * statement goes over the limit, WAF applies the rule action to all requests that
     * satisfy the scope-down statement. </p> <p>With this option, you must configure
     * the <code>ScopeDownStatement</code> property. </p> </li> <li> <p>
     * <code>CUSTOM_KEYS</code> - Aggregate the request counts using one or more web
     * request components as the aggregate keys.</p> <p>With this option, you must
     * specify the aggregate keys in the <code>CustomKeys</code> property. </p> <p>To
     * aggregate on only the IP address or only the forwarded IP address, don't use
     * custom keys. Instead, set the aggregate key type to <code>IP</code> or
     * <code>FORWARDED_IP</code>.</p> </li> <li> <p> <code>FORWARDED_IP</code> -
     * Aggregate the request counts on the first IP address in an HTTP header. </p>
     * <p>With this option, you must specify the header to use in the
     * <code>ForwardedIPConfig</code> property. </p> <p>To aggregate on a combination
     * of the forwarded IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> <li> <p> <code>IP</code> - Aggregate the
     * request counts on the IP address from the web request origin.</p> <p>To
     * aggregate on a combination of the IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> </ul>
     */
    inline bool AggregateKeyTypeHasBeenSet() const { return m_aggregateKeyTypeHasBeenSet; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. </p> 
     * <p>Web requests that are missing any of the components specified in the
     * aggregation keys are omitted from the rate-based rule evaluation and handling.
     * </p>  <ul> <li> <p> <code>CONSTANT</code> - Count and limit the requests
     * that match the rate-based rule's scope-down statement. With this option, the
     * counted requests aren't further aggregated. The scope-down statement is the only
     * specification used. When the count of all requests that satisfy the scope-down
     * statement goes over the limit, WAF applies the rule action to all requests that
     * satisfy the scope-down statement. </p> <p>With this option, you must configure
     * the <code>ScopeDownStatement</code> property. </p> </li> <li> <p>
     * <code>CUSTOM_KEYS</code> - Aggregate the request counts using one or more web
     * request components as the aggregate keys.</p> <p>With this option, you must
     * specify the aggregate keys in the <code>CustomKeys</code> property. </p> <p>To
     * aggregate on only the IP address or only the forwarded IP address, don't use
     * custom keys. Instead, set the aggregate key type to <code>IP</code> or
     * <code>FORWARDED_IP</code>.</p> </li> <li> <p> <code>FORWARDED_IP</code> -
     * Aggregate the request counts on the first IP address in an HTTP header. </p>
     * <p>With this option, you must specify the header to use in the
     * <code>ForwardedIPConfig</code> property. </p> <p>To aggregate on a combination
     * of the forwarded IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> <li> <p> <code>IP</code> - Aggregate the
     * request counts on the IP address from the web request origin.</p> <p>To
     * aggregate on a combination of the IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> </ul>
     */
    inline void SetAggregateKeyType(const RateBasedStatementAggregateKeyType& value) { m_aggregateKeyTypeHasBeenSet = true; m_aggregateKeyType = value; }

    /**
     * <p>Setting that indicates how to aggregate the request counts. </p> 
     * <p>Web requests that are missing any of the components specified in the
     * aggregation keys are omitted from the rate-based rule evaluation and handling.
     * </p>  <ul> <li> <p> <code>CONSTANT</code> - Count and limit the requests
     * that match the rate-based rule's scope-down statement. With this option, the
     * counted requests aren't further aggregated. The scope-down statement is the only
     * specification used. When the count of all requests that satisfy the scope-down
     * statement goes over the limit, WAF applies the rule action to all requests that
     * satisfy the scope-down statement. </p> <p>With this option, you must configure
     * the <code>ScopeDownStatement</code> property. </p> </li> <li> <p>
     * <code>CUSTOM_KEYS</code> - Aggregate the request counts using one or more web
     * request components as the aggregate keys.</p> <p>With this option, you must
     * specify the aggregate keys in the <code>CustomKeys</code> property. </p> <p>To
     * aggregate on only the IP address or only the forwarded IP address, don't use
     * custom keys. Instead, set the aggregate key type to <code>IP</code> or
     * <code>FORWARDED_IP</code>.</p> </li> <li> <p> <code>FORWARDED_IP</code> -
     * Aggregate the request counts on the first IP address in an HTTP header. </p>
     * <p>With this option, you must specify the header to use in the
     * <code>ForwardedIPConfig</code> property. </p> <p>To aggregate on a combination
     * of the forwarded IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> <li> <p> <code>IP</code> - Aggregate the
     * request counts on the IP address from the web request origin.</p> <p>To
     * aggregate on a combination of the IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> </ul>
     */
    inline void SetAggregateKeyType(RateBasedStatementAggregateKeyType&& value) { m_aggregateKeyTypeHasBeenSet = true; m_aggregateKeyType = std::move(value); }

    /**
     * <p>Setting that indicates how to aggregate the request counts. </p> 
     * <p>Web requests that are missing any of the components specified in the
     * aggregation keys are omitted from the rate-based rule evaluation and handling.
     * </p>  <ul> <li> <p> <code>CONSTANT</code> - Count and limit the requests
     * that match the rate-based rule's scope-down statement. With this option, the
     * counted requests aren't further aggregated. The scope-down statement is the only
     * specification used. When the count of all requests that satisfy the scope-down
     * statement goes over the limit, WAF applies the rule action to all requests that
     * satisfy the scope-down statement. </p> <p>With this option, you must configure
     * the <code>ScopeDownStatement</code> property. </p> </li> <li> <p>
     * <code>CUSTOM_KEYS</code> - Aggregate the request counts using one or more web
     * request components as the aggregate keys.</p> <p>With this option, you must
     * specify the aggregate keys in the <code>CustomKeys</code> property. </p> <p>To
     * aggregate on only the IP address or only the forwarded IP address, don't use
     * custom keys. Instead, set the aggregate key type to <code>IP</code> or
     * <code>FORWARDED_IP</code>.</p> </li> <li> <p> <code>FORWARDED_IP</code> -
     * Aggregate the request counts on the first IP address in an HTTP header. </p>
     * <p>With this option, you must specify the header to use in the
     * <code>ForwardedIPConfig</code> property. </p> <p>To aggregate on a combination
     * of the forwarded IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> <li> <p> <code>IP</code> - Aggregate the
     * request counts on the IP address from the web request origin.</p> <p>To
     * aggregate on a combination of the IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> </ul>
     */
    inline RateBasedStatement& WithAggregateKeyType(const RateBasedStatementAggregateKeyType& value) { SetAggregateKeyType(value); return *this;}

    /**
     * <p>Setting that indicates how to aggregate the request counts. </p> 
     * <p>Web requests that are missing any of the components specified in the
     * aggregation keys are omitted from the rate-based rule evaluation and handling.
     * </p>  <ul> <li> <p> <code>CONSTANT</code> - Count and limit the requests
     * that match the rate-based rule's scope-down statement. With this option, the
     * counted requests aren't further aggregated. The scope-down statement is the only
     * specification used. When the count of all requests that satisfy the scope-down
     * statement goes over the limit, WAF applies the rule action to all requests that
     * satisfy the scope-down statement. </p> <p>With this option, you must configure
     * the <code>ScopeDownStatement</code> property. </p> </li> <li> <p>
     * <code>CUSTOM_KEYS</code> - Aggregate the request counts using one or more web
     * request components as the aggregate keys.</p> <p>With this option, you must
     * specify the aggregate keys in the <code>CustomKeys</code> property. </p> <p>To
     * aggregate on only the IP address or only the forwarded IP address, don't use
     * custom keys. Instead, set the aggregate key type to <code>IP</code> or
     * <code>FORWARDED_IP</code>.</p> </li> <li> <p> <code>FORWARDED_IP</code> -
     * Aggregate the request counts on the first IP address in an HTTP header. </p>
     * <p>With this option, you must specify the header to use in the
     * <code>ForwardedIPConfig</code> property. </p> <p>To aggregate on a combination
     * of the forwarded IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> <li> <p> <code>IP</code> - Aggregate the
     * request counts on the IP address from the web request origin.</p> <p>To
     * aggregate on a combination of the IP address with other aggregate keys, use
     * <code>CUSTOM_KEYS</code>. </p> </li> </ul>
     */
    inline RateBasedStatement& WithAggregateKeyType(RateBasedStatementAggregateKeyType&& value) { SetAggregateKeyType(std::move(value)); return *this;}


    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated and managed by the rate-based statement. When you use a scope-down
     * statement, the rate-based rule only tracks and rate limits requests that match
     * the scope-down statement. You can use any nestable <a>Statement</a> in the
     * scope-down statement, and you can nest statements at any level, the same as you
     * can for a rule statement. </p>
     */
    AWS_WAFV2_API const Statement& GetScopeDownStatement() const;

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated and managed by the rate-based statement. When you use a scope-down
     * statement, the rate-based rule only tracks and rate limits requests that match
     * the scope-down statement. You can use any nestable <a>Statement</a> in the
     * scope-down statement, and you can nest statements at any level, the same as you
     * can for a rule statement. </p>
     */
    AWS_WAFV2_API bool ScopeDownStatementHasBeenSet() const;

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated and managed by the rate-based statement. When you use a scope-down
     * statement, the rate-based rule only tracks and rate limits requests that match
     * the scope-down statement. You can use any nestable <a>Statement</a> in the
     * scope-down statement, and you can nest statements at any level, the same as you
     * can for a rule statement. </p>
     */
    AWS_WAFV2_API void SetScopeDownStatement(const Statement& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated and managed by the rate-based statement. When you use a scope-down
     * statement, the rate-based rule only tracks and rate limits requests that match
     * the scope-down statement. You can use any nestable <a>Statement</a> in the
     * scope-down statement, and you can nest statements at any level, the same as you
     * can for a rule statement. </p>
     */
    AWS_WAFV2_API void SetScopeDownStatement(Statement&& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated and managed by the rate-based statement. When you use a scope-down
     * statement, the rate-based rule only tracks and rate limits requests that match
     * the scope-down statement. You can use any nestable <a>Statement</a> in the
     * scope-down statement, and you can nest statements at any level, the same as you
     * can for a rule statement. </p>
     */
    AWS_WAFV2_API RateBasedStatement& WithScopeDownStatement(const Statement& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated and managed by the rate-based statement. When you use a scope-down
     * statement, the rate-based rule only tracks and rate limits requests that match
     * the scope-down statement. You can use any nestable <a>Statement</a> in the
     * scope-down statement, and you can nest statements at any level, the same as you
     * can for a rule statement. </p>
     */
    AWS_WAFV2_API RateBasedStatement& WithScopeDownStatement(Statement&& value);


    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if you specify a forwarded IP in the rule's aggregate key
     * settings. </p>
     */
    inline const ForwardedIPConfig& GetForwardedIPConfig() const{ return m_forwardedIPConfig; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if you specify a forwarded IP in the rule's aggregate key
     * settings. </p>
     */
    inline bool ForwardedIPConfigHasBeenSet() const { return m_forwardedIPConfigHasBeenSet; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if you specify a forwarded IP in the rule's aggregate key
     * settings. </p>
     */
    inline void SetForwardedIPConfig(const ForwardedIPConfig& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = value; }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if you specify a forwarded IP in the rule's aggregate key
     * settings. </p>
     */
    inline void SetForwardedIPConfig(ForwardedIPConfig&& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = std::move(value); }

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if you specify a forwarded IP in the rule's aggregate key
     * settings. </p>
     */
    inline RateBasedStatement& WithForwardedIPConfig(const ForwardedIPConfig& value) { SetForwardedIPConfig(value); return *this;}

    /**
     * <p>The configuration for inspecting IP addresses in an HTTP header that you
     * specify, instead of using the IP address that's reported by the web request
     * origin. Commonly, this is the X-Forwarded-For (XFF) header, but you can specify
     * any header name. </p>  <p>If the specified header isn't present in the
     * request, WAF doesn't apply the rule to the web request at all.</p> 
     * <p>This is required if you specify a forwarded IP in the rule's aggregate key
     * settings. </p>
     */
    inline RateBasedStatement& WithForwardedIPConfig(ForwardedIPConfig&& value) { SetForwardedIPConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the aggregate keys to use in a rate-base rule. </p>
     */
    inline const Aws::Vector<RateBasedStatementCustomKey>& GetCustomKeys() const{ return m_customKeys; }

    /**
     * <p>Specifies the aggregate keys to use in a rate-base rule. </p>
     */
    inline bool CustomKeysHasBeenSet() const { return m_customKeysHasBeenSet; }

    /**
     * <p>Specifies the aggregate keys to use in a rate-base rule. </p>
     */
    inline void SetCustomKeys(const Aws::Vector<RateBasedStatementCustomKey>& value) { m_customKeysHasBeenSet = true; m_customKeys = value; }

    /**
     * <p>Specifies the aggregate keys to use in a rate-base rule. </p>
     */
    inline void SetCustomKeys(Aws::Vector<RateBasedStatementCustomKey>&& value) { m_customKeysHasBeenSet = true; m_customKeys = std::move(value); }

    /**
     * <p>Specifies the aggregate keys to use in a rate-base rule. </p>
     */
    inline RateBasedStatement& WithCustomKeys(const Aws::Vector<RateBasedStatementCustomKey>& value) { SetCustomKeys(value); return *this;}

    /**
     * <p>Specifies the aggregate keys to use in a rate-base rule. </p>
     */
    inline RateBasedStatement& WithCustomKeys(Aws::Vector<RateBasedStatementCustomKey>&& value) { SetCustomKeys(std::move(value)); return *this;}

    /**
     * <p>Specifies the aggregate keys to use in a rate-base rule. </p>
     */
    inline RateBasedStatement& AddCustomKeys(const RateBasedStatementCustomKey& value) { m_customKeysHasBeenSet = true; m_customKeys.push_back(value); return *this; }

    /**
     * <p>Specifies the aggregate keys to use in a rate-base rule. </p>
     */
    inline RateBasedStatement& AddCustomKeys(RateBasedStatementCustomKey&& value) { m_customKeysHasBeenSet = true; m_customKeys.push_back(std::move(value)); return *this; }

  private:

    long long m_limit;
    bool m_limitHasBeenSet = false;

    long long m_evaluationWindowSec;
    bool m_evaluationWindowSecHasBeenSet = false;

    RateBasedStatementAggregateKeyType m_aggregateKeyType;
    bool m_aggregateKeyTypeHasBeenSet = false;

    std::shared_ptr<Statement> m_scopeDownStatement;
    bool m_scopeDownStatementHasBeenSet = false;

    ForwardedIPConfig m_forwardedIPConfig;
    bool m_forwardedIPConfigHasBeenSet = false;

    Aws::Vector<RateBasedStatementCustomKey> m_customKeys;
    bool m_customKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
