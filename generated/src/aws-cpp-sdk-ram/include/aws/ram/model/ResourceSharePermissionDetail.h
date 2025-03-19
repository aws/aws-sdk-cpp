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
    AWS_RAM_API ResourceSharePermissionDetail() = default;
    AWS_RAM_API ResourceSharePermissionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceSharePermissionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of this RAM managed permission.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResourceSharePermissionDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the permission described in this response.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ResourceSharePermissionDetail& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the version of the permission represented in this response
     * is the default version for this permission.</p>
     */
    inline bool GetDefaultVersion() const { return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline ResourceSharePermissionDetail& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this permission.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResourceSharePermissionDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResourceSharePermissionDetail& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline const Aws::String& GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    template<typename PermissionT = Aws::String>
    void SetPermission(PermissionT&& value) { m_permissionHasBeenSet = true; m_permission = std::forward<PermissionT>(value); }
    template<typename PermissionT = Aws::String>
    ResourceSharePermissionDetail& WithPermission(PermissionT&& value) { SetPermission(std::forward<PermissionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ResourceSharePermissionDetail& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ResourceSharePermissionDetail& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the version of the permission represented in this response
     * is the default version for all resources of this resource type.</p>
     */
    inline bool GetIsResourceTypeDefault() const { return m_isResourceTypeDefault; }
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
    inline PermissionType GetPermissionType() const { return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(PermissionType value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline ResourceSharePermissionDetail& WithPermissionType(PermissionType value) { SetPermissionType(value); return *this;}
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
    inline PermissionFeatureSet GetFeatureSet() const { return m_featureSet; }
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }
    inline void SetFeatureSet(PermissionFeatureSet value) { m_featureSetHasBeenSet = true; m_featureSet = value; }
    inline ResourceSharePermissionDetail& WithFeatureSet(PermissionFeatureSet value) { SetFeatureSet(value); return *this;}
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
    inline PermissionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PermissionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResourceSharePermissionDetail& WithStatus(PermissionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key and value pairs attached to the resource share.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ResourceSharePermissionDetail& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ResourceSharePermissionDetail& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    bool m_defaultVersion{false};
    bool m_defaultVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_permission;
    bool m_permissionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    bool m_isResourceTypeDefault{false};
    bool m_isResourceTypeDefaultHasBeenSet = false;

    PermissionType m_permissionType{PermissionType::NOT_SET};
    bool m_permissionTypeHasBeenSet = false;

    PermissionFeatureSet m_featureSet{PermissionFeatureSet::NOT_SET};
    bool m_featureSetHasBeenSet = false;

    PermissionStatus m_status{PermissionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
