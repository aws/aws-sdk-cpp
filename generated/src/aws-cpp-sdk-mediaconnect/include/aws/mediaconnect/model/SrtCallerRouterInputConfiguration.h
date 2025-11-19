/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SrtDecryptionConfiguration.h>

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
 * <p>The configuration settings for a router input using the SRT (Secure Reliable
 * Transport) protocol in caller mode, including the source address and port,
 * minimum latency, stream ID, and decryption key configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SrtCallerRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class SrtCallerRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API SrtCallerRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API SrtCallerRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SrtCallerRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source IP address for the SRT protocol in caller mode.</p>
   */
  inline const Aws::String& GetSourceAddress() const { return m_sourceAddress; }
  inline bool SourceAddressHasBeenSet() const { return m_sourceAddressHasBeenSet; }
  template <typename SourceAddressT = Aws::String>
  void SetSourceAddress(SourceAddressT&& value) {
    m_sourceAddressHasBeenSet = true;
    m_sourceAddress = std::forward<SourceAddressT>(value);
  }
  template <typename SourceAddressT = Aws::String>
  SrtCallerRouterInputConfiguration& WithSourceAddress(SourceAddressT&& value) {
    SetSourceAddress(std::forward<SourceAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source port number for the SRT protocol in caller mode.</p>
   */
  inline int GetSourcePort() const { return m_sourcePort; }
  inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }
  inline void SetSourcePort(int value) {
    m_sourcePortHasBeenSet = true;
    m_sourcePort = value;
  }
  inline SrtCallerRouterInputConfiguration& WithSourcePort(int value) {
    SetSourcePort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum latency in milliseconds for the SRT protocol in caller mode.</p>
   */
  inline long long GetMinimumLatencyMilliseconds() const { return m_minimumLatencyMilliseconds; }
  inline bool MinimumLatencyMillisecondsHasBeenSet() const { return m_minimumLatencyMillisecondsHasBeenSet; }
  inline void SetMinimumLatencyMilliseconds(long long value) {
    m_minimumLatencyMillisecondsHasBeenSet = true;
    m_minimumLatencyMilliseconds = value;
  }
  inline SrtCallerRouterInputConfiguration& WithMinimumLatencyMilliseconds(long long value) {
    SetMinimumLatencyMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stream ID for the SRT protocol in caller mode.</p>
   */
  inline const Aws::String& GetStreamId() const { return m_streamId; }
  inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
  template <typename StreamIdT = Aws::String>
  void SetStreamId(StreamIdT&& value) {
    m_streamIdHasBeenSet = true;
    m_streamId = std::forward<StreamIdT>(value);
  }
  template <typename StreamIdT = Aws::String>
  SrtCallerRouterInputConfiguration& WithStreamId(StreamIdT&& value) {
    SetStreamId(std::forward<StreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the decryption settings for an SRT caller input, including the
   * encryption key configuration and associated parameters.</p>
   */
  inline const SrtDecryptionConfiguration& GetDecryptionConfiguration() const { return m_decryptionConfiguration; }
  inline bool DecryptionConfigurationHasBeenSet() const { return m_decryptionConfigurationHasBeenSet; }
  template <typename DecryptionConfigurationT = SrtDecryptionConfiguration>
  void SetDecryptionConfiguration(DecryptionConfigurationT&& value) {
    m_decryptionConfigurationHasBeenSet = true;
    m_decryptionConfiguration = std::forward<DecryptionConfigurationT>(value);
  }
  template <typename DecryptionConfigurationT = SrtDecryptionConfiguration>
  SrtCallerRouterInputConfiguration& WithDecryptionConfiguration(DecryptionConfigurationT&& value) {
    SetDecryptionConfiguration(std::forward<DecryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAddress;
  bool m_sourceAddressHasBeenSet = false;

  int m_sourcePort{0};
  bool m_sourcePortHasBeenSet = false;

  long long m_minimumLatencyMilliseconds{0};
  bool m_minimumLatencyMillisecondsHasBeenSet = false;

  Aws::String m_streamId;
  bool m_streamIdHasBeenSet = false;

  SrtDecryptionConfiguration m_decryptionConfiguration;
  bool m_decryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
