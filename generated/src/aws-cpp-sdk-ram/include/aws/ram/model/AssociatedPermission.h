/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/PermissionFeatureSet.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An object that describes a managed permission associated with a resource
   * share.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociatedPermission">AWS
   * API Reference</a></p>
   */
  class AssociatedPermission
  {
  public:
    AWS_RAM_API AssociatedPermission();
    AWS_RAM_API AssociatedPermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API AssociatedPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the associated managed permission.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the associated managed permission.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the associated managed permission.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the associated managed permission.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the associated managed permission.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the associated managed permission.</p>
     */
    inline AssociatedPermission& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the associated managed permission.</p>
     */
    inline AssociatedPermission& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the associated managed permission.</p>
     */
    inline AssociatedPermission& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The version of the permission currently associated with the resource
     * share.</p>
     */
    inline const Aws::String& GetPermissionVersion() const{ return m_permissionVersion; }

    /**
     * <p>The version of the permission currently associated with the resource
     * share.</p>
     */
    inline bool PermissionVersionHasBeenSet() const { return m_permissionVersionHasBeenSet; }

    /**
     * <p>The version of the permission currently associated with the resource
     * share.</p>
     */
    inline void SetPermissionVersion(const Aws::String& value) { m_permissionVersionHasBeenSet = true; m_permissionVersion = value; }

    /**
     * <p>The version of the permission currently associated with the resource
     * share.</p>
     */
    inline void SetPermissionVersion(Aws::String&& value) { m_permissionVersionHasBeenSet = true; m_permissionVersion = std::move(value); }

    /**
     * <p>The version of the permission currently associated with the resource
     * share.</p>
     */
    inline void SetPermissionVersion(const char* value) { m_permissionVersionHasBeenSet = true; m_permissionVersion.assign(value); }

    /**
     * <p>The version of the permission currently associated with the resource
     * share.</p>
     */
    inline AssociatedPermission& WithPermissionVersion(const Aws::String& value) { SetPermissionVersion(value); return *this;}

    /**
     * <p>The version of the permission currently associated with the resource
     * share.</p>
     */
    inline AssociatedPermission& WithPermissionVersion(Aws::String&& value) { SetPermissionVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the permission currently associated with the resource
     * share.</p>
     */
    inline AssociatedPermission& WithPermissionVersion(const char* value) { SetPermissionVersion(value); return *this;}


    /**
     * <p>Indicates whether the associated resource share is using the default version
     * of the permission.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>Indicates whether the associated resource share is using the default version
     * of the permission.</p>
     */
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }

    /**
     * <p>Indicates whether the associated resource share is using the default version
     * of the permission.</p>
     */
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>Indicates whether the associated resource share is using the default version
     * of the permission.</p>
     */
    inline AssociatedPermission& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}


    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline AssociatedPermission& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline AssociatedPermission& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline AssociatedPermission& WithResourceType(const char* value) { SetResourceType(value); return *this;}


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
    inline const Aws::String& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

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
    inline AssociatedPermission& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

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
    inline AssociatedPermission& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

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
    inline AssociatedPermission& WithStatus(const char* value) { SetStatus(value); return *this;}


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
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }

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
    inline void SetFeatureSet(const PermissionFeatureSet& value) { m_featureSetHasBeenSet = true; m_featureSet = value; }

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
    inline void SetFeatureSet(PermissionFeatureSet&& value) { m_featureSetHasBeenSet = true; m_featureSet = std::move(value); }

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
    inline AssociatedPermission& WithFeatureSet(const PermissionFeatureSet& value) { SetFeatureSet(value); return *this;}

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
    inline AssociatedPermission& WithFeatureSet(PermissionFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}


    /**
     * <p>The date and time when the association between the permission and the
     * resource share was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time when the association between the permission and the
     * resource share was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time when the association between the permission and the
     * resource share was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time when the association between the permission and the
     * resource share was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time when the association between the permission and the
     * resource share was last updated.</p>
     */
    inline AssociatedPermission& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time when the association between the permission and the
     * resource share was last updated.</p>
     */
    inline AssociatedPermission& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share associated with this permission.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share associated with this permission.</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share associated with this permission.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share associated with this permission.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share associated with this permission.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share associated with this permission.</p>
     */
    inline AssociatedPermission& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share associated with this permission.</p>
     */
    inline AssociatedPermission& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share associated with this permission.</p>
     */
    inline AssociatedPermission& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_permissionVersion;
    bool m_permissionVersionHasBeenSet = false;

    bool m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    PermissionFeatureSet m_featureSet;
    bool m_featureSetHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
