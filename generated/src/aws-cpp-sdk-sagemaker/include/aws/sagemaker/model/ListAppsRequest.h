/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/sagemaker/model/AppSortKey.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListAppsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListAppsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApps"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAppsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the results. The default is Ascending.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListAppsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter by which to sort the results. The default is CreationTime.</p>
     */
    inline AppSortKey GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(AppSortKey value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListAppsRequest& WithSortBy(AppSortKey value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter to search for the domain ID.</p>
     */
    inline const Aws::String& GetDomainIdEquals() const { return m_domainIdEquals; }
    inline bool DomainIdEqualsHasBeenSet() const { return m_domainIdEqualsHasBeenSet; }
    template<typename DomainIdEqualsT = Aws::String>
    void SetDomainIdEquals(DomainIdEqualsT&& value) { m_domainIdEqualsHasBeenSet = true; m_domainIdEquals = std::forward<DomainIdEqualsT>(value); }
    template<typename DomainIdEqualsT = Aws::String>
    ListAppsRequest& WithDomainIdEquals(DomainIdEqualsT&& value) { SetDomainIdEquals(std::forward<DomainIdEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter to search by user profile name. If <code>SpaceNameEquals</code>
     * is set, then this value cannot be set.</p>
     */
    inline const Aws::String& GetUserProfileNameEquals() const { return m_userProfileNameEquals; }
    inline bool UserProfileNameEqualsHasBeenSet() const { return m_userProfileNameEqualsHasBeenSet; }
    template<typename UserProfileNameEqualsT = Aws::String>
    void SetUserProfileNameEquals(UserProfileNameEqualsT&& value) { m_userProfileNameEqualsHasBeenSet = true; m_userProfileNameEquals = std::forward<UserProfileNameEqualsT>(value); }
    template<typename UserProfileNameEqualsT = Aws::String>
    ListAppsRequest& WithUserProfileNameEquals(UserProfileNameEqualsT&& value) { SetUserProfileNameEquals(std::forward<UserProfileNameEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter to search by space name. If <code>UserProfileNameEquals</code> is
     * set, then this value cannot be set.</p>
     */
    inline const Aws::String& GetSpaceNameEquals() const { return m_spaceNameEquals; }
    inline bool SpaceNameEqualsHasBeenSet() const { return m_spaceNameEqualsHasBeenSet; }
    template<typename SpaceNameEqualsT = Aws::String>
    void SetSpaceNameEquals(SpaceNameEqualsT&& value) { m_spaceNameEqualsHasBeenSet = true; m_spaceNameEquals = std::forward<SpaceNameEqualsT>(value); }
    template<typename SpaceNameEqualsT = Aws::String>
    ListAppsRequest& WithSpaceNameEquals(SpaceNameEqualsT&& value) { SetSpaceNameEquals(std::forward<SpaceNameEqualsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    AppSortKey m_sortBy{AppSortKey::NOT_SET};
    bool m_sortByHasBeenSet = false;

    Aws::String m_domainIdEquals;
    bool m_domainIdEqualsHasBeenSet = false;

    Aws::String m_userProfileNameEquals;
    bool m_userProfileNameEqualsHasBeenSet = false;

    Aws::String m_spaceNameEquals;
    bool m_spaceNameEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
