/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
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
   * <p>The combination of Amazon Web Services Regions and Amazon Web Services
   * accounts targeted by the current Automation execution.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TargetLocation">AWS
   * API Reference</a></p>
   */
  class TargetLocation
  {
  public:
    AWS_SSM_API TargetLocation() = default;
    AWS_SSM_API TargetLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API TargetLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services accounts targeted by the current Automation
     * execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    TargetLocation& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Aws::String>
    TargetLocation& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Regions targeted by the current Automation
     * execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    TargetLocation& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    TargetLocation& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of Amazon Web Services Regions and Amazon Web Services
     * accounts allowed to run the Automation concurrently.</p>
     */
    inline const Aws::String& GetTargetLocationMaxConcurrency() const { return m_targetLocationMaxConcurrency; }
    inline bool TargetLocationMaxConcurrencyHasBeenSet() const { return m_targetLocationMaxConcurrencyHasBeenSet; }
    template<typename TargetLocationMaxConcurrencyT = Aws::String>
    void SetTargetLocationMaxConcurrency(TargetLocationMaxConcurrencyT&& value) { m_targetLocationMaxConcurrencyHasBeenSet = true; m_targetLocationMaxConcurrency = std::forward<TargetLocationMaxConcurrencyT>(value); }
    template<typename TargetLocationMaxConcurrencyT = Aws::String>
    TargetLocation& WithTargetLocationMaxConcurrency(TargetLocationMaxConcurrencyT&& value) { SetTargetLocationMaxConcurrency(std::forward<TargetLocationMaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation.</p>
     */
    inline const Aws::String& GetTargetLocationMaxErrors() const { return m_targetLocationMaxErrors; }
    inline bool TargetLocationMaxErrorsHasBeenSet() const { return m_targetLocationMaxErrorsHasBeenSet; }
    template<typename TargetLocationMaxErrorsT = Aws::String>
    void SetTargetLocationMaxErrors(TargetLocationMaxErrorsT&& value) { m_targetLocationMaxErrorsHasBeenSet = true; m_targetLocationMaxErrors = std::forward<TargetLocationMaxErrorsT>(value); }
    template<typename TargetLocationMaxErrorsT = Aws::String>
    TargetLocation& WithTargetLocationMaxErrors(TargetLocationMaxErrorsT&& value) { SetTargetLocationMaxErrors(std::forward<TargetLocationMaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Automation execution role used by the currently running Automation. If
     * not specified, the default value is
     * <code>AWS-SystemsManager-AutomationExecutionRole</code>.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const { return m_executionRoleName; }
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }
    template<typename ExecutionRoleNameT = Aws::String>
    void SetExecutionRoleName(ExecutionRoleNameT&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::forward<ExecutionRoleNameT>(value); }
    template<typename ExecutionRoleNameT = Aws::String>
    TargetLocation& WithExecutionRoleName(ExecutionRoleNameT&& value) { SetExecutionRoleName(std::forward<ExecutionRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AlarmConfiguration& GetTargetLocationAlarmConfiguration() const { return m_targetLocationAlarmConfiguration; }
    inline bool TargetLocationAlarmConfigurationHasBeenSet() const { return m_targetLocationAlarmConfigurationHasBeenSet; }
    template<typename TargetLocationAlarmConfigurationT = AlarmConfiguration>
    void SetTargetLocationAlarmConfiguration(TargetLocationAlarmConfigurationT&& value) { m_targetLocationAlarmConfigurationHasBeenSet = true; m_targetLocationAlarmConfiguration = std::forward<TargetLocationAlarmConfigurationT>(value); }
    template<typename TargetLocationAlarmConfigurationT = AlarmConfiguration>
    TargetLocation& WithTargetLocationAlarmConfiguration(TargetLocationAlarmConfigurationT&& value) { SetTargetLocationAlarmConfiguration(std::forward<TargetLocationAlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include child organizational units (OUs) that are
     * children of the targeted OUs. The default is <code>false</code>.</p>
     */
    inline bool GetIncludeChildOrganizationUnits() const { return m_includeChildOrganizationUnits; }
    inline bool IncludeChildOrganizationUnitsHasBeenSet() const { return m_includeChildOrganizationUnitsHasBeenSet; }
    inline void SetIncludeChildOrganizationUnits(bool value) { m_includeChildOrganizationUnitsHasBeenSet = true; m_includeChildOrganizationUnits = value; }
    inline TargetLocation& WithIncludeChildOrganizationUnits(bool value) { SetIncludeChildOrganizationUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services accounts or organizational units to exclude as expanded
     * targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAccounts() const { return m_excludeAccounts; }
    inline bool ExcludeAccountsHasBeenSet() const { return m_excludeAccountsHasBeenSet; }
    template<typename ExcludeAccountsT = Aws::Vector<Aws::String>>
    void SetExcludeAccounts(ExcludeAccountsT&& value) { m_excludeAccountsHasBeenSet = true; m_excludeAccounts = std::forward<ExcludeAccountsT>(value); }
    template<typename ExcludeAccountsT = Aws::Vector<Aws::String>>
    TargetLocation& WithExcludeAccounts(ExcludeAccountsT&& value) { SetExcludeAccounts(std::forward<ExcludeAccountsT>(value)); return *this;}
    template<typename ExcludeAccountsT = Aws::String>
    TargetLocation& AddExcludeAccounts(ExcludeAccountsT&& value) { m_excludeAccountsHasBeenSet = true; m_excludeAccounts.emplace_back(std::forward<ExcludeAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value mappings to target resources. If you specify values for
     * this data type, you must also specify a value for
     * <code>TargetParameterName</code>.</p> <p>This <code>Targets</code> parameter
     * takes precedence over the <code>StartAutomationExecution:Targets</code>
     * parameter if both are supplied.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    TargetLocation& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    TargetLocation& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of targets allowed to run this task in parallel. This
     * <code>TargetsMaxConcurrency</code> takes precedence over the
     * <code>StartAutomationExecution:MaxConcurrency</code> parameter if both are
     * supplied.</p>
     */
    inline const Aws::String& GetTargetsMaxConcurrency() const { return m_targetsMaxConcurrency; }
    inline bool TargetsMaxConcurrencyHasBeenSet() const { return m_targetsMaxConcurrencyHasBeenSet; }
    template<typename TargetsMaxConcurrencyT = Aws::String>
    void SetTargetsMaxConcurrency(TargetsMaxConcurrencyT&& value) { m_targetsMaxConcurrencyHasBeenSet = true; m_targetsMaxConcurrency = std::forward<TargetsMaxConcurrencyT>(value); }
    template<typename TargetsMaxConcurrencyT = Aws::String>
    TargetLocation& WithTargetsMaxConcurrency(TargetsMaxConcurrencyT&& value) { SetTargetsMaxConcurrency(std::forward<TargetsMaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of errors that are allowed before the system stops running
     * the automation on additional targets. This <code>TargetsMaxErrors</code>
     * parameter takes precedence over the
     * <code>StartAutomationExecution:MaxErrors</code> parameter if both are
     * supplied.</p>
     */
    inline const Aws::String& GetTargetsMaxErrors() const { return m_targetsMaxErrors; }
    inline bool TargetsMaxErrorsHasBeenSet() const { return m_targetsMaxErrorsHasBeenSet; }
    template<typename TargetsMaxErrorsT = Aws::String>
    void SetTargetsMaxErrors(TargetsMaxErrorsT&& value) { m_targetsMaxErrorsHasBeenSet = true; m_targetsMaxErrors = std::forward<TargetsMaxErrorsT>(value); }
    template<typename TargetsMaxErrorsT = Aws::String>
    TargetLocation& WithTargetsMaxErrors(TargetsMaxErrorsT&& value) { SetTargetsMaxErrors(std::forward<TargetsMaxErrorsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::String m_targetLocationMaxConcurrency;
    bool m_targetLocationMaxConcurrencyHasBeenSet = false;

    Aws::String m_targetLocationMaxErrors;
    bool m_targetLocationMaxErrorsHasBeenSet = false;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet = false;

    AlarmConfiguration m_targetLocationAlarmConfiguration;
    bool m_targetLocationAlarmConfigurationHasBeenSet = false;

    bool m_includeChildOrganizationUnits{false};
    bool m_includeChildOrganizationUnitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeAccounts;
    bool m_excludeAccountsHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_targetsMaxConcurrency;
    bool m_targetsMaxConcurrencyHasBeenSet = false;

    Aws::String m_targetsMaxErrors;
    bool m_targetsMaxErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
