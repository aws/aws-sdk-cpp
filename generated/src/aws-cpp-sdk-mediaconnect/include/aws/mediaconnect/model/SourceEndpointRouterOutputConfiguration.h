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
 * <p>Configuration settings for a router output that is represented by a source
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SourceEndpointRouterOutputConfiguration">AWS
 * API Reference</a></p>
 */
class SourceEndpointRouterOutputConfiguration {
 public:
  AWS_MEDIACONNECT_API SourceEndpointRouterOutputConfiguration() = default;
  AWS_MEDIACONNECT_API SourceEndpointRouterOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SourceEndpointRouterOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The entity that manages the lifecycle of the associated source endpoint.
   * Valid values include the following:</p> <ul> <li> <p> <code>MANAGED</code> –
   * MediaConnect manages the lifecycle of the associated source endpoint.</p> </li>
   * <li> <p> <code>UNMANAGED</code> – You manage the lifecycle of the associated
   * source endpoint.</p> </li> </ul>
   */
  inline EndpointLifecycle GetEndpointLifecycleManagement() const { return m_endpointLifecycleManagement; }
  inline bool EndpointLifecycleManagementHasBeenSet() const { return m_endpointLifecycleManagementHasBeenSet; }
  inline void SetEndpointLifecycleManagement(EndpointLifecycle value) {
    m_endpointLifecycleManagementHasBeenSet = true;
    m_endpointLifecycleManagement = value;
  }
  inline SourceEndpointRouterOutputConfiguration& WithEndpointLifecycleManagement(EndpointLifecycle value) {
    SetEndpointLifecycleManagement(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of transit encryption applied to the destination content that this
   * router output sends. Valid values include the following:</p> <ul> <li> <p>
   * <code>SECRETS_MANAGER</code> – The encryption key or passphrase is stored in
   * Secrets Manager.</p> </li> <li> <p> <code>AUTOMATIC</code> – MediaConnect
   * determines the encryption key when the endpoint connects.</p> </li> </ul>
   */
  inline EndpointEncryptionType GetDestinationTransitEncryptionType() const { return m_destinationTransitEncryptionType; }
  inline bool DestinationTransitEncryptionTypeHasBeenSet() const { return m_destinationTransitEncryptionTypeHasBeenSet; }
  inline void SetDestinationTransitEncryptionType(EndpointEncryptionType value) {
    m_destinationTransitEncryptionTypeHasBeenSet = true;
    m_destinationTransitEncryptionType = value;
  }
  inline SourceEndpointRouterOutputConfiguration& WithDestinationTransitEncryptionType(EndpointEncryptionType value) {
    SetDestinationTransitEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EndpointEncryptionConfiguration& GetDestinationTransitEncryption() const { return m_destinationTransitEncryption; }
  inline bool DestinationTransitEncryptionHasBeenSet() const { return m_destinationTransitEncryptionHasBeenSet; }
  template <typename DestinationTransitEncryptionT = EndpointEncryptionConfiguration>
  void SetDestinationTransitEncryption(DestinationTransitEncryptionT&& value) {
    m_destinationTransitEncryptionHasBeenSet = true;
    m_destinationTransitEncryption = std::forward<DestinationTransitEncryptionT>(value);
  }
  template <typename DestinationTransitEncryptionT = EndpointEncryptionConfiguration>
  SourceEndpointRouterOutputConfiguration& WithDestinationTransitEncryption(DestinationTransitEncryptionT&& value) {
    SetDestinationTransitEncryption(std::forward<DestinationTransitEncryptionT>(value));
    return *this;
  }
  ///@}
 private:
  EndpointLifecycle m_endpointLifecycleManagement{EndpointLifecycle::NOT_SET};

  EndpointEncryptionType m_destinationTransitEncryptionType{EndpointEncryptionType::NOT_SET};

  EndpointEncryptionConfiguration m_destinationTransitEncryption;
  bool m_endpointLifecycleManagementHasBeenSet = false;
  bool m_destinationTransitEncryptionTypeHasBeenSet = false;
  bool m_destinationTransitEncryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
