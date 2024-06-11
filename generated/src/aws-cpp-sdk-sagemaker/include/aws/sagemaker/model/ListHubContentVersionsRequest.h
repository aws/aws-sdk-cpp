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
    AWS_SAGEMAKER_API ListHubContentVersionsRequest();

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
    inline const Aws::String& GetHubName() const{ return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }
    inline ListHubContentVersionsRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline ListHubContentVersionsRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline ListHubContentVersionsRequest& WithHubName(const char* value) { SetHubName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content to list versions of.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }
    inline ListHubContentVersionsRequest& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}
    inline ListHubContentVersionsRequest& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    inline void SetHubContentName(const Aws::String& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = value; }
    inline void SetHubContentName(Aws::String&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::move(value); }
    inline void SetHubContentName(const char* value) { m_hubContentNameHasBeenSet = true; m_hubContentName.assign(value); }
    inline ListHubContentVersionsRequest& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}
    inline ListHubContentVersionsRequest& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}
    inline ListHubContentVersionsRequest& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower bound of the hub content versions to list.</p>
     */
    inline const Aws::String& GetMinVersion() const{ return m_minVersion; }
    inline bool MinVersionHasBeenSet() const { return m_minVersionHasBeenSet; }
    inline void SetMinVersion(const Aws::String& value) { m_minVersionHasBeenSet = true; m_minVersion = value; }
    inline void SetMinVersion(Aws::String&& value) { m_minVersionHasBeenSet = true; m_minVersion = std::move(value); }
    inline void SetMinVersion(const char* value) { m_minVersionHasBeenSet = true; m_minVersion.assign(value); }
    inline ListHubContentVersionsRequest& WithMinVersion(const Aws::String& value) { SetMinVersion(value); return *this;}
    inline ListHubContentVersionsRequest& WithMinVersion(Aws::String&& value) { SetMinVersion(std::move(value)); return *this;}
    inline ListHubContentVersionsRequest& WithMinVersion(const char* value) { SetMinVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper bound of the hub content schema version.</p>
     */
    inline const Aws::String& GetMaxSchemaVersion() const{ return m_maxSchemaVersion; }
    inline bool MaxSchemaVersionHasBeenSet() const { return m_maxSchemaVersionHasBeenSet; }
    inline void SetMaxSchemaVersion(const Aws::String& value) { m_maxSchemaVersionHasBeenSet = true; m_maxSchemaVersion = value; }
    inline void SetMaxSchemaVersion(Aws::String&& value) { m_maxSchemaVersionHasBeenSet = true; m_maxSchemaVersion = std::move(value); }
    inline void SetMaxSchemaVersion(const char* value) { m_maxSchemaVersionHasBeenSet = true; m_maxSchemaVersion.assign(value); }
    inline ListHubContentVersionsRequest& WithMaxSchemaVersion(const Aws::String& value) { SetMaxSchemaVersion(value); return *this;}
    inline ListHubContentVersionsRequest& WithMaxSchemaVersion(Aws::String&& value) { SetMaxSchemaVersion(std::move(value)); return *this;}
    inline ListHubContentVersionsRequest& WithMaxSchemaVersion(const char* value) { SetMaxSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list hub content versions that were created before the time
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListHubContentVersionsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListHubContentVersionsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list hub content versions that were created after the time
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListHubContentVersionsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListHubContentVersionsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort hub content versions by either name or creation time.</p>
     */
    inline const HubContentSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const HubContentSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(HubContentSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListHubContentVersionsRequest& WithSortBy(const HubContentSortBy& value) { SetSortBy(value); return *this;}
    inline ListHubContentVersionsRequest& WithSortBy(HubContentSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort hub content versions by ascending or descending order.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListHubContentVersionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListHubContentVersionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of hub content versions to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListHubContentVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHubContentVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHubContentVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    HubContentType m_hubContentType;
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_minVersion;
    bool m_minVersionHasBeenSet = false;

    Aws::String m_maxSchemaVersion;
    bool m_maxSchemaVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    HubContentSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
