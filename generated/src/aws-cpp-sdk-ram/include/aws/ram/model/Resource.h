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
    AWS_RAM_API Resource() = default;
    AWS_RAM_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Resource& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. This takes the form of:
     * <code>service-code</code>:<code>resource-code</code>, and is case-insensitive.
     * For example, an Amazon EC2 Subnet would be represented by the string
     * <code>ec2:subnet</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Resource& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share this resource is associated
     * with.</p>
     */
    inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    template<typename ResourceShareArnT = Aws::String>
    void SetResourceShareArn(ResourceShareArnT&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::forward<ResourceShareArnT>(value); }
    template<typename ResourceShareArnT = Aws::String>
    Resource& WithResourceShareArn(ResourceShareArnT&& value) { SetResourceShareArn(std::forward<ResourceShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource group. This value is available only if
     * the resource is part of a resource group.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const { return m_resourceGroupArn; }
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }
    template<typename ResourceGroupArnT = Aws::String>
    void SetResourceGroupArn(ResourceGroupArnT&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::forward<ResourceGroupArnT>(value); }
    template<typename ResourceGroupArnT = Aws::String>
    Resource& WithResourceGroupArn(ResourceGroupArnT&& value) { SetResourceGroupArn(std::forward<ResourceGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the resource.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Resource& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    Resource& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the resource was associated with the resource
     * share.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Resource& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date an time when the association between the resource and the resource
     * share was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Resource& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the scope of visibility of this resource:</p> <ul> <li> <p>
     * <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline ResourceRegionScope GetResourceRegionScope() const { return m_resourceRegionScope; }
    inline bool ResourceRegionScopeHasBeenSet() const { return m_resourceRegionScopeHasBeenSet; }
    inline void SetResourceRegionScope(ResourceRegionScope value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = value; }
    inline Resource& WithResourceRegionScope(ResourceRegionScope value) { SetResourceRegionScope(value); return *this;}
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

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    ResourceRegionScope m_resourceRegionScope{ResourceRegionScope::NOT_SET};
    bool m_resourceRegionScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
