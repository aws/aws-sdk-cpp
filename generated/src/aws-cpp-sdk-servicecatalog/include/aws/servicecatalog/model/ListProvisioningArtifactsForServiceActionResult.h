/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactView.h>
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
  class ListProvisioningArtifactsForServiceActionResult
  {
  public:
    AWS_SERVICECATALOG_API ListProvisioningArtifactsForServiceActionResult() = default;
    AWS_SERVICECATALOG_API ListProvisioningArtifactsForServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListProvisioningArtifactsForServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects with information about product views and provisioning
     * artifacts.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactView>& GetProvisioningArtifactViews() const { return m_provisioningArtifactViews; }
    template<typename ProvisioningArtifactViewsT = Aws::Vector<ProvisioningArtifactView>>
    void SetProvisioningArtifactViews(ProvisioningArtifactViewsT&& value) { m_provisioningArtifactViewsHasBeenSet = true; m_provisioningArtifactViews = std::forward<ProvisioningArtifactViewsT>(value); }
    template<typename ProvisioningArtifactViewsT = Aws::Vector<ProvisioningArtifactView>>
    ListProvisioningArtifactsForServiceActionResult& WithProvisioningArtifactViews(ProvisioningArtifactViewsT&& value) { SetProvisioningArtifactViews(std::forward<ProvisioningArtifactViewsT>(value)); return *this;}
    template<typename ProvisioningArtifactViewsT = ProvisioningArtifactView>
    ListProvisioningArtifactsForServiceActionResult& AddProvisioningArtifactViews(ProvisioningArtifactViewsT&& value) { m_provisioningArtifactViewsHasBeenSet = true; m_provisioningArtifactViews.emplace_back(std::forward<ProvisioningArtifactViewsT>(value)); return *this; }
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
    ListProvisioningArtifactsForServiceActionResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProvisioningArtifactsForServiceActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisioningArtifactView> m_provisioningArtifactViews;
    bool m_provisioningArtifactViewsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
