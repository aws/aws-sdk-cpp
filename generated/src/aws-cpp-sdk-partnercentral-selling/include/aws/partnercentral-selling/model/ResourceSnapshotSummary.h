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
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotSummary();
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the snapshot. This globally unique
     * identifier can be used for cross-service references and in IAM policies. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ResourceSnapshotSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ResourceSnapshotSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ResourceSnapshotSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the entity that owns the resource from which the
     * snapshot was created.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline ResourceSnapshotSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline ResourceSnapshotSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ResourceSnapshotSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specific resource snapshotted. The format might vary
     * depending on the ResourceType. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ResourceSnapshotSummary& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ResourceSnapshotSummary& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ResourceSnapshotSummary& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template used to create the snapshot.</p>
     */
    inline const Aws::String& GetResourceSnapshotTemplateName() const{ return m_resourceSnapshotTemplateName; }
    inline bool ResourceSnapshotTemplateNameHasBeenSet() const { return m_resourceSnapshotTemplateNameHasBeenSet; }
    inline void SetResourceSnapshotTemplateName(const Aws::String& value) { m_resourceSnapshotTemplateNameHasBeenSet = true; m_resourceSnapshotTemplateName = value; }
    inline void SetResourceSnapshotTemplateName(Aws::String&& value) { m_resourceSnapshotTemplateNameHasBeenSet = true; m_resourceSnapshotTemplateName = std::move(value); }
    inline void SetResourceSnapshotTemplateName(const char* value) { m_resourceSnapshotTemplateNameHasBeenSet = true; m_resourceSnapshotTemplateName.assign(value); }
    inline ResourceSnapshotSummary& WithResourceSnapshotTemplateName(const Aws::String& value) { SetResourceSnapshotTemplateName(value); return *this;}
    inline ResourceSnapshotSummary& WithResourceSnapshotTemplateName(Aws::String&& value) { SetResourceSnapshotTemplateName(std::move(value)); return *this;}
    inline ResourceSnapshotSummary& WithResourceSnapshotTemplateName(const char* value) { SetResourceSnapshotTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource snapshotted.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ResourceSnapshotSummary& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline ResourceSnapshotSummary& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision number of the snapshot. This integer value is incremented each
     * time the snapshot is updated, allowing for version tracking of the resource
     * snapshot. </p>
     */
    inline int GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline ResourceSnapshotSummary& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceSnapshotTemplateName;
    bool m_resourceSnapshotTemplateNameHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
