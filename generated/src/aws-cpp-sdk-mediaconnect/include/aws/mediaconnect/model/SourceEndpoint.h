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
#include <aws/mediaconnect/model/EndpointEncryptionConfiguration.h>
#include <aws/mediaconnect/model/EndpointEncryptionType.h>
#include <aws/mediaconnect/model/EndpointLifecycle.h>
#include <aws/mediaconnect/model/ResourceShareDetails.h>
#include <aws/mediaconnect/model/ResourceShareOwnership.h>
#include <aws/mediaconnect/model/SourceEndpointAssociatedResourceDetails.h>
#include <aws/mediaconnect/model/SourceEndpointConfiguration.h>
#include <aws/mediaconnect/model/SourceEndpointConnectionDetails.h>
#include <aws/mediaconnect/model/SourceEndpointConnectionState.h>
#include <aws/mediaconnect/model/SourceEndpointMessage.h>
#include <aws/mediaconnect/model/SourceEndpointRegistrationState.h>
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
 * <p>The details of a source endpoint in MediaConnect, including its
 * configuration, state, and connection details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SourceEndpoint">AWS
 * API Reference</a></p>
 */
class SourceEndpoint {
 public:
  AWS_MEDIACONNECT_API SourceEndpoint() = default;
  AWS_MEDIACONNECT_API SourceEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SourceEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the source endpoint.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SourceEndpoint& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source endpoint.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  SourceEndpoint& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the source endpoint.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  SourceEndpoint& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the source endpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SourceEndpoint& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon Web Services Region in which the source endpoint is
   * located.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  SourceEndpoint& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone in which the source endpoint is located.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  SourceEndpoint& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone in which the source endpoint is located.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  SourceEndpoint& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the source endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SourceEndpoint& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the source endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SourceEndpoint& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that manages the lifecycle of the source endpoint.</p>
   */
  inline EndpointLifecycle GetLifecycleManagement() const { return m_lifecycleManagement; }
  inline bool LifecycleManagementHasBeenSet() const { return m_lifecycleManagementHasBeenSet; }
  inline void SetLifecycleManagement(EndpointLifecycle value) {
    m_lifecycleManagementHasBeenSet = true;
    m_lifecycleManagement = value;
  }
  inline SourceEndpoint& WithLifecycleManagement(EndpointLifecycle value) {
    SetLifecycleManagement(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status messages for the source endpoint.</p>
   */
  inline const Aws::Vector<SourceEndpointMessage>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<SourceEndpointMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<SourceEndpointMessage>>
  SourceEndpoint& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = SourceEndpointMessage>
  SourceEndpoint& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the source endpoint. Valid values include the following:</p> <ul>
   * <li> <p> <code>STANDARD</code> – A source endpoint that represents an external
   * source over a standard protocol, such as RTP, RIST, or SRT.</p> </li> <li> <p>
   * <code>ROUTER_OUTPUT</code> – A source endpoint that represents a router
   * output.</p> </li> </ul>
   */
  inline SourceEndpointType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(SourceEndpointType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline SourceEndpoint& WithSourceType(SourceEndpointType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the source endpoint.</p>
   */
  inline const SourceEndpointConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = SourceEndpointConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = SourceEndpointConfiguration>
  SourceEndpoint& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this account owns the source endpoint or consumes it from
   * another account through RAM.</p>
   */
  inline ResourceShareOwnership GetResourceShareOwnership() const { return m_resourceShareOwnership; }
  inline bool ResourceShareOwnershipHasBeenSet() const { return m_resourceShareOwnershipHasBeenSet; }
  inline void SetResourceShareOwnership(ResourceShareOwnership value) {
    m_resourceShareOwnershipHasBeenSet = true;
    m_resourceShareOwnership = value;
  }
  inline SourceEndpoint& WithResourceShareOwnership(ResourceShareOwnership value) {
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
  SourceEndpoint& WithResourceShareDetails(ResourceShareDetailsT&& value) {
    SetResourceShareDetails(std::forward<ResourceShareDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The registration state of the source endpoint. Valid values include the
   * following:</p> <ul> <li> <p> <code>REGISTERED</code> – The source endpoint is
   * registered and ready to use.</p> </li> <li> <p> <code>REGISTERING</code> –
   * MediaConnect is registering the source endpoint.</p> </li> <li> <p>
   * <code>DEREGISTERING</code> – MediaConnect is deregistering the source
   * endpoint.</p> </li> <li> <p> <code>REGISTRATION_FAILED</code> – MediaConnect
   * couldn't register the source endpoint.</p> </li> </ul>
   */
  inline SourceEndpointRegistrationState GetRegistrationState() const { return m_registrationState; }
  inline bool RegistrationStateHasBeenSet() const { return m_registrationStateHasBeenSet; }
  inline void SetRegistrationState(SourceEndpointRegistrationState value) {
    m_registrationStateHasBeenSet = true;
    m_registrationState = value;
  }
  inline SourceEndpoint& WithRegistrationState(SourceEndpointRegistrationState value) {
    SetRegistrationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection state of the source endpoint. Valid values include the
   * following:</p> <ul> <li> <p> <code>CONNECTED</code> – The source endpoint is
   * connected to a destination endpoint.</p> </li> <li> <p>
   * <code>DISCONNECTED</code> – The source endpoint isn't connected to a destination
   * endpoint.</p> </li> <li> <p> <code>CONNECTING</code> – The source endpoint is
   * connecting to a destination endpoint.</p> </li> <li> <p>
   * <code>DISCONNECTING</code> – The source endpoint is disconnecting from a
   * destination endpoint.</p> </li> </ul>
   */
  inline SourceEndpointConnectionState GetConnectionState() const { return m_connectionState; }
  inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
  inline void SetConnectionState(SourceEndpointConnectionState value) {
    m_connectionStateHasBeenSet = true;
    m_connectionState = value;
  }
  inline SourceEndpoint& WithConnectionState(SourceEndpointConnectionState value) {
    SetConnectionState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection details for the source endpoint.</p>
   */
  inline const SourceEndpointConnectionDetails& GetConnectionDetails() const { return m_connectionDetails; }
  inline bool ConnectionDetailsHasBeenSet() const { return m_connectionDetailsHasBeenSet; }
  template <typename ConnectionDetailsT = SourceEndpointConnectionDetails>
  void SetConnectionDetails(ConnectionDetailsT&& value) {
    m_connectionDetailsHasBeenSet = true;
    m_connectionDetails = std::forward<ConnectionDetailsT>(value);
  }
  template <typename ConnectionDetailsT = SourceEndpointConnectionDetails>
  SourceEndpoint& WithConnectionDetails(ConnectionDetailsT&& value) {
    SetConnectionDetails(std::forward<ConnectionDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the destination endpoints that are
   * connected to the source endpoint.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConnectedDestinations() const { return m_connectedDestinations; }
  inline bool ConnectedDestinationsHasBeenSet() const { return m_connectedDestinationsHasBeenSet; }
  template <typename ConnectedDestinationsT = Aws::Vector<Aws::String>>
  void SetConnectedDestinations(ConnectedDestinationsT&& value) {
    m_connectedDestinationsHasBeenSet = true;
    m_connectedDestinations = std::forward<ConnectedDestinationsT>(value);
  }
  template <typename ConnectedDestinationsT = Aws::Vector<Aws::String>>
  SourceEndpoint& WithConnectedDestinations(ConnectedDestinationsT&& value) {
    SetConnectedDestinations(std::forward<ConnectedDestinationsT>(value));
    return *this;
  }
  template <typename ConnectedDestinationsT = Aws::String>
  SourceEndpoint& AddConnectedDestinations(ConnectedDestinationsT&& value) {
    m_connectedDestinationsHasBeenSet = true;
    m_connectedDestinations.emplace_back(std::forward<ConnectedDestinationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of encryption used for the source endpoint connection.</p>
   */
  inline EndpointEncryptionType GetEncryptionType() const { return m_encryptionType; }
  inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
  inline void SetEncryptionType(EndpointEncryptionType value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType = value;
  }
  inline SourceEndpoint& WithEncryptionType(EndpointEncryptionType value) {
    SetEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EndpointEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EndpointEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EndpointEncryptionConfiguration>
  SourceEndpoint& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the resource that is associated with the source endpoint.</p>
   */
  inline const SourceEndpointAssociatedResourceDetails& GetAssociatedResourceDetails() const { return m_associatedResourceDetails; }
  inline bool AssociatedResourceDetailsHasBeenSet() const { return m_associatedResourceDetailsHasBeenSet; }
  template <typename AssociatedResourceDetailsT = SourceEndpointAssociatedResourceDetails>
  void SetAssociatedResourceDetails(AssociatedResourceDetailsT&& value) {
    m_associatedResourceDetailsHasBeenSet = true;
    m_associatedResourceDetails = std::forward<AssociatedResourceDetailsT>(value);
  }
  template <typename AssociatedResourceDetailsT = SourceEndpointAssociatedResourceDetails>
  SourceEndpoint& WithAssociatedResourceDetails(AssociatedResourceDetailsT&& value) {
    SetAssociatedResourceDetails(std::forward<AssociatedResourceDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the source endpoint. Each tag is a key-value
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
  SourceEndpoint& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  SourceEndpoint& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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

  Aws::Vector<SourceEndpointMessage> m_messages;

  SourceEndpointType m_sourceType{SourceEndpointType::NOT_SET};

  SourceEndpointConfiguration m_configuration;

  ResourceShareOwnership m_resourceShareOwnership{ResourceShareOwnership::NOT_SET};

  ResourceShareDetails m_resourceShareDetails;

  SourceEndpointRegistrationState m_registrationState{SourceEndpointRegistrationState::NOT_SET};

  SourceEndpointConnectionState m_connectionState{SourceEndpointConnectionState::NOT_SET};

  SourceEndpointConnectionDetails m_connectionDetails;

  Aws::Vector<Aws::String> m_connectedDestinations;

  EndpointEncryptionType m_encryptionType{EndpointEncryptionType::NOT_SET};

  EndpointEncryptionConfiguration m_encryptionConfiguration;

  SourceEndpointAssociatedResourceDetails m_associatedResourceDetails;

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
  bool m_sourceTypeHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_resourceShareOwnershipHasBeenSet = false;
  bool m_resourceShareDetailsHasBeenSet = false;
  bool m_registrationStateHasBeenSet = false;
  bool m_connectionStateHasBeenSet = false;
  bool m_connectionDetailsHasBeenSet = false;
  bool m_connectedDestinationsHasBeenSet = false;
  bool m_encryptionTypeHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_associatedResourceDetailsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
