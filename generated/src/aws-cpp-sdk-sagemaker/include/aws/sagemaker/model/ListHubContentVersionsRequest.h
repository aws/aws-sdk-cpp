/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/HubContentSortBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListHubContentVersionsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListHubContentVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHubContentVersions"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the hub to list the content versions of.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    ListHubContentVersionsRequest& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content to list versions of.</p>
     */
    inline HubContentType GetHubContentType() const { return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(HubContentType value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline ListHubContentVersionsRequest& WithHubContentType(HubContentType value) { SetHubContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    template<typename HubContentNameT = Aws::String>
    void SetHubContentName(HubContentNameT&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::forward<HubContentNameT>(value); }
    template<typename HubContentNameT = Aws::String>
    ListHubContentVersionsRequest& WithHubContentName(HubContentNameT&& value) { SetHubContentName(std::forward<HubContentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower bound of the hub content versions to list.</p>
     */
    inline const Aws::String& GetMinVersion() const { return m_minVersion; }
    inline bool MinVersionHasBeenSet() const { return m_minVersionHasBeenSet; }
    template<typename MinVersionT = Aws::String>
    void SetMinVersion(MinVersionT&& value) { m_minVersionHasBeenSet = true; m_minVersion = std::forward<MinVersionT>(value); }
    template<typename MinVersionT = Aws::String>
    ListHubContentVersionsRequest& WithMinVersion(MinVersionT&& value) { SetMinVersion(std::forward<MinVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper bound of the hub content schema version.</p>
     */
    inline const Aws::String& GetMaxSchemaVersion() const { return m_maxSchemaVersion; }
    inline bool MaxSchemaVersionHasBeenSet() const { return m_maxSchemaVersionHasBeenSet; }
    template<typename MaxSchemaVersionT = Aws::String>
    void SetMaxSchemaVersion(MaxSchemaVersionT&& value) { m_maxSchemaVersionHasBeenSet = true; m_maxSchemaVersion = std::forward<MaxSchemaVersionT>(value); }
    template<typename MaxSchemaVersionT = Aws::String>
    ListHubContentVersionsRequest& WithMaxSchemaVersion(MaxSchemaVersionT&& value) { SetMaxSchemaVersion(std::forward<MaxSchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list hub content versions that were created before the time
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListHubContentVersionsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list hub content versions that were created after the time
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListHubContentVersionsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort hub content versions by either name or creation time.</p>
     */
    inline HubContentSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(HubContentSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListHubContentVersionsRequest& WithSortBy(HubContentSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort hub content versions by ascending or descending order.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListHubContentVersionsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of hub content versions to list.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListHubContentVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response to a previous <code>ListHubContentVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content versions, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHubContentVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    HubContentType m_hubContentType{HubContentType::NOT_SET};
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_minVersion;
    bool m_minVersionHasBeenSet = false;

    Aws::String m_maxSchemaVersion;
    bool m_maxSchemaVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    HubContentSortBy m_sortBy{HubContentSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
