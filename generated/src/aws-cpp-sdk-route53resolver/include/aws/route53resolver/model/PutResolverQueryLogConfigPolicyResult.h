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
  /**
   * <p>The response to a <code>PutResolverQueryLogConfigPolicy</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverQueryLogConfigPolicyResponse">AWS
   * API Reference</a></p>
   */
  class PutResolverQueryLogConfigPolicyResult
  {
  public:
    AWS_ROUTE53RESOLVER_API PutResolverQueryLogConfigPolicyResult() = default;
    AWS_ROUTE53RESOLVER_API PutResolverQueryLogConfigPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API PutResolverQueryLogConfigPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether the <code>PutResolverQueryLogConfigPolicy</code> request was
     * successful.</p>
     */
    inline bool GetReturnValue() const { return m_returnValue; }
    inline void SetReturnValue(bool value) { m_returnValueHasBeenSet = true; m_returnValue = value; }
    inline PutResolverQueryLogConfigPolicyResult& WithReturnValue(bool value) { SetReturnValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutResolverQueryLogConfigPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_returnValue{false};
    bool m_returnValueHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
