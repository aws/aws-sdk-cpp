/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchRule.h>
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
   * <p>A set of rules defining the approval rules for a patch
   * baseline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchRuleGroup">AWS
   * API Reference</a></p>
   */
  class PatchRuleGroup
  {
  public:
    AWS_SSM_API PatchRuleGroup() = default;
    AWS_SSM_API PatchRuleGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rules that make up the rule group.</p>
     */
    inline const Aws::Vector<PatchRule>& GetPatchRules() const { return m_patchRules; }
    inline bool PatchRulesHasBeenSet() const { return m_patchRulesHasBeenSet; }
    template<typename PatchRulesT = Aws::Vector<PatchRule>>
    void SetPatchRules(PatchRulesT&& value) { m_patchRulesHasBeenSet = true; m_patchRules = std::forward<PatchRulesT>(value); }
    template<typename PatchRulesT = Aws::Vector<PatchRule>>
    PatchRuleGroup& WithPatchRules(PatchRulesT&& value) { SetPatchRules(std::forward<PatchRulesT>(value)); return *this;}
    template<typename PatchRulesT = PatchRule>
    PatchRuleGroup& AddPatchRules(PatchRulesT&& value) { m_patchRulesHasBeenSet = true; m_patchRules.emplace_back(std::forward<PatchRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PatchRule> m_patchRules;
    bool m_patchRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
