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
    AWS_PARTNERCENTRALSELLING_API GetResourceSnapshotRequest();

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
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline GetResourceSnapshotRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline GetResourceSnapshotRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline GetResourceSnapshotRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the engagement associated with the snapshot. This
     * field links the snapshot to a specific engagement context.</p>
     */
    inline const Aws::String& GetEngagementIdentifier() const{ return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    inline void SetEngagementIdentifier(const Aws::String& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = value; }
    inline void SetEngagementIdentifier(Aws::String&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::move(value); }
    inline void SetEngagementIdentifier(const char* value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.assign(value); }
    inline GetResourceSnapshotRequest& WithEngagementIdentifier(const Aws::String& value) { SetEngagementIdentifier(value); return *this;}
    inline GetResourceSnapshotRequest& WithEngagementIdentifier(Aws::String&& value) { SetEngagementIdentifier(std::move(value)); return *this;}
    inline GetResourceSnapshotRequest& WithEngagementIdentifier(const char* value) { SetEngagementIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the specific resource that was snapshotted. The
     * format and constraints of this identifier depend on the ResourceType specified.
     * For <code>Opportunity</code> type, it will be an <code>opportunity ID</code>
     * </p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline GetResourceSnapshotRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline GetResourceSnapshotRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline GetResourceSnapshotRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>he name of the template that defines the schema for the snapshot. This
     * template determines which subset of the resource data is included in the
     * snapshot and must correspond to an existing and valid template for the specified
     * <code>ResourceType</code>.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateIdentifier() const{ return m_resourceSnapshotTemplateIdentifier; }
    inline bool ResourceSnapshotTemplateIdentifierHasBeenSet() const { return m_resourceSnapshotTemplateIdentifierHasBeenSet; }
    inline void SetResourceSnapshotTemplateIdentifier(const Aws::String& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = value; }
    inline void SetResourceSnapshotTemplateIdentifier(Aws::String&& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = std::move(value); }
    inline void SetResourceSnapshotTemplateIdentifier(const char* value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier.assign(value); }
    inline GetResourceSnapshotRequest& WithResourceSnapshotTemplateIdentifier(const Aws::String& value) { SetResourceSnapshotTemplateIdentifier(value); return *this;}
    inline GetResourceSnapshotRequest& WithResourceSnapshotTemplateIdentifier(Aws::String&& value) { SetResourceSnapshotTemplateIdentifier(std::move(value)); return *this;}
    inline GetResourceSnapshotRequest& WithResourceSnapshotTemplateIdentifier(const char* value) { SetResourceSnapshotTemplateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of resource that was snapshotted. This field determines
     * the structure and content of the snapshot payload. Valid value
     * includes:<code>Opportunity</code>: For opportunity-related data. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline GetResourceSnapshotRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline GetResourceSnapshotRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which revision of the snapshot to retrieve. If omitted returns the
     * latest revision.</p>
     */
    inline int GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline GetResourceSnapshotRequest& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_resourceSnapshotTemplateIdentifier;
    bool m_resourceSnapshotTemplateIdentifierHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
