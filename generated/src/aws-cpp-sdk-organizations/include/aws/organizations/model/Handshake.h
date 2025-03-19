/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/HandshakeState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/organizations/model/ActionType.h>
#include <aws/organizations/model/HandshakeParty.h>
#include <aws/organizations/model/HandshakeResource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information that must be exchanged to securely establish a
   * relationship between two accounts (an <i>originator</i> and a <i>recipient</i>).
   * For example, when a management account (the originator) invites another account
   * (the recipient) to join its organization, the two accounts exchange information
   * as a series of handshake requests and responses.</p> <p> <b>Note:</b> Handshakes
   * that are <code>CANCELED</code>, <code>ACCEPTED</code>, <code>DECLINED</code>, or
   * <code>EXPIRED</code> show up in lists for only 30 days after entering that state
   * After that they are deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Handshake">AWS
   * API Reference</a></p>
   */
  class Handshake
  {
  public:
    AWS_ORGANIZATIONS_API Handshake() = default;
    AWS_ORGANIZATIONS_API Handshake(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Handshake& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Handshake& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Handshake& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline const Aws::Vector<HandshakeParty>& GetParties() const { return m_parties; }
    inline bool PartiesHasBeenSet() const { return m_partiesHasBeenSet; }
    template<typename PartiesT = Aws::Vector<HandshakeParty>>
    void SetParties(PartiesT&& value) { m_partiesHasBeenSet = true; m_parties = std::forward<PartiesT>(value); }
    template<typename PartiesT = Aws::Vector<HandshakeParty>>
    Handshake& WithParties(PartiesT&& value) { SetParties(std::forward<PartiesT>(value)); return *this;}
    template<typename PartiesT = HandshakeParty>
    Handshake& AddParties(PartiesT&& value) { m_partiesHasBeenSet = true; m_parties.emplace_back(std::forward<PartiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the handshake. Use the state to trace the flow of the
     * handshake through the process from its creation to its acceptance. The meaning
     * of each of the valid values is as follows:</p> <ul> <li> <p> <b>REQUESTED</b>:
     * This handshake was sent to multiple recipients (applicable to only some
     * handshake types) and not all recipients have responded yet. The request stays in
     * this state until all recipients respond.</p> </li> <li> <p> <b>OPEN</b>: This
     * handshake was sent to multiple recipients (applicable to only some policy types)
     * and all recipients have responded, allowing the originator to complete the
     * handshake action.</p> </li> <li> <p> <b>CANCELED</b>: This handshake is no
     * longer active because it was canceled by the originating account.</p> </li> <li>
     * <p> <b>ACCEPTED</b>: This handshake is complete because it has been accepted by
     * the recipient.</p> </li> <li> <p> <b>DECLINED</b>: This handshake is no longer
     * active because it was declined by the recipient account.</p> </li> <li> <p>
     * <b>EXPIRED</b>: This handshake is no longer active because the originator did
     * not receive a response of any kind from the recipient before the expiration time
     * (15 days).</p> </li> </ul>
     */
    inline HandshakeState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(HandshakeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Handshake& WithState(HandshakeState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the handshake request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedTimestamp() const { return m_requestedTimestamp; }
    inline bool RequestedTimestampHasBeenSet() const { return m_requestedTimestampHasBeenSet; }
    template<typename RequestedTimestampT = Aws::Utils::DateTime>
    void SetRequestedTimestamp(RequestedTimestampT&& value) { m_requestedTimestampHasBeenSet = true; m_requestedTimestamp = std::forward<RequestedTimestampT>(value); }
    template<typename RequestedTimestampT = Aws::Utils::DateTime>
    Handshake& WithRequestedTimestamp(RequestedTimestampT&& value) { SetRequestedTimestamp(std::forward<RequestedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the handshake expires. If the recipient of the
     * handshake request fails to respond before the specified date and time, the
     * handshake becomes inactive and is no longer valid.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const { return m_expirationTimestamp; }
    inline bool ExpirationTimestampHasBeenSet() const { return m_expirationTimestampHasBeenSet; }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    void SetExpirationTimestamp(ExpirationTimestampT&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::forward<ExpirationTimestampT>(value); }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    Handshake& WithExpirationTimestamp(ExpirationTimestampT&& value) { SetExpirationTimestamp(std::forward<ExpirationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of handshake, indicating what action occurs when the recipient
     * accepts the handshake. The following handshake types are supported:</p> <ul>
     * <li> <p> <b>INVITE</b>: This type of handshake represents a request to join an
     * organization. It is always sent from the management account to only non-member
     * accounts.</p> </li> <li> <p> <b>ENABLE_ALL_FEATURES</b>: This type of handshake
     * represents a request to enable all features in an organization. It is always
     * sent from the management account to only <i>invited</i> member accounts. Created
     * accounts do not receive this because those accounts were created by the
     * organization's management account and approval is inferred.</p> </li> <li> <p>
     * <b>APPROVE_ALL_FEATURES</b>: This type of handshake is sent from the
     * Organizations service when all member accounts have approved the
     * <code>ENABLE_ALL_FEATURES</code> invitation. It is sent only to the management
     * account and signals the master that it can finalize the process to enable all
     * features.</p> </li> </ul>
     */
    inline ActionType GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ActionType value) { m_actionHasBeenSet = true; m_action = value; }
    inline Handshake& WithAction(ActionType value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline const Aws::Vector<HandshakeResource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<HandshakeResource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<HandshakeResource>>
    Handshake& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = HandshakeResource>
    Handshake& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
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

} // namespace Model
} // namespace Organizations
} // namespace Aws
