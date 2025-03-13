/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore/model/Tag.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class CreateContainerRequest : public MediaStoreRequest
  {
  public:
    AWS_MEDIASTORE_API CreateContainerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainer"; }

    AWS_MEDIASTORE_API Aws::String SerializePayload() const override;

    AWS_MEDIASTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the container. The name must be from 1 to 255 characters.
     * Container names must be unique to your AWS account within a specific region. As
     * an example, you could create a container named <code>movies</code> in every
     * region, as long as you don’t have an existing container with that name.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    CreateContainerRequest& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key:value pairs that you define. These values can be anything
     * that you want. Typically, the tag key represents a category (such as
     * "environment") and the tag value represents a specific value within that
     * category (such as "test," "development," or "production"). You can add up to 50
     * tags to each container. For more information about tagging, including naming and
     * usage conventions, see <a
     * href="https://docs.aws.amazon.com/mediastore/latest/ug/tagging.html">Tagging
     * Resources in MediaStore</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateContainerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateContainerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
