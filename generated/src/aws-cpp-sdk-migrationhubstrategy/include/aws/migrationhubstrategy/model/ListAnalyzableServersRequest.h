/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Represents input for ListAnalyzableServers operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListAnalyzableServersRequest">AWS
   * API Reference</a></p>
   */
  class ListAnalyzableServersRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListAnalyzableServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAnalyzableServers"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>The maximum number of items to include in the response. The maximum value is
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to include in the response. The maximum value is
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to include in the response. The maximum value is
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to include in the response. The maximum value is
     * 100.</p>
     */
    inline ListAnalyzableServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set maxResults to 10. You'll receive a set of 10 results along with a token.
     * You then use the returned token to retrieve the next set of 10.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set maxResults to 10. You'll receive a set of 10 results along with a token.
     * You then use the returned token to retrieve the next set of 10.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set maxResults to 10. You'll receive a set of 10 results along with a token.
     * You then use the returned token to retrieve the next set of 10.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set maxResults to 10. You'll receive a set of 10 results along with a token.
     * You then use the returned token to retrieve the next set of 10.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set maxResults to 10. You'll receive a set of 10 results along with a token.
     * You then use the returned token to retrieve the next set of 10.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set maxResults to 10. You'll receive a set of 10 results along with a token.
     * You then use the returned token to retrieve the next set of 10.</p>
     */
    inline ListAnalyzableServersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set maxResults to 10. You'll receive a set of 10 results along with a token.
     * You then use the returned token to retrieve the next set of 10.</p>
     */
    inline ListAnalyzableServersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token from a previous call that you use to retrieve the next set of
     * results. For example, if a previous call to this action returned 100 items, but
     * you set maxResults to 10. You'll receive a set of 10 results along with a token.
     * You then use the returned token to retrieve the next set of 10.</p>
     */
    inline ListAnalyzableServersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies whether to sort by ascending (ASC) or descending (DESC) order.</p>
     */
    inline const SortOrder& GetSort() const{ return m_sort; }

    /**
     * <p>Specifies whether to sort by ascending (ASC) or descending (DESC) order.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>Specifies whether to sort by ascending (ASC) or descending (DESC) order.</p>
     */
    inline void SetSort(const SortOrder& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>Specifies whether to sort by ascending (ASC) or descending (DESC) order.</p>
     */
    inline void SetSort(SortOrder&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>Specifies whether to sort by ascending (ASC) or descending (DESC) order.</p>
     */
    inline ListAnalyzableServersRequest& WithSort(const SortOrder& value) { SetSort(value); return *this;}

    /**
     * <p>Specifies whether to sort by ascending (ASC) or descending (DESC) order.</p>
     */
    inline ListAnalyzableServersRequest& WithSort(SortOrder&& value) { SetSort(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortOrder m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
