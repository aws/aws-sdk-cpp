/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/HandshakeDetail.h>
#include <aws/partnercentral-channel/model/HandshakeStatus.h>
#include <aws/partnercentral-channel/model/HandshakeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Summary information about a channel handshake.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ChannelHandshakeSummary">AWS
 * API Reference</a></p>
 */
class ChannelHandshakeSummary {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ChannelHandshakeSummary() = default;
  AWS_PARTNERCENTRALCHANNEL_API ChannelHandshakeSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ChannelHandshakeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the handshake.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ChannelHandshakeSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the handshake.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ChannelHandshakeSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier associated with the handshake.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ChannelHandshakeSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the handshake.</p>
   */
  inline HandshakeType GetHandshakeType() const { return m_handshakeType; }
  inline bool HandshakeTypeHasBeenSet() const { return m_handshakeTypeHasBeenSet; }
  inline void SetHandshakeType(HandshakeType value) {
    m_handshakeTypeHasBeenSet = true;
    m_handshakeType = value;
  }
  inline ChannelHandshakeSummary& WithHandshakeType(HandshakeType value) {
    SetHandshakeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the handshake owner.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  ChannelHandshakeSummary& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the handshake sender.</p>
   */
  inline const Aws::String& GetSenderAccountId() const { return m_senderAccountId; }
  inline bool SenderAccountIdHasBeenSet() const { return m_senderAccountIdHasBeenSet; }
  template <typename SenderAccountIdT = Aws::String>
  void SetSenderAccountId(SenderAccountIdT&& value) {
    m_senderAccountIdHasBeenSet = true;
    m_senderAccountId = std::forward<SenderAccountIdT>(value);
  }
  template <typename SenderAccountIdT = Aws::String>
  ChannelHandshakeSummary& WithSenderAccountId(SenderAccountIdT&& value) {
    SetSenderAccountId(std::forward<SenderAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the handshake sender.</p>
   */
  inline const Aws::String& GetSenderDisplayName() const { return m_senderDisplayName; }
  inline bool SenderDisplayNameHasBeenSet() const { return m_senderDisplayNameHasBeenSet; }
  template <typename SenderDisplayNameT = Aws::String>
  void SetSenderDisplayName(SenderDisplayNameT&& value) {
    m_senderDisplayNameHasBeenSet = true;
    m_senderDisplayName = std::forward<SenderDisplayNameT>(value);
  }
  template <typename SenderDisplayNameT = Aws::String>
  ChannelHandshakeSummary& WithSenderDisplayName(SenderDisplayNameT&& value) {
    SetSenderDisplayName(std::forward<SenderDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the handshake receiver.</p>
   */
  inline const Aws::String& GetReceiverAccountId() const { return m_receiverAccountId; }
  inline bool ReceiverAccountIdHasBeenSet() const { return m_receiverAccountIdHasBeenSet; }
  template <typename ReceiverAccountIdT = Aws::String>
  void SetReceiverAccountId(ReceiverAccountIdT&& value) {
    m_receiverAccountIdHasBeenSet = true;
    m_receiverAccountId = std::forward<ReceiverAccountIdT>(value);
  }
  template <typename ReceiverAccountIdT = Aws::String>
  ChannelHandshakeSummary& WithReceiverAccountId(ReceiverAccountIdT&& value) {
    SetReceiverAccountId(std::forward<ReceiverAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the resource associated with the handshake.</p>
   */
  inline const Aws::String& GetAssociatedResourceId() const { return m_associatedResourceId; }
  inline bool AssociatedResourceIdHasBeenSet() const { return m_associatedResourceIdHasBeenSet; }
  template <typename AssociatedResourceIdT = Aws::String>
  void SetAssociatedResourceId(AssociatedResourceIdT&& value) {
    m_associatedResourceIdHasBeenSet = true;
    m_associatedResourceId = std::forward<AssociatedResourceIdT>(value);
  }
  template <typename AssociatedResourceIdT = Aws::String>
  ChannelHandshakeSummary& WithAssociatedResourceId(AssociatedResourceIdT&& value) {
    SetAssociatedResourceId(std::forward<AssociatedResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information about the handshake.</p>
   */
  inline const HandshakeDetail& GetDetail() const { return m_detail; }
  inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
  template <typename DetailT = HandshakeDetail>
  void SetDetail(DetailT&& value) {
    m_detailHasBeenSet = true;
    m_detail = std::forward<DetailT>(value);
  }
  template <typename DetailT = HandshakeDetail>
  ChannelHandshakeSummary& WithDetail(DetailT&& value) {
    SetDetail(std::forward<DetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the handshake was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ChannelHandshakeSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the handshake was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ChannelHandshakeSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the handshake.</p>
   */
  inline HandshakeStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(HandshakeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ChannelHandshakeSummary& WithStatus(HandshakeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  HandshakeType m_handshakeType{HandshakeType::NOT_SET};
  bool m_handshakeTypeHasBeenSet = false;

  Aws::String m_ownerAccountId;
  bool m_ownerAccountIdHasBeenSet = false;

  Aws::String m_senderAccountId;
  bool m_senderAccountIdHasBeenSet = false;

  Aws::String m_senderDisplayName;
  bool m_senderDisplayNameHasBeenSet = false;

  Aws::String m_receiverAccountId;
  bool m_receiverAccountIdHasBeenSet = false;

  Aws::String m_associatedResourceId;
  bool m_associatedResourceIdHasBeenSet = false;

  HandshakeDetail m_detail;
  bool m_detailHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  HandshakeStatus m_status{HandshakeStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
