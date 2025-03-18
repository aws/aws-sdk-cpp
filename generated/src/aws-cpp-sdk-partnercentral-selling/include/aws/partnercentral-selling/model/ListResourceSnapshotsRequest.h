﻿/**
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
    AWS_PARTNERCENTRALSELLING_API ListResourceSnapshotsRequest() = default;

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
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    ListResourceSnapshotsRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response to include only snapshots of resources owned by the
     * specified AWS account. </p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ListResourceSnapshotsRequest& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the engagement associated with the snapshots. </p>
     */
    inline const Aws::String& GetEngagementIdentifier() const { return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    template<typename EngagementIdentifierT = Aws::String>
    void SetEngagementIdentifier(EngagementIdentifierT&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::forward<EngagementIdentifierT>(value); }
    template<typename EngagementIdentifierT = Aws::String>
    ListResourceSnapshotsRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) { SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return in a single call. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResourceSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceSnapshotsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters the response to include only snapshots of the specified resource.
     * </p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    ListResourceSnapshotsRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the response to include only snapshots created using the specified
     * template.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateIdentifier() const { return m_resourceSnapshotTemplateIdentifier; }
    inline bool ResourceSnapshotTemplateIdentifierHasBeenSet() const { return m_resourceSnapshotTemplateIdentifierHasBeenSet; }
    template<typename ResourceSnapshotTemplateIdentifierT = Aws::String>
    void SetResourceSnapshotTemplateIdentifier(ResourceSnapshotTemplateIdentifierT&& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = std::forward<ResourceSnapshotTemplateIdentifierT>(value); }
    template<typename ResourceSnapshotTemplateIdentifierT = Aws::String>
    ListResourceSnapshotsRequest& WithResourceSnapshotTemplateIdentifier(ResourceSnapshotTemplateIdentifierT&& value) { SetResourceSnapshotTemplateIdentifier(std::forward<ResourceSnapshotTemplateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters the response to include only snapshots of the specified resource
     * type. </p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ListResourceSnapshotsRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_resourceSnapshotTemplateIdentifier;
    bool m_resourceSnapshotTemplateIdentifierHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
