/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SendQuota.h>
#include <aws/sesv2/model/SuppressionAttributes.h>
#include <aws/sesv2/model/AccountDetails.h>
#include <aws/sesv2/model/VdmAttributes.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>A list of details about the email-sending capabilities of your Amazon SES
   * account in the current Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetAccountResponse">AWS
   * API Reference</a></p>
   */
  class GetAccountResult
  {
  public:
    AWS_SESV2_API GetAccountResult();
    AWS_SESV2_API GetAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether or not the automatic warm-up feature is enabled for
     * dedicated IP addresses that are associated with your account.</p>
     */
    inline bool GetDedicatedIpAutoWarmupEnabled() const{ return m_dedicatedIpAutoWarmupEnabled; }
    inline void SetDedicatedIpAutoWarmupEnabled(bool value) { m_dedicatedIpAutoWarmupEnabled = value; }
    inline GetAccountResult& WithDedicatedIpAutoWarmupEnabled(bool value) { SetDedicatedIpAutoWarmupEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reputation status of your Amazon SES account. The status can be one of
     * the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified potential issues with your Amazon SES
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline const Aws::String& GetEnforcementStatus() const{ return m_enforcementStatus; }
    inline void SetEnforcementStatus(const Aws::String& value) { m_enforcementStatus = value; }
    inline void SetEnforcementStatus(Aws::String&& value) { m_enforcementStatus = std::move(value); }
    inline void SetEnforcementStatus(const char* value) { m_enforcementStatus.assign(value); }
    inline GetAccountResult& WithEnforcementStatus(const Aws::String& value) { SetEnforcementStatus(value); return *this;}
    inline GetAccountResult& WithEnforcementStatus(Aws::String&& value) { SetEnforcementStatus(std::move(value)); return *this;}
    inline GetAccountResult& WithEnforcementStatus(const char* value) { SetEnforcementStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not your account has production access in the current
     * Amazon Web Services Region.</p> <p>If the value is <code>false</code>, then your
     * account is in the <i>sandbox</i>. When your account is in the sandbox, you can
     * only send email to verified identities. </p> <p>If the value is
     * <code>true</code>, then your account has production access. When your account
     * has production access, you can send email to any address. The sending quota and
     * maximum sending rate for your account vary based on your specific use case.</p>
     */
    inline bool GetProductionAccessEnabled() const{ return m_productionAccessEnabled; }
    inline void SetProductionAccessEnabled(bool value) { m_productionAccessEnabled = value; }
    inline GetAccountResult& WithProductionAccessEnabled(bool value) { SetProductionAccessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the per-day and per-second sending
     * limits for your Amazon SES account in the current Amazon Web Services
     * Region.</p>
     */
    inline const SendQuota& GetSendQuota() const{ return m_sendQuota; }
    inline void SetSendQuota(const SendQuota& value) { m_sendQuota = value; }
    inline void SetSendQuota(SendQuota&& value) { m_sendQuota = std::move(value); }
    inline GetAccountResult& WithSendQuota(const SendQuota& value) { SetSendQuota(value); return *this;}
    inline GetAccountResult& WithSendQuota(SendQuota&& value) { SetSendQuota(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not email sending is enabled for your Amazon SES account
     * in the current Amazon Web Services Region.</p>
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }
    inline void SetSendingEnabled(bool value) { m_sendingEnabled = value; }
    inline GetAccountResult& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the email address suppression
     * preferences for your account in the current Amazon Web Services Region.</p>
     */
    inline const SuppressionAttributes& GetSuppressionAttributes() const{ return m_suppressionAttributes; }
    inline void SetSuppressionAttributes(const SuppressionAttributes& value) { m_suppressionAttributes = value; }
    inline void SetSuppressionAttributes(SuppressionAttributes&& value) { m_suppressionAttributes = std::move(value); }
    inline GetAccountResult& WithSuppressionAttributes(const SuppressionAttributes& value) { SetSuppressionAttributes(value); return *this;}
    inline GetAccountResult& WithSuppressionAttributes(SuppressionAttributes&& value) { SetSuppressionAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines your account details.</p>
     */
    inline const AccountDetails& GetDetails() const{ return m_details; }
    inline void SetDetails(const AccountDetails& value) { m_details = value; }
    inline void SetDetails(AccountDetails&& value) { m_details = std::move(value); }
    inline GetAccountResult& WithDetails(const AccountDetails& value) { SetDetails(value); return *this;}
    inline GetAccountResult& WithDetails(AccountDetails&& value) { SetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VDM attributes that apply to your Amazon SES account.</p>
     */
    inline const VdmAttributes& GetVdmAttributes() const{ return m_vdmAttributes; }
    inline void SetVdmAttributes(const VdmAttributes& value) { m_vdmAttributes = value; }
    inline void SetVdmAttributes(VdmAttributes&& value) { m_vdmAttributes = std::move(value); }
    inline GetAccountResult& WithVdmAttributes(const VdmAttributes& value) { SetVdmAttributes(value); return *this;}
    inline GetAccountResult& WithVdmAttributes(VdmAttributes&& value) { SetVdmAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_dedicatedIpAutoWarmupEnabled;

    Aws::String m_enforcementStatus;

    bool m_productionAccessEnabled;

    SendQuota m_sendQuota;

    bool m_sendingEnabled;

    SuppressionAttributes m_suppressionAttributes;

    AccountDetails m_details;

    VdmAttributes m_vdmAttributes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
