/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/SortObject.h>
#include <aws/partnercentral-selling/model/ResourceSnapshotJobStatus.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class ListResourceSnapshotJobsRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceSnapshotJobs"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Specifies the catalog related to the request. </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline ListResourceSnapshotJobsRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline ListResourceSnapshotJobsRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline ListResourceSnapshotJobsRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the engagement to filter the response. </p>
     */
    inline const Aws::String& GetEngagementIdentifier() const{ return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    inline void SetEngagementIdentifier(const Aws::String& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = value; }
    inline void SetEngagementIdentifier(Aws::String&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::move(value); }
    inline void SetEngagementIdentifier(const char* value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.assign(value); }
    inline ListResourceSnapshotJobsRequest& WithEngagementIdentifier(const Aws::String& value) { SetEngagementIdentifier(value); return *this;}
    inline ListResourceSnapshotJobsRequest& WithEngagementIdentifier(Aws::String&& value) { SetEngagementIdentifier(std::move(value)); return *this;}
    inline ListResourceSnapshotJobsRequest& WithEngagementIdentifier(const char* value) { SetEngagementIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return in a single call. If omitted,
     * defaults to 50. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceSnapshotJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListResourceSnapshotJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceSnapshotJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceSnapshotJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configures the sorting of the response. If omitted, results are sorted by
     * <code>CreatedDate</code> in descending order. </p>
     */
    inline const SortObject& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const SortObject& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(SortObject&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ListResourceSnapshotJobsRequest& WithSort(const SortObject& value) { SetSort(value); return *this;}
    inline ListResourceSnapshotJobsRequest& WithSort(SortObject&& value) { SetSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the jobs to filter the response. </p>
     */
    inline const ResourceSnapshotJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceSnapshotJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceSnapshotJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListResourceSnapshotJobsRequest& WithStatus(const ResourceSnapshotJobStatus& value) { SetStatus(value); return *this;}
    inline ListResourceSnapshotJobsRequest& WithStatus(ResourceSnapshotJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortObject m_sort;
    bool m_sortHasBeenSet = false;

    ResourceSnapshotJobStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
