/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>An object that contains a list of tags to be assigned to a list of topic
 * IDs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobTopicV2OverrideTags">AWS
 * API Reference</a></p>
 */
class AssetBundleImportJobTopicV2OverrideTags {
 public:
  AWS_QUICKSIGHT_API AssetBundleImportJobTopicV2OverrideTags() = default;
  AWS_QUICKSIGHT_API AssetBundleImportJobTopicV2OverrideTags(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AssetBundleImportJobTopicV2OverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of topic IDs that you want to apply overrides to. You can use
   * <code>*</code> to override all topics in this asset bundle.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTopicIds() const { return m_topicIds; }
  inline bool TopicIdsHasBeenSet() const { return m_topicIdsHasBeenSet; }
  template <typename TopicIdsT = Aws::Vector<Aws::String>>
  void SetTopicIds(TopicIdsT&& value) {
    m_topicIdsHasBeenSet = true;
    m_topicIds = std::forward<TopicIdsT>(value);
  }
  template <typename TopicIdsT = Aws::Vector<Aws::String>>
  AssetBundleImportJobTopicV2OverrideTags& WithTopicIds(TopicIdsT&& value) {
    SetTopicIds(std::forward<TopicIdsT>(value));
    return *this;
  }
  template <typename TopicIdsT = Aws::String>
  AssetBundleImportJobTopicV2OverrideTags& AddTopicIds(TopicIdsT&& value) {
    m_topicIdsHasBeenSet = true;
    m_topicIds.emplace_back(std::forward<TopicIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags for the topics that you want to apply overrides to.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  AssetBundleImportJobTopicV2OverrideTags& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  AssetBundleImportJobTopicV2OverrideTags& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_topicIds;

  Aws::Vector<Tag> m_tags;
  bool m_topicIdsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
