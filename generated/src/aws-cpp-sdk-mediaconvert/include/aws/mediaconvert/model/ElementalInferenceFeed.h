/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ElementalInferenceFeedManagementState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Elemental Inference Feed.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ElementalInferenceFeed">AWS
 * API Reference</a></p>
 */
class ElementalInferenceFeed {
 public:
  AWS_MEDIACONVERT_API ElementalInferenceFeed() = default;
  AWS_MEDIACONVERT_API ElementalInferenceFeed(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API ElementalInferenceFeed& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Feed ARN.
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ElementalInferenceFeed& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Elemental Inference Feed management state.
   */
  inline ElementalInferenceFeedManagementState GetFeedManagementState() const { return m_feedManagementState; }
  inline bool FeedManagementStateHasBeenSet() const { return m_feedManagementStateHasBeenSet; }
  inline void SetFeedManagementState(ElementalInferenceFeedManagementState value) {
    m_feedManagementStateHasBeenSet = true;
    m_feedManagementState = value;
  }
  inline ElementalInferenceFeed& WithFeedManagementState(ElementalInferenceFeedManagementState value) {
    SetFeedManagementState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  ElementalInferenceFeedManagementState m_feedManagementState{ElementalInferenceFeedManagementState::NOT_SET};
  bool m_arnHasBeenSet = false;
  bool m_feedManagementStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
