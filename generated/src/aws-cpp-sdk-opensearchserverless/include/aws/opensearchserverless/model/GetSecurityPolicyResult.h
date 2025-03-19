/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/SecurityPolicyDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class GetSecurityPolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API GetSecurityPolicyResult() = default;
    AWS_OPENSEARCHSERVERLESS_API GetSecurityPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API GetSecurityPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the requested security policy.</p>
     */
    inline const SecurityPolicyDetail& GetSecurityPolicyDetail() const { return m_securityPolicyDetail; }
    template<typename SecurityPolicyDetailT = SecurityPolicyDetail>
    void SetSecurityPolicyDetail(SecurityPolicyDetailT&& value) { m_securityPolicyDetailHasBeenSet = true; m_securityPolicyDetail = std::forward<SecurityPolicyDetailT>(value); }
    template<typename SecurityPolicyDetailT = SecurityPolicyDetail>
    GetSecurityPolicyResult& WithSecurityPolicyDetail(SecurityPolicyDetailT&& value) { SetSecurityPolicyDetail(std::forward<SecurityPolicyDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSecurityPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SecurityPolicyDetail m_securityPolicyDetail;
    bool m_securityPolicyDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
