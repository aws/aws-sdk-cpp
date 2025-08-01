/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/SecurityConfigDetail.h>
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
  class CreateSecurityConfigResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateSecurityConfigResult() = default;
    AWS_OPENSEARCHSERVERLESS_API CreateSecurityConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateSecurityConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the created security configuration.</p>
     */
    inline const SecurityConfigDetail& GetSecurityConfigDetail() const { return m_securityConfigDetail; }
    template<typename SecurityConfigDetailT = SecurityConfigDetail>
    void SetSecurityConfigDetail(SecurityConfigDetailT&& value) { m_securityConfigDetailHasBeenSet = true; m_securityConfigDetail = std::forward<SecurityConfigDetailT>(value); }
    template<typename SecurityConfigDetailT = SecurityConfigDetail>
    CreateSecurityConfigResult& WithSecurityConfigDetail(SecurityConfigDetailT&& value) { SetSecurityConfigDetail(std::forward<SecurityConfigDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSecurityConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SecurityConfigDetail m_securityConfigDetail;
    bool m_securityConfigDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
