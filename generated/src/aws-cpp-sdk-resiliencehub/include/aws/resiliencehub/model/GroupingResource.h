/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/LogicalResourceId.h>
#include <aws/resiliencehub/model/PhysicalResourceId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Indicates the resource that will be grouped in the recommended Application
   * Component (AppComponent).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/GroupingResource">AWS
   * API Reference</a></p>
   */
  class GroupingResource
  {
  public:
    AWS_RESILIENCEHUB_API GroupingResource() = default;
    AWS_RESILIENCEHUB_API GroupingResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API GroupingResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the logical identifier of the resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = LogicalResourceId>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = LogicalResourceId>
    GroupingResource& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the physical identifier of the resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = PhysicalResourceId>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = PhysicalResourceId>
    GroupingResource& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the resource name.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    GroupingResource& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    GroupingResource& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the identifier of the source AppComponents in which the resources
     * were previously grouped into.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceAppComponentIds() const { return m_sourceAppComponentIds; }
    inline bool SourceAppComponentIdsHasBeenSet() const { return m_sourceAppComponentIdsHasBeenSet; }
    template<typename SourceAppComponentIdsT = Aws::Vector<Aws::String>>
    void SetSourceAppComponentIds(SourceAppComponentIdsT&& value) { m_sourceAppComponentIdsHasBeenSet = true; m_sourceAppComponentIds = std::forward<SourceAppComponentIdsT>(value); }
    template<typename SourceAppComponentIdsT = Aws::Vector<Aws::String>>
    GroupingResource& WithSourceAppComponentIds(SourceAppComponentIdsT&& value) { SetSourceAppComponentIds(std::forward<SourceAppComponentIdsT>(value)); return *this;}
    template<typename SourceAppComponentIdsT = Aws::String>
    GroupingResource& AddSourceAppComponentIds(SourceAppComponentIdsT&& value) { m_sourceAppComponentIdsHasBeenSet = true; m_sourceAppComponentIds.emplace_back(std::forward<SourceAppComponentIdsT>(value)); return *this; }
    ///@}
  private:

    LogicalResourceId m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    PhysicalResourceId m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceAppComponentIds;
    bool m_sourceAppComponentIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
