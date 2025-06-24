/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/ResourceTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-instances/model/Tag.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines tagging configuration for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/TagSpecification">AWS
   * API Reference</a></p>
   */
  class TagSpecification
  {
  public:
    AWS_WORKSPACESINSTANCES_API TagSpecification() = default;
    AWS_WORKSPACESINSTANCES_API TagSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API TagSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of resource being tagged.</p>
     */
    inline ResourceTypeEnum GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceTypeEnum value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TagSpecification& WithResourceType(ResourceTypeEnum value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Collection of tags for the specified resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TagSpecification& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TagSpecification& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    ResourceTypeEnum m_resourceType{ResourceTypeEnum::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
