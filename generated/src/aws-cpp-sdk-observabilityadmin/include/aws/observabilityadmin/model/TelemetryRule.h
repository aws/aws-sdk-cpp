/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ResourceType.h>
#include <aws/observabilityadmin/model/TelemetryType.h>
#include <aws/observabilityadmin/model/TelemetryDestinationConfiguration.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p> Defines how telemetry should be configured for specific Amazon Web Services
   * resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryRule">AWS
   * API Reference</a></p>
   */
  class TelemetryRule
  {
  public:
    AWS_OBSERVABILITYADMIN_API TelemetryRule() = default;
    AWS_OBSERVABILITYADMIN_API TelemetryRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API TelemetryRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of Amazon Web Services resource to configure telemetry for (e.g.,
     * "AWS::EC2::VPC"). </p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TelemetryRule& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of telemetry to collect (Logs, Metrics, or Traces). </p>
     */
    inline TelemetryType GetTelemetryType() const { return m_telemetryType; }
    inline bool TelemetryTypeHasBeenSet() const { return m_telemetryTypeHasBeenSet; }
    inline void SetTelemetryType(TelemetryType value) { m_telemetryTypeHasBeenSet = true; m_telemetryType = value; }
    inline TelemetryRule& WithTelemetryType(TelemetryType value) { SetTelemetryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration specifying where and how the telemetry data should be
     * delivered. </p>
     */
    inline const TelemetryDestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
    template<typename DestinationConfigurationT = TelemetryDestinationConfiguration>
    void SetDestinationConfiguration(DestinationConfigurationT&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::forward<DestinationConfigurationT>(value); }
    template<typename DestinationConfigurationT = TelemetryDestinationConfiguration>
    TelemetryRule& WithDestinationConfiguration(DestinationConfigurationT&& value) { SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The organizational scope to which the rule applies, specified using accounts
     * or organizational units. </p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    TelemetryRule& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Criteria for selecting which resources the rule applies to, such as resource
     * tags. </p>
     */
    inline const Aws::String& GetSelectionCriteria() const { return m_selectionCriteria; }
    inline bool SelectionCriteriaHasBeenSet() const { return m_selectionCriteriaHasBeenSet; }
    template<typename SelectionCriteriaT = Aws::String>
    void SetSelectionCriteria(SelectionCriteriaT&& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = std::forward<SelectionCriteriaT>(value); }
    template<typename SelectionCriteriaT = Aws::String>
    TelemetryRule& WithSelectionCriteria(SelectionCriteriaT&& value) { SetSelectionCriteria(std::forward<SelectionCriteriaT>(value)); return *this;}
    ///@}
  private:

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    TelemetryType m_telemetryType{TelemetryType::NOT_SET};
    bool m_telemetryTypeHasBeenSet = false;

    TelemetryDestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_selectionCriteria;
    bool m_selectionCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
