/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Statistic.h>
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
   * <p>A customized metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CustomizedMetricSpecification">AWS
   * API Reference</a></p>
   */
  class CustomizedMetricSpecification
  {
  public:
    AWS_SAGEMAKER_API CustomizedMetricSpecification();
    AWS_SAGEMAKER_API CustomizedMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CustomizedMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the customized metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the customized metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the customized metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the customized metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the customized metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the customized metric.</p>
     */
    inline CustomizedMetricSpecification& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the customized metric.</p>
     */
    inline CustomizedMetricSpecification& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the customized metric.</p>
     */
    inline CustomizedMetricSpecification& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The namespace of the customized metric.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the customized metric.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the customized metric.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the customized metric.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the customized metric.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the customized metric.</p>
     */
    inline CustomizedMetricSpecification& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the customized metric.</p>
     */
    inline CustomizedMetricSpecification& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the customized metric.</p>
     */
    inline CustomizedMetricSpecification& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The statistic of the customized metric.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic of the customized metric.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic of the customized metric.</p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic of the customized metric.</p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic of the customized metric.</p>
     */
    inline CustomizedMetricSpecification& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic of the customized metric.</p>
     */
    inline CustomizedMetricSpecification& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Statistic m_statistic;
    bool m_statisticHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
