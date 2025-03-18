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
    AWS_SESV2_API GetAccountResult() = default;
    AWS_SESV2_API GetAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const Aws::String& GetEnforcementStatus() const { return m_enforcementStatus; }
    template<typename EnforcementStatusT = Aws::String>
    void SetEnforcementStatus(EnforcementStatusT&& value) { m_enforcementStatusHasBeenSet = true; m_enforcementStatus = std::forward<EnforcementStatusT>(value); }
    template<typename EnforcementStatusT = Aws::String>
    GetAccountResult& WithEnforcementStatus(EnforcementStatusT&& value) { SetEnforcementStatus(std::forward<EnforcementStatusT>(value)); return *this;}
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
    inline bool GetProductionAccessEnabled() const { return m_productionAccessEnabled; }
    inline void SetProductionAccessEnabled(bool value) { m_productionAccessEnabledHasBeenSet = true; m_productionAccessEnabled = value; }
    inline GetAccountResult& WithProductionAccessEnabled(bool value) { SetProductionAccessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the per-day and per-second sending
     * limits for your Amazon SES account in the current Amazon Web Services
     * Region.</p>
     */
    inline const SendQuota& GetSendQuota() const { return m_sendQuota; }
    template<typename SendQuotaT = SendQuota>
    void SetSendQuota(SendQuotaT&& value) { m_sendQuotaHasBeenSet = true; m_sendQuota = std::forward<SendQuotaT>(value); }
    template<typename SendQuotaT = SendQuota>
    GetAccountResult& WithSendQuota(SendQuotaT&& value) { SetSendQuota(std::forward<SendQuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not email sending is enabled for your Amazon SES account
     * in the current Amazon Web Services Region.</p>
     */
    inline bool GetSendingEnabled() const { return m_sendingEnabled; }
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }
    inline GetAccountResult& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the email address suppression
     * preferences for your account in the current Amazon Web Services Region.</p>
     */
    inline const SuppressionAttributes& GetSuppressionAttributes() const { return m_suppressionAttributes; }
    template<typename SuppressionAttributesT = SuppressionAttributes>
    void SetSuppressionAttributes(SuppressionAttributesT&& value) { m_suppressionAttributesHasBeenSet = true; m_suppressionAttributes = std::forward<SuppressionAttributesT>(value); }
    template<typename SuppressionAttributesT = SuppressionAttributes>
    GetAccountResult& WithSuppressionAttributes(SuppressionAttributesT&& value) { SetSuppressionAttributes(std::forward<SuppressionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines your account details.</p>
     */
    inline const AccountDetails& GetDetails() const { return m_details; }
    template<typename DetailsT = AccountDetails>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = AccountDetails>
    GetAccountResult& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VDM attributes that apply to your Amazon SES account.</p>
     */
    inline const VdmAttributes& GetVdmAttributes() const { return m_vdmAttributes; }
    template<typename VdmAttributesT = VdmAttributes>
    void SetVdmAttributes(VdmAttributesT&& value) { m_vdmAttributesHasBeenSet = true; m_vdmAttributes = std::forward<VdmAttributesT>(value); }
    template<typename VdmAttributesT = VdmAttributes>
    GetAccountResult& WithVdmAttributes(VdmAttributesT&& value) { SetVdmAttributes(std::forward<VdmAttributesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_dedicatedIpAutoWarmupEnabled{false};
    bool m_dedicatedIpAutoWarmupEnabledHasBeenSet = false;

    Aws::String m_enforcementStatus;
    bool m_enforcementStatusHasBeenSet = false;

    bool m_productionAccessEnabled{false};
    bool m_productionAccessEnabledHasBeenSet = false;

    SendQuota m_sendQuota;
    bool m_sendQuotaHasBeenSet = false;

    bool m_sendingEnabled{false};
    bool m_sendingEnabledHasBeenSet = false;

    SuppressionAttributes m_suppressionAttributes;
    bool m_suppressionAttributesHasBeenSet = false;

    AccountDetails m_details;
    bool m_detailsHasBeenSet = false;

    VdmAttributes m_vdmAttributes;
    bool m_vdmAttributesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
