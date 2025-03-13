/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringConstraintsResource.h>
#include <aws/sagemaker/model/MonitoringStatisticsResource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration for monitoring constraints and monitoring statistics. These
   * baseline resources are compared against the results of the current job from the
   * series of jobs scheduled to collect data periodically.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringBaselineConfig">AWS
   * API Reference</a></p>
   */
  class MonitoringBaselineConfig
  {
  public:
    AWS_SAGEMAKER_API MonitoringBaselineConfig() = default;
    AWS_SAGEMAKER_API MonitoringBaselineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringBaselineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline const Aws::String& GetBaseliningJobName() const { return m_baseliningJobName; }
    inline bool BaseliningJobNameHasBeenSet() const { return m_baseliningJobNameHasBeenSet; }
    template<typename BaseliningJobNameT = Aws::String>
    void SetBaseliningJobName(BaseliningJobNameT&& value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName = std::forward<BaseliningJobNameT>(value); }
    template<typename BaseliningJobNameT = Aws::String>
    MonitoringBaselineConfig& WithBaseliningJobName(BaseliningJobNameT&& value) { SetBaseliningJobName(std::forward<BaseliningJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline const MonitoringConstraintsResource& GetConstraintsResource() const { return m_constraintsResource; }
    inline bool ConstraintsResourceHasBeenSet() const { return m_constraintsResourceHasBeenSet; }
    template<typename ConstraintsResourceT = MonitoringConstraintsResource>
    void SetConstraintsResource(ConstraintsResourceT&& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = std::forward<ConstraintsResourceT>(value); }
    template<typename ConstraintsResourceT = MonitoringConstraintsResource>
    MonitoringBaselineConfig& WithConstraintsResource(ConstraintsResourceT&& value) { SetConstraintsResource(std::forward<ConstraintsResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline const MonitoringStatisticsResource& GetStatisticsResource() const { return m_statisticsResource; }
    inline bool StatisticsResourceHasBeenSet() const { return m_statisticsResourceHasBeenSet; }
    template<typename StatisticsResourceT = MonitoringStatisticsResource>
    void SetStatisticsResource(StatisticsResourceT&& value) { m_statisticsResourceHasBeenSet = true; m_statisticsResource = std::forward<StatisticsResourceT>(value); }
    template<typename StatisticsResourceT = MonitoringStatisticsResource>
    MonitoringBaselineConfig& WithStatisticsResource(StatisticsResourceT&& value) { SetStatisticsResource(std::forward<StatisticsResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseliningJobName;
    bool m_baseliningJobNameHasBeenSet = false;

    MonitoringConstraintsResource m_constraintsResource;
    bool m_constraintsResourceHasBeenSet = false;

    MonitoringStatisticsResource m_statisticsResource;
    bool m_statisticsResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
