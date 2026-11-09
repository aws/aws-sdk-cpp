/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EndpointEncryptionConfiguration.h>
#include <aws/mediaconnect/model/EndpointEncryptionType.h>
#include <aws/mediaconnect/model/SourceEndpointType.h>

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
 * <p>The connection details for a standard destination endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardDestinationEndpointConnectionDetails">AWS
 * API Reference</a></p>
 */
class StandardDestinationEndpointConnectionDetails {
 public:
  AWS_MEDIACONNECT_API StandardDestinationEndpointConnectionDetails() = default;
  AWS_MEDIACONNECT_API StandardDestinationEndpointConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardDestinationEndpointConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP address of the source that is connected to the destination
   * endpoint.</p>
   */
  inline const Aws::String& GetSourceIpAddress() const { return m_sourceIpAddress; }
  inline bool SourceIpAddressHasBeenSet() const { return m_sourceIpAddressHasBeenSet; }
  template <typename SourceIpAddressT = Aws::String>
  void SetSourceIpAddress(SourceIpAddressT&& value) {
    m_sourceIpAddressHasBeenSet = true;
    m_sourceIpAddress = std::forward<SourceIpAddressT>(value);
  }
  template <typename SourceIpAddressT = Aws::String>
  StandardDestinationEndpointConnectionDetails& WithSourceIpAddress(SourceIpAddressT&& value) {
    SetSourceIpAddress(std::forward<SourceIpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on which the source listens for the connection.</p>
   */
  inline int GetSourceListenerPort() const { return m_sourceListenerPort; }
  inline bool SourceListenerPortHasBeenSet() const { return m_sourceListenerPortHasBeenSet; }
  inline void SetSourceListenerPort(int value) {
    m_sourceListenerPortHasBeenSet = true;
    m_sourceListenerPort = value;
  }
  inline StandardDestinationEndpointConnectionDetails& WithSourceListenerPort(int value) {
    SetSourceListenerPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of encryption that the source uses for the connection.</p>
   */
  inline EndpointEncryptionType GetSourceEncryptionType() const { return m_sourceEncryptionType; }
  inline bool SourceEncryptionTypeHasBeenSet() const { return m_sourceEncryptionTypeHasBeenSet; }
  inline void SetSourceEncryptionType(EndpointEncryptionType value) {
    m_sourceEncryptionTypeHasBeenSet = true;
    m_sourceEncryptionType = value;
  }
  inline StandardDestinationEndpointConnectionDetails& WithSourceEncryptionType(EndpointEncryptionType value) {
    SetSourceEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EndpointEncryptionConfiguration& GetSourceEncryptionConfiguration() const { return m_sourceEncryptionConfiguration; }
  inline bool SourceEncryptionConfigurationHasBeenSet() const { return m_sourceEncryptionConfigurationHasBeenSet; }
  template <typename SourceEncryptionConfigurationT = EndpointEncryptionConfiguration>
  void SetSourceEncryptionConfiguration(SourceEncryptionConfigurationT&& value) {
    m_sourceEncryptionConfigurationHasBeenSet = true;
    m_sourceEncryptionConfiguration = std::forward<SourceEncryptionConfigurationT>(value);
  }
  template <typename SourceEncryptionConfigurationT = EndpointEncryptionConfiguration>
  StandardDestinationEndpointConnectionDetails& WithSourceEncryptionConfiguration(SourceEncryptionConfigurationT&& value) {
    SetSourceEncryptionConfiguration(std::forward<SourceEncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the connected source endpoint.</p>
   */
  inline SourceEndpointType GetSourceEndpointType() const { return m_sourceEndpointType; }
  inline bool SourceEndpointTypeHasBeenSet() const { return m_sourceEndpointTypeHasBeenSet; }
  inline void SetSourceEndpointType(SourceEndpointType value) {
    m_sourceEndpointTypeHasBeenSet = true;
    m_sourceEndpointType = value;
  }
  inline StandardDestinationEndpointConnectionDetails& WithSourceEndpointType(SourceEndpointType value) {
    SetSourceEndpointType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceIpAddress;

  int m_sourceListenerPort{0};

  EndpointEncryptionType m_sourceEncryptionType{EndpointEncryptionType::NOT_SET};

  EndpointEncryptionConfiguration m_sourceEncryptionConfiguration;

  SourceEndpointType m_sourceEndpointType{SourceEndpointType::NOT_SET};
  bool m_sourceIpAddressHasBeenSet = false;
  bool m_sourceListenerPortHasBeenSet = false;
  bool m_sourceEncryptionTypeHasBeenSet = false;
  bool m_sourceEncryptionConfigurationHasBeenSet = false;
  bool m_sourceEndpointTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
