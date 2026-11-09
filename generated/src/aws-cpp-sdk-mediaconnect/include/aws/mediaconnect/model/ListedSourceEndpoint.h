/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EndpointEncryptionType.h>
#include <aws/mediaconnect/model/EndpointLifecycle.h>
#include <aws/mediaconnect/model/ResourceShareOwnership.h>
#include <aws/mediaconnect/model/ResourceShareState.h>
#include <aws/mediaconnect/model/SourceEndpointConnectionState.h>
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
 * <p>A summary of a source endpoint that the <code>ListSourceEndpoints</code>
 * operation returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedSourceEndpoint">AWS
 * API Reference</a></p>
 */
class ListedSourceEndpoint {
 public:
  AWS_MEDIACONNECT_API ListedSourceEndpoint() = default;
  AWS_MEDIACONNECT_API ListedSourceEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ListedSourceEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ListedSourceEndpoint& WithName(NameT&& value) {
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
  ListedSourceEndpoint& WithArn(ArnT&& value) {
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
  ListedSourceEndpoint& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
  inline ListedSourceEndpoint& WithSourceType(SourceEndpointType value) {
    SetSourceType(value);
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
  ListedSourceEndpoint& WithRegionName(RegionNameT&& value) {
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
  ListedSourceEndpoint& WithAvailabilityZone(AvailabilityZoneT&& value) {
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
  ListedSourceEndpoint& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
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
  ListedSourceEndpoint& WithCreatedAt(CreatedAtT&& value) {
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
  ListedSourceEndpoint& WithUpdatedAt(UpdatedAtT&& value) {
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
  inline ListedSourceEndpoint& WithLifecycleManagement(EndpointLifecycle value) {
    SetLifecycleManagement(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of status messages for the source endpoint.</p>
   */
  inline int GetMessageCount() const { return m_messageCount; }
  inline bool MessageCountHasBeenSet() const { return m_messageCountHasBeenSet; }
  inline void SetMessageCount(int value) {
    m_messageCountHasBeenSet = true;
    m_messageCount = value;
  }
  inline ListedSourceEndpoint& WithMessageCount(int value) {
    SetMessageCount(value);
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
  inline ListedSourceEndpoint& WithResourceShareOwnership(ResourceShareOwnership value) {
    SetResourceShareOwnership(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sharing state of the source endpoint.</p>
   */
  inline ResourceShareState GetResourceShareState() const { return m_resourceShareState; }
  inline bool ResourceShareStateHasBeenSet() const { return m_resourceShareStateHasBeenSet; }
  inline void SetResourceShareState(ResourceShareState value) {
    m_resourceShareStateHasBeenSet = true;
    m_resourceShareState = value;
  }
  inline ListedSourceEndpoint& WithResourceShareState(ResourceShareState value) {
    SetResourceShareState(value);
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
  inline ListedSourceEndpoint& WithRegistrationState(SourceEndpointRegistrationState value) {
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
  inline ListedSourceEndpoint& WithConnectionState(SourceEndpointConnectionState value) {
    SetConnectionState(value);
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
  inline ListedSourceEndpoint& WithEncryptionType(EndpointEncryptionType value) {
    SetEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of destination endpoints that are connected to the source
   * endpoint.</p>
   */
  inline int GetConnectedDestinationCount() const { return m_connectedDestinationCount; }
  inline bool ConnectedDestinationCountHasBeenSet() const { return m_connectedDestinationCountHasBeenSet; }
  inline void SetConnectedDestinationCount(int value) {
    m_connectedDestinationCountHasBeenSet = true;
    m_connectedDestinationCount = value;
  }
  inline ListedSourceEndpoint& WithConnectedDestinationCount(int value) {
    SetConnectedDestinationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that is associated with the
   * source endpoint.</p>
   */
  inline const Aws::String& GetAssociatedResourceArn() const { return m_associatedResourceArn; }
  inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }
  template <typename AssociatedResourceArnT = Aws::String>
  void SetAssociatedResourceArn(AssociatedResourceArnT&& value) {
    m_associatedResourceArnHasBeenSet = true;
    m_associatedResourceArn = std::forward<AssociatedResourceArnT>(value);
  }
  template <typename AssociatedResourceArnT = Aws::String>
  ListedSourceEndpoint& WithAssociatedResourceArn(AssociatedResourceArnT&& value) {
    SetAssociatedResourceArn(std::forward<AssociatedResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_id;

  SourceEndpointType m_sourceType{SourceEndpointType::NOT_SET};

  Aws::String m_regionName;

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  EndpointLifecycle m_lifecycleManagement{EndpointLifecycle::NOT_SET};

  int m_messageCount{0};

  ResourceShareOwnership m_resourceShareOwnership{ResourceShareOwnership::NOT_SET};

  ResourceShareState m_resourceShareState{ResourceShareState::NOT_SET};

  SourceEndpointRegistrationState m_registrationState{SourceEndpointRegistrationState::NOT_SET};

  SourceEndpointConnectionState m_connectionState{SourceEndpointConnectionState::NOT_SET};

  EndpointEncryptionType m_encryptionType{EndpointEncryptionType::NOT_SET};

  int m_connectedDestinationCount{0};

  Aws::String m_associatedResourceArn;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_sourceTypeHasBeenSet = false;
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
  bool m_encryptionTypeHasBeenSet = false;
  bool m_connectedDestinationCountHasBeenSet = false;
  bool m_associatedResourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
