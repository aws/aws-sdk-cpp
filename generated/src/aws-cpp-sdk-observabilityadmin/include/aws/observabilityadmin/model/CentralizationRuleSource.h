/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/SourceLogsConfiguration.h>
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
   * <p>Configuration specifying the source of telemetry data to be
   * centralized.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CentralizationRuleSource">AWS
   * API Reference</a></p>
   */
  class CentralizationRuleSource
  {
  public:
    AWS_OBSERVABILITYADMIN_API CentralizationRuleSource() = default;
    AWS_OBSERVABILITYADMIN_API CentralizationRuleSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API CentralizationRuleSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of source regions from which telemetry data should be
     * centralized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    CentralizationRuleSource& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    CentralizationRuleSource& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The organizational scope from which telemetry data should be centralized,
     * specified using organization id, accounts or organizational unit ids.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    CentralizationRuleSource& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Log specific configuration for centralization source log groups.</p>
     */
    inline const SourceLogsConfiguration& GetSourceLogsConfiguration() const { return m_sourceLogsConfiguration; }
    inline bool SourceLogsConfigurationHasBeenSet() const { return m_sourceLogsConfigurationHasBeenSet; }
    template<typename SourceLogsConfigurationT = SourceLogsConfiguration>
    void SetSourceLogsConfiguration(SourceLogsConfigurationT&& value) { m_sourceLogsConfigurationHasBeenSet = true; m_sourceLogsConfiguration = std::forward<SourceLogsConfigurationT>(value); }
    template<typename SourceLogsConfigurationT = SourceLogsConfiguration>
    CentralizationRuleSource& WithSourceLogsConfiguration(SourceLogsConfigurationT&& value) { SetSourceLogsConfiguration(std::forward<SourceLogsConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    SourceLogsConfiguration m_sourceLogsConfiguration;
    bool m_sourceLogsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
