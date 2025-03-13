/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListProvisioningArtifactsResult
  {
  public:
    AWS_SERVICECATALOG_API ListProvisioningArtifactsResult() = default;
    AWS_SERVICECATALOG_API ListProvisioningArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListProvisioningArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the provisioning artifacts.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactDetail>& GetProvisioningArtifactDetails() const { return m_provisioningArtifactDetails; }
    template<typename ProvisioningArtifactDetailsT = Aws::Vector<ProvisioningArtifactDetail>>
    void SetProvisioningArtifactDetails(ProvisioningArtifactDetailsT&& value) { m_provisioningArtifactDetailsHasBeenSet = true; m_provisioningArtifactDetails = std::forward<ProvisioningArtifactDetailsT>(value); }
    template<typename ProvisioningArtifactDetailsT = Aws::Vector<ProvisioningArtifactDetail>>
    ListProvisioningArtifactsResult& WithProvisioningArtifactDetails(ProvisioningArtifactDetailsT&& value) { SetProvisioningArtifactDetails(std::forward<ProvisioningArtifactDetailsT>(value)); return *this;}
    template<typename ProvisioningArtifactDetailsT = ProvisioningArtifactDetail>
    ListProvisioningArtifactsResult& AddProvisioningArtifactDetails(ProvisioningArtifactDetailsT&& value) { m_provisioningArtifactDetailsHasBeenSet = true; m_provisioningArtifactDetails.emplace_back(std::forward<ProvisioningArtifactDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListProvisioningArtifactsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProvisioningArtifactsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisioningArtifactDetail> m_provisioningArtifactDetails;
    bool m_provisioningArtifactDetailsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
