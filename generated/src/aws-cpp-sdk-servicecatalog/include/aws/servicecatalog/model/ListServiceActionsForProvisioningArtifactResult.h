/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ServiceActionSummary.h>
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
  class ListServiceActionsForProvisioningArtifactResult
  {
  public:
    AWS_SERVICECATALOG_API ListServiceActionsForProvisioningArtifactResult() = default;
    AWS_SERVICECATALOG_API ListServiceActionsForProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListServiceActionsForProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object containing information about the self-service actions associated
     * with the provisioning artifact.</p>
     */
    inline const Aws::Vector<ServiceActionSummary>& GetServiceActionSummaries() const { return m_serviceActionSummaries; }
    template<typename ServiceActionSummariesT = Aws::Vector<ServiceActionSummary>>
    void SetServiceActionSummaries(ServiceActionSummariesT&& value) { m_serviceActionSummariesHasBeenSet = true; m_serviceActionSummaries = std::forward<ServiceActionSummariesT>(value); }
    template<typename ServiceActionSummariesT = Aws::Vector<ServiceActionSummary>>
    ListServiceActionsForProvisioningArtifactResult& WithServiceActionSummaries(ServiceActionSummariesT&& value) { SetServiceActionSummaries(std::forward<ServiceActionSummariesT>(value)); return *this;}
    template<typename ServiceActionSummariesT = ServiceActionSummary>
    ListServiceActionsForProvisioningArtifactResult& AddServiceActionSummaries(ServiceActionSummariesT&& value) { m_serviceActionSummariesHasBeenSet = true; m_serviceActionSummaries.emplace_back(std::forward<ServiceActionSummariesT>(value)); return *this; }
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
    ListServiceActionsForProvisioningArtifactResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceActionsForProvisioningArtifactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceActionSummary> m_serviceActionSummaries;
    bool m_serviceActionSummariesHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
