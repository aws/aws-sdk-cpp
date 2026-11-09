/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/DestinationEndpointType.h>
#include <aws/mediaconnect/model/EndpointEncryptionConfiguration.h>
#include <aws/mediaconnect/model/EndpointEncryptionType.h>

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
 * <p>The connection details for a standard source endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardSourceEndpointConnectionDetails">AWS
 * API Reference</a></p>
 */
class StandardSourceEndpointConnectionDetails {
 public:
  AWS_MEDIACONNECT_API StandardSourceEndpointConnectionDetails() = default;
  AWS_MEDIACONNECT_API StandardSourceEndpointConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardSourceEndpointConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP address of the destination that receives the content.</p>
   */
  inline const Aws::String& GetDestinationIpAddress() const { return m_destinationIpAddress; }
  inline bool DestinationIpAddressHasBeenSet() const { return m_destinationIpAddressHasBeenSet; }
  template <typename DestinationIpAddressT = Aws::String>
  void SetDestinationIpAddress(DestinationIpAddressT&& value) {
    m_destinationIpAddressHasBeenSet = true;
    m_destinationIpAddress = std::forward<DestinationIpAddressT>(value);
  }
  template <typename DestinationIpAddressT = Aws::String>
  StandardSourceEndpointConnectionDetails& WithDestinationIpAddress(DestinationIpAddressT&& value) {
    SetDestinationIpAddress(std::forward<DestinationIpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on the destination that receives the content.</p>
   */
  inline int GetDestinationIngestPort() const { return m_destinationIngestPort; }
  inline bool DestinationIngestPortHasBeenSet() const { return m_destinationIngestPortHasBeenSet; }
  inline void SetDestinationIngestPort(int value) {
    m_destinationIngestPortHasBeenSet = true;
    m_destinationIngestPort = value;
  }
  inline StandardSourceEndpointConnectionDetails& WithDestinationIngestPort(int value) {
    SetDestinationIngestPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of decryption that the destination uses for the connection.</p>
   */
  inline EndpointEncryptionType GetDestinationDecryptionType() const { return m_destinationDecryptionType; }
  inline bool DestinationDecryptionTypeHasBeenSet() const { return m_destinationDecryptionTypeHasBeenSet; }
  inline void SetDestinationDecryptionType(EndpointEncryptionType value) {
    m_destinationDecryptionTypeHasBeenSet = true;
    m_destinationDecryptionType = value;
  }
  inline StandardSourceEndpointConnectionDetails& WithDestinationDecryptionType(EndpointEncryptionType value) {
    SetDestinationDecryptionType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EndpointEncryptionConfiguration& GetDestinationDecryptionConfiguration() const {
    return m_destinationDecryptionConfiguration;
  }
  inline bool DestinationDecryptionConfigurationHasBeenSet() const { return m_destinationDecryptionConfigurationHasBeenSet; }
  template <typename DestinationDecryptionConfigurationT = EndpointEncryptionConfiguration>
  void SetDestinationDecryptionConfiguration(DestinationDecryptionConfigurationT&& value) {
    m_destinationDecryptionConfigurationHasBeenSet = true;
    m_destinationDecryptionConfiguration = std::forward<DestinationDecryptionConfigurationT>(value);
  }
  template <typename DestinationDecryptionConfigurationT = EndpointEncryptionConfiguration>
  StandardSourceEndpointConnectionDetails& WithDestinationDecryptionConfiguration(DestinationDecryptionConfigurationT&& value) {
    SetDestinationDecryptionConfiguration(std::forward<DestinationDecryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the connected destination endpoint.</p>
   */
  inline DestinationEndpointType GetDestinationEndpointType() const { return m_destinationEndpointType; }
  inline bool DestinationEndpointTypeHasBeenSet() const { return m_destinationEndpointTypeHasBeenSet; }
  inline void SetDestinationEndpointType(DestinationEndpointType value) {
    m_destinationEndpointTypeHasBeenSet = true;
    m_destinationEndpointType = value;
  }
  inline StandardSourceEndpointConnectionDetails& WithDestinationEndpointType(DestinationEndpointType value) {
    SetDestinationEndpointType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationIpAddress;

  int m_destinationIngestPort{0};

  EndpointEncryptionType m_destinationDecryptionType{EndpointEncryptionType::NOT_SET};

  EndpointEncryptionConfiguration m_destinationDecryptionConfiguration;

  DestinationEndpointType m_destinationEndpointType{DestinationEndpointType::NOT_SET};
  bool m_destinationIpAddressHasBeenSet = false;
  bool m_destinationIngestPortHasBeenSet = false;
  bool m_destinationDecryptionTypeHasBeenSet = false;
  bool m_destinationDecryptionConfigurationHasBeenSet = false;
  bool m_destinationEndpointTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
