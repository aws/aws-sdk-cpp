/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/Filter.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class BatchGetSecretValueRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API BatchGetSecretValueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetSecretValue"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or names of the secrets to retrieve. You must include
     * <code>Filters</code> or <code>SecretIdList</code>, but not both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecretIdList() const { return m_secretIdList; }
    inline bool SecretIdListHasBeenSet() const { return m_secretIdListHasBeenSet; }
    template<typename SecretIdListT = Aws::Vector<Aws::String>>
    void SetSecretIdList(SecretIdListT&& value) { m_secretIdListHasBeenSet = true; m_secretIdList = std::forward<SecretIdListT>(value); }
    template<typename SecretIdListT = Aws::Vector<Aws::String>>
    BatchGetSecretValueRequest& WithSecretIdList(SecretIdListT&& value) { SetSecretIdList(std::forward<SecretIdListT>(value)); return *this;}
    template<typename SecretIdListT = Aws::String>
    BatchGetSecretValueRequest& AddSecretIdList(SecretIdListT&& value) { m_secretIdListHasBeenSet = true; m_secretIdList.emplace_back(std::forward<SecretIdListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters to choose which secrets to retrieve. You must include
     * <code>Filters</code> or <code>SecretIdList</code>, but not both.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    BatchGetSecretValueRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    BatchGetSecretValueRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of results to include in the response.</p> <p>If there are more
     * results available, in the response, Secrets Manager includes
     * <code>NextToken</code>. To get the next results, call
     * <code>BatchGetSecretValue</code> again with the value from
     * <code>NextToken</code>. To use this parameter, you must also use the
     * <code>Filters</code> parameter.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline BatchGetSecretValueRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>BatchGetSecretValue</code> again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    BatchGetSecretValueRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_secretIdList;
    bool m_secretIdListHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
