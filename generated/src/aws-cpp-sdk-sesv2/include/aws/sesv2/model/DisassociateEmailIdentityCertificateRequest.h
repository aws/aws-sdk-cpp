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
 * <p>A request to remove the association between an S/MIME certificate and an
 * email identity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DisassociateEmailIdentityCertificateRequest">AWS
 * API Reference</a></p>
 */
class DisassociateEmailIdentityCertificateRequest : public SESV2Request {
 public:
  AWS_SESV2_API DisassociateEmailIdentityCertificateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateEmailIdentityCertificate"; }

  AWS_SESV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The email identity whose certificate association you want to remove.</p>
   */
  inline const Aws::String& GetEmailIdentity() const { return m_emailIdentity; }
  inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
  template <typename EmailIdentityT = Aws::String>
  void SetEmailIdentity(EmailIdentityT&& value) {
    m_emailIdentityHasBeenSet = true;
    m_emailIdentity = std::forward<EmailIdentityT>(value);
  }
  template <typename EmailIdentityT = Aws::String>
  DisassociateEmailIdentityCertificateRequest& WithEmailIdentity(EmailIdentityT&& value) {
    SetEmailIdentity(std::forward<EmailIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address whose certificate association you want to remove. This
   * value is required when the email identity is a domain. When the email identity
   * is an email address, this value is optional.</p>
   */
  inline const Aws::String& GetFromAddress() const { return m_fromAddress; }
  inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
  template <typename FromAddressT = Aws::String>
  void SetFromAddress(FromAddressT&& value) {
    m_fromAddressHasBeenSet = true;
    m_fromAddress = std::forward<FromAddressT>(value);
  }
  template <typename FromAddressT = Aws::String>
  DisassociateEmailIdentityCertificateRequest& WithFromAddress(FromAddressT&& value) {
    SetFromAddress(std::forward<FromAddressT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailIdentity;

  Aws::String m_fromAddress;
  bool m_emailIdentityHasBeenSet = false;
  bool m_fromAddressHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
