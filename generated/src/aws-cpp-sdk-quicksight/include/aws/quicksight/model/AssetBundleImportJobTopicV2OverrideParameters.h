/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>The override parameters for a single topic that is being
 * imported.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobTopicV2OverrideParameters">AWS
 * API Reference</a></p>
 */
class AssetBundleImportJobTopicV2OverrideParameters {
 public:
  AWS_QUICKSIGHT_API AssetBundleImportJobTopicV2OverrideParameters() = default;
  AWS_QUICKSIGHT_API AssetBundleImportJobTopicV2OverrideParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AssetBundleImportJobTopicV2OverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the topic that you want to apply overrides to.</p>
   */
  inline const Aws::String& GetTopicId() const { return m_topicId; }
  inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
  template <typename TopicIdT = Aws::String>
  void SetTopicId(TopicIdT&& value) {
    m_topicIdHasBeenSet = true;
    m_topicId = std::forward<TopicIdT>(value);
  }
  template <typename TopicIdT = Aws::String>
  AssetBundleImportJobTopicV2OverrideParameters& WithTopicId(TopicIdT&& value) {
    SetTopicId(std::forward<TopicIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new name for the topic.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AssetBundleImportJobTopicV2OverrideParameters& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the topic.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AssetBundleImportJobTopicV2OverrideParameters& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_topicId;

  Aws::String m_name;

  Aws::String m_description;
  bool m_topicIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
