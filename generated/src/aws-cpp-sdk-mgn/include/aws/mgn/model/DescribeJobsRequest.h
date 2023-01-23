/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/DescribeJobsRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DescribeJobsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DescribeJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobs"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Request to describe Job log filters.</p>
     */
    inline const DescribeJobsRequestFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Request to describe Job log filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Request to describe Job log filters.</p>
     */
    inline void SetFilters(const DescribeJobsRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Request to describe Job log filters.</p>
     */
    inline void SetFilters(DescribeJobsRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Request to describe Job log filters.</p>
     */
    inline DescribeJobsRequest& WithFilters(const DescribeJobsRequestFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Request to describe Job log filters.</p>
     */
    inline DescribeJobsRequest& WithFilters(DescribeJobsRequestFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Request to describe job log items by max results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Request to describe job log items by max results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Request to describe job log items by max results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Request to describe job log items by max results.</p>
     */
    inline DescribeJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Request to describe job log items by next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Request to describe job log items by next token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Request to describe job log items by next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Request to describe job log items by next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Request to describe job log items by next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Request to describe job log items by next token.</p>
     */
    inline DescribeJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Request to describe job log items by next token.</p>
     */
    inline DescribeJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Request to describe job log items by next token.</p>
     */
    inline DescribeJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    DescribeJobsRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
