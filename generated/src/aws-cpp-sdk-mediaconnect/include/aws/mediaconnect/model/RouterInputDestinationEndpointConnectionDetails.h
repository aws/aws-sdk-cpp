/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The connection details for a destination endpoint that represents a router
 * input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputDestinationEndpointConnectionDetails">AWS
 * API Reference</a></p>
 */
class RouterInputDestinationEndpointConnectionDetails {
 public:
  AWS_MEDIACONNECT_API RouterInputDestinationEndpointConnectionDetails() = default;
  AWS_MEDIACONNECT_API RouterInputDestinationEndpointConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputDestinationEndpointConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  inline RouterInputDestinationEndpointConnectionDetails& WithSourceEncryptionType(EndpointEncryptionType value) {
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
  RouterInputDestinationEndpointConnectionDetails& WithSourceEncryptionConfiguration(SourceEncryptionConfigurationT&& value) {
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
  inline RouterInputDestinationEndpointConnectionDetails& WithSourceEndpointType(SourceEndpointType value) {
    SetSourceEndpointType(value);
    return *this;
  }
  ///@}
 private:
  EndpointEncryptionType m_sourceEncryptionType{EndpointEncryptionType::NOT_SET};

  EndpointEncryptionConfiguration m_sourceEncryptionConfiguration;

  SourceEndpointType m_sourceEndpointType{SourceEndpointType::NOT_SET};
  bool m_sourceEncryptionTypeHasBeenSet = false;
  bool m_sourceEncryptionConfigurationHasBeenSet = false;
  bool m_sourceEndpointTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
