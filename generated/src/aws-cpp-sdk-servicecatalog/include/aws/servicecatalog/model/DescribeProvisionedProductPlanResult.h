/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ResourceChange.h>
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
  class DescribeProvisionedProductPlanResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProvisionedProductPlanResult() = default;
    AWS_SERVICECATALOG_API DescribeProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProvisionedProductPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the plan.</p>
     */
    inline const ProvisionedProductPlanDetails& GetProvisionedProductPlanDetails() const { return m_provisionedProductPlanDetails; }
    template<typename ProvisionedProductPlanDetailsT = ProvisionedProductPlanDetails>
    void SetProvisionedProductPlanDetails(ProvisionedProductPlanDetailsT&& value) { m_provisionedProductPlanDetailsHasBeenSet = true; m_provisionedProductPlanDetails = std::forward<ProvisionedProductPlanDetailsT>(value); }
    template<typename ProvisionedProductPlanDetailsT = ProvisionedProductPlanDetails>
    DescribeProvisionedProductPlanResult& WithProvisionedProductPlanDetails(ProvisionedProductPlanDetailsT&& value) { SetProvisionedProductPlanDetails(std::forward<ProvisionedProductPlanDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource changes that will occur when the plan is
     * executed.</p>
     */
    inline const Aws::Vector<ResourceChange>& GetResourceChanges() const { return m_resourceChanges; }
    template<typename ResourceChangesT = Aws::Vector<ResourceChange>>
    void SetResourceChanges(ResourceChangesT&& value) { m_resourceChangesHasBeenSet = true; m_resourceChanges = std::forward<ResourceChangesT>(value); }
    template<typename ResourceChangesT = Aws::Vector<ResourceChange>>
    DescribeProvisionedProductPlanResult& WithResourceChanges(ResourceChangesT&& value) { SetResourceChanges(std::forward<ResourceChangesT>(value)); return *this;}
    template<typename ResourceChangesT = ResourceChange>
    DescribeProvisionedProductPlanResult& AddResourceChanges(ResourceChangesT&& value) { m_resourceChangesHasBeenSet = true; m_resourceChanges.emplace_back(std::forward<ResourceChangesT>(value)); return *this; }
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
    DescribeProvisionedProductPlanResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProvisionedProductPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProvisionedProductPlanDetails m_provisionedProductPlanDetails;
    bool m_provisionedProductPlanDetailsHasBeenSet = false;

    Aws::Vector<ResourceChange> m_resourceChanges;
    bool m_resourceChangesHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
