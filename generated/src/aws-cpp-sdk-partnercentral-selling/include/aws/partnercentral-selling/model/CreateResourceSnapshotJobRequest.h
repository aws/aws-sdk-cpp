/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/Tag.h>
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
  class CreateResourceSnapshotJobRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CreateResourceSnapshotJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceSnapshotJob"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog in which to create the snapshot job. Valid values are
     * <code>AWS</code> and <code> Sandbox</code>.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline CreateResourceSnapshotJobRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline CreateResourceSnapshotJobRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A client-generated UUID used for idempotency check. The token helps prevent
     * duplicate job creations.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateResourceSnapshotJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateResourceSnapshotJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the identifier of the engagement associated with the resource to be
     * snapshotted.</p>
     */
    inline const Aws::String& GetEngagementIdentifier() const{ return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    inline void SetEngagementIdentifier(const Aws::String& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = value; }
    inline void SetEngagementIdentifier(Aws::String&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::move(value); }
    inline void SetEngagementIdentifier(const char* value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.assign(value); }
    inline CreateResourceSnapshotJobRequest& WithEngagementIdentifier(const Aws::String& value) { SetEngagementIdentifier(value); return *this;}
    inline CreateResourceSnapshotJobRequest& WithEngagementIdentifier(Aws::String&& value) { SetEngagementIdentifier(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobRequest& WithEngagementIdentifier(const char* value) { SetEngagementIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the identifier of the specific resource to be snapshotted. The
     * format depends on the <code> ResourceType</code>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline CreateResourceSnapshotJobRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline CreateResourceSnapshotJobRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the template that defines the schema for the
     * snapshot.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateIdentifier() const{ return m_resourceSnapshotTemplateIdentifier; }
    inline bool ResourceSnapshotTemplateIdentifierHasBeenSet() const { return m_resourceSnapshotTemplateIdentifierHasBeenSet; }
    inline void SetResourceSnapshotTemplateIdentifier(const Aws::String& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = value; }
    inline void SetResourceSnapshotTemplateIdentifier(Aws::String&& value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier = std::move(value); }
    inline void SetResourceSnapshotTemplateIdentifier(const char* value) { m_resourceSnapshotTemplateIdentifierHasBeenSet = true; m_resourceSnapshotTemplateIdentifier.assign(value); }
    inline CreateResourceSnapshotJobRequest& WithResourceSnapshotTemplateIdentifier(const Aws::String& value) { SetResourceSnapshotTemplateIdentifier(value); return *this;}
    inline CreateResourceSnapshotJobRequest& WithResourceSnapshotTemplateIdentifier(Aws::String&& value) { SetResourceSnapshotTemplateIdentifier(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobRequest& WithResourceSnapshotTemplateIdentifier(const char* value) { SetResourceSnapshotTemplateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource for which the snapshot job is being created. Must be one
     * of the supported resource types i.e. <code>Opportunity</code> </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline CreateResourceSnapshotJobRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline CreateResourceSnapshotJobRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects specifying each tag name and value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateResourceSnapshotJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateResourceSnapshotJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateResourceSnapshotJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
