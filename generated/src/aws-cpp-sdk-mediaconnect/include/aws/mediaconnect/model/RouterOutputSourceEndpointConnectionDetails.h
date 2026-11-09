/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The connection details for a source endpoint that represents a router
 * output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutputSourceEndpointConnectionDetails">AWS
 * API Reference</a></p>
 */
class RouterOutputSourceEndpointConnectionDetails {
 public:
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointConnectionDetails() = default;
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  inline RouterOutputSourceEndpointConnectionDetails& WithDestinationDecryptionType(EndpointEncryptionType value) {
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
  RouterOutputSourceEndpointConnectionDetails& WithDestinationDecryptionConfiguration(DestinationDecryptionConfigurationT&& value) {
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
  inline RouterOutputSourceEndpointConnectionDetails& WithDestinationEndpointType(DestinationEndpointType value) {
    SetDestinationEndpointType(value);
    return *this;
  }
  ///@}
 private:
  EndpointEncryptionType m_destinationDecryptionType{EndpointEncryptionType::NOT_SET};

  EndpointEncryptionConfiguration m_destinationDecryptionConfiguration;

  DestinationEndpointType m_destinationEndpointType{DestinationEndpointType::NOT_SET};
  bool m_destinationDecryptionTypeHasBeenSet = false;
  bool m_destinationDecryptionConfigurationHasBeenSet = false;
  bool m_destinationEndpointTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
