/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MetricsSource.h>
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
   * <p>Data quality constraints and statistics for a model.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDataQuality">AWS
   * API Reference</a></p>
   */
  class ModelDataQuality
  {
  public:
    AWS_SAGEMAKER_API ModelDataQuality();
    AWS_SAGEMAKER_API ModelDataQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDataQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Data quality statistics for a model.</p>
     */
    inline const MetricsSource& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Data quality statistics for a model.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>Data quality statistics for a model.</p>
     */
    inline void SetStatistics(const MetricsSource& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>Data quality statistics for a model.</p>
     */
    inline void SetStatistics(MetricsSource&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>Data quality statistics for a model.</p>
     */
    inline ModelDataQuality& WithStatistics(const MetricsSource& value) { SetStatistics(value); return *this;}

    /**
     * <p>Data quality statistics for a model.</p>
     */
    inline ModelDataQuality& WithStatistics(MetricsSource&& value) { SetStatistics(std::move(value)); return *this;}


    /**
     * <p>Data quality constraints for a model.</p>
     */
    inline const MetricsSource& GetConstraints() const{ return m_constraints; }

    /**
     * <p>Data quality constraints for a model.</p>
     */
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    /**
     * <p>Data quality constraints for a model.</p>
     */
    inline void SetConstraints(const MetricsSource& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>Data quality constraints for a model.</p>
     */
    inline void SetConstraints(MetricsSource&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    /**
     * <p>Data quality constraints for a model.</p>
     */
    inline ModelDataQuality& WithConstraints(const MetricsSource& value) { SetConstraints(value); return *this;}

    /**
     * <p>Data quality constraints for a model.</p>
     */
    inline ModelDataQuality& WithConstraints(MetricsSource&& value) { SetConstraints(std::move(value)); return *this;}

  private:

    MetricsSource m_statistics;
    bool m_statisticsHasBeenSet = false;

    MetricsSource m_constraints;
    bool m_constraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
