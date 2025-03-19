/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/SendQuota.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>A list of details about the email-sending capabilities of your Amazon
   * Pinpoint account in the current AWS Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetAccountResponse">AWS
   * API Reference</a></p>
   */
  class GetAccountResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetAccountResult() = default;
    AWS_PINPOINTEMAIL_API GetAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about the per-day and per-second sending
     * limits for your Amazon Pinpoint account in the current AWS Region.</p>
     */
    inline const SendQuota& GetSendQuota() const { return m_sendQuota; }
    template<typename SendQuotaT = SendQuota>
    void SetSendQuota(SendQuotaT&& value) { m_sendQuotaHasBeenSet = true; m_sendQuota = std::forward<SendQuotaT>(value); }
    template<typename SendQuotaT = SendQuota>
    GetAccountResult& WithSendQuota(SendQuotaT&& value) { SetSendQuota(std::forward<SendQuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not email sending is enabled for your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline bool GetSendingEnabled() const { return m_sendingEnabled; }
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }
    inline GetAccountResult& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the automatic warm-up feature is enabled for
     * dedicated IP addresses that are associated with your account.</p>
     */
    inline bool GetDedicatedIpAutoWarmupEnabled() const { return m_dedicatedIpAutoWarmupEnabled; }
    inline void SetDedicatedIpAutoWarmupEnabled(bool value) { m_dedicatedIpAutoWarmupEnabledHasBeenSet = true; m_dedicatedIpAutoWarmupEnabled = value; }
    inline GetAccountResult& WithDedicatedIpAutoWarmupEnabled(bool value) { SetDedicatedIpAutoWarmupEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reputation status of your Amazon Pinpoint account. The status can be one
     * of the following:</p> <ul> <li> <p> <code>HEALTHY</code> – There are no
     * reputation-related issues that currently impact your account.</p> </li> <li> <p>
     * <code>PROBATION</code> – We've identified some issues with your Amazon Pinpoint
     * account. We're placing your account under review while you work on correcting
     * these issues.</p> </li> <li> <p> <code>SHUTDOWN</code> – Your account's ability
     * to send email is currently paused because of an issue with the email sent from
     * your account. When you correct the issue, you can contact us and request that
     * your account's ability to send email is resumed.</p> </li> </ul>
     */
    inline const Aws::String& GetEnforcementStatus() const { return m_enforcementStatus; }
    template<typename EnforcementStatusT = Aws::String>
    void SetEnforcementStatus(EnforcementStatusT&& value) { m_enforcementStatusHasBeenSet = true; m_enforcementStatus = std::forward<EnforcementStatusT>(value); }
    template<typename EnforcementStatusT = Aws::String>
    GetAccountResult& WithEnforcementStatus(EnforcementStatusT&& value) { SetEnforcementStatus(std::forward<EnforcementStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not your account has production access in the current
     * AWS Region.</p> <p>If the value is <code>false</code>, then your account is in
     * the <i>sandbox</i>. When your account is in the sandbox, you can only send email
     * to verified identities. Additionally, the maximum number of emails you can send
     * in a 24-hour period (your sending quota) is 200, and the maximum number of
     * emails you can send per second (your maximum sending rate) is 1.</p> <p>If the
     * value is <code>true</code>, then your account has production access. When your
     * account has production access, you can send email to any address. The sending
     * quota and maximum sending rate for your account vary based on your specific use
     * case.</p>
     */
    inline bool GetProductionAccessEnabled() const { return m_productionAccessEnabled; }
    inline void SetProductionAccessEnabled(bool value) { m_productionAccessEnabledHasBeenSet = true; m_productionAccessEnabled = value; }
    inline GetAccountResult& WithProductionAccessEnabled(bool value) { SetProductionAccessEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SendQuota m_sendQuota;
    bool m_sendQuotaHasBeenSet = false;

    bool m_sendingEnabled{false};
    bool m_sendingEnabledHasBeenSet = false;

    bool m_dedicatedIpAutoWarmupEnabled{false};
    bool m_dedicatedIpAutoWarmupEnabledHasBeenSet = false;

    Aws::String m_enforcementStatus;
    bool m_enforcementStatusHasBeenSet = false;

    bool m_productionAccessEnabled{false};
    bool m_productionAccessEnabledHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
