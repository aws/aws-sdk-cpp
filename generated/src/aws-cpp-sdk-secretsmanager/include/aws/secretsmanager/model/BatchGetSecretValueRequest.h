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
    AWS_SECRETSMANAGER_API BatchGetSecretValueRequest();

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
    inline const Aws::Vector<Aws::String>& GetSecretIdList() const{ return m_secretIdList; }
    inline bool SecretIdListHasBeenSet() const { return m_secretIdListHasBeenSet; }
    inline void SetSecretIdList(const Aws::Vector<Aws::String>& value) { m_secretIdListHasBeenSet = true; m_secretIdList = value; }
    inline void SetSecretIdList(Aws::Vector<Aws::String>&& value) { m_secretIdListHasBeenSet = true; m_secretIdList = std::move(value); }
    inline BatchGetSecretValueRequest& WithSecretIdList(const Aws::Vector<Aws::String>& value) { SetSecretIdList(value); return *this;}
    inline BatchGetSecretValueRequest& WithSecretIdList(Aws::Vector<Aws::String>&& value) { SetSecretIdList(std::move(value)); return *this;}
    inline BatchGetSecretValueRequest& AddSecretIdList(const Aws::String& value) { m_secretIdListHasBeenSet = true; m_secretIdList.push_back(value); return *this; }
    inline BatchGetSecretValueRequest& AddSecretIdList(Aws::String&& value) { m_secretIdListHasBeenSet = true; m_secretIdList.push_back(std::move(value)); return *this; }
    inline BatchGetSecretValueRequest& AddSecretIdList(const char* value) { m_secretIdListHasBeenSet = true; m_secretIdList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters to choose which secrets to retrieve. You must include
     * <code>Filters</code> or <code>SecretIdList</code>, but not both.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline BatchGetSecretValueRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline BatchGetSecretValueRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline BatchGetSecretValueRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline BatchGetSecretValueRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
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
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline BatchGetSecretValueRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline BatchGetSecretValueRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline BatchGetSecretValueRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_secretIdList;
    bool m_secretIdListHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
