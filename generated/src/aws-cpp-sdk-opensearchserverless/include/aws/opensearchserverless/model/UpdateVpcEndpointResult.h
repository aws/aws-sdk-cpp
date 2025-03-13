/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/UpdateVpcEndpointDetail.h>
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
  class UpdateVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateVpcEndpointResult() = default;
    AWS_OPENSEARCHSERVERLESS_API UpdateVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the updated VPC endpoint.</p>
     */
    inline const UpdateVpcEndpointDetail& GetUpdateVpcEndpointDetail() const { return m_updateVpcEndpointDetail; }
    template<typename UpdateVpcEndpointDetailT = UpdateVpcEndpointDetail>
    void SetUpdateVpcEndpointDetail(UpdateVpcEndpointDetailT&& value) { m_updateVpcEndpointDetailHasBeenSet = true; m_updateVpcEndpointDetail = std::forward<UpdateVpcEndpointDetailT>(value); }
    template<typename UpdateVpcEndpointDetailT = UpdateVpcEndpointDetail>
    UpdateVpcEndpointResult& WithUpdateVpcEndpointDetail(UpdateVpcEndpointDetailT&& value) { SetUpdateVpcEndpointDetail(std::forward<UpdateVpcEndpointDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateVpcEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UpdateVpcEndpointDetail m_updateVpcEndpointDetail;
    bool m_updateVpcEndpointDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
