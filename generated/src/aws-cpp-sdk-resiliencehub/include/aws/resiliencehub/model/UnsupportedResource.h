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
    AWS_RESILIENCEHUB_API UnsupportedResource() = default;
    AWS_RESILIENCEHUB_API UnsupportedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API UnsupportedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Logical resource identifier for the unsupported resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = LogicalResourceId>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = LogicalResourceId>
    UnsupportedResource& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Physical resource identifier for the unsupported resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = PhysicalResourceId>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = PhysicalResourceId>
    UnsupportedResource& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    UnsupportedResource& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the unsupported resource.</p>
     */
    inline const Aws::String& GetUnsupportedResourceStatus() const { return m_unsupportedResourceStatus; }
    inline bool UnsupportedResourceStatusHasBeenSet() const { return m_unsupportedResourceStatusHasBeenSet; }
    template<typename UnsupportedResourceStatusT = Aws::String>
    void SetUnsupportedResourceStatus(UnsupportedResourceStatusT&& value) { m_unsupportedResourceStatusHasBeenSet = true; m_unsupportedResourceStatus = std::forward<UnsupportedResourceStatusT>(value); }
    template<typename UnsupportedResourceStatusT = Aws::String>
    UnsupportedResource& WithUnsupportedResourceStatus(UnsupportedResourceStatusT&& value) { SetUnsupportedResourceStatus(std::forward<UnsupportedResourceStatusT>(value)); return *this;}
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
