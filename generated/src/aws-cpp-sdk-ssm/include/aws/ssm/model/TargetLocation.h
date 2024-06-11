﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AlarmConfiguration.h>
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
    AWS_SSM_API TargetLocation();
    AWS_SSM_API TargetLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API TargetLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services accounts targeted by the current Automation
     * execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }
    inline TargetLocation& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}
    inline TargetLocation& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}
    inline TargetLocation& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    inline TargetLocation& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }
    inline TargetLocation& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Regions targeted by the current Automation
     * execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }
    inline TargetLocation& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline TargetLocation& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline TargetLocation& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    inline TargetLocation& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }
    inline TargetLocation& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of Amazon Web Services Regions and Amazon Web Services
     * accounts allowed to run the Automation concurrently.</p>
     */
    inline const Aws::String& GetTargetLocationMaxConcurrency() const{ return m_targetLocationMaxConcurrency; }
    inline bool TargetLocationMaxConcurrencyHasBeenSet() const { return m_targetLocationMaxConcurrencyHasBeenSet; }
    inline void SetTargetLocationMaxConcurrency(const Aws::String& value) { m_targetLocationMaxConcurrencyHasBeenSet = true; m_targetLocationMaxConcurrency = value; }
    inline void SetTargetLocationMaxConcurrency(Aws::String&& value) { m_targetLocationMaxConcurrencyHasBeenSet = true; m_targetLocationMaxConcurrency = std::move(value); }
    inline void SetTargetLocationMaxConcurrency(const char* value) { m_targetLocationMaxConcurrencyHasBeenSet = true; m_targetLocationMaxConcurrency.assign(value); }
    inline TargetLocation& WithTargetLocationMaxConcurrency(const Aws::String& value) { SetTargetLocationMaxConcurrency(value); return *this;}
    inline TargetLocation& WithTargetLocationMaxConcurrency(Aws::String&& value) { SetTargetLocationMaxConcurrency(std::move(value)); return *this;}
    inline TargetLocation& WithTargetLocationMaxConcurrency(const char* value) { SetTargetLocationMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation.</p>
     */
    inline const Aws::String& GetTargetLocationMaxErrors() const{ return m_targetLocationMaxErrors; }
    inline bool TargetLocationMaxErrorsHasBeenSet() const { return m_targetLocationMaxErrorsHasBeenSet; }
    inline void SetTargetLocationMaxErrors(const Aws::String& value) { m_targetLocationMaxErrorsHasBeenSet = true; m_targetLocationMaxErrors = value; }
    inline void SetTargetLocationMaxErrors(Aws::String&& value) { m_targetLocationMaxErrorsHasBeenSet = true; m_targetLocationMaxErrors = std::move(value); }
    inline void SetTargetLocationMaxErrors(const char* value) { m_targetLocationMaxErrorsHasBeenSet = true; m_targetLocationMaxErrors.assign(value); }
    inline TargetLocation& WithTargetLocationMaxErrors(const Aws::String& value) { SetTargetLocationMaxErrors(value); return *this;}
    inline TargetLocation& WithTargetLocationMaxErrors(Aws::String&& value) { SetTargetLocationMaxErrors(std::move(value)); return *this;}
    inline TargetLocation& WithTargetLocationMaxErrors(const char* value) { SetTargetLocationMaxErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Automation execution role used by the currently running Automation. If
     * not specified, the default value is
     * <code>AWS-SystemsManager-AutomationExecutionRole</code>.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const{ return m_executionRoleName; }
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }
    inline void SetExecutionRoleName(const Aws::String& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = value; }
    inline void SetExecutionRoleName(Aws::String&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::move(value); }
    inline void SetExecutionRoleName(const char* value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName.assign(value); }
    inline TargetLocation& WithExecutionRoleName(const Aws::String& value) { SetExecutionRoleName(value); return *this;}
    inline TargetLocation& WithExecutionRoleName(Aws::String&& value) { SetExecutionRoleName(std::move(value)); return *this;}
    inline TargetLocation& WithExecutionRoleName(const char* value) { SetExecutionRoleName(value); return *this;}
    ///@}

    ///@{
    
    inline const AlarmConfiguration& GetTargetLocationAlarmConfiguration() const{ return m_targetLocationAlarmConfiguration; }
    inline bool TargetLocationAlarmConfigurationHasBeenSet() const { return m_targetLocationAlarmConfigurationHasBeenSet; }
    inline void SetTargetLocationAlarmConfiguration(const AlarmConfiguration& value) { m_targetLocationAlarmConfigurationHasBeenSet = true; m_targetLocationAlarmConfiguration = value; }
    inline void SetTargetLocationAlarmConfiguration(AlarmConfiguration&& value) { m_targetLocationAlarmConfigurationHasBeenSet = true; m_targetLocationAlarmConfiguration = std::move(value); }
    inline TargetLocation& WithTargetLocationAlarmConfiguration(const AlarmConfiguration& value) { SetTargetLocationAlarmConfiguration(value); return *this;}
    inline TargetLocation& WithTargetLocationAlarmConfiguration(AlarmConfiguration&& value) { SetTargetLocationAlarmConfiguration(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
