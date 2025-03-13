/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ResourceDetail.h>
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
  class ListResourcesForTagOptionResult
  {
  public:
    AWS_SERVICECATALOG_API ListResourcesForTagOptionResult() = default;
    AWS_SERVICECATALOG_API ListResourcesForTagOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListResourcesForTagOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the resources.</p>
     */
    inline const Aws::Vector<ResourceDetail>& GetResourceDetails() const { return m_resourceDetails; }
    template<typename ResourceDetailsT = Aws::Vector<ResourceDetail>>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = Aws::Vector<ResourceDetail>>
    ListResourcesForTagOptionResult& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    template<typename ResourceDetailsT = ResourceDetail>
    ListResourcesForTagOptionResult& AddResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails.emplace_back(std::forward<ResourceDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    ListResourcesForTagOptionResult& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourcesForTagOptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceDetail> m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
