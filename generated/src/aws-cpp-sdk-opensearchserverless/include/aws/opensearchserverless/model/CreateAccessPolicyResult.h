/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AccessPolicyDetail.h>
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
  class CreateAccessPolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateAccessPolicyResult() = default;
    AWS_OPENSEARCHSERVERLESS_API CreateAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the created access policy.</p>
     */
    inline const AccessPolicyDetail& GetAccessPolicyDetail() const { return m_accessPolicyDetail; }
    template<typename AccessPolicyDetailT = AccessPolicyDetail>
    void SetAccessPolicyDetail(AccessPolicyDetailT&& value) { m_accessPolicyDetailHasBeenSet = true; m_accessPolicyDetail = std::forward<AccessPolicyDetailT>(value); }
    template<typename AccessPolicyDetailT = AccessPolicyDetail>
    CreateAccessPolicyResult& WithAccessPolicyDetail(AccessPolicyDetailT&& value) { SetAccessPolicyDetail(std::forward<AccessPolicyDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAccessPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccessPolicyDetail m_accessPolicyDetail;
    bool m_accessPolicyDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
