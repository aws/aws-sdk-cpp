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
    AWS_RAM_API ServiceNameAndResourceType();
    AWS_RAM_API ServiceNameAndResourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ServiceNameAndResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the resource.</p>
     */
    inline ServiceNameAndResourceType& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource.</p>
     */
    inline ServiceNameAndResourceType& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the resource.</p>
     */
    inline ServiceNameAndResourceType& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline ServiceNameAndResourceType& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline ServiceNameAndResourceType& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services service to which resources of this type
     * belong.</p>
     */
    inline ServiceNameAndResourceType& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>Specifies the scope of visibility of resources of this type:</p> <ul> <li>
     * <p> <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline const ResourceRegionScope& GetResourceRegionScope() const{ return m_resourceRegionScope; }

    /**
     * <p>Specifies the scope of visibility of resources of this type:</p> <ul> <li>
     * <p> <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline bool ResourceRegionScopeHasBeenSet() const { return m_resourceRegionScopeHasBeenSet; }

    /**
     * <p>Specifies the scope of visibility of resources of this type:</p> <ul> <li>
     * <p> <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline void SetResourceRegionScope(const ResourceRegionScope& value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = value; }

    /**
     * <p>Specifies the scope of visibility of resources of this type:</p> <ul> <li>
     * <p> <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline void SetResourceRegionScope(ResourceRegionScope&& value) { m_resourceRegionScopeHasBeenSet = true; m_resourceRegionScope = std::move(value); }

    /**
     * <p>Specifies the scope of visibility of resources of this type:</p> <ul> <li>
     * <p> <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline ServiceNameAndResourceType& WithResourceRegionScope(const ResourceRegionScope& value) { SetResourceRegionScope(value); return *this;}

    /**
     * <p>Specifies the scope of visibility of resources of this type:</p> <ul> <li>
     * <p> <b>REGIONAL</b> – The resource can be accessed only by using requests that
     * target the Amazon Web Services Region in which the resource exists.</p> </li>
     * <li> <p> <b>GLOBAL</b> – The resource can be accessed from any Amazon Web
     * Services Region.</p> </li> </ul>
     */
    inline ServiceNameAndResourceType& WithResourceRegionScope(ResourceRegionScope&& value) { SetResourceRegionScope(std::move(value)); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ResourceRegionScope m_resourceRegionScope;
    bool m_resourceRegionScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
