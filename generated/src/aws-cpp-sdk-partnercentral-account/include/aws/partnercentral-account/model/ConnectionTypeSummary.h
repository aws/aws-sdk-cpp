/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ConnectionTypeStatus.h>
#include <aws/partnercentral-account/model/Participant.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Summary information about a specific connection type between
 * partners.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ConnectionTypeSummary">AWS
 * API Reference</a></p>
 */
class ConnectionTypeSummary {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ConnectionTypeSummary() = default;
  AWS_PARTNERCENTRALACCOUNT_API ConnectionTypeSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API ConnectionTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of this connection type (active, canceled, etc.).</p>
   */
  inline ConnectionTypeStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ConnectionTypeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ConnectionTypeSummary& WithStatus(ConnectionTypeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the other participant in this connection type.</p>
   */
  inline const Participant& GetOtherParticipant() const { return m_otherParticipant; }
  inline bool OtherParticipantHasBeenSet() const { return m_otherParticipantHasBeenSet; }
  template <typename OtherParticipantT = Participant>
  void SetOtherParticipant(OtherParticipantT&& value) {
    m_otherParticipantHasBeenSet = true;
    m_otherParticipant = std::forward<OtherParticipantT>(value);
  }
  template <typename OtherParticipantT = Participant>
  ConnectionTypeSummary& WithOtherParticipant(OtherParticipantT&& value) {
    SetOtherParticipant(std::forward<OtherParticipantT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectionTypeStatus m_status{ConnectionTypeStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Participant m_otherParticipant;
  bool m_otherParticipantHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
