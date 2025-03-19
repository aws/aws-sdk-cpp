/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ControlStatus.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateStandardsControlRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateStandardsControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStandardsControl"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline const Aws::String& GetStandardsControlArn() const { return m_standardsControlArn; }
    inline bool StandardsControlArnHasBeenSet() const { return m_standardsControlArnHasBeenSet; }
    template<typename StandardsControlArnT = Aws::String>
    void SetStandardsControlArn(StandardsControlArnT&& value) { m_standardsControlArnHasBeenSet = true; m_standardsControlArn = std::forward<StandardsControlArnT>(value); }
    template<typename StandardsControlArnT = Aws::String>
    UpdateStandardsControlRequest& WithStandardsControlArn(StandardsControlArnT&& value) { SetStandardsControlArn(std::forward<StandardsControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated status of the security standard control.</p>
     */
    inline ControlStatus GetControlStatus() const { return m_controlStatus; }
    inline bool ControlStatusHasBeenSet() const { return m_controlStatusHasBeenSet; }
    inline void SetControlStatus(ControlStatus value) { m_controlStatusHasBeenSet = true; m_controlStatus = value; }
    inline UpdateStandardsControlRequest& WithControlStatus(ControlStatus value) { SetControlStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline const Aws::String& GetDisabledReason() const { return m_disabledReason; }
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }
    template<typename DisabledReasonT = Aws::String>
    void SetDisabledReason(DisabledReasonT&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::forward<DisabledReasonT>(value); }
    template<typename DisabledReasonT = Aws::String>
    UpdateStandardsControlRequest& WithDisabledReason(DisabledReasonT&& value) { SetDisabledReason(std::forward<DisabledReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_standardsControlArn;
    bool m_standardsControlArnHasBeenSet = false;

    ControlStatus m_controlStatus{ControlStatus::NOT_SET};
    bool m_controlStatusHasBeenSet = false;

    Aws::String m_disabledReason;
    bool m_disabledReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
