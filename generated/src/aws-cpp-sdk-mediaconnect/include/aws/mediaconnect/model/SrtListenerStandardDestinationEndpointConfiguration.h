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
 * <p>The configuration settings for a destination endpoint that uses SRT in
 * listener mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SrtListenerStandardDestinationEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class SrtListenerStandardDestinationEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API SrtListenerStandardDestinationEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API SrtListenerStandardDestinationEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SrtListenerStandardDestinationEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP address on which the destination endpoint listens for incoming
   * connections.</p>
   */
  inline const Aws::String& GetDestinationAddress() const { return m_destinationAddress; }
  inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }
  template <typename DestinationAddressT = Aws::String>
  void SetDestinationAddress(DestinationAddressT&& value) {
    m_destinationAddressHasBeenSet = true;
    m_destinationAddress = std::forward<DestinationAddressT>(value);
  }
  template <typename DestinationAddressT = Aws::String>
  SrtListenerStandardDestinationEndpointConfiguration& WithDestinationAddress(DestinationAddressT&& value) {
    SetDestinationAddress(std::forward<DestinationAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on which the destination endpoint listens for incoming connections.
   * The valid range is 0 to 65531.</p>
   */
  inline int GetDestinationIngestPort() const { return m_destinationIngestPort; }
  inline bool DestinationIngestPortHasBeenSet() const { return m_destinationIngestPortHasBeenSet; }
  inline void SetDestinationIngestPort(int value) {
    m_destinationIngestPortHasBeenSet = true;
    m_destinationIngestPort = value;
  }
  inline SrtListenerStandardDestinationEndpointConfiguration& WithDestinationIngestPort(int value) {
    SetDestinationIngestPort(value);
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
  inline SrtListenerStandardDestinationEndpointConfiguration& WithMinimumLatencyMilliseconds(long long value) {
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
  SrtListenerStandardDestinationEndpointConfiguration& WithStreamId(StreamIdT&& value) {
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
  SrtListenerStandardDestinationEndpointConfiguration& WithEncryptionPassphrase(EncryptionPassphraseT&& value) {
    SetEncryptionPassphrase(std::forward<EncryptionPassphraseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationAddress;

  int m_destinationIngestPort{0};

  long long m_minimumLatencyMilliseconds{0};

  Aws::String m_streamId;

  EndpointEncryptionSecretConfiguration m_encryptionPassphrase;
  bool m_destinationAddressHasBeenSet = false;
  bool m_destinationIngestPortHasBeenSet = false;
  bool m_minimumLatencyMillisecondsHasBeenSet = false;
  bool m_streamIdHasBeenSet = false;
  bool m_encryptionPassphraseHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
