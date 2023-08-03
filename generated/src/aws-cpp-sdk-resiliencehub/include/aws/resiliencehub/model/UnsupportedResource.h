/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/LogicalResourceId.h>
#include <aws/resiliencehub/model/PhysicalResourceId.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a resource that is not supported by Resilience Hub.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UnsupportedResource">AWS
   * API Reference</a></p>
   */
  class UnsupportedResource
  {
  public:
    AWS_RESILIENCEHUB_API UnsupportedResource();
    AWS_RESILIENCEHUB_API UnsupportedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API UnsupportedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Logical resource identifier for the unsupported resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>Logical resource identifier for the unsupported resource.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>Logical resource identifier for the unsupported resource.</p>
     */
    inline void SetLogicalResourceId(const LogicalResourceId& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>Logical resource identifier for the unsupported resource.</p>
     */
    inline void SetLogicalResourceId(LogicalResourceId&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>Logical resource identifier for the unsupported resource.</p>
     */
    inline UnsupportedResource& WithLogicalResourceId(const LogicalResourceId& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>Logical resource identifier for the unsupported resource.</p>
     */
    inline UnsupportedResource& WithLogicalResourceId(LogicalResourceId&& value) { SetLogicalResourceId(std::move(value)); return *this;}


    /**
     * <p>Physical resource identifier for the unsupported resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>Physical resource identifier for the unsupported resource.</p>
     */
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }

    /**
     * <p>Physical resource identifier for the unsupported resource.</p>
     */
    inline void SetPhysicalResourceId(const PhysicalResourceId& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>Physical resource identifier for the unsupported resource.</p>
     */
    inline void SetPhysicalResourceId(PhysicalResourceId&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }

    /**
     * <p>Physical resource identifier for the unsupported resource.</p>
     */
    inline UnsupportedResource& WithPhysicalResourceId(const PhysicalResourceId& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>Physical resource identifier for the unsupported resource.</p>
     */
    inline UnsupportedResource& WithPhysicalResourceId(PhysicalResourceId&& value) { SetPhysicalResourceId(std::move(value)); return *this;}


    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline UnsupportedResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline UnsupportedResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline UnsupportedResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline const Aws::String& GetUnsupportedResourceStatus() const{ return m_unsupportedResourceStatus; }

    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline bool UnsupportedResourceStatusHasBeenSet() const { return m_unsupportedResourceStatusHasBeenSet; }

    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline void SetUnsupportedResourceStatus(const Aws::String& value) { m_unsupportedResourceStatusHasBeenSet = true; m_unsupportedResourceStatus = value; }

    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline void SetUnsupportedResourceStatus(Aws::String&& value) { m_unsupportedResourceStatusHasBeenSet = true; m_unsupportedResourceStatus = std::move(value); }

    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline void SetUnsupportedResourceStatus(const char* value) { m_unsupportedResourceStatusHasBeenSet = true; m_unsupportedResourceStatus.assign(value); }

    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline UnsupportedResource& WithUnsupportedResourceStatus(const Aws::String& value) { SetUnsupportedResourceStatus(value); return *this;}

    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline UnsupportedResource& WithUnsupportedResourceStatus(Aws::String&& value) { SetUnsupportedResourceStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline UnsupportedResource& WithUnsupportedResourceStatus(const char* value) { SetUnsupportedResourceStatus(value); return *this;}

  private:

    LogicalResourceId m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    PhysicalResourceId m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_unsupportedResourceStatus;
    bool m_unsupportedResourceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
