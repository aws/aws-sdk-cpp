/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AudioExtractionStatus.h>

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
 * <p>The configuration for audio extraction from knowledge base
 * documents.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AudioExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class AudioExtractionConfiguration {
 public:
  AWS_QUICKSIGHT_API AudioExtractionConfiguration() = default;
  AWS_QUICKSIGHT_API AudioExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AudioExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of audio extraction. Valid values are ENABLED and DISABLED.</p>
   */
  inline AudioExtractionStatus GetAudioExtractionStatus() const { return m_audioExtractionStatus; }
  inline bool AudioExtractionStatusHasBeenSet() const { return m_audioExtractionStatusHasBeenSet; }
  inline void SetAudioExtractionStatus(AudioExtractionStatus value) {
    m_audioExtractionStatusHasBeenSet = true;
    m_audioExtractionStatus = value;
  }
  inline AudioExtractionConfiguration& WithAudioExtractionStatus(AudioExtractionStatus value) {
    SetAudioExtractionStatus(value);
    return *this;
  }
  ///@}
 private:
  AudioExtractionStatus m_audioExtractionStatus{AudioExtractionStatus::NOT_SET};
  bool m_audioExtractionStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
