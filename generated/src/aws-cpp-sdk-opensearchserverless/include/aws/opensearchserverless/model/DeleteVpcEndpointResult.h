/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/DeleteVpcEndpointDetail.h>
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
  class DeleteVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API DeleteVpcEndpointResult() = default;
    AWS_OPENSEARCHSERVERLESS_API DeleteVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API DeleteVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the deleted endpoint.</p>
     */
    inline const DeleteVpcEndpointDetail& GetDeleteVpcEndpointDetail() const { return m_deleteVpcEndpointDetail; }
    template<typename DeleteVpcEndpointDetailT = DeleteVpcEndpointDetail>
    void SetDeleteVpcEndpointDetail(DeleteVpcEndpointDetailT&& value) { m_deleteVpcEndpointDetailHasBeenSet = true; m_deleteVpcEndpointDetail = std::forward<DeleteVpcEndpointDetailT>(value); }
    template<typename DeleteVpcEndpointDetailT = DeleteVpcEndpointDetail>
    DeleteVpcEndpointResult& WithDeleteVpcEndpointDetail(DeleteVpcEndpointDetailT&& value) { SetDeleteVpcEndpointDetail(std::forward<DeleteVpcEndpointDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVpcEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeleteVpcEndpointDetail m_deleteVpcEndpointDetail;
    bool m_deleteVpcEndpointDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
