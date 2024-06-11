/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ram/model/ResourceRegionScope.h>
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
   * <p>Describes a resource associated with a resource share in RAM.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/Resource">AWS API
   * Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_RAM_API Resource();
    AWS_RAM_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Resource& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Resource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Resource& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. This takes the form of:
     * <code>service-code</code>:<code>resource-code</code>, and is case-insensitive.
     * For example, an Amazon EC2 Subnet would be represented by the string
     * <code>ec2:subnet</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Resource& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share this resource is associated
     * with.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }
    inline Resource& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}
    inline Resource& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}
    inline Resource& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource group. This value is available only if
     * the resource is part of a resource group.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::move(value); }
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }
    inline Resource& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}
    inline Resource& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(std::move(value)); return *this;}
    inline Resource& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the resource.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Resource& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}
    inline Resource& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline Resource& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline Resource& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline Resource& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the resource was associated with the resource
     * share.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Resource& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Resource& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date an time when the association between the resource and the resource
     * share was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline Resource& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline Resource& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the scope of visibility of this resource:</p> <ul> <li> <p>
     * <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline const ResourceRegionScope& GetResourceRegionScope() const{ return m_resourceRegionScope; }
    inline bool ResourceRegionScopeHasBeenSet() const { return m_resourceRegionScopeHasBeenSet; }
    inline void SetResourceRegionScope(const ResourceRegionScope& value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = value; }
    inline void SetResourceRegionScope(ResourceRegionScope&& value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = std::move(value); }
    inline Resource& WithResourceRegionScope(const ResourceRegionScope& value) { SetResourceRegionScope(value); return *this;}
    inline Resource& WithResourceRegionScope(ResourceRegionScope&& value) { SetResourceRegionScope(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    ResourceRegionScope m_resourceRegionScope;
    bool m_resourceRegionScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
