/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/Permit.h>
#include <aws/supportauthz/model/SigningKeyInfo.h>
#include <aws/supportauthz/model/SupportPermitStatus.h>

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
 * <p>A summary of a support permit.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/SupportPermitSummary">AWS
 * API Reference</a></p>
 */
class SupportPermitSummary {
 public:
  AWS_SUPPORTAUTHZ_API SupportPermitSummary() = default;
  AWS_SUPPORTAUTHZ_API SupportPermitSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API SupportPermitSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the support permit.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SupportPermitSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the support permit.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  SupportPermitSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permit definition.</p>
   */
  inline const Permit& GetPermit() const { return m_permit; }
  inline bool PermitHasBeenSet() const { return m_permitHasBeenSet; }
  template <typename PermitT = Permit>
  void SetPermit(PermitT&& value) {
    m_permitHasBeenSet = true;
    m_permit = std::forward<PermitT>(value);
  }
  template <typename PermitT = Permit>
  SupportPermitSummary& WithPermit(PermitT&& value) {
    SetPermit(std::forward<PermitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the support permit.</p>
   */
  inline SupportPermitStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SupportPermitStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SupportPermitSummary& WithStatus(SupportPermitStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing key information for the permit.</p>
   */
  inline const SigningKeyInfo& GetSigningKeyInfo() const { return m_signingKeyInfo; }
  inline bool SigningKeyInfoHasBeenSet() const { return m_signingKeyInfoHasBeenSet; }
  template <typename SigningKeyInfoT = SigningKeyInfo>
  void SetSigningKeyInfo(SigningKeyInfoT&& value) {
    m_signingKeyInfoHasBeenSet = true;
    m_signingKeyInfo = std::forward<SigningKeyInfoT>(value);
  }
  template <typename SigningKeyInfoT = SigningKeyInfo>
  SupportPermitSummary& WithSigningKeyInfo(SigningKeyInfoT&& value) {
    SetSigningKeyInfo(std::forward<SigningKeyInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the permit was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SupportPermitSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display identifier of the support case associated with the permit.</p>
   */
  inline const Aws::String& GetSupportCaseDisplayId() const { return m_supportCaseDisplayId; }
  inline bool SupportCaseDisplayIdHasBeenSet() const { return m_supportCaseDisplayIdHasBeenSet; }
  template <typename SupportCaseDisplayIdT = Aws::String>
  void SetSupportCaseDisplayId(SupportCaseDisplayIdT&& value) {
    m_supportCaseDisplayIdHasBeenSet = true;
    m_supportCaseDisplayId = std::forward<SupportCaseDisplayIdT>(value);
  }
  template <typename SupportCaseDisplayIdT = Aws::String>
  SupportPermitSummary& WithSupportCaseDisplayId(SupportCaseDisplayIdT&& value) {
    SetSupportCaseDisplayId(std::forward<SupportCaseDisplayIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Permit m_permit;

  SupportPermitStatus m_status{SupportPermitStatus::NOT_SET};

  SigningKeyInfo m_signingKeyInfo;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_supportCaseDisplayId;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_permitHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_signingKeyInfoHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_supportCaseDisplayIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
