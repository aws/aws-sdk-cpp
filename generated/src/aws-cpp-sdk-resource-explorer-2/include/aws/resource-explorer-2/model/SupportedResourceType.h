/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A structure that describes a resource type supported by Amazon Web Services
   * Resource Explorer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/SupportedResourceType">AWS
   * API Reference</a></p>
   */
  class SupportedResourceType
  {
  public:
    AWS_RESOURCEEXPLORER2_API SupportedResourceType();
    AWS_RESOURCEEXPLORER2_API SupportedResourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API SupportedResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The unique identifier of the resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The unique identifier of the resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The unique identifier of the resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The unique identifier of the resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The unique identifier of the resource type.</p>
     */
    inline SupportedResourceType& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The unique identifier of the resource type.</p>
     */
    inline SupportedResourceType& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the resource type.</p>
     */
    inline SupportedResourceType& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The Amazon Web Service that is associated with the resource type. This is the
     * primary service that lets you create and interact with resources of this
     * type.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The Amazon Web Service that is associated with the resource type. This is the
     * primary service that lets you create and interact with resources of this
     * type.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The Amazon Web Service that is associated with the resource type. This is the
     * primary service that lets you create and interact with resources of this
     * type.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The Amazon Web Service that is associated with the resource type. This is the
     * primary service that lets you create and interact with resources of this
     * type.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The Amazon Web Service that is associated with the resource type. This is the
     * primary service that lets you create and interact with resources of this
     * type.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The Amazon Web Service that is associated with the resource type. This is the
     * primary service that lets you create and interact with resources of this
     * type.</p>
     */
    inline SupportedResourceType& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The Amazon Web Service that is associated with the resource type. This is the
     * primary service that lets you create and interact with resources of this
     * type.</p>
     */
    inline SupportedResourceType& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Service that is associated with the resource type. This is the
     * primary service that lets you create and interact with resources of this
     * type.</p>
     */
    inline SupportedResourceType& WithService(const char* value) { SetService(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
