/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/SsmAutomation.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The action that starts at the beginning of an incident. The response plan
   * defines the action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_SSMINCIDENTS_API Action() = default;
    AWS_SSMINCIDENTS_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Systems Manager automation document to start as the runbook at the
     * beginning of the incident.</p>
     */
    inline const SsmAutomation& GetSsmAutomation() const { return m_ssmAutomation; }
    inline bool SsmAutomationHasBeenSet() const { return m_ssmAutomationHasBeenSet; }
    template<typename SsmAutomationT = SsmAutomation>
    void SetSsmAutomation(SsmAutomationT&& value) { m_ssmAutomationHasBeenSet = true; m_ssmAutomation = std::forward<SsmAutomationT>(value); }
    template<typename SsmAutomationT = SsmAutomation>
    Action& WithSsmAutomation(SsmAutomationT&& value) { SetSsmAutomation(std::forward<SsmAutomationT>(value)); return *this;}
    ///@}
  private:

    SsmAutomation m_ssmAutomation;
    bool m_ssmAutomationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
