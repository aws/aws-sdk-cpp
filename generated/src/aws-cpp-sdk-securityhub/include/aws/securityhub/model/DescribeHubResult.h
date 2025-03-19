/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ControlFindingGenerator.h>
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
namespace SecurityHub
{
namespace Model
{
  class DescribeHubResult
  {
  public:
    AWS_SECURITYHUB_API DescribeHubResult() = default;
    AWS_SECURITYHUB_API DescribeHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Hub resource that was retrieved.</p>
     */
    inline const Aws::String& GetHubArn() const { return m_hubArn; }
    template<typename HubArnT = Aws::String>
    void SetHubArn(HubArnT&& value) { m_hubArnHasBeenSet = true; m_hubArn = std::forward<HubArnT>(value); }
    template<typename HubArnT = Aws::String>
    DescribeHubResult& WithHubArn(HubArnT&& value) { SetHubArn(std::forward<HubArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline const Aws::String& GetSubscribedAt() const { return m_subscribedAt; }
    template<typename SubscribedAtT = Aws::String>
    void SetSubscribedAt(SubscribedAtT&& value) { m_subscribedAtHasBeenSet = true; m_subscribedAt = std::forward<SubscribedAtT>(value); }
    template<typename SubscribedAtT = Aws::String>
    DescribeHubResult& WithSubscribedAt(SubscribedAtT&& value) { SetSubscribedAt(std::forward<SubscribedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>If set to <code>true</code>, then new controls for
     * enabled standards are enabled automatically. If set to <code>false</code>, then
     * new controls are not enabled.</p> <p>When you automatically enable new controls,
     * you can interact with the controls in the console and programmatically
     * immediately after release. However, automatically enabled controls have a
     * temporary default status of <code>DISABLED</code>. It can take up to several
     * days for Security Hub to process the control release and designate the control
     * as <code>ENABLED</code> in your account. During the processing period, you can
     * manually enable or disable a control, and Security Hub will maintain that
     * designation regardless of whether you have <code>AutoEnableControls</code> set
     * to <code>true</code>.</p>
     */
    inline bool GetAutoEnableControls() const { return m_autoEnableControls; }
    inline void SetAutoEnableControls(bool value) { m_autoEnableControlsHasBeenSet = true; m_autoEnableControls = value; }
    inline DescribeHubResult& WithAutoEnableControls(bool value) { SetAutoEnableControls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the calling account has consolidated control findings
     * turned on. If the value for this field is set to <code>SECURITY_CONTROL</code>,
     * Security Hub generates a single finding for a control check even when the check
     * applies to multiple enabled standards.</p> <p>If the value for this field is set
     * to <code>STANDARD_CONTROL</code>, Security Hub generates separate findings for a
     * control check when the check applies to multiple enabled standards.</p> <p>The
     * value for this field in a member account matches the value in the administrator
     * account. For accounts that aren't part of an organization, the default value of
     * this field is <code>SECURITY_CONTROL</code> if you enabled Security Hub on or
     * after February 23, 2023.</p>
     */
    inline ControlFindingGenerator GetControlFindingGenerator() const { return m_controlFindingGenerator; }
    inline void SetControlFindingGenerator(ControlFindingGenerator value) { m_controlFindingGeneratorHasBeenSet = true; m_controlFindingGenerator = value; }
    inline DescribeHubResult& WithControlFindingGenerator(ControlFindingGenerator value) { SetControlFindingGenerator(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHubResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubArn;
    bool m_hubArnHasBeenSet = false;

    Aws::String m_subscribedAt;
    bool m_subscribedAtHasBeenSet = false;

    bool m_autoEnableControls{false};
    bool m_autoEnableControlsHasBeenSet = false;

    ControlFindingGenerator m_controlFindingGenerator{ControlFindingGenerator::NOT_SET};
    bool m_controlFindingGeneratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
