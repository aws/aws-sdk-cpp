/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Status.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/RowLevelPermissionTagRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of tags on a dataset to set row-level security.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowLevelPermissionTagConfiguration">AWS
   * API Reference</a></p>
   */
  class RowLevelPermissionTagConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RowLevelPermissionTagConfiguration() = default;
    AWS_QUICKSIGHT_API RowLevelPermissionTagConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowLevelPermissionTagConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of row-level security tags. If enabled, the status is
     * <code>ENABLED</code>. If disabled, the status is <code>DISABLED</code>.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline RowLevelPermissionTagConfiguration& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of rules associated with row-level security, such as the tag names and
     * columns that they are assigned to.</p>
     */
    inline const Aws::Vector<RowLevelPermissionTagRule>& GetTagRules() const { return m_tagRules; }
    inline bool TagRulesHasBeenSet() const { return m_tagRulesHasBeenSet; }
    template<typename TagRulesT = Aws::Vector<RowLevelPermissionTagRule>>
    void SetTagRules(TagRulesT&& value) { m_tagRulesHasBeenSet = true; m_tagRules = std::forward<TagRulesT>(value); }
    template<typename TagRulesT = Aws::Vector<RowLevelPermissionTagRule>>
    RowLevelPermissionTagConfiguration& WithTagRules(TagRulesT&& value) { SetTagRules(std::forward<TagRulesT>(value)); return *this;}
    template<typename TagRulesT = RowLevelPermissionTagRule>
    RowLevelPermissionTagConfiguration& AddTagRules(TagRulesT&& value) { m_tagRulesHasBeenSet = true; m_tagRules.emplace_back(std::forward<TagRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tag configuration rules to apply to a dataset. All tag
     * configurations have the OR condition. Tags within each tile will be joined
     * (AND). At least one rule in this structure must have all tag values assigned to
     * it to apply Row-level security (RLS) to the dataset.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetTagRuleConfigurations() const { return m_tagRuleConfigurations; }
    inline bool TagRuleConfigurationsHasBeenSet() const { return m_tagRuleConfigurationsHasBeenSet; }
    template<typename TagRuleConfigurationsT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetTagRuleConfigurations(TagRuleConfigurationsT&& value) { m_tagRuleConfigurationsHasBeenSet = true; m_tagRuleConfigurations = std::forward<TagRuleConfigurationsT>(value); }
    template<typename TagRuleConfigurationsT = Aws::Vector<Aws::Vector<Aws::String>>>
    RowLevelPermissionTagConfiguration& WithTagRuleConfigurations(TagRuleConfigurationsT&& value) { SetTagRuleConfigurations(std::forward<TagRuleConfigurationsT>(value)); return *this;}
    template<typename TagRuleConfigurationsT = Aws::Vector<Aws::String>>
    RowLevelPermissionTagConfiguration& AddTagRuleConfigurations(TagRuleConfigurationsT&& value) { m_tagRuleConfigurationsHasBeenSet = true; m_tagRuleConfigurations.emplace_back(std::forward<TagRuleConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<RowLevelPermissionTagRule> m_tagRules;
    bool m_tagRulesHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_tagRuleConfigurations;
    bool m_tagRuleConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
