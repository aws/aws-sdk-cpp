/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Stateful inspection criteria for a domain list rule group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceListDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceListDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceListDetails() = default;
    AWS_SECURITYHUB_API RuleGroupSourceListDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether to allow or deny access to the domains listed in
     * <code>Targets</code>.</p>
     */
    inline const Aws::String& GetGeneratedRulesType() const { return m_generatedRulesType; }
    inline bool GeneratedRulesTypeHasBeenSet() const { return m_generatedRulesTypeHasBeenSet; }
    template<typename GeneratedRulesTypeT = Aws::String>
    void SetGeneratedRulesType(GeneratedRulesTypeT&& value) { m_generatedRulesTypeHasBeenSet = true; m_generatedRulesType = std::forward<GeneratedRulesTypeT>(value); }
    template<typename GeneratedRulesTypeT = Aws::String>
    RuleGroupSourceListDetails& WithGeneratedRulesType(GeneratedRulesTypeT&& value) { SetGeneratedRulesType(std::forward<GeneratedRulesTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocols that you want to inspect. Specify <code>LS_SNI</code> for
     * HTTPS. Specify <code>HTTP_HOST</code> for HTTP. You can specify either or
     * both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetTypes() const { return m_targetTypes; }
    inline bool TargetTypesHasBeenSet() const { return m_targetTypesHasBeenSet; }
    template<typename TargetTypesT = Aws::Vector<Aws::String>>
    void SetTargetTypes(TargetTypesT&& value) { m_targetTypesHasBeenSet = true; m_targetTypes = std::forward<TargetTypesT>(value); }
    template<typename TargetTypesT = Aws::Vector<Aws::String>>
    RuleGroupSourceListDetails& WithTargetTypes(TargetTypesT&& value) { SetTargetTypes(std::forward<TargetTypesT>(value)); return *this;}
    template<typename TargetTypesT = Aws::String>
    RuleGroupSourceListDetails& AddTargetTypes(TargetTypesT&& value) { m_targetTypesHasBeenSet = true; m_targetTypes.emplace_back(std::forward<TargetTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domains that you want to inspect for in your traffic flows. You can
     * provide full domain names, or use the '.' prefix as a wildcard. For example,
     * <code>.example.com</code> matches all domains that end with
     * <code>example.com</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    RuleGroupSourceListDetails& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Aws::String>
    RuleGroupSourceListDetails& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_generatedRulesType;
    bool m_generatedRulesTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetTypes;
    bool m_targetTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
