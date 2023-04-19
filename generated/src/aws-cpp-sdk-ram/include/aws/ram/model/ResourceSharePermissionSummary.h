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
   * <p>Information about an RAM permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceSharePermissionSummary">AWS
   * API Reference</a></p>
   */
  class ResourceSharePermissionSummary
  {
  public:
    AWS_RAM_API ResourceSharePermissionSummary();
    AWS_RAM_API ResourceSharePermissionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceSharePermissionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission you want information about.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission you want information about.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission you want information about.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission you want information about.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission you want information about.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission you want information about.</p>
     */
    inline ResourceSharePermissionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission you want information about.</p>
     */
    inline ResourceSharePermissionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission you want information about.</p>
     */
    inline ResourceSharePermissionSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The version of the permission associated with this resource share.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the permission associated with this resource share.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the permission associated with this resource share.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the permission associated with this resource share.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the permission associated with this resource share.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the permission associated with this resource share.</p>
     */
    inline ResourceSharePermissionSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the permission associated with this resource share.</p>
     */
    inline ResourceSharePermissionSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the permission associated with this resource share.</p>
     */
    inline ResourceSharePermissionSummary& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Specifies whether the version of the managed permission used by this resource
     * share is the default version for this managed permission.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>Specifies whether the version of the managed permission used by this resource
     * share is the default version for this managed permission.</p>
     */
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }

    /**
     * <p>Specifies whether the version of the managed permission used by this resource
     * share is the default version for this managed permission.</p>
     */
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>Specifies whether the version of the managed permission used by this resource
     * share is the default version for this managed permission.</p>
     */
    inline ResourceSharePermissionSummary& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}


    /**
     * <p>The name of this managed permission.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this managed permission.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this managed permission.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this managed permission.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this managed permission.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this managed permission.</p>
     */
    inline ResourceSharePermissionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this managed permission.</p>
     */
    inline ResourceSharePermissionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this managed permission.</p>
     */
    inline ResourceSharePermissionSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of resource to which this permission applies. This takes the form
     * of: <code>service-code</code>:<code>resource-code</code>, and is
     * case-insensitive. For example, an Amazon EC2 Subnet would be represented by the
     * string <code>ec2:subnet</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to which this permission applies. This takes the form
     * of: <code>service-code</code>:<code>resource-code</code>, and is
     * case-insensitive. For example, an Amazon EC2 Subnet would be represented by the
     * string <code>ec2:subnet</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to which this permission applies. This takes the form
     * of: <code>service-code</code>:<code>resource-code</code>, and is
     * case-insensitive. For example, an Amazon EC2 Subnet would be represented by the
     * string <code>ec2:subnet</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to which this permission applies. This takes the form
     * of: <code>service-code</code>:<code>resource-code</code>, and is
     * case-insensitive. For example, an Amazon EC2 Subnet would be represented by the
     * string <code>ec2:subnet</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to which this permission applies. This takes the form
     * of: <code>service-code</code>:<code>resource-code</code>, and is
     * case-insensitive. For example, an Amazon EC2 Subnet would be represented by the
     * string <code>ec2:subnet</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource to which this permission applies. This takes the form
     * of: <code>service-code</code>:<code>resource-code</code>, and is
     * case-insensitive. For example, an Amazon EC2 Subnet would be represented by the
     * string <code>ec2:subnet</code>.</p>
     */
    inline ResourceSharePermissionSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to which this permission applies. This takes the form
     * of: <code>service-code</code>:<code>resource-code</code>, and is
     * case-insensitive. For example, an Amazon EC2 Subnet would be represented by the
     * string <code>ec2:subnet</code>.</p>
     */
    inline ResourceSharePermissionSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource to which this permission applies. This takes the form
     * of: <code>service-code</code>:<code>resource-code</code>, and is
     * case-insensitive. For example, an Amazon EC2 Subnet would be represented by the
     * string <code>ec2:subnet</code>.</p>
     */
    inline ResourceSharePermissionSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The current status of the permission.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the permission.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the permission.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the permission.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the permission.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the permission.</p>
     */
    inline ResourceSharePermissionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the permission.</p>
     */
    inline ResourceSharePermissionSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the permission.</p>
     */
    inline ResourceSharePermissionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline ResourceSharePermissionSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline ResourceSharePermissionSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline ResourceSharePermissionSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline ResourceSharePermissionSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the managed permission associated with this resource share
     * is the default managed permission for all resources of this resource type.</p>
     */
    inline bool GetIsResourceTypeDefault() const{ return m_isResourceTypeDefault; }

    /**
     * <p>Specifies whether the managed permission associated with this resource share
     * is the default managed permission for all resources of this resource type.</p>
     */
    inline bool IsResourceTypeDefaultHasBeenSet() const { return m_isResourceTypeDefaultHasBeenSet; }

    /**
     * <p>Specifies whether the managed permission associated with this resource share
     * is the default managed permission for all resources of this resource type.</p>
     */
    inline void SetIsResourceTypeDefault(bool value) { m_isResourceTypeDefaultHasBeenSet = true; m_isResourceTypeDefault = value; }

    /**
     * <p>Specifies whether the managed permission associated with this resource share
     * is the default managed permission for all resources of this resource type.</p>
     */
    inline ResourceSharePermissionSummary& WithIsResourceTypeDefault(bool value) { SetIsResourceTypeDefault(value); return *this;}


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

    /**
     * <p>The type of managed permission. This can be one of the following values:</p>
     * <ul> <li> <p> <code>AWS_MANAGED</code> – Amazon Web Services created and manages
     * this managed permission. You can associate it with your resource shares, but you
     * can't modify it.</p> </li> <li> <p> <code>CUSTOMER_MANAGED</code> – You, or
     * another principal in your account created this managed permission. You can
     * associate it with your resource shares and create new versions that have
     * different permissions.</p> </li> </ul>
     */
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }

    /**
     * <p>The type of managed permission. This can be one of the following values:</p>
     * <ul> <li> <p> <code>AWS_MANAGED</code> – Amazon Web Services created and manages
     * this managed permission. You can associate it with your resource shares, but you
     * can't modify it.</p> </li> <li> <p> <code>CUSTOMER_MANAGED</code> – You, or
     * another principal in your account created this managed permission. You can
     * associate it with your resource shares and create new versions that have
     * different permissions.</p> </li> </ul>
     */
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    /**
     * <p>The type of managed permission. This can be one of the following values:</p>
     * <ul> <li> <p> <code>AWS_MANAGED</code> – Amazon Web Services created and manages
     * this managed permission. You can associate it with your resource shares, but you
     * can't modify it.</p> </li> <li> <p> <code>CUSTOMER_MANAGED</code> – You, or
     * another principal in your account created this managed permission. You can
     * associate it with your resource shares and create new versions that have
     * different permissions.</p> </li> </ul>
     */
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }

    /**
     * <p>The type of managed permission. This can be one of the following values:</p>
     * <ul> <li> <p> <code>AWS_MANAGED</code> – Amazon Web Services created and manages
     * this managed permission. You can associate it with your resource shares, but you
     * can't modify it.</p> </li> <li> <p> <code>CUSTOMER_MANAGED</code> – You, or
     * another principal in your account created this managed permission. You can
     * associate it with your resource shares and create new versions that have
     * different permissions.</p> </li> </ul>
     */
    inline ResourceSharePermissionSummary& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}

    /**
     * <p>The type of managed permission. This can be one of the following values:</p>
     * <ul> <li> <p> <code>AWS_MANAGED</code> – Amazon Web Services created and manages
     * this managed permission. You can associate it with your resource shares, but you
     * can't modify it.</p> </li> <li> <p> <code>CUSTOMER_MANAGED</code> – You, or
     * another principal in your account created this managed permission. You can
     * associate it with your resource shares and create new versions that have
     * different permissions.</p> </li> </ul>
     */
    inline ResourceSharePermissionSummary& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}


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
    inline ResourceSharePermissionSummary& WithFeatureSet(const PermissionFeatureSet& value) { SetFeatureSet(value); return *this;}

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
    inline ResourceSharePermissionSummary& WithFeatureSet(PermissionFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}


    /**
     * <p>A list of the tag key value pairs currently attached to the permission.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tag key value pairs currently attached to the permission.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tag key value pairs currently attached to the permission.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tag key value pairs currently attached to the permission.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tag key value pairs currently attached to the permission.</p>
     */
    inline ResourceSharePermissionSummary& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tag key value pairs currently attached to the permission.</p>
     */
    inline ResourceSharePermissionSummary& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tag key value pairs currently attached to the permission.</p>
     */
    inline ResourceSharePermissionSummary& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tag key value pairs currently attached to the permission.</p>
     */
    inline ResourceSharePermissionSummary& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
