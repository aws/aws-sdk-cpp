/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about a shareable resource type and the Amazon Web Services
   * service to which resources of that type belong.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ServiceNameAndResourceType">AWS
   * API Reference</a></p>
   */
  class ServiceNameAndResourceType
  {
  public:
    AWS_RAM_API ServiceNameAndResourceType() = default;
    AWS_RAM_API ServiceNameAndResourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ServiceNameAndResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the resource. This takes the form of:
     * <code>service-code</code>:<code>resource-code</code>, and is case-insensitive.
     * For example, an Amazon EC2 Subnet would be represented by the string
     * <code>ec2:subnet</code>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ServiceNameAndResourceType& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ServiceNameAndResourceType& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the scope of visibility of resources of this type:</p> <ul> <li>
     * <p> <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline ResourceRegionScope GetResourceRegionScope() const { return m_resourceRegionScope; }
    inline bool ResourceRegionScopeHasBeenSet() const { return m_resourceRegionScopeHasBeenSet; }
    inline void SetResourceRegionScope(ResourceRegionScope value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = value; }
    inline ServiceNameAndResourceType& WithResourceRegionScope(ResourceRegionScope value) { SetResourceRegionScope(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ResourceRegionScope m_resourceRegionScope{ResourceRegionScope::NOT_SET};
    bool m_resourceRegionScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
