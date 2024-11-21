﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AutomationExecutionInputs.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the inputs for an execution preview.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ExecutionInputs">AWS
   * API Reference</a></p>
   */
  class ExecutionInputs
  {
  public:
    AWS_SSM_API ExecutionInputs();
    AWS_SSM_API ExecutionInputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ExecutionInputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the optional inputs that can be specified for an automation
     * execution preview.</p>
     */
    inline const AutomationExecutionInputs& GetAutomation() const{ return m_automation; }
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
    inline void SetAutomation(const AutomationExecutionInputs& value) { m_automationHasBeenSet = true; m_automation = value; }
    inline void SetAutomation(AutomationExecutionInputs&& value) { m_automationHasBeenSet = true; m_automation = std::move(value); }
    inline ExecutionInputs& WithAutomation(const AutomationExecutionInputs& value) { SetAutomation(value); return *this;}
    inline ExecutionInputs& WithAutomation(AutomationExecutionInputs&& value) { SetAutomation(std::move(value)); return *this;}
    ///@}
  private:

    AutomationExecutionInputs m_automation;
    bool m_automationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
