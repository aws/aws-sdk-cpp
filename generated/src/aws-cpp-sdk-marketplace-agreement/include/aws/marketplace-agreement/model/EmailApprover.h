/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>An approver who is identified by an email address.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/EmailApprover">AWS
 * API Reference</a></p>
 */
class EmailApprover {
 public:
  AWS_AGREEMENTSERVICE_API EmailApprover() = default;
  AWS_AGREEMENTSERVICE_API EmailApprover(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API EmailApprover& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The email address of the approver.</p>
   */
  inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
  inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
  template <typename EmailAddressT = Aws::String>
  void SetEmailAddress(EmailAddressT&& value) {
    m_emailAddressHasBeenSet = true;
    m_emailAddress = std::forward<EmailAddressT>(value);
  }
  template <typename EmailAddressT = Aws::String>
  EmailApprover& WithEmailAddress(EmailAddressT&& value) {
    SetEmailAddress(std::forward<EmailAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the approver.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  EmailApprover& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailAddress;

  Aws::String m_name;
  bool m_emailAddressHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
