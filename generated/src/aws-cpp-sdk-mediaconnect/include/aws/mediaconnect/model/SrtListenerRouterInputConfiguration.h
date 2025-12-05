/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * Transport) protocol in listener mode, including the port, minimum latency, and
 * decryption key configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SrtListenerRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class SrtListenerRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API SrtListenerRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API SrtListenerRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SrtListenerRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port number for the SRT protocol in listener mode.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline SrtListenerRouterInputConfiguration& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum latency in milliseconds for the SRT protocol in listener
   * mode.</p>
   */
  inline long long GetMinimumLatencyMilliseconds() const { return m_minimumLatencyMilliseconds; }
  inline bool MinimumLatencyMillisecondsHasBeenSet() const { return m_minimumLatencyMillisecondsHasBeenSet; }
  inline void SetMinimumLatencyMilliseconds(long long value) {
    m_minimumLatencyMillisecondsHasBeenSet = true;
    m_minimumLatencyMilliseconds = value;
  }
  inline SrtListenerRouterInputConfiguration& WithMinimumLatencyMilliseconds(long long value) {
    SetMinimumLatencyMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the decryption settings for an SRT listener input, including the
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
  SrtListenerRouterInputConfiguration& WithDecryptionConfiguration(DecryptionConfigurationT&& value) {
    SetDecryptionConfiguration(std::forward<DecryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  int m_port{0};

  long long m_minimumLatencyMilliseconds{0};

  SrtDecryptionConfiguration m_decryptionConfiguration;
  bool m_portHasBeenSet = false;
  bool m_minimumLatencyMillisecondsHasBeenSet = false;
  bool m_decryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
