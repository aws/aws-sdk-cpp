/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EndpointEncryptionSecretConfiguration.h>

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
 * <p>The configuration settings for a source endpoint that uses SRT in listener
 * mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SrtListenerStandardSourceEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class SrtListenerStandardSourceEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API SrtListenerStandardSourceEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API SrtListenerStandardSourceEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SrtListenerStandardSourceEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port that the source endpoint listens on for incoming connections. The
   * valid range is 1024 to 65535.</p>
   */
  inline int GetSourceListenerPort() const { return m_sourceListenerPort; }
  inline bool SourceListenerPortHasBeenSet() const { return m_sourceListenerPortHasBeenSet; }
  inline void SetSourceListenerPort(int value) {
    m_sourceListenerPortHasBeenSet = true;
    m_sourceListenerPort = value;
  }
  inline SrtListenerStandardSourceEndpointConfiguration& WithSourceListenerPort(int value) {
    SetSourceListenerPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address that the source endpoint listens on for incoming
   * connections.</p>
   */
  inline const Aws::String& GetSourceAddress() const { return m_sourceAddress; }
  inline bool SourceAddressHasBeenSet() const { return m_sourceAddressHasBeenSet; }
  template <typename SourceAddressT = Aws::String>
  void SetSourceAddress(SourceAddressT&& value) {
    m_sourceAddressHasBeenSet = true;
    m_sourceAddress = std::forward<SourceAddressT>(value);
  }
  template <typename SourceAddressT = Aws::String>
  SrtListenerStandardSourceEndpointConfiguration& WithSourceAddress(SourceAddressT&& value) {
    SetSourceAddress(std::forward<SourceAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum latency, in milliseconds, for the SRT connection. The valid range
   * is 10 to 10000.</p>
   */
  inline long long GetMinimumLatencyMilliseconds() const { return m_minimumLatencyMilliseconds; }
  inline bool MinimumLatencyMillisecondsHasBeenSet() const { return m_minimumLatencyMillisecondsHasBeenSet; }
  inline void SetMinimumLatencyMilliseconds(long long value) {
    m_minimumLatencyMillisecondsHasBeenSet = true;
    m_minimumLatencyMilliseconds = value;
  }
  inline SrtListenerStandardSourceEndpointConfiguration& WithMinimumLatencyMilliseconds(long long value) {
    SetMinimumLatencyMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stream ID that identifies the content for the SRT connection.</p>
   */
  inline const Aws::String& GetStreamId() const { return m_streamId; }
  inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
  template <typename StreamIdT = Aws::String>
  void SetStreamId(StreamIdT&& value) {
    m_streamIdHasBeenSet = true;
    m_streamId = std::forward<StreamIdT>(value);
  }
  template <typename StreamIdT = Aws::String>
  SrtListenerStandardSourceEndpointConfiguration& WithStreamId(StreamIdT&& value) {
    SetStreamId(std::forward<StreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EndpointEncryptionSecretConfiguration& GetEncryptionPassphrase() const { return m_encryptionPassphrase; }
  inline bool EncryptionPassphraseHasBeenSet() const { return m_encryptionPassphraseHasBeenSet; }
  template <typename EncryptionPassphraseT = EndpointEncryptionSecretConfiguration>
  void SetEncryptionPassphrase(EncryptionPassphraseT&& value) {
    m_encryptionPassphraseHasBeenSet = true;
    m_encryptionPassphrase = std::forward<EncryptionPassphraseT>(value);
  }
  template <typename EncryptionPassphraseT = EndpointEncryptionSecretConfiguration>
  SrtListenerStandardSourceEndpointConfiguration& WithEncryptionPassphrase(EncryptionPassphraseT&& value) {
    SetEncryptionPassphrase(std::forward<EncryptionPassphraseT>(value));
    return *this;
  }
  ///@}
 private:
  int m_sourceListenerPort{0};

  Aws::String m_sourceAddress;

  long long m_minimumLatencyMilliseconds{0};

  Aws::String m_streamId;

  EndpointEncryptionSecretConfiguration m_encryptionPassphrase;
  bool m_sourceListenerPortHasBeenSet = false;
  bool m_sourceAddressHasBeenSet = false;
  bool m_minimumLatencyMillisecondsHasBeenSet = false;
  bool m_streamIdHasBeenSet = false;
  bool m_encryptionPassphraseHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
