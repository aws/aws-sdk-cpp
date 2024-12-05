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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class CreateResourceSnapshotRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CreateResourceSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceSnapshot"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Specifies the catalog where the snapshot is created. Valid values are
     * <code>AWS</code> and <code>Sandbox</code>. </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline CreateResourceSnapshotRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline CreateResourceSnapshotRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline CreateResourceSnapshotRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies a unique, client-generated UUID to ensure that the request is
     * handled exactly once. This token helps prevent duplicate snapshot creations.
     * </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateResourceSnapshotRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateResourceSnapshotRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateResourceSnapshotRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the engagement associated with this snapshot. This
     * field links the snapshot to a specific engagement context. </p>
     */
    inline const Aws::String& GetEngagementIdentifier() const{ return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    inline void SetEngagementIdentifier(const Aws::String& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = value; }
    inline void SetEngagementIdentifier(Aws::String&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::move(value); }
    inline void SetEngagementIdentifier(const char* value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.assign(value); }
    inline CreateResourceSnapshotRequest& WithEngagementIdentifier(const Aws::String& value) { SetEngagementIdentifier(value); return *this;}
    inline CreateResourceSnapshotRequest& WithEngagementIdentifier(Aws::String&& value) { SetEngagementIdentifier(std::move(value)); return *this;}
    inline CreateResourceSnapshotRequest& WithEngagementIdentifier(const char* value) { SetEngagementIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the specific resource to be snapshotted. The format
     * and constraints of this identifier depend on the <code>ResourceType</code>
     * specified. For example: For <code>Opportunity</code> type, it will be an
     * opportunity ID. </p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline CreateResourceSnapshotRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline CreateResourceSnapshotRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline CreateResourceSnapshotRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the template that defines the schema for the snapshot. This
     * template determines which subset of the resource data will be included in the
     * snapshot. Must correspond to an existing and valid template for the specified
     * <code>ResourceType</code>. </p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateIdentifier() const{ return m_resourceSnapshotTemplateIdentifier; }
    inline bool ResourceSnapshotTemplateIdentifierHasBeenSet() const { return m_resourceSnapshotTemplateIdentifierHasBeenSet; }
    inline void SetResourceSnapshotTemplateIdentifier(const Aws::String& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = value; }
    inline void SetResourceSnapshotTemplateIdentifier(Aws::String&& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = std::move(value); }
    inline void SetResourceSnapshotTemplateIdentifier(const char* value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier.assign(value); }
    inline CreateResourceSnapshotRequest& WithResourceSnapshotTemplateIdentifier(const Aws::String& value) { SetResourceSnapshotTemplateIdentifier(value); return *this;}
    inline CreateResourceSnapshotRequest& WithResourceSnapshotTemplateIdentifier(Aws::String&& value) { SetResourceSnapshotTemplateIdentifier(std::move(value)); return *this;}
    inline CreateResourceSnapshotRequest& WithResourceSnapshotTemplateIdentifier(const char* value) { SetResourceSnapshotTemplateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the type of resource for which the snapshot is being created. This
     * field determines the structure and content of the snapshot. Must be one of the
     * supported resource types, such as: <code>Opportunity</code>. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline CreateResourceSnapshotRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline CreateResourceSnapshotRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

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
