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
    AWS_OAM_API LinkConfiguration();
    AWS_OAM_API LinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API LinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use this structure to filter which log groups are to send log events from the
     * source account to the monitoring account.</p>
     */
    inline const LogGroupConfiguration& GetLogGroupConfiguration() const{ return m_logGroupConfiguration; }

    /**
     * <p>Use this structure to filter which log groups are to send log events from the
     * source account to the monitoring account.</p>
     */
    inline bool LogGroupConfigurationHasBeenSet() const { return m_logGroupConfigurationHasBeenSet; }

    /**
     * <p>Use this structure to filter which log groups are to send log events from the
     * source account to the monitoring account.</p>
     */
    inline void SetLogGroupConfiguration(const LogGroupConfiguration& value) { m_logGroupConfigurationHasBeenSet = true; m_logGroupConfiguration = value; }

    /**
     * <p>Use this structure to filter which log groups are to send log events from the
     * source account to the monitoring account.</p>
     */
    inline void SetLogGroupConfiguration(LogGroupConfiguration&& value) { m_logGroupConfigurationHasBeenSet = true; m_logGroupConfiguration = std::move(value); }

    /**
     * <p>Use this structure to filter which log groups are to send log events from the
     * source account to the monitoring account.</p>
     */
    inline LinkConfiguration& WithLogGroupConfiguration(const LogGroupConfiguration& value) { SetLogGroupConfiguration(value); return *this;}

    /**
     * <p>Use this structure to filter which log groups are to send log events from the
     * source account to the monitoring account.</p>
     */
    inline LinkConfiguration& WithLogGroupConfiguration(LogGroupConfiguration&& value) { SetLogGroupConfiguration(std::move(value)); return *this;}


    /**
     * <p>Use this structure to filter which metric namespaces are to be shared from
     * the source account to the monitoring account.</p>
     */
    inline const MetricConfiguration& GetMetricConfiguration() const{ return m_metricConfiguration; }

    /**
     * <p>Use this structure to filter which metric namespaces are to be shared from
     * the source account to the monitoring account.</p>
     */
    inline bool MetricConfigurationHasBeenSet() const { return m_metricConfigurationHasBeenSet; }

    /**
     * <p>Use this structure to filter which metric namespaces are to be shared from
     * the source account to the monitoring account.</p>
     */
    inline void SetMetricConfiguration(const MetricConfiguration& value) { m_metricConfigurationHasBeenSet = true; m_metricConfiguration = value; }

    /**
     * <p>Use this structure to filter which metric namespaces are to be shared from
     * the source account to the monitoring account.</p>
     */
    inline void SetMetricConfiguration(MetricConfiguration&& value) { m_metricConfigurationHasBeenSet = true; m_metricConfiguration = std::move(value); }

    /**
     * <p>Use this structure to filter which metric namespaces are to be shared from
     * the source account to the monitoring account.</p>
     */
    inline LinkConfiguration& WithMetricConfiguration(const MetricConfiguration& value) { SetMetricConfiguration(value); return *this;}

    /**
     * <p>Use this structure to filter which metric namespaces are to be shared from
     * the source account to the monitoring account.</p>
     */
    inline LinkConfiguration& WithMetricConfiguration(MetricConfiguration&& value) { SetMetricConfiguration(std::move(value)); return *this;}

  private:

    LogGroupConfiguration m_logGroupConfiguration;
    bool m_logGroupConfigurationHasBeenSet = false;

    MetricConfiguration m_metricConfiguration;
    bool m_metricConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
