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


    ///@{
    /**
     * <p>Logical resource identifier for the unsupported resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const{ return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    inline void SetLogicalResourceId(const LogicalResourceId& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }
    inline void SetLogicalResourceId(LogicalResourceId&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }
    inline UnsupportedResource& WithLogicalResourceId(const LogicalResourceId& value) { SetLogicalResourceId(value); return *this;}
    inline UnsupportedResource& WithLogicalResourceId(LogicalResourceId&& value) { SetLogicalResourceId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Physical resource identifier for the unsupported resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const{ return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    inline void SetPhysicalResourceId(const PhysicalResourceId& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }
    inline void SetPhysicalResourceId(PhysicalResourceId&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }
    inline UnsupportedResource& WithPhysicalResourceId(const PhysicalResourceId& value) { SetPhysicalResourceId(value); return *this;}
    inline UnsupportedResource& WithPhysicalResourceId(PhysicalResourceId&& value) { SetPhysicalResourceId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline UnsupportedResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline UnsupportedResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline UnsupportedResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline const Aws::String& GetUnsupportedResourceStatus() const{ return m_unsupportedResourceStatus; }
    inline bool UnsupportedResourceStatusHasBeenSet() const { return m_unsupportedResourceStatusHasBeenSet; }
    inline void SetUnsupportedResourceStatus(const Aws::String& value) { m_unsupportedResourceStatusHasBeenSet = true; m_unsupportedResourceStatus = value; }
    inline void SetUnsupportedResourceStatus(Aws::String&& value) { m_unsupportedResourceStatusHasBeenSet = true; m_unsupportedResourceStatus = std::move(value); }
    inline void SetUnsupportedResourceStatus(const char* value) { m_unsupportedResourceStatusHasBeenSet = true; m_unsupportedResourceStatus.assign(value); }
    inline UnsupportedResource& WithUnsupportedResourceStatus(const Aws::String& value) { SetUnsupportedResourceStatus(value); return *this;}
    inline UnsupportedResource& WithUnsupportedResourceStatus(Aws::String&& value) { SetUnsupportedResourceStatus(std::move(value)); return *this;}
    inline UnsupportedResource& WithUnsupportedResourceStatus(const char* value) { SetUnsupportedResourceStatus(value); return *this;}
    ///@}
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
