/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/DestinationEndpointConnectionState.h>
#include <aws/mediaconnect/model/DestinationEndpointRegistrationState.h>
#include <aws/mediaconnect/model/DestinationEndpointType.h>
#include <aws/mediaconnect/model/EndpointEncryptionType.h>
#include <aws/mediaconnect/model/EndpointLifecycle.h>
#include <aws/mediaconnect/model/ResourceShareOwnership.h>
#include <aws/mediaconnect/model/ResourceShareState.h>

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
 * <p>A summary of a destination endpoint that the
 * <code>ListDestinationEndpoints</code> operation returns.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedDestinationEndpoint">AWS
 * API Reference</a></p>
 */
class ListedDestinationEndpoint {
 public:
  AWS_MEDIACONNECT_API ListedDestinationEndpoint() = default;
  AWS_MEDIACONNECT_API ListedDestinationEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ListedDestinationEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ListedDestinationEndpoint& WithName(NameT&& value) {
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
  ListedDestinationEndpoint& WithArn(ArnT&& value) {
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
  ListedDestinationEndpoint& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
  inline ListedDestinationEndpoint& WithDestinationType(DestinationEndpointType value) {
    SetDestinationType(value);
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
  ListedDestinationEndpoint& WithRegionName(RegionNameT&& value) {
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
  ListedDestinationEndpoint& WithAvailabilityZone(AvailabilityZoneT&& value) {
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
  ListedDestinationEndpoint& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
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
  ListedDestinationEndpoint& WithCreatedAt(CreatedAtT&& value) {
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
  ListedDestinationEndpoint& WithUpdatedAt(UpdatedAtT&& value) {
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
  inline ListedDestinationEndpoint& WithLifecycleManagement(EndpointLifecycle value) {
    SetLifecycleManagement(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of status messages for the destination endpoint.</p>
   */
  inline int GetMessageCount() const { return m_messageCount; }
  inline bool MessageCountHasBeenSet() const { return m_messageCountHasBeenSet; }
  inline void SetMessageCount(int value) {
    m_messageCountHasBeenSet = true;
    m_messageCount = value;
  }
  inline ListedDestinationEndpoint& WithMessageCount(int value) {
    SetMessageCount(value);
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
  inline ListedDestinationEndpoint& WithResourceShareOwnership(ResourceShareOwnership value) {
    SetResourceShareOwnership(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sharing state of the destination endpoint.</p>
   */
  inline ResourceShareState GetResourceShareState() const { return m_resourceShareState; }
  inline bool ResourceShareStateHasBeenSet() const { return m_resourceShareStateHasBeenSet; }
  inline void SetResourceShareState(ResourceShareState value) {
    m_resourceShareStateHasBeenSet = true;
    m_resourceShareState = value;
  }
  inline ListedDestinationEndpoint& WithResourceShareState(ResourceShareState value) {
    SetResourceShareState(value);
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
  inline ListedDestinationEndpoint& WithRegistrationState(DestinationEndpointRegistrationState value) {
    SetRegistrationState(value);
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
  inline ListedDestinationEndpoint& WithConnectionState(DestinationEndpointConnectionState value) {
    SetConnectionState(value);
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
  inline ListedDestinationEndpoint& WithDecryptionType(EndpointEncryptionType value) {
    SetDecryptionType(value);
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
  ListedDestinationEndpoint& WithConnectedSource(ConnectedSourceT&& value) {
    SetConnectedSource(std::forward<ConnectedSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that is associated with the
   * destination endpoint.</p>
   */
  inline const Aws::String& GetAssociatedResourceArn() const { return m_associatedResourceArn; }
  inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }
  template <typename AssociatedResourceArnT = Aws::String>
  void SetAssociatedResourceArn(AssociatedResourceArnT&& value) {
    m_associatedResourceArnHasBeenSet = true;
    m_associatedResourceArn = std::forward<AssociatedResourceArnT>(value);
  }
  template <typename AssociatedResourceArnT = Aws::String>
  ListedDestinationEndpoint& WithAssociatedResourceArn(AssociatedResourceArnT&& value) {
    SetAssociatedResourceArn(std::forward<AssociatedResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_id;

  DestinationEndpointType m_destinationType{DestinationEndpointType::NOT_SET};

  Aws::String m_regionName;

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  EndpointLifecycle m_lifecycleManagement{EndpointLifecycle::NOT_SET};

  int m_messageCount{0};

  ResourceShareOwnership m_resourceShareOwnership{ResourceShareOwnership::NOT_SET};

  ResourceShareState m_resourceShareState{ResourceShareState::NOT_SET};

  DestinationEndpointRegistrationState m_registrationState{DestinationEndpointRegistrationState::NOT_SET};

  DestinationEndpointConnectionState m_connectionState{DestinationEndpointConnectionState::NOT_SET};

  EndpointEncryptionType m_decryptionType{EndpointEncryptionType::NOT_SET};

  Aws::String m_connectedSource;

  Aws::String m_associatedResourceArn;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_destinationTypeHasBeenSet = false;
  bool m_regionNameHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_lifecycleManagementHasBeenSet = false;
  bool m_messageCountHasBeenSet = false;
  bool m_resourceShareOwnershipHasBeenSet = false;
  bool m_resourceShareStateHasBeenSet = false;
  bool m_registrationStateHasBeenSet = false;
  bool m_connectionStateHasBeenSet = false;
  bool m_decryptionTypeHasBeenSet = false;
  bool m_connectedSourceHasBeenSet = false;
  bool m_associatedResourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
