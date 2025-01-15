/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class ListResourceSnapshotsRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceSnapshots"; }

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
    inline ListResourceSnapshotsRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline ListResourceSnapshotsRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline ListResourceSnapshotsRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response to include only snapshots of resources owned by the
     * specified AWS account. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline ListResourceSnapshotsRequest& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline ListResourceSnapshotsRequest& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ListResourceSnapshotsRequest& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the engagement associated with the snapshots. </p>
     */
    inline const Aws::String& GetEngagementIdentifier() const{ return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    inline void SetEngagementIdentifier(const Aws::String& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = value; }
    inline void SetEngagementIdentifier(Aws::String&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::move(value); }
    inline void SetEngagementIdentifier(const char* value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.assign(value); }
    inline ListResourceSnapshotsRequest& WithEngagementIdentifier(const Aws::String& value) { SetEngagementIdentifier(value); return *this;}
    inline ListResourceSnapshotsRequest& WithEngagementIdentifier(Aws::String&& value) { SetEngagementIdentifier(std::move(value)); return *this;}
    inline ListResourceSnapshotsRequest& WithEngagementIdentifier(const char* value) { SetEngagementIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline ListResourceSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters the response to include only snapshots of the specified resource.
     * </p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline ListResourceSnapshotsRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline ListResourceSnapshotsRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline ListResourceSnapshotsRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response to include only snapshots created using the specified
     * template.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateIdentifier() const{ return m_resourceSnapshotTemplateIdentifier; }
    inline bool ResourceSnapshotTemplateIdentifierHasBeenSet() const { return m_resourceSnapshotTemplateIdentifierHasBeenSet; }
    inline void SetResourceSnapshotTemplateIdentifier(const Aws::String& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = value; }
    inline void SetResourceSnapshotTemplateIdentifier(Aws::String&& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = std::move(value); }
    inline void SetResourceSnapshotTemplateIdentifier(const char* value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier.assign(value); }
    inline ListResourceSnapshotsRequest& WithResourceSnapshotTemplateIdentifier(const Aws::String& value) { SetResourceSnapshotTemplateIdentifier(value); return *this;}
    inline ListResourceSnapshotsRequest& WithResourceSnapshotTemplateIdentifier(Aws::String&& value) { SetResourceSnapshotTemplateIdentifier(std::move(value)); return *this;}
    inline ListResourceSnapshotsRequest& WithResourceSnapshotTemplateIdentifier(const char* value) { SetResourceSnapshotTemplateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters the response to include only snapshots of the specified resource
     * type. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ListResourceSnapshotsRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline ListResourceSnapshotsRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_resourceSnapshotTemplateIdentifier;
    bool m_resourceSnapshotTemplateIdentifierHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
