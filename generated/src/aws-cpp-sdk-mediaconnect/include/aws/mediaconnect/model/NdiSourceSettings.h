/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p> The settings for the NDI® source. This includes the exact name of the
 * upstream NDI sender that you want to connect to your source. </p>  <p>When
 * you update the NDI source, include only the members you want to change.
 * MediaConnect leaves the members that you don't specify unchanged.</p>
 * <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/NdiSourceSettings">AWS
 * API Reference</a></p>
 */
class NdiSourceSettings {
 public:
  AWS_MEDIACONNECT_API NdiSourceSettings() = default;
  AWS_MEDIACONNECT_API NdiSourceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API NdiSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The exact name of an existing NDI sender that's registered with your
   * discovery server. If included, the format of this name must be <code>MACHINENAME
   * (ProgramName)</code>. </p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  NdiSourceSettings& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audio reference level of the NDI sender, in decibels relative to full
   * scale (dBFS). Common values are <code>-20</code> (NDI and SMPTE) and
   * <code>-18</code> (EBU). If you don't specify this field, MediaConnect uses
   * <code>-20</code>.</p>
   */
  inline int GetAudioReferenceLevel() const { return m_audioReferenceLevel; }
  inline bool AudioReferenceLevelHasBeenSet() const { return m_audioReferenceLevelHasBeenSet; }
  inline void SetAudioReferenceLevel(int value) {
    m_audioReferenceLevelHasBeenSet = true;
    m_audioReferenceLevel = value;
  }
  inline NdiSourceSettings& WithAudioReferenceLevel(int value) {
    SetAudioReferenceLevel(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceName;

  int m_audioReferenceLevel{0};
  bool m_sourceNameHasBeenSet = false;
  bool m_audioReferenceLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
