/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/translate/model/TextTranslationJobFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class ListTextTranslationJobsRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API ListTextTranslationJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTextTranslationJobs"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The parameters that specify which batch translation jobs to retrieve. Filters
     * include job name, job status, and submission time. You can only set one filter
     * at a time.</p>
     */
    inline const TextTranslationJobFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>The parameters that specify which batch translation jobs to retrieve. Filters
     * include job name, job status, and submission time. You can only set one filter
     * at a time.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The parameters that specify which batch translation jobs to retrieve. Filters
     * include job name, job status, and submission time. You can only set one filter
     * at a time.</p>
     */
    inline void SetFilter(const TextTranslationJobFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The parameters that specify which batch translation jobs to retrieve. Filters
     * include job name, job status, and submission time. You can only set one filter
     * at a time.</p>
     */
    inline void SetFilter(TextTranslationJobFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The parameters that specify which batch translation jobs to retrieve. Filters
     * include job name, job status, and submission time. You can only set one filter
     * at a time.</p>
     */
    inline ListTextTranslationJobsRequest& WithFilter(const TextTranslationJobFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>The parameters that specify which batch translation jobs to retrieve. Filters
     * include job name, job status, and submission time. You can only set one filter
     * at a time.</p>
     */
    inline ListTextTranslationJobsRequest& WithFilter(TextTranslationJobFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListTextTranslationJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListTextTranslationJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListTextTranslationJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in each page. The default value is
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in each page. The default value is
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in each page. The default value is
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in each page. The default value is
     * 100.</p>
     */
    inline ListTextTranslationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    TextTranslationJobFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
