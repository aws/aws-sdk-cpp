/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/model/LogGroupConfiguration.h>
#include <aws/oam/model/MetricConfiguration.h>
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
namespace OAM
{
namespace Model
{

  /**
   * <p>Use this structure to optionally create filters that specify that only some
   * metric namespaces or log groups are to be shared from the source account to the
   * monitoring account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/LinkConfiguration">AWS
   * API Reference</a></p>
   */
  class LinkConfiguration
  {
  public:
    AWS_OAM_API LinkConfiguration() = default;
    AWS_OAM_API LinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API LinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use this structure to filter which log groups are to send log events from the
     * source account to the monitoring account.</p>
     */
    inline const LogGroupConfiguration& GetLogGroupConfiguration() const { return m_logGroupConfiguration; }
    inline bool LogGroupConfigurationHasBeenSet() const { return m_logGroupConfigurationHasBeenSet; }
    template<typename LogGroupConfigurationT = LogGroupConfiguration>
    void SetLogGroupConfiguration(LogGroupConfigurationT&& value) { m_logGroupConfigurationHasBeenSet = true; m_logGroupConfiguration = std::forward<LogGroupConfigurationT>(value); }
    template<typename LogGroupConfigurationT = LogGroupConfiguration>
    LinkConfiguration& WithLogGroupConfiguration(LogGroupConfigurationT&& value) { SetLogGroupConfiguration(std::forward<LogGroupConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure to filter which metric namespaces are to be shared from
     * the source account to the monitoring account.</p>
     */
    inline const MetricConfiguration& GetMetricConfiguration() const { return m_metricConfiguration; }
    inline bool MetricConfigurationHasBeenSet() const { return m_metricConfigurationHasBeenSet; }
    template<typename MetricConfigurationT = MetricConfiguration>
    void SetMetricConfiguration(MetricConfigurationT&& value) { m_metricConfigurationHasBeenSet = true; m_metricConfiguration = std::forward<MetricConfigurationT>(value); }
    template<typename MetricConfigurationT = MetricConfiguration>
    LinkConfiguration& WithMetricConfiguration(MetricConfigurationT&& value) { SetMetricConfiguration(std::forward<MetricConfigurationT>(value)); return *this;}
    ///@}
  private:

    LogGroupConfiguration m_logGroupConfiguration;
    bool m_logGroupConfigurationHasBeenSet = false;

    MetricConfiguration m_metricConfiguration;
    bool m_metricConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
