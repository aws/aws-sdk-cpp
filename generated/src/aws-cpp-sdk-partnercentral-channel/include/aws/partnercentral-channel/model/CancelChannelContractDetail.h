/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ChannelContractStatus.h>

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
 * <p>Contains details about a canceled channel contract.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/CancelChannelContractDetail">AWS
 * API Reference</a></p>
 */
class CancelChannelContractDetail {
 public:
  AWS_PARTNERCENTRALCHANNEL_API CancelChannelContractDetail() = default;
  AWS_PARTNERCENTRALCHANNEL_API CancelChannelContractDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API CancelChannelContractDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the canceled channel contract.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CancelChannelContractDetail& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the canceled channel contract.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CancelChannelContractDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the canceled channel contract.</p>
   */
  inline ChannelContractStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ChannelContractStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CancelChannelContractDetail& WithStatus(ChannelContractStatus value) {
    SetStatus(value);
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
  CancelChannelContractDetail& WithCancellationReason(CancellationReasonT&& value) {
    SetCancellationReason(std::forward<CancellationReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  ChannelContractStatus m_status{ChannelContractStatus::NOT_SET};

  Aws::String m_cancellationReason;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_cancellationReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
