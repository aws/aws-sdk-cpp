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
   * <p>Model quality statistics and constraints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelQuality">AWS
   * API Reference</a></p>
   */
  class ModelQuality
  {
  public:
    AWS_SAGEMAKER_API ModelQuality();
    AWS_SAGEMAKER_API ModelQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Model quality statistics.</p>
     */
    inline const MetricsSource& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Model quality statistics.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>Model quality statistics.</p>
     */
    inline void SetStatistics(const MetricsSource& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>Model quality statistics.</p>
     */
    inline void SetStatistics(MetricsSource&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>Model quality statistics.</p>
     */
    inline ModelQuality& WithStatistics(const MetricsSource& value) { SetStatistics(value); return *this;}

    /**
     * <p>Model quality statistics.</p>
     */
    inline ModelQuality& WithStatistics(MetricsSource&& value) { SetStatistics(std::move(value)); return *this;}


    /**
     * <p>Model quality constraints.</p>
     */
    inline const MetricsSource& GetConstraints() const{ return m_constraints; }

    /**
     * <p>Model quality constraints.</p>
     */
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    /**
     * <p>Model quality constraints.</p>
     */
    inline void SetConstraints(const MetricsSource& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>Model quality constraints.</p>
     */
    inline void SetConstraints(MetricsSource&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    /**
     * <p>Model quality constraints.</p>
     */
    inline ModelQuality& WithConstraints(const MetricsSource& value) { SetConstraints(value); return *this;}

    /**
     * <p>Model quality constraints.</p>
     */
    inline ModelQuality& WithConstraints(MetricsSource&& value) { SetConstraints(std::move(value)); return *this;}

  private:

    MetricsSource m_statistics;
    bool m_statisticsHasBeenSet = false;

    MetricsSource m_constraints;
    bool m_constraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
