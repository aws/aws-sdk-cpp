/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/DestinationLogsConfiguration.h>
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
   * <p>Configuration specifying the primary destination for centralized telemetry
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CentralizationRuleDestination">AWS
   * API Reference</a></p>
   */
  class CentralizationRuleDestination
  {
  public:
    AWS_OBSERVABILITYADMIN_API CentralizationRuleDestination() = default;
    AWS_OBSERVABILITYADMIN_API CentralizationRuleDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API CentralizationRuleDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The primary destination region to which telemetry data should be
     * centralized.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    CentralizationRuleDestination& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination account (within the organization) to which the telemetry data
     * should be centralized.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    CentralizationRuleDestination& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Log specific configuration for centralization destination log groups.</p>
     */
    inline const DestinationLogsConfiguration& GetDestinationLogsConfiguration() const { return m_destinationLogsConfiguration; }
    inline bool DestinationLogsConfigurationHasBeenSet() const { return m_destinationLogsConfigurationHasBeenSet; }
    template<typename DestinationLogsConfigurationT = DestinationLogsConfiguration>
    void SetDestinationLogsConfiguration(DestinationLogsConfigurationT&& value) { m_destinationLogsConfigurationHasBeenSet = true; m_destinationLogsConfiguration = std::forward<DestinationLogsConfigurationT>(value); }
    template<typename DestinationLogsConfigurationT = DestinationLogsConfiguration>
    CentralizationRuleDestination& WithDestinationLogsConfiguration(DestinationLogsConfigurationT&& value) { SetDestinationLogsConfiguration(std::forward<DestinationLogsConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    DestinationLogsConfiguration m_destinationLogsConfiguration;
    bool m_destinationLogsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
