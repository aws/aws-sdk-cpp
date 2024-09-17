/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ram/model/PermissionType.h>
#include <aws/ram/model/PermissionFeatureSet.h>
#include <aws/ram/model/PermissionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/model/Tag.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Information about a RAM managed permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceSharePermissionDetail">AWS
   * API Reference</a></p>
   */
  class ResourceSharePermissionDetail
  {
  public:
    AWS_RAM_API ResourceSharePermissionDetail();
    AWS_RAM_API ResourceSharePermissionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceSharePermissionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of this RAM managed permission.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ResourceSharePermissionDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ResourceSharePermissionDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ResourceSharePermissionDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the permission described in this response.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ResourceSharePermissionDetail& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ResourceSharePermissionDetail& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ResourceSharePermissionDetail& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the version of the permission represented in this response
     * is the default version for this permission.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline ResourceSharePermissionDetail& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this permission.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceSharePermissionDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceSharePermissionDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceSharePermissionDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResourceSharePermissionDetail& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResourceSharePermissionDetail& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceSharePermissionDetail& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline const Aws::String& GetPermission() const{ return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(const Aws::String& value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline void SetPermission(Aws::String&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }
    inline void SetPermission(const char* value) { m_permissionHasBeenSet = true; m_permission.assign(value); }
    inline ResourceSharePermissionDetail& WithPermission(const Aws::String& value) { SetPermission(value); return *this;}
    inline ResourceSharePermissionDetail& WithPermission(Aws::String&& value) { SetPermission(std::move(value)); return *this;}
    inline ResourceSharePermissionDetail& WithPermission(const char* value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ResourceSharePermissionDetail& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ResourceSharePermissionDetail& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ResourceSharePermissionDetail& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ResourceSharePermissionDetail& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the version of the permission represented in this response
     * is the default version for all resources of this resource type.</p>
     */
    inline bool GetIsResourceTypeDefault() const{ return m_isResourceTypeDefault; }
    inline bool IsResourceTypeDefaultHasBeenSet() const { return m_isResourceTypeDefaultHasBeenSet; }
    inline void SetIsResourceTypeDefault(bool value) { m_isResourceTypeDefaultHasBeenSet = true; m_isResourceTypeDefault = value; }
    inline ResourceSharePermissionDetail& WithIsResourceTypeDefault(bool value) { SetIsResourceTypeDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of managed permission. This can be one of the following values:</p>
     * <ul> <li> <p> <code>AWS_MANAGED</code> – Amazon Web Services created and manages
     * this managed permission. You can associate it with your resource shares, but you
     * can't modify it.</p> </li> <li> <p> <code>CUSTOMER_MANAGED</code> – You, or
     * another principal in your account created this managed permission. You can
     * associate it with your resource shares and create new versions that have
     * different permissions.</p> </li> </ul>
     */
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }
    inline ResourceSharePermissionDetail& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}
    inline ResourceSharePermissionDetail& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates what features are available for this resource share. This parameter
     * can have one of the following values:</p> <ul> <li> <p> <b>STANDARD</b> – A
     * resource share that supports all functionality. These resource shares are
     * visible to all principals you share the resource share with. You can modify
     * these resource shares in RAM using the console or APIs. This resource share
     * might have been created by RAM, or it might have been <b>CREATED_FROM_POLICY</b>
     * and then promoted.</p> </li> <li> <p> <b>CREATED_FROM_POLICY</b> – The customer
     * manually shared a resource by attaching a resource-based policy. That policy did
     * not match any existing managed permissions, so RAM created this customer managed
     * permission automatically on the customer's behalf based on the attached policy
     * document. This type of resource share is visible only to the Amazon Web Services
     * account that created it. You can't modify it in RAM unless you promote it. For
     * more information, see <a>PromoteResourceShareCreatedFromPolicy</a>.</p> </li>
     * <li> <p> <b>PROMOTING_TO_STANDARD</b> – This resource share was originally
     * <code>CREATED_FROM_POLICY</code>, but the customer ran the
     * <a>PromoteResourceShareCreatedFromPolicy</a> and that operation is still in
     * progress. This value changes to <code>STANDARD</code> when complete.</p> </li>
     * </ul>
     */
    inline const PermissionFeatureSet& GetFeatureSet() const{ return m_featureSet; }
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }
    inline void SetFeatureSet(const PermissionFeatureSet& value) { m_featureSetHasBeenSet = true; m_featureSet = value; }
    inline void SetFeatureSet(PermissionFeatureSet&& value) { m_featureSetHasBeenSet = true; m_featureSet = std::move(value); }
    inline ResourceSharePermissionDetail& WithFeatureSet(const PermissionFeatureSet& value) { SetFeatureSet(value); return *this;}
    inline ResourceSharePermissionDetail& WithFeatureSet(PermissionFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the association between the permission and the resource
     * share. The following are the possible values:</p> <ul> <li> <p>
     * <code>ATTACHABLE</code> – This permission or version can be associated with
     * resource shares.</p> </li> <li> <p> <code>UNATTACHABLE</code> – This permission
     * or version can't currently be associated with resource shares.</p> </li> <li>
     * <p> <code>DELETING</code> – This permission or version is in the process of
     * being deleted.</p> </li> <li> <p> <code>DELETED</code> – This permission or
     * version is deleted.</p> </li> </ul>
     */
    inline const PermissionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PermissionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PermissionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ResourceSharePermissionDetail& WithStatus(const PermissionStatus& value) { SetStatus(value); return *this;}
    inline ResourceSharePermissionDetail& WithStatus(PermissionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key and value pairs attached to the resource share.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ResourceSharePermissionDetail& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ResourceSharePermissionDetail& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ResourceSharePermissionDetail& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ResourceSharePermissionDetail& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    bool m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_permission;
    bool m_permissionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    bool m_isResourceTypeDefault;
    bool m_isResourceTypeDefaultHasBeenSet = false;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;

    PermissionFeatureSet m_featureSet;
    bool m_featureSetHasBeenSet = false;

    PermissionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
