/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SrtEncryptionConfiguration.h>

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
 * <p>The configuration settings for a router output using the SRT (Secure Reliable
 * Transport) protocol in caller mode, including the destination address and port,
 * minimum latency, stream ID, and encryption key configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SrtCallerRouterOutputConfiguration">AWS
 * API Reference</a></p>
 */
class SrtCallerRouterOutputConfiguration {
 public:
  AWS_MEDIACONNECT_API SrtCallerRouterOutputConfiguration() = default;
  AWS_MEDIACONNECT_API SrtCallerRouterOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SrtCallerRouterOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The destination IP address for the SRT protocol in caller mode.</p>
   */
  inline const Aws::String& GetDestinationAddress() const { return m_destinationAddress; }
  inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }
  template <typename DestinationAddressT = Aws::String>
  void SetDestinationAddress(DestinationAddressT&& value) {
    m_destinationAddressHasBeenSet = true;
    m_destinationAddress = std::forward<DestinationAddressT>(value);
  }
  template <typename DestinationAddressT = Aws::String>
  SrtCallerRouterOutputConfiguration& WithDestinationAddress(DestinationAddressT&& value) {
    SetDestinationAddress(std::forward<DestinationAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination port number for the SRT protocol in caller mode.</p>
   */
  inline int GetDestinationPort() const { return m_destinationPort; }
  inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
  inline void SetDestinationPort(int value) {
    m_destinationPortHasBeenSet = true;
    m_destinationPort = value;
  }
  inline SrtCallerRouterOutputConfiguration& WithDestinationPort(int value) {
    SetDestinationPort(value);
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
  inline SrtCallerRouterOutputConfiguration& WithMinimumLatencyMilliseconds(long long value) {
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
  SrtCallerRouterOutputConfiguration& WithStreamId(StreamIdT&& value) {
    SetStreamId(std::forward<StreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the encryption settings for an SRT caller output, including the
   * encryption key configuration and associated parameters.</p>
   */
  inline const SrtEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = SrtEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = SrtEncryptionConfiguration>
  SrtCallerRouterOutputConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationAddress;
  bool m_destinationAddressHasBeenSet = false;

  int m_destinationPort{0};
  bool m_destinationPortHasBeenSet = false;

  long long m_minimumLatencyMilliseconds{0};
  bool m_minimumLatencyMillisecondsHasBeenSet = false;

  Aws::String m_streamId;
  bool m_streamIdHasBeenSet = false;

  SrtEncryptionConfiguration m_encryptionConfiguration;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
