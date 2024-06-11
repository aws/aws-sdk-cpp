/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/UsersAndGroups.h>
#include <aws/qbusiness/model/RuleType.h>
#include <aws/qbusiness/model/RuleConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Guardrail rules for an Amazon Q Business application. Amazon Q Business
   * supports only one rule at a time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Rule">AWS API
   * Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_QBUSINESS_API Rule();
    AWS_QBUSINESS_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Users and groups to be included in a rule.</p>
     */
    inline const UsersAndGroups& GetIncludedUsersAndGroups() const{ return m_includedUsersAndGroups; }
    inline bool IncludedUsersAndGroupsHasBeenSet() const { return m_includedUsersAndGroupsHasBeenSet; }
    inline void SetIncludedUsersAndGroups(const UsersAndGroups& value) { m_includedUsersAndGroupsHasBeenSet = true; m_includedUsersAndGroups = value; }
    inline void SetIncludedUsersAndGroups(UsersAndGroups&& value) { m_includedUsersAndGroupsHasBeenSet = true; m_includedUsersAndGroups = std::move(value); }
    inline Rule& WithIncludedUsersAndGroups(const UsersAndGroups& value) { SetIncludedUsersAndGroups(value); return *this;}
    inline Rule& WithIncludedUsersAndGroups(UsersAndGroups&& value) { SetIncludedUsersAndGroups(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Users and groups to be excluded from a rule.</p>
     */
    inline const UsersAndGroups& GetExcludedUsersAndGroups() const{ return m_excludedUsersAndGroups; }
    inline bool ExcludedUsersAndGroupsHasBeenSet() const { return m_excludedUsersAndGroupsHasBeenSet; }
    inline void SetExcludedUsersAndGroups(const UsersAndGroups& value) { m_excludedUsersAndGroupsHasBeenSet = true; m_excludedUsersAndGroups = value; }
    inline void SetExcludedUsersAndGroups(UsersAndGroups&& value) { m_excludedUsersAndGroupsHasBeenSet = true; m_excludedUsersAndGroups = std::move(value); }
    inline Rule& WithExcludedUsersAndGroups(const UsersAndGroups& value) { SetExcludedUsersAndGroups(value); return *this;}
    inline Rule& WithExcludedUsersAndGroups(UsersAndGroups&& value) { SetExcludedUsersAndGroups(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of rule.</p>
     */
    inline const RuleType& GetRuleType() const{ return m_ruleType; }
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
    inline void SetRuleType(const RuleType& value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }
    inline void SetRuleType(RuleType&& value) { m_ruleTypeHasBeenSet = true; m_ruleType = std::move(value); }
    inline Rule& WithRuleType(const RuleType& value) { SetRuleType(value); return *this;}
    inline Rule& WithRuleType(RuleType&& value) { SetRuleType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for a rule.</p>
     */
    inline const RuleConfiguration& GetRuleConfiguration() const{ return m_ruleConfiguration; }
    inline bool RuleConfigurationHasBeenSet() const { return m_ruleConfigurationHasBeenSet; }
    inline void SetRuleConfiguration(const RuleConfiguration& value) { m_ruleConfigurationHasBeenSet = true; m_ruleConfiguration = value; }
    inline void SetRuleConfiguration(RuleConfiguration&& value) { m_ruleConfigurationHasBeenSet = true; m_ruleConfiguration = std::move(value); }
    inline Rule& WithRuleConfiguration(const RuleConfiguration& value) { SetRuleConfiguration(value); return *this;}
    inline Rule& WithRuleConfiguration(RuleConfiguration&& value) { SetRuleConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    UsersAndGroups m_includedUsersAndGroups;
    bool m_includedUsersAndGroupsHasBeenSet = false;

    UsersAndGroups m_excludedUsersAndGroups;
    bool m_excludedUsersAndGroupsHasBeenSet = false;

    RuleType m_ruleType;
    bool m_ruleTypeHasBeenSet = false;

    RuleConfiguration m_ruleConfiguration;
    bool m_ruleConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
