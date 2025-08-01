/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
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
   * <p> Configuration parameters specific to VPC Flow Logs. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/VPCFlowLogParameters">AWS
   * API Reference</a></p>
   */
  class VPCFlowLogParameters
  {
  public:
    AWS_OBSERVABILITYADMIN_API VPCFlowLogParameters() = default;
    AWS_OBSERVABILITYADMIN_API VPCFlowLogParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API VPCFlowLogParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The format in which VPC Flow Log entries should be logged. </p>
     */
    inline const Aws::String& GetLogFormat() const { return m_logFormat; }
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }
    template<typename LogFormatT = Aws::String>
    void SetLogFormat(LogFormatT&& value) { m_logFormatHasBeenSet = true; m_logFormat = std::forward<LogFormatT>(value); }
    template<typename LogFormatT = Aws::String>
    VPCFlowLogParameters& WithLogFormat(LogFormatT&& value) { SetLogFormat(std::forward<LogFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of traffic to log (ACCEPT, REJECT, or ALL). </p>
     */
    inline const Aws::String& GetTrafficType() const { return m_trafficType; }
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }
    template<typename TrafficTypeT = Aws::String>
    void SetTrafficType(TrafficTypeT&& value) { m_trafficTypeHasBeenSet = true; m_trafficType = std::forward<TrafficTypeT>(value); }
    template<typename TrafficTypeT = Aws::String>
    VPCFlowLogParameters& WithTrafficType(TrafficTypeT&& value) { SetTrafficType(std::forward<TrafficTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum interval in seconds between the capture of flow log records.
     * </p>
     */
    inline int GetMaxAggregationInterval() const { return m_maxAggregationInterval; }
    inline bool MaxAggregationIntervalHasBeenSet() const { return m_maxAggregationIntervalHasBeenSet; }
    inline void SetMaxAggregationInterval(int value) { m_maxAggregationIntervalHasBeenSet = true; m_maxAggregationInterval = value; }
    inline VPCFlowLogParameters& WithMaxAggregationInterval(int value) { SetMaxAggregationInterval(value); return *this;}
    ///@}
  private:

    Aws::String m_logFormat;
    bool m_logFormatHasBeenSet = false;

    Aws::String m_trafficType;
    bool m_trafficTypeHasBeenSet = false;

    int m_maxAggregationInterval{0};
    bool m_maxAggregationIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
