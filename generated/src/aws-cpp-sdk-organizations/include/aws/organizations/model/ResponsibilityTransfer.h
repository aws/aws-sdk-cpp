/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ResponsibilityTransferStatus.h>
#include <aws/organizations/model/ResponsibilityTransferType.h>
#include <aws/organizations/model/TransferParticipant.h>

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
 * <p>Contains details for a transfer. A <i>transfer</i> is the arrangement between
 * two management accounts where one account designates the other with specified
 * responsibilities for their organization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ResponsibilityTransfer">AWS
 * API Reference</a></p>
 */
class ResponsibilityTransfer {
 public:
  AWS_ORGANIZATIONS_API ResponsibilityTransfer() = default;
  AWS_ORGANIZATIONS_API ResponsibilityTransfer(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API ResponsibilityTransfer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) for the transfer.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ResponsibilityTransfer& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name assigned to the transfer.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ResponsibilityTransfer& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID for the transfer.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ResponsibilityTransfer& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of transfer. Currently, only <code>BILLING</code> is supported.</p>
   */
  inline ResponsibilityTransferType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ResponsibilityTransferType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ResponsibilityTransfer& WithType(ResponsibilityTransferType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status for the transfer.</p>
   */
  inline ResponsibilityTransferStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ResponsibilityTransferStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ResponsibilityTransfer& WithStatus(ResponsibilityTransferStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account that allows another account external to its organization to manage
   * the specified responsibilities for the organization.</p>
   */
  inline const TransferParticipant& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TransferParticipant>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TransferParticipant>
  ResponsibilityTransfer& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account that manages the specified responsibilities for another
   * organization.</p>
   */
  inline const TransferParticipant& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = TransferParticipant>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = TransferParticipant>
  ResponsibilityTransfer& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the transfer starts.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
  inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  ResponsibilityTransfer& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the transfer ends.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
  inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  void SetEndTimestamp(EndTimestampT&& value) {
    m_endTimestampHasBeenSet = true;
    m_endTimestamp = std::forward<EndTimestampT>(value);
  }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  ResponsibilityTransfer& WithEndTimestamp(EndTimestampT&& value) {
    SetEndTimestamp(std::forward<EndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID for the handshake of the transfer.</p>
   */
  inline const Aws::String& GetActiveHandshakeId() const { return m_activeHandshakeId; }
  inline bool ActiveHandshakeIdHasBeenSet() const { return m_activeHandshakeIdHasBeenSet; }
  template <typename ActiveHandshakeIdT = Aws::String>
  void SetActiveHandshakeId(ActiveHandshakeIdT&& value) {
    m_activeHandshakeIdHasBeenSet = true;
    m_activeHandshakeId = std::forward<ActiveHandshakeIdT>(value);
  }
  template <typename ActiveHandshakeIdT = Aws::String>
  ResponsibilityTransfer& WithActiveHandshakeId(ActiveHandshakeIdT&& value) {
    SetActiveHandshakeId(std::forward<ActiveHandshakeIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  ResponsibilityTransferType m_type{ResponsibilityTransferType::NOT_SET};
  bool m_typeHasBeenSet = false;

  ResponsibilityTransferStatus m_status{ResponsibilityTransferStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  TransferParticipant m_source;
  bool m_sourceHasBeenSet = false;

  TransferParticipant m_target;
  bool m_targetHasBeenSet = false;

  Aws::Utils::DateTime m_startTimestamp{};
  bool m_startTimestampHasBeenSet = false;

  Aws::Utils::DateTime m_endTimestamp{};
  bool m_endTimestampHasBeenSet = false;

  Aws::String m_activeHandshakeId;
  bool m_activeHandshakeIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
