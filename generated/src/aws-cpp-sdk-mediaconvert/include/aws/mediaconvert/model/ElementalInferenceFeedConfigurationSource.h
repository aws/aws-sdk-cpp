/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
 * The source of your Elemental Inference Feed configuration.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ElementalInferenceFeedConfigurationSource">AWS
 * API Reference</a></p>
 */
class ElementalInferenceFeedConfigurationSource {
 public:
  AWS_MEDIACONVERT_API ElementalInferenceFeedConfigurationSource() = default;
  AWS_MEDIACONVERT_API ElementalInferenceFeedConfigurationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API ElementalInferenceFeedConfigurationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The ARN of an Elemental Inference Feed.
   */
  inline const Aws::String& GetFeedArn() const { return m_feedArn; }
  inline bool FeedArnHasBeenSet() const { return m_feedArnHasBeenSet; }
  template <typename FeedArnT = Aws::String>
  void SetFeedArn(FeedArnT&& value) {
    m_feedArnHasBeenSet = true;
    m_feedArn = std::forward<FeedArnT>(value);
  }
  template <typename FeedArnT = Aws::String>
  ElementalInferenceFeedConfigurationSource& WithFeedArn(FeedArnT&& value) {
    SetFeedArn(std::forward<FeedArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_feedArn;
  bool m_feedArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
