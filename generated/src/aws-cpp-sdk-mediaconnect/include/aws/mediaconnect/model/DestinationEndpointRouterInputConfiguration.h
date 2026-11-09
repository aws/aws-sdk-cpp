/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EndpointEncryptionConfiguration.h>
#include <aws/mediaconnect/model/EndpointEncryptionType.h>
#include <aws/mediaconnect/model/EndpointLifecycle.h>

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
 * <p>Configuration settings for a router input that is represented by a
 * destination endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DestinationEndpointRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class DestinationEndpointRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API DestinationEndpointRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API DestinationEndpointRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API DestinationEndpointRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The entity that manages the lifecycle of the associated destination endpoint.
   * Valid values include the following:</p> <ul> <li> <p> <code>MANAGED</code> –
   * MediaConnect manages the lifecycle of the associated destination endpoint.</p>
   * </li> <li> <p> <code>UNMANAGED</code> – You manage the lifecycle of the
   * associated destination endpoint.</p> </li> </ul>
   */
  inline EndpointLifecycle GetEndpointLifecycleManagement() const { return m_endpointLifecycleManagement; }
  inline bool EndpointLifecycleManagementHasBeenSet() const { return m_endpointLifecycleManagementHasBeenSet; }
  inline void SetEndpointLifecycleManagement(EndpointLifecycle value) {
    m_endpointLifecycleManagementHasBeenSet = true;
    m_endpointLifecycleManagement = value;
  }
  inline DestinationEndpointRouterInputConfiguration& WithEndpointLifecycleManagement(EndpointLifecycle value) {
    SetEndpointLifecycleManagement(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of transit decryption applied to the source content that this router
   * input receives. Valid values include the following:</p> <ul> <li> <p>
   * <code>SECRETS_MANAGER</code> – The decryption key or passphrase is stored in
   * Secrets Manager.</p> </li> <li> <p> <code>AUTOMATIC</code> – MediaConnect
   * determines the decryption key when the endpoint connects.</p> </li> </ul>
   */
  inline EndpointEncryptionType GetSourceTransitDecryptionType() const { return m_sourceTransitDecryptionType; }
  inline bool SourceTransitDecryptionTypeHasBeenSet() const { return m_sourceTransitDecryptionTypeHasBeenSet; }
  inline void SetSourceTransitDecryptionType(EndpointEncryptionType value) {
    m_sourceTransitDecryptionTypeHasBeenSet = true;
    m_sourceTransitDecryptionType = value;
  }
  inline DestinationEndpointRouterInputConfiguration& WithSourceTransitDecryptionType(EndpointEncryptionType value) {
    SetSourceTransitDecryptionType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EndpointEncryptionConfiguration& GetSourceTransitDecryption() const { return m_sourceTransitDecryption; }
  inline bool SourceTransitDecryptionHasBeenSet() const { return m_sourceTransitDecryptionHasBeenSet; }
  template <typename SourceTransitDecryptionT = EndpointEncryptionConfiguration>
  void SetSourceTransitDecryption(SourceTransitDecryptionT&& value) {
    m_sourceTransitDecryptionHasBeenSet = true;
    m_sourceTransitDecryption = std::forward<SourceTransitDecryptionT>(value);
  }
  template <typename SourceTransitDecryptionT = EndpointEncryptionConfiguration>
  DestinationEndpointRouterInputConfiguration& WithSourceTransitDecryption(SourceTransitDecryptionT&& value) {
    SetSourceTransitDecryption(std::forward<SourceTransitDecryptionT>(value));
    return *this;
  }
  ///@}
 private:
  EndpointLifecycle m_endpointLifecycleManagement{EndpointLifecycle::NOT_SET};

  EndpointEncryptionType m_sourceTransitDecryptionType{EndpointEncryptionType::NOT_SET};

  EndpointEncryptionConfiguration m_sourceTransitDecryption;
  bool m_endpointLifecycleManagementHasBeenSet = false;
  bool m_sourceTransitDecryptionTypeHasBeenSet = false;
  bool m_sourceTransitDecryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
