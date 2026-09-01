/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/IdentityCertificateStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>An object that contains information about an S/MIME certificate that's
 * associated with an email identity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/IdentityCertificate">AWS
 * API Reference</a></p>
 */
class IdentityCertificate {
 public:
  AWS_SESV2_API IdentityCertificate() = default;
  AWS_SESV2_API IdentityCertificate(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API IdentityCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The email address that the certificate applies to.</p>
   */
  inline const Aws::String& GetFromAddress() const { return m_fromAddress; }
  inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
  template <typename FromAddressT = Aws::String>
  void SetFromAddress(FromAddressT&& value) {
    m_fromAddressHasBeenSet = true;
    m_fromAddress = std::forward<FromAddressT>(value);
  }
  template <typename FromAddressT = Aws::String>
  IdentityCertificate& WithFromAddress(FromAddressT&& value) {
    SetFromAddress(std::forward<FromAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the certificate association. A status of <code>ACTIVE</code>
   * indicates that the certificate is ready to use for signing.</p>
   */
  inline IdentityCertificateStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IdentityCertificateStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IdentityCertificate& WithStatus(IdentityCertificateStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Certificate Manager (ACM) certificate
   * that's associated with the email identity.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  IdentityCertificate& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp after which the certificate is no longer valid.</p>
   */
  inline const Aws::Utils::DateTime& GetCertificateExpiryTime() const { return m_certificateExpiryTime; }
  inline bool CertificateExpiryTimeHasBeenSet() const { return m_certificateExpiryTimeHasBeenSet; }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  void SetCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    m_certificateExpiryTimeHasBeenSet = true;
    m_certificateExpiryTime = std::forward<CertificateExpiryTimeT>(value);
  }
  template <typename CertificateExpiryTimeT = Aws::Utils::DateTime>
  IdentityCertificate& WithCertificateExpiryTime(CertificateExpiryTimeT&& value) {
    SetCertificateExpiryTime(std::forward<CertificateExpiryTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fromAddress;

  IdentityCertificateStatus m_status{IdentityCertificateStatus::NOT_SET};

  Aws::String m_certificateArn;

  Aws::Utils::DateTime m_certificateExpiryTime{};
  bool m_fromAddressHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_certificateArnHasBeenSet = false;
  bool m_certificateExpiryTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
