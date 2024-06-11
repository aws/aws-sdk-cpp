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
    AWS_SERVICECATALOG_API ListResourcesForTagOptionRequest();

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
    inline const Aws::String& GetTagOptionId() const{ return m_tagOptionId; }
    inline bool TagOptionIdHasBeenSet() const { return m_tagOptionIdHasBeenSet; }
    inline void SetTagOptionId(const Aws::String& value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId = value; }
    inline void SetTagOptionId(Aws::String&& value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId = std::move(value); }
    inline void SetTagOptionId(const char* value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId.assign(value); }
    inline ListResourcesForTagOptionRequest& WithTagOptionId(const Aws::String& value) { SetTagOptionId(value); return *this;}
    inline ListResourcesForTagOptionRequest& WithTagOptionId(Aws::String&& value) { SetTagOptionId(std::move(value)); return *this;}
    inline ListResourcesForTagOptionRequest& WithTagOptionId(const char* value) { SetTagOptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p> <ul> <li> <p> <code>Portfolio</code> </p> </li> <li>
     * <p> <code>Product</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ListResourcesForTagOptionRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ListResourcesForTagOptionRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ListResourcesForTagOptionRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListResourcesForTagOptionRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }
    inline ListResourcesForTagOptionRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}
    inline ListResourcesForTagOptionRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}
    inline ListResourcesForTagOptionRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}
    ///@}
  private:

    Aws::String m_tagOptionId;
    bool m_tagOptionIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
