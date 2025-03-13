/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetAutomationExecutionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetAutomationExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutomationExecution"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for an existing automation execution to examine. The
     * execution ID is returned by StartAutomationExecution when the execution of an
     * Automation runbook is initiated.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const { return m_automationExecutionId; }
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }
    template<typename AutomationExecutionIdT = Aws::String>
    void SetAutomationExecutionId(AutomationExecutionIdT&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::forward<AutomationExecutionIdT>(value); }
    template<typename AutomationExecutionIdT = Aws::String>
    GetAutomationExecutionRequest& WithAutomationExecutionId(AutomationExecutionIdT&& value) { SetAutomationExecutionId(std::forward<AutomationExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
