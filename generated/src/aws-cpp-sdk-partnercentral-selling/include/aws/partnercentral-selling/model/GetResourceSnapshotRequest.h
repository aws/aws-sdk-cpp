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
  class GetResourceSnapshotRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceSnapshot"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog related to the request. Valid values are:</p> <ul> <li>
     * <p>AWS: Retrieves the snapshot from the production AWS environment.</p> </li>
     * <li> <p>Sandbox: Retrieves the snapshot from a sandbox environment used for
     * testing or development purposes.</p> </li> </ul>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    GetResourceSnapshotRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the engagement associated with the snapshot. This
     * field links the snapshot to a specific engagement context.</p>
     */
    inline const Aws::String& GetEngagementIdentifier() const { return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    template<typename EngagementIdentifierT = Aws::String>
    void SetEngagementIdentifier(EngagementIdentifierT&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::forward<EngagementIdentifierT>(value); }
    template<typename EngagementIdentifierT = Aws::String>
    GetResourceSnapshotRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) { SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of resource that was snapshotted. This field determines
     * the structure and content of the snapshot payload. Valid value
     * includes:<code>Opportunity</code>: For opportunity-related data. </p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GetResourceSnapshotRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the specific resource that was snapshotted. The
     * format and constraints of this identifier depend on the ResourceType specified.
     * For <code>Opportunity</code> type, it will be an <code>opportunity ID</code>
     * </p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    GetResourceSnapshotRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>he name of the template that defines the schema for the snapshot. This
     * template determines which subset of the resource data is included in the
     * snapshot and must correspond to an existing and valid template for the specified
     * <code>ResourceType</code>.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateIdentifier() const { return m_resourceSnapshotTemplateIdentifier; }
    inline bool ResourceSnapshotTemplateIdentifierHasBeenSet() const { return m_resourceSnapshotTemplateIdentifierHasBeenSet; }
    template<typename ResourceSnapshotTemplateIdentifierT = Aws::String>
    void SetResourceSnapshotTemplateIdentifier(ResourceSnapshotTemplateIdentifierT&& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = std::forward<ResourceSnapshotTemplateIdentifierT>(value); }
    template<typename ResourceSnapshotTemplateIdentifierT = Aws::String>
    GetResourceSnapshotRequest& WithResourceSnapshotTemplateIdentifier(ResourceSnapshotTemplateIdentifierT&& value) { SetResourceSnapshotTemplateIdentifier(std::forward<ResourceSnapshotTemplateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which revision of the snapshot to retrieve. If omitted returns the
     * latest revision.</p>
     */
    inline int GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline GetResourceSnapshotRequest& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_resourceSnapshotTemplateIdentifier;
    bool m_resourceSnapshotTemplateIdentifierHasBeenSet = false;

    int m_revision{0};
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
