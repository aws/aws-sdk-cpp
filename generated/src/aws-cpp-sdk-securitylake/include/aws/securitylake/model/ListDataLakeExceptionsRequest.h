/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class ListDataLakeExceptionsRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API ListDataLakeExceptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataLakeExceptions"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>List the maximum number of failures in Security Lake.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>List the maximum number of failures in Security Lake.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>List the maximum number of failures in Security Lake.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>List the maximum number of failures in Security Lake.</p>
     */
    inline ListDataLakeExceptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline ListDataLakeExceptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline ListDataLakeExceptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline ListDataLakeExceptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline ListDataLakeExceptionsRequest& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline ListDataLakeExceptionsRequest& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline ListDataLakeExceptionsRequest& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline ListDataLakeExceptionsRequest& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Web Services Regions from which exceptions are retrieved.</p>
     */
    inline ListDataLakeExceptionsRequest& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
