/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AutomationRulesActionTypeV2.h>
#include <aws/securityhub/model/AutomationRulesFindingFieldsUpdateV2.h>
#include <aws/securityhub/model/ExternalIntegrationConfiguration.h>
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
   * <p>Allows you to configure automated responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesActionV2">AWS
   * API Reference</a></p>
   */
  class AutomationRulesActionV2
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesActionV2() = default;
    AWS_SECURITYHUB_API AutomationRulesActionV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesActionV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category of action to be executed by the automation rule.</p>
     */
    inline AutomationRulesActionTypeV2 GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AutomationRulesActionTypeV2 value) { m_typeHasBeenSet = true; m_type = value; }
    inline AutomationRulesActionV2& WithType(AutomationRulesActionTypeV2 value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The changes to be applied to fields in a security finding when an automation
     * rule is triggered.</p>
     */
    inline const AutomationRulesFindingFieldsUpdateV2& GetFindingFieldsUpdate() const { return m_findingFieldsUpdate; }
    inline bool FindingFieldsUpdateHasBeenSet() const { return m_findingFieldsUpdateHasBeenSet; }
    template<typename FindingFieldsUpdateT = AutomationRulesFindingFieldsUpdateV2>
    void SetFindingFieldsUpdate(FindingFieldsUpdateT&& value) { m_findingFieldsUpdateHasBeenSet = true; m_findingFieldsUpdate = std::forward<FindingFieldsUpdateT>(value); }
    template<typename FindingFieldsUpdateT = AutomationRulesFindingFieldsUpdateV2>
    AutomationRulesActionV2& WithFindingFieldsUpdate(FindingFieldsUpdateT&& value) { SetFindingFieldsUpdate(std::forward<FindingFieldsUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for integrating automation rule actions with external systems or
     * service.</p>
     */
    inline const ExternalIntegrationConfiguration& GetExternalIntegrationConfiguration() const { return m_externalIntegrationConfiguration; }
    inline bool ExternalIntegrationConfigurationHasBeenSet() const { return m_externalIntegrationConfigurationHasBeenSet; }
    template<typename ExternalIntegrationConfigurationT = ExternalIntegrationConfiguration>
    void SetExternalIntegrationConfiguration(ExternalIntegrationConfigurationT&& value) { m_externalIntegrationConfigurationHasBeenSet = true; m_externalIntegrationConfiguration = std::forward<ExternalIntegrationConfigurationT>(value); }
    template<typename ExternalIntegrationConfigurationT = ExternalIntegrationConfiguration>
    AutomationRulesActionV2& WithExternalIntegrationConfiguration(ExternalIntegrationConfigurationT&& value) { SetExternalIntegrationConfiguration(std::forward<ExternalIntegrationConfigurationT>(value)); return *this;}
    ///@}
  private:

    AutomationRulesActionTypeV2 m_type{AutomationRulesActionTypeV2::NOT_SET};
    bool m_typeHasBeenSet = false;

    AutomationRulesFindingFieldsUpdateV2 m_findingFieldsUpdate;
    bool m_findingFieldsUpdateHasBeenSet = false;

    ExternalIntegrationConfiguration m_externalIntegrationConfiguration;
    bool m_externalIntegrationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
