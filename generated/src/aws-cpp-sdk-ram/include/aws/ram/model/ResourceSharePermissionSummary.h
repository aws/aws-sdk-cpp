/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about an RAM permission that is associated with a resource share
   * and any of its resources of a specified type.</p><p><h3>See Also:</h3>   <a
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
     * Resoure Name (ARN)</a> of the permission you want information about.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission you want information about.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission you want information about.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission you want information about.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission you want information about.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission you want information about.</p>
     */
    inline ResourceSharePermissionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission you want information about.</p>
     */
    inline ResourceSharePermissionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission you want information about.</p>
     */
    inline ResourceSharePermissionSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline ResourceSharePermissionSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline ResourceSharePermissionSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline ResourceSharePermissionSummary& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for this permission.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for this permission.</p>
     */
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for this permission.</p>
     */
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for this permission.</p>
     */
    inline ResourceSharePermissionSummary& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}


    /**
     * <p>The name of this permission.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this permission.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this permission.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this permission.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this permission.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this permission.</p>
     */
    inline ResourceSharePermissionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this permission.</p>
     */
    inline ResourceSharePermissionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this permission.</p>
     */
    inline ResourceSharePermissionSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of resource to which this permission applies.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to which this permission applies.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to which this permission applies.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to which this permission applies.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to which this permission applies.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource to which this permission applies.</p>
     */
    inline ResourceSharePermissionSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to which this permission applies.</p>
     */
    inline ResourceSharePermissionSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource to which this permission applies.</p>
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
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for all resources of this resource type.</p>
     */
    inline bool GetIsResourceTypeDefault() const{ return m_isResourceTypeDefault; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for all resources of this resource type.</p>
     */
    inline bool IsResourceTypeDefaultHasBeenSet() const { return m_isResourceTypeDefaultHasBeenSet; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for all resources of this resource type.</p>
     */
    inline void SetIsResourceTypeDefault(bool value) { m_isResourceTypeDefaultHasBeenSet = true; m_isResourceTypeDefault = value; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for all resources of this resource type.</p>
     */
    inline ResourceSharePermissionSummary& WithIsResourceTypeDefault(bool value) { SetIsResourceTypeDefault(value); return *this;}

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
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
