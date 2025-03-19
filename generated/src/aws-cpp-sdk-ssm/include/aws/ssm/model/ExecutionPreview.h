/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AutomationExecutionPreview.h>
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
   * <p>Information about the changes that would be made if an execution were
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ExecutionPreview">AWS
   * API Reference</a></p>
   */
  class ExecutionPreview
  {
  public:
    AWS_SSM_API ExecutionPreview() = default;
    AWS_SSM_API ExecutionPreview(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ExecutionPreview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the changes that would be made if an Automation workflow
     * were run.</p>
     */
    inline const AutomationExecutionPreview& GetAutomation() const { return m_automation; }
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
    template<typename AutomationT = AutomationExecutionPreview>
    void SetAutomation(AutomationT&& value) { m_automationHasBeenSet = true; m_automation = std::forward<AutomationT>(value); }
    template<typename AutomationT = AutomationExecutionPreview>
    ExecutionPreview& WithAutomation(AutomationT&& value) { SetAutomation(std::forward<AutomationT>(value)); return *this;}
    ///@}
  private:

    AutomationExecutionPreview m_automation;
    bool m_automationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
