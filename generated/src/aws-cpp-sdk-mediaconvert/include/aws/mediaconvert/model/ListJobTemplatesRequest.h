/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/JobTemplateListBy.h>
#include <aws/mediaconvert/model/Order.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class ListJobTemplatesRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API ListJobTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobTemplates"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;

    AWS_MEDIACONVERT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * Optionally, specify a job template category to limit responses to only job
     * templates from that category.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline ListJobTemplatesRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline ListJobTemplatesRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline ListJobTemplatesRequest& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. When you request a list of job templates, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by name.
     */
    inline const JobTemplateListBy& GetListBy() const{ return m_listBy; }
    inline bool ListByHasBeenSet() const { return m_listByHasBeenSet; }
    inline void SetListBy(const JobTemplateListBy& value) { m_listByHasBeenSet = true; m_listBy = value; }
    inline void SetListBy(JobTemplateListBy&& value) { m_listByHasBeenSet = true; m_listBy = std::move(value); }
    inline ListJobTemplatesRequest& WithListBy(const JobTemplateListBy& value) { SetListBy(value); return *this;}
    inline ListJobTemplatesRequest& WithListBy(JobTemplateListBy&& value) { SetListBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Number of job templates, up to twenty, that will be returned at one
     * time.
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListJobTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of job templates.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListJobTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. When you request lists of resources, you can specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline const Order& GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }
    inline ListJobTemplatesRequest& WithOrder(const Order& value) { SetOrder(value); return *this;}
    inline ListJobTemplatesRequest& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    JobTemplateListBy m_listBy;
    bool m_listByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Order m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
