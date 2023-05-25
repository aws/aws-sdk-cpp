/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class PutFirewallRuleGroupPolicyResult
  {
  public:
    AWS_ROUTE53RESOLVER_API PutFirewallRuleGroupPolicyResult();
    AWS_ROUTE53RESOLVER_API PutFirewallRuleGroupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API PutFirewallRuleGroupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }

    /**
     * <p/>
     */
    inline void SetReturnValue(bool value) { m_returnValue = value; }

    /**
     * <p/>
     */
    inline PutFirewallRuleGroupPolicyResult& WithReturnValue(bool value) { SetReturnValue(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutFirewallRuleGroupPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutFirewallRuleGroupPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutFirewallRuleGroupPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_returnValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
