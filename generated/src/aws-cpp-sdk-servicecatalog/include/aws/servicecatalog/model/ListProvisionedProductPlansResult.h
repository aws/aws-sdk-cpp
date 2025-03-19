/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanSummary.h>
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
  class ListProvisionedProductPlansResult
  {
  public:
    AWS_SERVICECATALOG_API ListProvisionedProductPlansResult() = default;
    AWS_SERVICECATALOG_API ListProvisionedProductPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListProvisionedProductPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the plans.</p>
     */
    inline const Aws::Vector<ProvisionedProductPlanSummary>& GetProvisionedProductPlans() const { return m_provisionedProductPlans; }
    template<typename ProvisionedProductPlansT = Aws::Vector<ProvisionedProductPlanSummary>>
    void SetProvisionedProductPlans(ProvisionedProductPlansT&& value) { m_provisionedProductPlansHasBeenSet = true; m_provisionedProductPlans = std::forward<ProvisionedProductPlansT>(value); }
    template<typename ProvisionedProductPlansT = Aws::Vector<ProvisionedProductPlanSummary>>
    ListProvisionedProductPlansResult& WithProvisionedProductPlans(ProvisionedProductPlansT&& value) { SetProvisionedProductPlans(std::forward<ProvisionedProductPlansT>(value)); return *this;}
    template<typename ProvisionedProductPlansT = ProvisionedProductPlanSummary>
    ListProvisionedProductPlansResult& AddProvisionedProductPlans(ProvisionedProductPlansT&& value) { m_provisionedProductPlansHasBeenSet = true; m_provisionedProductPlans.emplace_back(std::forward<ProvisionedProductPlansT>(value)); return *this; }
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
    ListProvisionedProductPlansResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProvisionedProductPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisionedProductPlanSummary> m_provisionedProductPlans;
    bool m_provisionedProductPlansHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
