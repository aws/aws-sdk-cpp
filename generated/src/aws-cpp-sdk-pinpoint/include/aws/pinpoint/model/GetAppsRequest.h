﻿/**
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
  class GetAppsRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API GetAppsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApps"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;

    AWS_PINPOINT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }
    inline GetAppsRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}
    inline GetAppsRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}
    inline GetAppsRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }
    inline GetAppsRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline GetAppsRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline GetAppsRequest& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}
  private:

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
