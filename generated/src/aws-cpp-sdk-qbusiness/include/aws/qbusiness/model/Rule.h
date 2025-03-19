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
    AWS_QBUSINESS_API Rule() = default;
    AWS_QBUSINESS_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Users and groups to be included in a rule.</p>
     */
    inline const UsersAndGroups& GetIncludedUsersAndGroups() const { return m_includedUsersAndGroups; }
    inline bool IncludedUsersAndGroupsHasBeenSet() const { return m_includedUsersAndGroupsHasBeenSet; }
    template<typename IncludedUsersAndGroupsT = UsersAndGroups>
    void SetIncludedUsersAndGroups(IncludedUsersAndGroupsT&& value) { m_includedUsersAndGroupsHasBeenSet = true; m_includedUsersAndGroups = std::forward<IncludedUsersAndGroupsT>(value); }
    template<typename IncludedUsersAndGroupsT = UsersAndGroups>
    Rule& WithIncludedUsersAndGroups(IncludedUsersAndGroupsT&& value) { SetIncludedUsersAndGroups(std::forward<IncludedUsersAndGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Users and groups to be excluded from a rule.</p>
     */
    inline const UsersAndGroups& GetExcludedUsersAndGroups() const { return m_excludedUsersAndGroups; }
    inline bool ExcludedUsersAndGroupsHasBeenSet() const { return m_excludedUsersAndGroupsHasBeenSet; }
    template<typename ExcludedUsersAndGroupsT = UsersAndGroups>
    void SetExcludedUsersAndGroups(ExcludedUsersAndGroupsT&& value) { m_excludedUsersAndGroupsHasBeenSet = true; m_excludedUsersAndGroups = std::forward<ExcludedUsersAndGroupsT>(value); }
    template<typename ExcludedUsersAndGroupsT = UsersAndGroups>
    Rule& WithExcludedUsersAndGroups(ExcludedUsersAndGroupsT&& value) { SetExcludedUsersAndGroups(std::forward<ExcludedUsersAndGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of rule.</p>
     */
    inline RuleType GetRuleType() const { return m_ruleType; }
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
    inline void SetRuleType(RuleType value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }
    inline Rule& WithRuleType(RuleType value) { SetRuleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for a rule.</p>
     */
    inline const RuleConfiguration& GetRuleConfiguration() const { return m_ruleConfiguration; }
    inline bool RuleConfigurationHasBeenSet() const { return m_ruleConfigurationHasBeenSet; }
    template<typename RuleConfigurationT = RuleConfiguration>
    void SetRuleConfiguration(RuleConfigurationT&& value) { m_ruleConfigurationHasBeenSet = true; m_ruleConfiguration = std::forward<RuleConfigurationT>(value); }
    template<typename RuleConfigurationT = RuleConfiguration>
    Rule& WithRuleConfiguration(RuleConfigurationT&& value) { SetRuleConfiguration(std::forward<RuleConfigurationT>(value)); return *this;}
    ///@}
  private:

    UsersAndGroups m_includedUsersAndGroups;
    bool m_includedUsersAndGroupsHasBeenSet = false;

    UsersAndGroups m_excludedUsersAndGroups;
    bool m_excludedUsersAndGroupsHasBeenSet = false;

    RuleType m_ruleType{RuleType::NOT_SET};
    bool m_ruleTypeHasBeenSet = false;

    RuleConfiguration m_ruleConfiguration;
    bool m_ruleConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
