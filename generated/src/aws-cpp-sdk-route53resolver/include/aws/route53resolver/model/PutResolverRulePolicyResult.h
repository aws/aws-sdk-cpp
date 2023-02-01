/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{
  /**
   * <p>The response to a <code>PutResolverRulePolicy</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicyResponse">AWS
   * API Reference</a></p>
   */
  class PutResolverRulePolicyResult
  {
  public:
    AWS_ROUTE53RESOLVER_API PutResolverRulePolicyResult();
    AWS_ROUTE53RESOLVER_API PutResolverRulePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API PutResolverRulePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether the <code>PutResolverRulePolicy</code> request was successful.</p>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }

    /**
     * <p>Whether the <code>PutResolverRulePolicy</code> request was successful.</p>
     */
    inline void SetReturnValue(bool value) { m_returnValue = value; }

    /**
     * <p>Whether the <code>PutResolverRulePolicy</code> request was successful.</p>
     */
    inline PutResolverRulePolicyResult& WithReturnValue(bool value) { SetReturnValue(value); return *this;}

  private:

    bool m_returnValue;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
