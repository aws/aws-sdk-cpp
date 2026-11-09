/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The configuration settings for a source endpoint that uses SRT in caller
 * mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SrtCallerStandardSourceEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class SrtCallerStandardSourceEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API SrtCallerStandardSourceEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API SrtCallerStandardSourceEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SrtCallerStandardSourceEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port on which the destination listens for the connection. The valid range
   * is 3000 to 30000.</p>
   */
  inline int GetDestinationIngestPort() const { return m_destinationIngestPort; }
  inline bool DestinationIngestPortHasBeenSet() const { return m_destinationIngestPortHasBeenSet; }
  inline void SetDestinationIngestPort(int value) {
    m_destinationIngestPortHasBeenSet = true;
    m_destinationIngestPort = value;
  }
  inline SrtCallerStandardSourceEndpointConfiguration& WithDestinationIngestPort(int value) {
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
  inline SrtCallerStandardSourceEndpointConfiguration& WithMinimumLatencyMilliseconds(long long value) {
    SetMinimumLatencyMilliseconds(value);
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
  SrtCallerStandardSourceEndpointConfiguration& WithEncryptionPassphrase(EncryptionPassphraseT&& value) {
    SetEncryptionPassphrase(std::forward<EncryptionPassphraseT>(value));
    return *this;
  }
  ///@}
 private:
  int m_destinationIngestPort{0};

  long long m_minimumLatencyMilliseconds{0};

  EndpointEncryptionSecretConfiguration m_encryptionPassphrase;
  bool m_destinationIngestPortHasBeenSet = false;
  bool m_minimumLatencyMillisecondsHasBeenSet = false;
  bool m_encryptionPassphraseHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
