/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/DestinationEndpointAssociatedResourceDetails.h>
#include <aws/mediaconnect/model/DestinationEndpointConfiguration.h>
#include <aws/mediaconnect/model/DestinationEndpointConnectionDetails.h>
#include <aws/mediaconnect/model/DestinationEndpointConnectionState.h>
#include <aws/mediaconnect/model/DestinationEndpointMessage.h>
#include <aws/mediaconnect/model/DestinationEndpointRegistrationState.h>
#include <aws/mediaconnect/model/DestinationEndpointType.h>
#include <aws/mediaconnect/model/EndpointEncryptionConfiguration.h>
#include <aws/mediaconnect/model/EndpointEncryptionType.h>
#include <aws/mediaconnect/model/EndpointLifecycle.h>
#include <aws/mediaconnect/model/ResourceShareDetails.h>
#include <aws/mediaconnect/model/ResourceShareOwnership.h>

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
 * <p>The details of a destination endpoint in MediaConnect, including its
 * configuration, state, and connection details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DestinationEndpoint">AWS
 * API Reference</a></p>
 */
class DestinationEndpoint {
 public:
  AWS_MEDIACONNECT_API DestinationEndpoint() = default;
  AWS_MEDIACONNECT_API DestinationEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API DestinationEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the destination endpoint.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DestinationEndpoint& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination endpoint.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DestinationEndpoint& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the destination endpoint.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DestinationEndpoint& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the destination endpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DestinationEndpoint& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon Web Services Region in which the destination endpoint
   * is located.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  DestinationEndpoint& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone in which the destination endpoint is located.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  DestinationEndpoint& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone in which the destination endpoint is
   * located.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  DestinationEndpoint& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the destination endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DestinationEndpoint& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the destination endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DestinationEndpoint& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that manages the lifecycle of the destination endpoint.</p>
   */
  inline EndpointLifecycle GetLifecycleManagement() const { return m_lifecycleManagement; }
  inline bool LifecycleManagementHasBeenSet() const { return m_lifecycleManagementHasBeenSet; }
  inline void SetLifecycleManagement(EndpointLifecycle value) {
    m_lifecycleManagementHasBeenSet = true;
    m_lifecycleManagement = value;
  }
  inline DestinationEndpoint& WithLifecycleManagement(EndpointLifecycle value) {
    SetLifecycleManagement(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status messages for the destination endpoint.</p>
   */
  inline const Aws::Vector<DestinationEndpointMessage>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<DestinationEndpointMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<DestinationEndpointMessage>>
  DestinationEndpoint& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = DestinationEndpointMessage>
  DestinationEndpoint& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the destination endpoint. Valid values include the following:</p>
   * <ul> <li> <p> <code>STANDARD</code> – A destination endpoint that represents an
   * external destination over a standard protocol, such as RTP, RIST, or SRT.</p>
   * </li> <li> <p> <code>ROUTER_INPUT</code> – A destination endpoint that
   * represents a router input.</p> </li> </ul>
   */
  inline DestinationEndpointType GetDestinationType() const { return m_destinationType; }
  inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
  inline void SetDestinationType(DestinationEndpointType value) {
    m_destinationTypeHasBeenSet = true;
    m_destinationType = value;
  }
  inline DestinationEndpoint& WithDestinationType(DestinationEndpointType value) {
    SetDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the destination endpoint.</p>
   */
  inline const DestinationEndpointConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = DestinationEndpointConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = DestinationEndpointConfiguration>
  DestinationEndpoint& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this account owns the destination endpoint or consumes it
   * from another account through RAM.</p>
   */
  inline ResourceShareOwnership GetResourceShareOwnership() const { return m_resourceShareOwnership; }
  inline bool ResourceShareOwnershipHasBeenSet() const { return m_resourceShareOwnershipHasBeenSet; }
  inline void SetResourceShareOwnership(ResourceShareOwnership value) {
    m_resourceShareOwnershipHasBeenSet = true;
    m_resourceShareOwnership = value;
  }
  inline DestinationEndpoint& WithResourceShareOwnership(ResourceShareOwnership value) {
    SetResourceShareOwnership(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ResourceShareDetails& GetResourceShareDetails() const { return m_resourceShareDetails; }
  inline bool ResourceShareDetailsHasBeenSet() const { return m_resourceShareDetailsHasBeenSet; }
  template <typename ResourceShareDetailsT = ResourceShareDetails>
  void SetResourceShareDetails(ResourceShareDetailsT&& value) {
    m_resourceShareDetailsHasBeenSet = true;
    m_resourceShareDetails = std::forward<ResourceShareDetailsT>(value);
  }
  template <typename ResourceShareDetailsT = ResourceShareDetails>
  DestinationEndpoint& WithResourceShareDetails(ResourceShareDetailsT&& value) {
    SetResourceShareDetails(std::forward<ResourceShareDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The registration state of the destination endpoint. Valid values include the
   * following:</p> <ul> <li> <p> <code>REGISTERED</code> – The destination endpoint
   * is registered and ready to use.</p> </li> <li> <p> <code>REGISTERING</code> –
   * MediaConnect is registering the destination endpoint.</p> </li> <li> <p>
   * <code>DEREGISTERING</code> – MediaConnect is deregistering the destination
   * endpoint.</p> </li> <li> <p> <code>REGISTRATION_FAILED</code> – MediaConnect
   * couldn't register the destination endpoint.</p> </li> </ul>
   */
  inline DestinationEndpointRegistrationState GetRegistrationState() const { return m_registrationState; }
  inline bool RegistrationStateHasBeenSet() const { return m_registrationStateHasBeenSet; }
  inline void SetRegistrationState(DestinationEndpointRegistrationState value) {
    m_registrationStateHasBeenSet = true;
    m_registrationState = value;
  }
  inline DestinationEndpoint& WithRegistrationState(DestinationEndpointRegistrationState value) {
    SetRegistrationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection details for the destination endpoint.</p>
   */
  inline const DestinationEndpointConnectionDetails& GetConnectionDetails() const { return m_connectionDetails; }
  inline bool ConnectionDetailsHasBeenSet() const { return m_connectionDetailsHasBeenSet; }
  template <typename ConnectionDetailsT = DestinationEndpointConnectionDetails>
  void SetConnectionDetails(ConnectionDetailsT&& value) {
    m_connectionDetailsHasBeenSet = true;
    m_connectionDetails = std::forward<ConnectionDetailsT>(value);
  }
  template <typename ConnectionDetailsT = DestinationEndpointConnectionDetails>
  DestinationEndpoint& WithConnectionDetails(ConnectionDetailsT&& value) {
    SetConnectionDetails(std::forward<ConnectionDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection state of the destination endpoint. Valid values include the
   * following:</p> <ul> <li> <p> <code>CONNECTED</code> – The destination endpoint
   * is connected to a source endpoint.</p> </li> <li> <p> <code>DISCONNECTED</code>
   * – The destination endpoint isn't connected to a source endpoint.</p> </li> <li>
   * <p> <code>CONNECTING</code> – The destination endpoint is connecting to a source
   * endpoint.</p> </li> <li> <p> <code>DISCONNECTING</code> – The destination
   * endpoint is disconnecting from a source endpoint.</p> </li> </ul>
   */
  inline DestinationEndpointConnectionState GetConnectionState() const { return m_connectionState; }
  inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
  inline void SetConnectionState(DestinationEndpointConnectionState value) {
    m_connectionStateHasBeenSet = true;
    m_connectionState = value;
  }
  inline DestinationEndpoint& WithConnectionState(DestinationEndpointConnectionState value) {
    SetConnectionState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source endpoint that is connected to
   * the destination endpoint.</p>
   */
  inline const Aws::String& GetConnectedSource() const { return m_connectedSource; }
  inline bool ConnectedSourceHasBeenSet() const { return m_connectedSourceHasBeenSet; }
  template <typename ConnectedSourceT = Aws::String>
  void SetConnectedSource(ConnectedSourceT&& value) {
    m_connectedSourceHasBeenSet = true;
    m_connectedSource = std::forward<ConnectedSourceT>(value);
  }
  template <typename ConnectedSourceT = Aws::String>
  DestinationEndpoint& WithConnectedSource(ConnectedSourceT&& value) {
    SetConnectedSource(std::forward<ConnectedSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of decryption used for the destination endpoint connection.</p>
   */
  inline EndpointEncryptionType GetDecryptionType() const { return m_decryptionType; }
  inline bool DecryptionTypeHasBeenSet() const { return m_decryptionTypeHasBeenSet; }
  inline void SetDecryptionType(EndpointEncryptionType value) {
    m_decryptionTypeHasBeenSet = true;
    m_decryptionType = value;
  }
  inline DestinationEndpoint& WithDecryptionType(EndpointEncryptionType value) {
    SetDecryptionType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EndpointEncryptionConfiguration& GetDecryptionConfiguration() const { return m_decryptionConfiguration; }
  inline bool DecryptionConfigurationHasBeenSet() const { return m_decryptionConfigurationHasBeenSet; }
  template <typename DecryptionConfigurationT = EndpointEncryptionConfiguration>
  void SetDecryptionConfiguration(DecryptionConfigurationT&& value) {
    m_decryptionConfigurationHasBeenSet = true;
    m_decryptionConfiguration = std::forward<DecryptionConfigurationT>(value);
  }
  template <typename DecryptionConfigurationT = EndpointEncryptionConfiguration>
  DestinationEndpoint& WithDecryptionConfiguration(DecryptionConfigurationT&& value) {
    SetDecryptionConfiguration(std::forward<DecryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the resource that is associated with the destination
   * endpoint.</p>
   */
  inline const DestinationEndpointAssociatedResourceDetails& GetAssociatedResourceDetails() const { return m_associatedResourceDetails; }
  inline bool AssociatedResourceDetailsHasBeenSet() const { return m_associatedResourceDetailsHasBeenSet; }
  template <typename AssociatedResourceDetailsT = DestinationEndpointAssociatedResourceDetails>
  void SetAssociatedResourceDetails(AssociatedResourceDetailsT&& value) {
    m_associatedResourceDetailsHasBeenSet = true;
    m_associatedResourceDetails = std::forward<AssociatedResourceDetailsT>(value);
  }
  template <typename AssociatedResourceDetailsT = DestinationEndpointAssociatedResourceDetails>
  DestinationEndpoint& WithAssociatedResourceDetails(AssociatedResourceDetailsT&& value) {
    SetAssociatedResourceDetails(std::forward<AssociatedResourceDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the destination endpoint. Each tag is a key-value
   * pair.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DestinationEndpoint& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DestinationEndpoint& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_description;

  Aws::String m_regionName;

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  EndpointLifecycle m_lifecycleManagement{EndpointLifecycle::NOT_SET};

  Aws::Vector<DestinationEndpointMessage> m_messages;

  DestinationEndpointType m_destinationType{DestinationEndpointType::NOT_SET};

  DestinationEndpointConfiguration m_configuration;

  ResourceShareOwnership m_resourceShareOwnership{ResourceShareOwnership::NOT_SET};

  ResourceShareDetails m_resourceShareDetails;

  DestinationEndpointRegistrationState m_registrationState{DestinationEndpointRegistrationState::NOT_SET};

  DestinationEndpointConnectionDetails m_connectionDetails;

  DestinationEndpointConnectionState m_connectionState{DestinationEndpointConnectionState::NOT_SET};

  Aws::String m_connectedSource;

  EndpointEncryptionType m_decryptionType{EndpointEncryptionType::NOT_SET};

  EndpointEncryptionConfiguration m_decryptionConfiguration;

  DestinationEndpointAssociatedResourceDetails m_associatedResourceDetails;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_regionNameHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_lifecycleManagementHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
  bool m_destinationTypeHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_resourceShareOwnershipHasBeenSet = false;
  bool m_resourceShareDetailsHasBeenSet = false;
  bool m_registrationStateHasBeenSet = false;
  bool m_connectionDetailsHasBeenSet = false;
  bool m_connectionStateHasBeenSet = false;
  bool m_connectedSourceHasBeenSet = false;
  bool m_decryptionTypeHasBeenSet = false;
  bool m_decryptionConfigurationHasBeenSet = false;
  bool m_associatedResourceDetailsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
