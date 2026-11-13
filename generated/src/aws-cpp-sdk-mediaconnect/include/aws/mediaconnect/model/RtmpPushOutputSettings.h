/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/TlsEncryption.h>

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
 * <p>The settings for an output that pushes a stream to a destination using the
 * RTMP (Real-Time Messaging Protocol) protocol, or RTMPS (RTMP over TLS) when TLS
 * encryption is specified. These settings include the application and stream
 * names, and optional TLS encryption configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtmpPushOutputSettings">AWS
 * API Reference</a></p>
 */
class RtmpPushOutputSettings {
 public:
  AWS_MEDIACONNECT_API RtmpPushOutputSettings() = default;
  AWS_MEDIACONNECT_API RtmpPushOutputSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtmpPushOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the RTMP application on the destination server. Together with the
   * stream name, the application name forms the RTMP URL path, in the pattern
   * <code>rtmp://destinationAddress/applicationName/streamName</code>.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  RtmpPushOutputSettings& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the RTMP stream that the output publishes to the destination
   * application. The stream name forms the final segment of the RTMP URL path.</p>
   */
  inline const Aws::String& GetStreamName() const { return m_streamName; }
  inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
  template <typename StreamNameT = Aws::String>
  void SetStreamName(StreamNameT&& value) {
    m_streamNameHasBeenSet = true;
    m_streamName = std::forward<StreamNameT>(value);
  }
  template <typename StreamNameT = Aws::String>
  RtmpPushOutputSettings& WithStreamName(StreamNameT&& value) {
    SetStreamName(std::forward<StreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TLS encryption settings for the output. When you specify these settings,
   * the output uses RTMPS (RTMP over TLS) to establish a secure, encrypted
   * connection to the destination server.</p>
   */
  inline const TlsEncryption& GetTlsEncryption() const { return m_tlsEncryption; }
  inline bool TlsEncryptionHasBeenSet() const { return m_tlsEncryptionHasBeenSet; }
  template <typename TlsEncryptionT = TlsEncryption>
  void SetTlsEncryption(TlsEncryptionT&& value) {
    m_tlsEncryptionHasBeenSet = true;
    m_tlsEncryption = std::forward<TlsEncryptionT>(value);
  }
  template <typename TlsEncryptionT = TlsEncryption>
  RtmpPushOutputSettings& WithTlsEncryption(TlsEncryptionT&& value) {
    SetTlsEncryption(std::forward<TlsEncryptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::String m_streamName;

  TlsEncryption m_tlsEncryption;
  bool m_applicationNameHasBeenSet = false;
  bool m_streamNameHasBeenSet = false;
  bool m_tlsEncryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
