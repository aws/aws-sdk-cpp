/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/Recording.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>The audio that you provide to create a custom voice.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/VoiceCreationData">AWS
 * API Reference</a></p>
 */
class VoiceCreationData {
 public:
  AWS_POLLY_API VoiceCreationData() = default;
  AWS_POLLY_API VoiceCreationData(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API VoiceCreationData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recordings of the speaker. Each recording specifies its audio format and
   * its audio source.</p>
   */
  inline const Aws::Vector<Recording>& GetRecordings() const { return m_recordings; }
  inline bool RecordingsHasBeenSet() const { return m_recordingsHasBeenSet; }
  template <typename RecordingsT = Aws::Vector<Recording>>
  void SetRecordings(RecordingsT&& value) {
    m_recordingsHasBeenSet = true;
    m_recordings = std::forward<RecordingsT>(value);
  }
  template <typename RecordingsT = Aws::Vector<Recording>>
  VoiceCreationData& WithRecordings(RecordingsT&& value) {
    SetRecordings(std::forward<RecordingsT>(value));
    return *this;
  }
  template <typename RecordingsT = Recording>
  VoiceCreationData& AddRecordings(RecordingsT&& value) {
    m_recordingsHasBeenSet = true;
    m_recordings.emplace_back(std::forward<RecordingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Recording> m_recordings;
  bool m_recordingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
