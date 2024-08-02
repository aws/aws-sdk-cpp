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
    AWS_RESILIENCEHUB_API GroupingResource();
    AWS_RESILIENCEHUB_API GroupingResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API GroupingResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the logical identifier of the resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const{ return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    inline void SetLogicalResourceId(const LogicalResourceId& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }
    inline void SetLogicalResourceId(LogicalResourceId&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }
    inline GroupingResource& WithLogicalResourceId(const LogicalResourceId& value) { SetLogicalResourceId(value); return *this;}
    inline GroupingResource& WithLogicalResourceId(LogicalResourceId&& value) { SetLogicalResourceId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the physical identifier of the resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const{ return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    inline void SetPhysicalResourceId(const PhysicalResourceId& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }
    inline void SetPhysicalResourceId(PhysicalResourceId&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }
    inline GroupingResource& WithPhysicalResourceId(const PhysicalResourceId& value) { SetPhysicalResourceId(value); return *this;}
    inline GroupingResource& WithPhysicalResourceId(PhysicalResourceId&& value) { SetPhysicalResourceId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the resource name.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline GroupingResource& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline GroupingResource& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline GroupingResource& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline GroupingResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline GroupingResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline GroupingResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the identifier of the source AppComponents in which the resources
     * were previously grouped into.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceAppComponentIds() const{ return m_sourceAppComponentIds; }
    inline bool SourceAppComponentIdsHasBeenSet() const { return m_sourceAppComponentIdsHasBeenSet; }
    inline void SetSourceAppComponentIds(const Aws::Vector<Aws::String>& value) { m_sourceAppComponentIdsHasBeenSet = true; m_sourceAppComponentIds = value; }
    inline void SetSourceAppComponentIds(Aws::Vector<Aws::String>&& value) { m_sourceAppComponentIdsHasBeenSet = true; m_sourceAppComponentIds = std::move(value); }
    inline GroupingResource& WithSourceAppComponentIds(const Aws::Vector<Aws::String>& value) { SetSourceAppComponentIds(value); return *this;}
    inline GroupingResource& WithSourceAppComponentIds(Aws::Vector<Aws::String>&& value) { SetSourceAppComponentIds(std::move(value)); return *this;}
    inline GroupingResource& AddSourceAppComponentIds(const Aws::String& value) { m_sourceAppComponentIdsHasBeenSet = true; m_sourceAppComponentIds.push_back(value); return *this; }
    inline GroupingResource& AddSourceAppComponentIds(Aws::String&& value) { m_sourceAppComponentIdsHasBeenSet = true; m_sourceAppComponentIds.push_back(std::move(value)); return *this; }
    inline GroupingResource& AddSourceAppComponentIds(const char* value) { m_sourceAppComponentIdsHasBeenSet = true; m_sourceAppComponentIds.push_back(value); return *this; }
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
