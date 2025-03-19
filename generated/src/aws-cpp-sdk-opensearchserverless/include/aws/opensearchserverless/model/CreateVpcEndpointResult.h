/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CreateVpcEndpointDetail.h>
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
  class CreateVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointResult() = default;
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the created interface VPC endpoint.</p>
     */
    inline const CreateVpcEndpointDetail& GetCreateVpcEndpointDetail() const { return m_createVpcEndpointDetail; }
    template<typename CreateVpcEndpointDetailT = CreateVpcEndpointDetail>
    void SetCreateVpcEndpointDetail(CreateVpcEndpointDetailT&& value) { m_createVpcEndpointDetailHasBeenSet = true; m_createVpcEndpointDetail = std::forward<CreateVpcEndpointDetailT>(value); }
    template<typename CreateVpcEndpointDetailT = CreateVpcEndpointDetail>
    CreateVpcEndpointResult& WithCreateVpcEndpointDetail(CreateVpcEndpointDetailT&& value) { SetCreateVpcEndpointDetail(std::forward<CreateVpcEndpointDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateVpcEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CreateVpcEndpointDetail m_createVpcEndpointDetail;
    bool m_createVpcEndpointDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
