/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/SMSSandboxPhoneNumberVerificationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{

  /**
   * <p>A verified or pending destination phone number in the SMS sandbox.</p>
   * <p>When you start using Amazon SNS to send SMS messages, your Amazon Web
   * Services account is in the <i>SMS sandbox</i>. The SMS sandbox provides a safe
   * environment for you to try Amazon SNS features without risking your reputation
   * as an SMS sender. While your Amazon Web Services account is in the SMS sandbox,
   * you can use all of the features of Amazon SNS. However, you can send SMS
   * messages only to verified destination phone numbers. For more information,
   * including how to move out of the sandbox to send messages without restrictions,
   * see <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
   * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SMSSandboxPhoneNumber">AWS
   * API Reference</a></p>
   */
  class SMSSandboxPhoneNumber
  {
  public:
    AWS_SNS_API SMSSandboxPhoneNumber() = default;
    AWS_SNS_API SMSSandboxPhoneNumber(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API SMSSandboxPhoneNumber& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The destination phone number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    SMSSandboxPhoneNumber& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination phone number's verification status.</p>
     */
    inline SMSSandboxPhoneNumberVerificationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SMSSandboxPhoneNumberVerificationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SMSSandboxPhoneNumber& WithStatus(SMSSandboxPhoneNumberVerificationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    SMSSandboxPhoneNumberVerificationStatus m_status{SMSSandboxPhoneNumberVerificationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
