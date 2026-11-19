/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/ValidationExceptionField.h>
#include <aws/partnercentral-marketing/model/ValidationExceptionReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>The input fails to satisfy the constraints specified by the service.</p> <p>A
 * caller branches on <code>Reason</code>, and where the rejection is attributable
 * to particular fields it reads <code>FieldList</code> rather than parsing
 * <code>Message</code>, which is prose and may change.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_PARTNERCENTRALMARKETING_API ValidationException() = default;
  AWS_PARTNERCENTRALMARKETING_API ValidationException(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API ValidationException& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The single coarse reason the request was rejected, for a caller that does not
   * care which field.</p>
   */
  inline ValidationExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ValidationExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ValidationException& WithReason(ValidationExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Every field that failed, not just the first.</p> <p>⚠️ **Every field,
   * deliberately.** The convention comment carried by most internal models — *"if
   * more than one field caused the error, pick one and elaborate in the message"* —
   * is the reading this service does NOT take: a partner editing a form would then
   * discover their errors one request at a time. The whole request is validated and
   * the full set reported, so one round of fixes is one call. <p><strong>Each entry
   * names a member of the request just sent</strong>, and only that: the value to
   * change and send again. A template field value is `Name` `FieldValues` with the
   * template field in `FieldId`, one entry per failing field. <p><strong>When it is
   * present.</strong> Only when the refusal points at something the partner fixes in
   * a form, and then every such refusal carries it: - `UpdateCampaignAsset`:
   * `FieldValues` (including a file the content scan declined, which is why a
   * partner handles image failures and text failures the same way, through this
   * list), `Layout`, `SendMode` and `ScheduledSendAt`; - `CreateCampaign` and
   * `UpdateCampaign`: campaign settings and files; - `GetCampaignTemplate`:
   * `Identifier`. <p>Every other `ValidationException` carries `Message` only —
   * tags, ARNs, social connections, exports, and `CAMPAIGN_INCOMPLETE`, whose
   * missing settings are not members of the request it refuses.
   */
  inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const { return m_fieldList; }
  inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }
  template <typename FieldListT = Aws::Vector<ValidationExceptionField>>
  void SetFieldList(FieldListT&& value) {
    m_fieldListHasBeenSet = true;
    m_fieldList = std::forward<FieldListT>(value);
  }
  template <typename FieldListT = Aws::Vector<ValidationExceptionField>>
  ValidationException& WithFieldList(FieldListT&& value) {
    SetFieldList(std::forward<FieldListT>(value));
    return *this;
  }
  template <typename FieldListT = ValidationExceptionField>
  ValidationException& AddFieldList(FieldListT&& value) {
    m_fieldListHasBeenSet = true;
    m_fieldList.emplace_back(std::forward<FieldListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};

  Aws::Vector<ValidationExceptionField> m_fieldList;
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_fieldListHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
