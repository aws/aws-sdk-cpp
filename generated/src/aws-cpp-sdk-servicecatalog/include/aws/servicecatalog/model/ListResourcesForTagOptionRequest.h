/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class ListResourcesForTagOptionRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ListResourcesForTagOptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourcesForTagOption"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The TagOption identifier.</p>
     */
    inline const Aws::String& GetTagOptionId() const { return m_tagOptionId; }
    inline bool TagOptionIdHasBeenSet() const { return m_tagOptionIdHasBeenSet; }
    template<typename TagOptionIdT = Aws::String>
    void SetTagOptionId(TagOptionIdT&& value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId = std::forward<TagOptionIdT>(value); }
    template<typename TagOptionIdT = Aws::String>
    ListResourcesForTagOptionRequest& WithTagOptionId(TagOptionIdT&& value) { SetTagOptionId(std::forward<TagOptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p> <ul> <li> <p> <code>Portfolio</code> </p> </li> <li>
     * <p> <code>Product</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ListResourcesForTagOptionRequest& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListResourcesForTagOptionRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    ListResourcesForTagOptionRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tagOptionId;
    bool m_tagOptionIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
