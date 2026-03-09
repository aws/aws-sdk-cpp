/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Configures Elemental Inference features in a channel.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InferenceSettings">AWS
 * API Reference</a></p>
 */
class InferenceSettings {
 public:
  AWS_MEDIALIVE_API InferenceSettings() = default;
  AWS_MEDIALIVE_API InferenceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API InferenceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The ARN of the feed resource that is associated with this channel. The feed is a
   * resource in the Elemental Inference service.
   */
  inline const Aws::String& GetFeedArn() const { return m_feedArn; }
  inline bool FeedArnHasBeenSet() const { return m_feedArnHasBeenSet; }
  template <typename FeedArnT = Aws::String>
  void SetFeedArn(FeedArnT&& value) {
    m_feedArnHasBeenSet = true;
    m_feedArn = std::forward<FeedArnT>(value);
  }
  template <typename FeedArnT = Aws::String>
  InferenceSettings& WithFeedArn(FeedArnT&& value) {
    SetFeedArn(std::forward<FeedArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_feedArn;
  bool m_feedArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
