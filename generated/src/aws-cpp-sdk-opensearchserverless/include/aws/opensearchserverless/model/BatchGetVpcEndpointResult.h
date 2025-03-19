/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/VpcEndpointDetail.h>
#include <aws/opensearchserverless/model/VpcEndpointErrorDetail.h>
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
  class BatchGetVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API BatchGetVpcEndpointResult() = default;
    AWS_OPENSEARCHSERVERLESS_API BatchGetVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API BatchGetVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the specified VPC endpoint.</p>
     */
    inline const Aws::Vector<VpcEndpointDetail>& GetVpcEndpointDetails() const { return m_vpcEndpointDetails; }
    template<typename VpcEndpointDetailsT = Aws::Vector<VpcEndpointDetail>>
    void SetVpcEndpointDetails(VpcEndpointDetailsT&& value) { m_vpcEndpointDetailsHasBeenSet = true; m_vpcEndpointDetails = std::forward<VpcEndpointDetailsT>(value); }
    template<typename VpcEndpointDetailsT = Aws::Vector<VpcEndpointDetail>>
    BatchGetVpcEndpointResult& WithVpcEndpointDetails(VpcEndpointDetailsT&& value) { SetVpcEndpointDetails(std::forward<VpcEndpointDetailsT>(value)); return *this;}
    template<typename VpcEndpointDetailsT = VpcEndpointDetail>
    BatchGetVpcEndpointResult& AddVpcEndpointDetails(VpcEndpointDetailsT&& value) { m_vpcEndpointDetailsHasBeenSet = true; m_vpcEndpointDetails.emplace_back(std::forward<VpcEndpointDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error information for a failed request.</p>
     */
    inline const Aws::Vector<VpcEndpointErrorDetail>& GetVpcEndpointErrorDetails() const { return m_vpcEndpointErrorDetails; }
    template<typename VpcEndpointErrorDetailsT = Aws::Vector<VpcEndpointErrorDetail>>
    void SetVpcEndpointErrorDetails(VpcEndpointErrorDetailsT&& value) { m_vpcEndpointErrorDetailsHasBeenSet = true; m_vpcEndpointErrorDetails = std::forward<VpcEndpointErrorDetailsT>(value); }
    template<typename VpcEndpointErrorDetailsT = Aws::Vector<VpcEndpointErrorDetail>>
    BatchGetVpcEndpointResult& WithVpcEndpointErrorDetails(VpcEndpointErrorDetailsT&& value) { SetVpcEndpointErrorDetails(std::forward<VpcEndpointErrorDetailsT>(value)); return *this;}
    template<typename VpcEndpointErrorDetailsT = VpcEndpointErrorDetail>
    BatchGetVpcEndpointResult& AddVpcEndpointErrorDetails(VpcEndpointErrorDetailsT&& value) { m_vpcEndpointErrorDetailsHasBeenSet = true; m_vpcEndpointErrorDetails.emplace_back(std::forward<VpcEndpointErrorDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetVpcEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpointDetail> m_vpcEndpointDetails;
    bool m_vpcEndpointDetailsHasBeenSet = false;

    Aws::Vector<VpcEndpointErrorDetail> m_vpcEndpointErrorDetails;
    bool m_vpcEndpointErrorDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
