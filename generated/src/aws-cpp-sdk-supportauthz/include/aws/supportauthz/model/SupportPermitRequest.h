/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/Permit.h>
#include <aws/supportauthz/model/SupportPermitRequestStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {

/**
 * <p>A permit request from an AWS support operator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/SupportPermitRequest">AWS
 * API Reference</a></p>
 */
class SupportPermitRequest {
 public:
  AWS_SUPPORTAUTHZ_API SupportPermitRequest() = default;
  AWS_SUPPORTAUTHZ_API SupportPermitRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API SupportPermitRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the permit request.</p>
   */
  inline const Aws::String& GetRequestArn() const { return m_requestArn; }
  inline bool RequestArnHasBeenSet() const { return m_requestArnHasBeenSet; }
  template <typename RequestArnT = Aws::String>
  void SetRequestArn(RequestArnT&& value) {
    m_requestArnHasBeenSet = true;
    m_requestArn = std::forward<RequestArnT>(value);
  }
  template <typename RequestArnT = Aws::String>
  SupportPermitRequest& WithRequestArn(RequestArnT&& value) {
    SetRequestArn(std::forward<RequestArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permit definition requested by the operator.</p>
   */
  inline const Permit& GetPermit() const { return m_permit; }
  inline bool PermitHasBeenSet() const { return m_permitHasBeenSet; }
  template <typename PermitT = Permit>
  void SetPermit(PermitT&& value) {
    m_permitHasBeenSet = true;
    m_permit = std::forward<PermitT>(value);
  }
  template <typename PermitT = Permit>
  SupportPermitRequest& WithPermit(PermitT&& value) {
    SetPermit(std::forward<PermitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display identifier of the support case associated with the request.</p>
   */
  inline const Aws::String& GetSupportCaseDisplayId() const { return m_supportCaseDisplayId; }
  inline bool SupportCaseDisplayIdHasBeenSet() const { return m_supportCaseDisplayIdHasBeenSet; }
  template <typename SupportCaseDisplayIdT = Aws::String>
  void SetSupportCaseDisplayId(SupportCaseDisplayIdT&& value) {
    m_supportCaseDisplayIdHasBeenSet = true;
    m_supportCaseDisplayId = std::forward<SupportCaseDisplayIdT>(value);
  }
  template <typename SupportCaseDisplayIdT = Aws::String>
  SupportPermitRequest& WithSupportCaseDisplayId(SupportCaseDisplayIdT&& value) {
    SetSupportCaseDisplayId(std::forward<SupportCaseDisplayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the permit request.</p>
   */
  inline SupportPermitRequestStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SupportPermitRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SupportPermitRequest& WithStatus(SupportPermitRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the request was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SupportPermitRequest& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the request was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SupportPermitRequest& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestArn;

  Permit m_permit;

  Aws::String m_supportCaseDisplayId;

  SupportPermitRequestStatus m_status{SupportPermitRequestStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_requestArnHasBeenSet = false;
  bool m_permitHasBeenSet = false;
  bool m_supportCaseDisplayIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
