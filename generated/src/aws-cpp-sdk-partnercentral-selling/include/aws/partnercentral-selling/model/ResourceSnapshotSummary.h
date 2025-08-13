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
   * <p> Provides a concise summary of a resource snapshot, including its unique
   * identifier and version information. This structure is used to quickly reference
   * and identify specific versions of resource snapshots. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ResourceSnapshotSummary">AWS
   * API Reference</a></p>
   */
  class ResourceSnapshotSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotSummary() = default;
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the snapshot. This globally unique
     * identifier can be used for cross-service references and in IAM policies. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResourceSnapshotSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision number of the snapshot. This integer value is incremented each
     * time the snapshot is updated, allowing for version tracking of the resource
     * snapshot. </p>
     */
    inline int GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline ResourceSnapshotSummary& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource snapshotted.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ResourceSnapshotSummary& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specific resource snapshotted. The format might vary
     * depending on the ResourceType. </p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResourceSnapshotSummary& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template used to create the snapshot.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateName() const { return m_resourceSnapshotTemplateName; }
    inline bool ResourceSnapshotTemplateNameHasBeenSet() const { return m_resourceSnapshotTemplateNameHasBeenSet; }
    template<typename ResourceSnapshotTemplateNameT = Aws::String>
    void SetResourceSnapshotTemplateName(ResourceSnapshotTemplateNameT&& value) { m_resourceSnapshotTemplateNameHasBeenSet = true; m_resourceSnapshotTemplateName = std::forward<ResourceSnapshotTemplateNameT>(value); }
    template<typename ResourceSnapshotTemplateNameT = Aws::String>
    ResourceSnapshotSummary& WithResourceSnapshotTemplateName(ResourceSnapshotTemplateNameT&& value) { SetResourceSnapshotTemplateName(std::forward<ResourceSnapshotTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the entity that owns the resource from which the
     * snapshot was created.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ResourceSnapshotSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_revision{0};
    bool m_revisionHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceSnapshotTemplateName;
    bool m_resourceSnapshotTemplateNameHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
