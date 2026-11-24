/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ChannelContractDetails.h>
#include <aws/partnercentral-channel/model/ChannelContractStatus.h>
#include <aws/partnercentral-channel/model/ChannelContractType.h>

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
 * <p>Detailed information about a channel contract.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ChannelContractDetail">AWS
 * API Reference</a></p>
 */
class ChannelContractDetail {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractDetail() = default;
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the channel contract.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ChannelContractDetail& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the channel contract.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ChannelContractDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier associated with the channel contract.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ChannelContractDetail& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the channel contract.</p>
   */
  inline ChannelContractType GetContractType() const { return m_contractType; }
  inline bool ContractTypeHasBeenSet() const { return m_contractTypeHasBeenSet; }
  inline void SetContractType(ChannelContractType value) {
    m_contractTypeHasBeenSet = true;
    m_contractType = value;
  }
  inline ChannelContractDetail& WithContractType(ChannelContractType value) {
    SetContractType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the channel contract.</p>
   */
  inline ChannelContractStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ChannelContractStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ChannelContractDetail& WithStatus(ChannelContractStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the channel contract was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ChannelContractDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the channel contract was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ChannelContractDetail& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the channel contract was accepted, if applicable.</p>
   */
  inline const Aws::Utils::DateTime& GetRespondedAt() const { return m_respondedAt; }
  inline bool RespondedAtHasBeenSet() const { return m_respondedAtHasBeenSet; }
  template <typename RespondedAtT = Aws::Utils::DateTime>
  void SetRespondedAt(RespondedAtT&& value) {
    m_respondedAtHasBeenSet = true;
    m_respondedAt = std::forward<RespondedAtT>(value);
  }
  template <typename RespondedAtT = Aws::Utils::DateTime>
  ChannelContractDetail& WithRespondedAt(RespondedAtT&& value) {
    SetRespondedAt(std::forward<RespondedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the channel contract was canceled, if one was provided.</p>
   */
  inline const Aws::String& GetCancellationReason() const { return m_cancellationReason; }
  inline bool CancellationReasonHasBeenSet() const { return m_cancellationReasonHasBeenSet; }
  template <typename CancellationReasonT = Aws::String>
  void SetCancellationReason(CancellationReasonT&& value) {
    m_cancellationReasonHasBeenSet = true;
    m_cancellationReason = std::forward<CancellationReasonT>(value);
  }
  template <typename CancellationReasonT = Aws::String>
  ChannelContractDetail& WithCancellationReason(CancellationReasonT&& value) {
    SetCancellationReason(std::forward<CancellationReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type-specific details of the channel contract.</p>
   */
  inline const ChannelContractDetails& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = ChannelContractDetails>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = ChannelContractDetails>
  ChannelContractDetail& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_catalog;

  ChannelContractType m_contractType{ChannelContractType::NOT_SET};

  ChannelContractStatus m_status{ChannelContractStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_respondedAt{};

  Aws::String m_cancellationReason;

  ChannelContractDetails m_details;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_contractTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_respondedAtHasBeenSet = false;
  bool m_cancellationReasonHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
