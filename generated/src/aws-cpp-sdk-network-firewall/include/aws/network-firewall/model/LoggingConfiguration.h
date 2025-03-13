/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/LogDestinationConfig.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Defines how Network Firewall performs logging for a <a>Firewall</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_NETWORKFIREWALL_API LoggingConfiguration() = default;
    AWS_NETWORKFIREWALL_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the logging destinations for the logs for a firewall. Network
     * Firewall generates logs for stateful rule groups. </p>
     */
    inline const Aws::Vector<LogDestinationConfig>& GetLogDestinationConfigs() const { return m_logDestinationConfigs; }
    inline bool LogDestinationConfigsHasBeenSet() const { return m_logDestinationConfigsHasBeenSet; }
    template<typename LogDestinationConfigsT = Aws::Vector<LogDestinationConfig>>
    void SetLogDestinationConfigs(LogDestinationConfigsT&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = std::forward<LogDestinationConfigsT>(value); }
    template<typename LogDestinationConfigsT = Aws::Vector<LogDestinationConfig>>
    LoggingConfiguration& WithLogDestinationConfigs(LogDestinationConfigsT&& value) { SetLogDestinationConfigs(std::forward<LogDestinationConfigsT>(value)); return *this;}
    template<typename LogDestinationConfigsT = LogDestinationConfig>
    LoggingConfiguration& AddLogDestinationConfigs(LogDestinationConfigsT&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.emplace_back(std::forward<LogDestinationConfigsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LogDestinationConfig> m_logDestinationConfigs;
    bool m_logDestinationConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
