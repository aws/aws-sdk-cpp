/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class GetRecommenderConfigurationsRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API GetRecommenderConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommenderConfigurations"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;

    AWS_PINPOINT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline GetRecommenderConfigurationsRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline GetRecommenderConfigurationsRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline GetRecommenderConfigurationsRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}


    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetRecommenderConfigurationsRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetRecommenderConfigurationsRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline GetRecommenderConfigurationsRequest& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
