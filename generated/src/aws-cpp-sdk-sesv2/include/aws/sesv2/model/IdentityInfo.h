/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/IdentityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/VerificationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>Information about an email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/IdentityInfo">AWS
   * API Reference</a></p>
   */
  class IdentityInfo
  {
  public:
    AWS_SESV2_API IdentityInfo() = default;
    AWS_SESV2_API IdentityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API IdentityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> type is not
     * supported for email identity types.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline IdentityInfo& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address or domain of the identity.</p>
     */
    inline const Aws::String& GetIdentityName() const { return m_identityName; }
    inline bool IdentityNameHasBeenSet() const { return m_identityNameHasBeenSet; }
    template<typename IdentityNameT = Aws::String>
    void SetIdentityName(IdentityNameT&& value) { m_identityNameHasBeenSet = true; m_identityName = std::forward<IdentityNameT>(value); }
    template<typename IdentityNameT = Aws::String>
    IdentityInfo& WithIdentityName(IdentityNameT&& value) { SetIdentityName(std::forward<IdentityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>An
     * <i>identity</i> is an email address or domain that you send email from. Before
     * you can send email from an identity, you have to demostrate that you own the
     * identity, and that you authorize Amazon SES to send email from that
     * identity.</p>
     */
    inline bool GetSendingEnabled() const { return m_sendingEnabled; }
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }
    inline IdentityInfo& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification status of the identity. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – The verification process was
     * initiated, but Amazon SES hasn't yet been able to verify the identity.</p> </li>
     * <li> <p> <code>SUCCESS</code> – The verification process completed
     * successfully.</p> </li> <li> <p> <code>FAILED</code> – The verification process
     * failed.</p> </li> <li> <p> <code>TEMPORARY_FAILURE</code> – A temporary issue is
     * preventing Amazon SES from determining the verification status of the
     * identity.</p> </li> <li> <p> <code>NOT_STARTED</code> – The verification process
     * hasn't been initiated for the identity.</p> </li> </ul>
     */
    inline VerificationStatus GetVerificationStatus() const { return m_verificationStatus; }
    inline bool VerificationStatusHasBeenSet() const { return m_verificationStatusHasBeenSet; }
    inline void SetVerificationStatus(VerificationStatus value) { m_verificationStatusHasBeenSet = true; m_verificationStatus = value; }
    inline IdentityInfo& WithVerificationStatus(VerificationStatus value) { SetVerificationStatus(value); return *this;}
    ///@}
  private:

    IdentityType m_identityType{IdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_identityName;
    bool m_identityNameHasBeenSet = false;

    bool m_sendingEnabled{false};
    bool m_sendingEnabledHasBeenSet = false;

    VerificationStatus m_verificationStatus{VerificationStatus::NOT_SET};
    bool m_verificationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
