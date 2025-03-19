/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/StopType.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class StopAutomationExecutionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API StopAutomationExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopAutomationExecution"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The execution ID of the Automation to stop.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const { return m_automationExecutionId; }
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }
    template<typename AutomationExecutionIdT = Aws::String>
    void SetAutomationExecutionId(AutomationExecutionIdT&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::forward<AutomationExecutionIdT>(value); }
    template<typename AutomationExecutionIdT = Aws::String>
    StopAutomationExecutionRequest& WithAutomationExecutionId(AutomationExecutionIdT&& value) { SetAutomationExecutionId(std::forward<AutomationExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stop request type. Valid types include the following: Cancel and
     * Complete. The default type is Cancel.</p>
     */
    inline StopType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(StopType value) { m_typeHasBeenSet = true; m_type = value; }
    inline StopAutomationExecutionRequest& WithType(StopType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;

    StopType m_type{StopType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
