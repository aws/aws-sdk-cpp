/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/ScanStatus.h>

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
 * <p>The campaign's attached recipient list, as read — metadata only.</p> <p>No
 * URL and no `S3Uri`, presigned or otherwise. The file is a list of email
 * addresses belonging to people who are not the partner, so there is no read path
 * for the bytes at all; what a caller needs is whether the list was accepted and
 * how many recipients it resolved to. <p>The three counts describe the file as it
 * was read when attached. They are absent for a list attached before the service
 * began reading lists at upload.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/EmailTargetDetail">AWS
 * API Reference</a></p>
 */
class EmailTargetDetail {
 public:
  AWS_PARTNERCENTRALMARKETING_API EmailTargetDetail() = default;
  AWS_PARTNERCENTRALMARKETING_API EmailTargetDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API EmailTargetDetail& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The scan verdict for the attached list.</p>
   */
  inline ScanStatus GetScanStatus() const { return m_scanStatus; }
  inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }
  inline void SetScanStatus(ScanStatus value) {
    m_scanStatusHasBeenSet = true;
    m_scanStatus = value;
  }
  inline EmailTargetDetail& WithScanStatus(ScanStatus value) {
    SetScanStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the list was attached.</p>
   */
  inline const Aws::Utils::DateTime& GetAttachedAt() const { return m_attachedAt; }
  inline bool AttachedAtHasBeenSet() const { return m_attachedAtHasBeenSet; }
  template <typename AttachedAtT = Aws::Utils::DateTime>
  void SetAttachedAt(AttachedAtT&& value) {
    m_attachedAtHasBeenSet = true;
    m_attachedAt = std::forward<AttachedAtT>(value);
  }
  template <typename AttachedAtT = Aws::Utils::DateTime>
  EmailTargetDetail& WithAttachedAt(AttachedAtT&& value) {
    SetAttachedAt(std::forward<AttachedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Distinct usable addresses — the recipients an email activation sends to.</p>
   */
  inline int64_t GetValidCount() const { return m_validCount; }
  inline bool ValidCountHasBeenSet() const { return m_validCountHasBeenSet; }
  inline void SetValidCount(int64_t value) {
    m_validCountHasBeenSet = true;
    m_validCount = value;
  }
  inline EmailTargetDetail& WithValidCount(int64_t value) {
    SetValidCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Rows skipped because their email cell is not a usable address.</p>
   */
  inline int64_t GetRejectedCount() const { return m_rejectedCount; }
  inline bool RejectedCountHasBeenSet() const { return m_rejectedCountHasBeenSet; }
  inline void SetRejectedCount(int64_t value) {
    m_rejectedCountHasBeenSet = true;
    m_rejectedCount = value;
  }
  inline EmailTargetDetail& WithRejectedCount(int64_t value) {
    SetRejectedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Rows repeating an address already counted. Not an error: each address is sent
   * to once.</p>
   */
  inline int64_t GetDuplicateCount() const { return m_duplicateCount; }
  inline bool DuplicateCountHasBeenSet() const { return m_duplicateCountHasBeenSet; }
  inline void SetDuplicateCount(int64_t value) {
    m_duplicateCountHasBeenSet = true;
    m_duplicateCount = value;
  }
  inline EmailTargetDetail& WithDuplicateCount(int64_t value) {
    SetDuplicateCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the uploaded file, as the partner named it, with no path:
   * for example <code>Q4 leads.csv</code>. Absent for a list attached before the
   * service kept the name. There is no link to the file: the list is never
   * downloadable from the campaign.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  EmailTargetDetail& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}
 private:
  ScanStatus m_scanStatus{ScanStatus::NOT_SET};

  Aws::Utils::DateTime m_attachedAt{};

  int64_t m_validCount{0};

  int64_t m_rejectedCount{0};

  int64_t m_duplicateCount{0};

  Aws::String m_fileName;
  bool m_scanStatusHasBeenSet = false;
  bool m_attachedAtHasBeenSet = false;
  bool m_validCountHasBeenSet = false;
  bool m_rejectedCountHasBeenSet = false;
  bool m_duplicateCountHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
