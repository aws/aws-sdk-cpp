/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SESV2 {
namespace Model {

/**
 * <p>A request to associate an S/MIME certificate with an email
 * identity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/AssociateEmailIdentityCertificateRequest">AWS
 * API Reference</a></p>
 */
class AssociateEmailIdentityCertificateRequest : public SESV2Request {
 public:
  AWS_SESV2_API AssociateEmailIdentityCertificateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateEmailIdentityCertificate"; }

  AWS_SESV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The email identity, either an email address or a domain, to associate the
   * certificate with.</p>
   */
  inline const Aws::String& GetEmailIdentity() const { return m_emailIdentity; }
  inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
  template <typename EmailIdentityT = Aws::String>
  void SetEmailIdentity(EmailIdentityT&& value) {
    m_emailIdentityHasBeenSet = true;
    m_emailIdentity = std::forward<EmailIdentityT>(value);
  }
  template <typename EmailIdentityT = Aws::String>
  AssociateEmailIdentityCertificateRequest& WithEmailIdentity(EmailIdentityT&& value) {
    SetEmailIdentity(std::forward<EmailIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address that the certificate applies to. This value is required
   * when the email identity is a domain, and the address must belong to that domain
   * or one of its subdomains. When the email identity is an email address, this
   * value is optional. If you specify it, it must exactly match the email
   * identity.</p>
   */
  inline const Aws::String& GetFromAddress() const { return m_fromAddress; }
  inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
  template <typename FromAddressT = Aws::String>
  void SetFromAddress(FromAddressT&& value) {
    m_fromAddressHasBeenSet = true;
    m_fromAddress = std::forward<FromAddressT>(value);
  }
  template <typename FromAddressT = Aws::String>
  AssociateEmailIdentityCertificateRequest& WithFromAddress(FromAddressT&& value) {
    SetFromAddress(std::forward<FromAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Certificate Manager (ACM) certificate
   * to associate with the email identity.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  AssociateEmailIdentityCertificateRequest& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailIdentity;

  Aws::String m_fromAddress;

  Aws::String m_certificateArn;
  bool m_emailIdentityHasBeenSet = false;
  bool m_fromAddressHasBeenSet = false;
  bool m_certificateArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
