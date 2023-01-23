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
    AWS_SAGEMAKER_API MonitoringBaselineConfig();
    AWS_SAGEMAKER_API MonitoringBaselineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringBaselineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline const Aws::String& GetBaseliningJobName() const{ return m_baseliningJobName; }

    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline bool BaseliningJobNameHasBeenSet() const { return m_baseliningJobNameHasBeenSet; }

    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline void SetBaseliningJobName(const Aws::String& value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName = value; }

    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline void SetBaseliningJobName(Aws::String&& value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName = std::move(value); }

    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline void SetBaseliningJobName(const char* value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName.assign(value); }

    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline MonitoringBaselineConfig& WithBaseliningJobName(const Aws::String& value) { SetBaseliningJobName(value); return *this;}

    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline MonitoringBaselineConfig& WithBaseliningJobName(Aws::String&& value) { SetBaseliningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job that performs baselining for the monitoring job.</p>
     */
    inline MonitoringBaselineConfig& WithBaseliningJobName(const char* value) { SetBaseliningJobName(value); return *this;}


    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline const MonitoringConstraintsResource& GetConstraintsResource() const{ return m_constraintsResource; }

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline bool ConstraintsResourceHasBeenSet() const { return m_constraintsResourceHasBeenSet; }

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline void SetConstraintsResource(const MonitoringConstraintsResource& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = value; }

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline void SetConstraintsResource(MonitoringConstraintsResource&& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = std::move(value); }

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline MonitoringBaselineConfig& WithConstraintsResource(const MonitoringConstraintsResource& value) { SetConstraintsResource(value); return *this;}

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline MonitoringBaselineConfig& WithConstraintsResource(MonitoringConstraintsResource&& value) { SetConstraintsResource(std::move(value)); return *this;}


    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline const MonitoringStatisticsResource& GetStatisticsResource() const{ return m_statisticsResource; }

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline bool StatisticsResourceHasBeenSet() const { return m_statisticsResourceHasBeenSet; }

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline void SetStatisticsResource(const MonitoringStatisticsResource& value) { m_statisticsResourceHasBeenSet = true; m_statisticsResource = value; }

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline void SetStatisticsResource(MonitoringStatisticsResource&& value) { m_statisticsResourceHasBeenSet = true; m_statisticsResource = std::move(value); }

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline MonitoringBaselineConfig& WithStatisticsResource(const MonitoringStatisticsResource& value) { SetStatisticsResource(value); return *this;}

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline MonitoringBaselineConfig& WithStatisticsResource(MonitoringStatisticsResource&& value) { SetStatisticsResource(std::move(value)); return *this;}

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
