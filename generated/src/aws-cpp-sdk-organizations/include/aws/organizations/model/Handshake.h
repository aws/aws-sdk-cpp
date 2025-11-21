/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ActionType.h>
#include <aws/organizations/model/HandshakeParty.h>
#include <aws/organizations/model/HandshakeResource.h>
#include <aws/organizations/model/HandshakeState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Organizations {
namespace Model {

/**
 * <p>Contains details for a handshake. A handshake is the secure exchange of
 * information between two Amazon Web Services accounts: a sender and a
 * recipient.</p> <p> <b>Note:</b> Handshakes that are <code>CANCELED</code>,
 * <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>EXPIRED</code> show up in
 * lists for only 30 days after entering that state After that they are
 * deleted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Handshake">AWS
 * API Reference</a></p>
 */
class Handshake {
 public:
  AWS_ORGANIZATIONS_API Handshake() = default;
  AWS_ORGANIZATIONS_API Handshake(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API Handshake& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ID for the handshake.</p> <p>The <a
   * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
   * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  Handshake& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) for the handshake.</p> <p>For more information
   * about ARNs in Organizations, see <a
   * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
   * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
   * Authorization Reference</i>.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Handshake& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>HandshakeParty</code> objects. Contains details for
   * participant in a handshake.</p>
   */
  inline const Aws::Vector<HandshakeParty>& GetParties() const { return m_parties; }
  inline bool PartiesHasBeenSet() const { return m_partiesHasBeenSet; }
  template <typename PartiesT = Aws::Vector<HandshakeParty>>
  void SetParties(PartiesT&& value) {
    m_partiesHasBeenSet = true;
    m_parties = std::forward<PartiesT>(value);
  }
  template <typename PartiesT = Aws::Vector<HandshakeParty>>
  Handshake& WithParties(PartiesT&& value) {
    SetParties(std::forward<PartiesT>(value));
    return *this;
  }
  template <typename PartiesT = HandshakeParty>
  Handshake& AddParties(PartiesT&& value) {
    m_partiesHasBeenSet = true;
    m_parties.emplace_back(std::forward<PartiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current state for the handshake.</p> <ul> <li> <p> <b>REQUESTED</b>:
   * Handshake awaiting a response from the recipient.</p> </li> <li> <p>
   * <b>OPEN</b>: Handshake sent to multiple recipients and all recipients have
   * responded. The sender can now complete the handshake action.</p> </li> <li> <p>
   * <b>CANCELED</b>: Handshake canceled by the sender.</p> </li> <li> <p>
   * <b>ACCEPTED</b>: Handshake accepted by the recipient.</p> </li> <li> <p>
   * <b>DECLINED</b>: Handshake declined by the recipient.</p> </li> <li> <p>
   * <b>EXPIRED</b>: Handshake has expired.</p> </li> </ul>
   */
  inline HandshakeState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(HandshakeState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline Handshake& WithState(HandshakeState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the handshake request was made.</p>
   */
  inline const Aws::Utils::DateTime& GetRequestedTimestamp() const { return m_requestedTimestamp; }
  inline bool RequestedTimestampHasBeenSet() const { return m_requestedTimestampHasBeenSet; }
  template <typename RequestedTimestampT = Aws::Utils::DateTime>
  void SetRequestedTimestamp(RequestedTimestampT&& value) {
    m_requestedTimestampHasBeenSet = true;
    m_requestedTimestamp = std::forward<RequestedTimestampT>(value);
  }
  template <typename RequestedTimestampT = Aws::Utils::DateTime>
  Handshake& WithRequestedTimestamp(RequestedTimestampT&& value) {
    SetRequestedTimestamp(std::forward<RequestedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the handshake expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTimestamp() const { return m_expirationTimestamp; }
  inline bool ExpirationTimestampHasBeenSet() const { return m_expirationTimestampHasBeenSet; }
  template <typename ExpirationTimestampT = Aws::Utils::DateTime>
  void SetExpirationTimestamp(ExpirationTimestampT&& value) {
    m_expirationTimestampHasBeenSet = true;
    m_expirationTimestamp = std::forward<ExpirationTimestampT>(value);
  }
  template <typename ExpirationTimestampT = Aws::Utils::DateTime>
  Handshake& WithExpirationTimestamp(ExpirationTimestampT&& value) {
    SetExpirationTimestamp(std::forward<ExpirationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of handshake:</p> <ul> <li> <p> <b>INVITE</b>: Handshake sent to a
   * standalone account requesting that it to join the sender's organization.</p>
   * </li> <li> <p> <b>ENABLE_ALL_FEATURES</b>: Handshake sent to invited member
   * accounts to enable all features for the organization.</p> </li> <li> <p>
   * <b>APPROVE_ALL_FEATURES</b>: Handshake sent to the management account when all
   * invited member accounts have approved to enable all features.</p> </li> <li> <p>
   * <b>TRANSFER_RESPONSIBILITY</b>: Handshake sent to another organization's
   * management account requesting that it designate the sender with the specified
   * responsibilities for recipient's organization.</p> </li> </ul>
   */
  inline ActionType GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ActionType value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline Handshake& WithAction(ActionType value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>HandshakeResource</code> objects. When needed, contains
   * additional details for a handshake. For example, the email address for the
   * sender.</p>
   */
  inline const Aws::Vector<HandshakeResource>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<HandshakeResource>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<HandshakeResource>>
  Handshake& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = HandshakeResource>
  Handshake& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::Vector<HandshakeParty> m_parties;
  bool m_partiesHasBeenSet = false;

  HandshakeState m_state{HandshakeState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::Utils::DateTime m_requestedTimestamp{};
  bool m_requestedTimestampHasBeenSet = false;

  Aws::Utils::DateTime m_expirationTimestamp{};
  bool m_expirationTimestampHasBeenSet = false;

  ActionType m_action{ActionType::NOT_SET};
  bool m_actionHasBeenSet = false;

  Aws::Vector<HandshakeResource> m_resources;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
