/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p> This provide a streamlined view of the relationships between engagements and
   * resources. These summaries offer a crucial link between collaborative
   * engagements and the specific resources involved, such as opportunities.These
   * summaries are particularly valuable for partners navigating complex engagements
   * with multiple resources. They enable quick insights into resource distribution
   * across engagements, support efficient resource management, and help maintain a
   * clear overview of collaborative activities. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementResourceAssociationSummary">AWS
   * API Reference</a></p>
   */
  class EngagementResourceAssociationSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementResourceAssociationSummary();
    AWS_PARTNERCENTRALSELLING_API EngagementResourceAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementResourceAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates the environment in which the resource and engagement exist. </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline EngagementResourceAssociationSummary& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline EngagementResourceAssociationSummary& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline EngagementResourceAssociationSummary& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the entity that owns the resource. Identifies the
     * account responsible for or having primary control over the resource. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline EngagementResourceAssociationSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline EngagementResourceAssociationSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline EngagementResourceAssociationSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the engagement associated with the resource. </p>
     */
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    inline void SetEngagementId(const Aws::String& value) { m_engagementIdHasBeenSet = true; m_engagementId = value; }
    inline void SetEngagementId(Aws::String&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::move(value); }
    inline void SetEngagementId(const char* value) { m_engagementIdHasBeenSet = true; m_engagementId.assign(value); }
    inline EngagementResourceAssociationSummary& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}
    inline EngagementResourceAssociationSummary& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}
    inline EngagementResourceAssociationSummary& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the specific resource. Varies depending on the
     * resource type. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline EngagementResourceAssociationSummary& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline EngagementResourceAssociationSummary& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline EngagementResourceAssociationSummary& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Categorizes the type of resource associated with the engagement. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline EngagementResourceAssociationSummary& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline EngagementResourceAssociationSummary& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
