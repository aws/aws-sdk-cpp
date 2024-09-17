/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrackingServerStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SortTrackingServerBy.h>
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
  class ListMlflowTrackingServersRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListMlflowTrackingServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMlflowTrackingServers"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use the <code>CreatedAfter</code> filter to only list tracking servers
     * created after a specific date and time. Listed tracking servers are shown with a
     * date and time such as <code>"2024-03-16T01:46:56+00:00"</code>. The
     * <code>CreatedAfter</code> parameter takes in a Unix timestamp. To convert a date
     * and time into a Unix timestamp, see <a
     * href="https://www.epochconverter.com/">EpochConverter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline ListMlflowTrackingServersRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline ListMlflowTrackingServersRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>CreatedBefore</code> filter to only list tracking servers
     * created before a specific date and time. Listed tracking servers are shown with
     * a date and time such as <code>"2024-03-16T01:46:56+00:00"</code>. The
     * <code>CreatedBefore</code> parameter takes in a Unix timestamp. To convert a
     * date and time into a Unix timestamp, see <a
     * href="https://www.epochconverter.com/">EpochConverter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline ListMlflowTrackingServersRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline ListMlflowTrackingServersRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for tracking servers with a specified creation status.</p>
     */
    inline const TrackingServerStatus& GetTrackingServerStatus() const{ return m_trackingServerStatus; }
    inline bool TrackingServerStatusHasBeenSet() const { return m_trackingServerStatusHasBeenSet; }
    inline void SetTrackingServerStatus(const TrackingServerStatus& value) { m_trackingServerStatusHasBeenSet = true; m_trackingServerStatus = value; }
    inline void SetTrackingServerStatus(TrackingServerStatus&& value) { m_trackingServerStatusHasBeenSet = true; m_trackingServerStatus = std::move(value); }
    inline ListMlflowTrackingServersRequest& WithTrackingServerStatus(const TrackingServerStatus& value) { SetTrackingServerStatus(value); return *this;}
    inline ListMlflowTrackingServersRequest& WithTrackingServerStatus(TrackingServerStatus&& value) { SetTrackingServerStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for tracking servers using the specified MLflow version.</p>
     */
    inline const Aws::String& GetMlflowVersion() const{ return m_mlflowVersion; }
    inline bool MlflowVersionHasBeenSet() const { return m_mlflowVersionHasBeenSet; }
    inline void SetMlflowVersion(const Aws::String& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = value; }
    inline void SetMlflowVersion(Aws::String&& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = std::move(value); }
    inline void SetMlflowVersion(const char* value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion.assign(value); }
    inline ListMlflowTrackingServersRequest& WithMlflowVersion(const Aws::String& value) { SetMlflowVersion(value); return *this;}
    inline ListMlflowTrackingServersRequest& WithMlflowVersion(Aws::String&& value) { SetMlflowVersion(std::move(value)); return *this;}
    inline ListMlflowTrackingServersRequest& WithMlflowVersion(const char* value) { SetMlflowVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for trackings servers sorting by name, creation time, or creation
     * status.</p>
     */
    inline const SortTrackingServerBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortTrackingServerBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortTrackingServerBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListMlflowTrackingServersRequest& WithSortBy(const SortTrackingServerBy& value) { SetSortBy(value); return *this;}
    inline ListMlflowTrackingServersRequest& WithSortBy(SortTrackingServerBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Change the order of the listed tracking servers. By default, tracking servers
     * are listed in <code>Descending</code> order by creation time. To change the list
     * order, you can specify <code>SortOrder</code> to be <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListMlflowTrackingServersRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListMlflowTrackingServersRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

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
    inline ListMlflowTrackingServersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMlflowTrackingServersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMlflowTrackingServersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of tracking servers to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMlflowTrackingServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    TrackingServerStatus m_trackingServerStatus;
    bool m_trackingServerStatusHasBeenSet = false;

    Aws::String m_mlflowVersion;
    bool m_mlflowVersionHasBeenSet = false;

    SortTrackingServerBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
