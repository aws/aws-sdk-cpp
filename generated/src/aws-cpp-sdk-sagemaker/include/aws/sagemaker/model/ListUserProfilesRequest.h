/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/sagemaker/model/UserProfileSortKey.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListUserProfilesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListUserProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUserProfiles"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListUserProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUserProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUserProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter defines the maximum number of results that can be return in a
     * single response. The <code>MaxResults</code> parameter is an upper bound, not a
     * target. If there are more results available than the value specified, a
     * <code>NextToken</code> is provided in the response. The <code>NextToken</code>
     * indicates that the user should get the next set of results by providing this
     * token as a part of a subsequent call. The default value for
     * <code>MaxResults</code> is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListUserProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the results. The default is Ascending.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListUserProfilesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListUserProfilesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter by which to sort the results. The default is CreationTime.</p>
     */
    inline const UserProfileSortKey& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const UserProfileSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(UserProfileSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListUserProfilesRequest& WithSortBy(const UserProfileSortKey& value) { SetSortBy(value); return *this;}
    inline ListUserProfilesRequest& WithSortBy(UserProfileSortKey&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline const Aws::String& GetDomainIdEquals() const{ return m_domainIdEquals; }
    inline bool DomainIdEqualsHasBeenSet() const { return m_domainIdEqualsHasBeenSet; }
    inline void SetDomainIdEquals(const Aws::String& value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals = value; }
    inline void SetDomainIdEquals(Aws::String&& value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals = std::move(value); }
    inline void SetDomainIdEquals(const char* value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals.assign(value); }
    inline ListUserProfilesRequest& WithDomainIdEquals(const Aws::String& value) { SetDomainIdEquals(value); return *this;}
    inline ListUserProfilesRequest& WithDomainIdEquals(Aws::String&& value) { SetDomainIdEquals(std::move(value)); return *this;}
    inline ListUserProfilesRequest& WithDomainIdEquals(const char* value) { SetDomainIdEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter by which to filter the results.</p>
     */
    inline const Aws::String& GetUserProfileNameContains() const{ return m_userProfileNameContains; }
    inline bool UserProfileNameContainsHasBeenSet() const { return m_userProfileNameContainsHasBeenSet; }
    inline void SetUserProfileNameContains(const Aws::String& value) { m_userProfileNameContainsHasBeenSet = true; m_userProfileNameContains = value; }
    inline void SetUserProfileNameContains(Aws::String&& value) { m_userProfileNameContainsHasBeenSet = true; m_userProfileNameContains = std::move(value); }
    inline void SetUserProfileNameContains(const char* value) { m_userProfileNameContainsHasBeenSet = true; m_userProfileNameContains.assign(value); }
    inline ListUserProfilesRequest& WithUserProfileNameContains(const Aws::String& value) { SetUserProfileNameContains(value); return *this;}
    inline ListUserProfilesRequest& WithUserProfileNameContains(Aws::String&& value) { SetUserProfileNameContains(std::move(value)); return *this;}
    inline ListUserProfilesRequest& WithUserProfileNameContains(const char* value) { SetUserProfileNameContains(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    UserProfileSortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    Aws::String m_domainIdEquals;
    bool m_domainIdEqualsHasBeenSet = false;

    Aws::String m_userProfileNameContains;
    bool m_userProfileNameContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
