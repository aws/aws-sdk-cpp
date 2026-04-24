/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/SrtListenerDecryption.h>

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
 * Settings for SRT Listener input.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtListenerSettings">AWS
 * API Reference</a></p>
 */
class SrtListenerSettings {
 public:
  AWS_MEDIALIVE_API SrtListenerSettings() = default;
  AWS_MEDIALIVE_API SrtListenerSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API SrtListenerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const SrtListenerDecryption& GetDecryption() const { return m_decryption; }
  inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }
  template <typename DecryptionT = SrtListenerDecryption>
  void SetDecryption(DecryptionT&& value) {
    m_decryptionHasBeenSet = true;
    m_decryption = std::forward<DecryptionT>(value);
  }
  template <typename DecryptionT = SrtListenerDecryption>
  SrtListenerSettings& WithDecryption(DecryptionT&& value) {
    SetDecryption(std::forward<DecryptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The preferred latency (in milliseconds) for implementing packet loss and
   * recovery. Range 120-15000.
   */
  inline int GetMinimumLatency() const { return m_minimumLatency; }
  inline bool MinimumLatencyHasBeenSet() const { return m_minimumLatencyHasBeenSet; }
  inline void SetMinimumLatency(int value) {
    m_minimumLatencyHasBeenSet = true;
    m_minimumLatency = value;
  }
  inline SrtListenerSettings& WithMinimumLatency(int value) {
    SetMinimumLatency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The stream ID, if the upstream system uses this identifier.
   */
  inline const Aws::String& GetStreamId() const { return m_streamId; }
  inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
  template <typename StreamIdT = Aws::String>
  void SetStreamId(StreamIdT&& value) {
    m_streamIdHasBeenSet = true;
    m_streamId = std::forward<StreamIdT>(value);
  }
  template <typename StreamIdT = Aws::String>
  SrtListenerSettings& WithStreamId(StreamIdT&& value) {
    SetStreamId(std::forward<StreamIdT>(value));
    return *this;
  }
  ///@}
 private:
  SrtListenerDecryption m_decryption;

  int m_minimumLatency{0};

  Aws::String m_streamId;
  bool m_decryptionHasBeenSet = false;
  bool m_minimumLatencyHasBeenSet = false;
  bool m_streamIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
