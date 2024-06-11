﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class GetCallAnalyticsCategoryRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetCallAnalyticsCategoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCallAnalyticsCategory"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Call Analytics category you want information about. Category
     * names are case sensitive.</p>
     */
    inline const Aws::String& GetCategoryName() const{ return m_categoryName; }
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }
    inline void SetCategoryName(const Aws::String& value) { m_categoryNameHasBeenSet = true; m_categoryName = value; }
    inline void SetCategoryName(Aws::String&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::move(value); }
    inline void SetCategoryName(const char* value) { m_categoryNameHasBeenSet = true; m_categoryName.assign(value); }
    inline GetCallAnalyticsCategoryRequest& WithCategoryName(const Aws::String& value) { SetCategoryName(value); return *this;}
    inline GetCallAnalyticsCategoryRequest& WithCategoryName(Aws::String&& value) { SetCategoryName(std::move(value)); return *this;}
    inline GetCallAnalyticsCategoryRequest& WithCategoryName(const char* value) { SetCategoryName(value); return *this;}
    ///@}
  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
