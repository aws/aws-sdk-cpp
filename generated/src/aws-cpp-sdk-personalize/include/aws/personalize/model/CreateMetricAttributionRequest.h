/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/MetricAttributionOutput.h>
#include <aws/personalize/model/MetricAttribute.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateMetricAttributionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateMetricAttributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMetricAttribution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the metric attribution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the metric attribution.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the metric attribution.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the metric attribution.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the metric attribution.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the metric attribution.</p>
     */
    inline CreateMetricAttributionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the metric attribution.</p>
     */
    inline CreateMetricAttributionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the metric attribution.</p>
     */
    inline CreateMetricAttributionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline CreateMetricAttributionRequest& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline CreateMetricAttributionRequest& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline CreateMetricAttributionRequest& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline const Aws::Vector<MetricAttribute>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline void SetMetrics(const Aws::Vector<MetricAttribute>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline void SetMetrics(Aws::Vector<MetricAttribute>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline CreateMetricAttributionRequest& WithMetrics(const Aws::Vector<MetricAttribute>& value) { SetMetrics(value); return *this;}

    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline CreateMetricAttributionRequest& WithMetrics(Aws::Vector<MetricAttribute>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline CreateMetricAttributionRequest& AddMetrics(const MetricAttribute& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline CreateMetricAttributionRequest& AddMetrics(MetricAttribute&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The output configuration details for the metric attribution.</p>
     */
    inline const MetricAttributionOutput& GetMetricsOutputConfig() const{ return m_metricsOutputConfig; }

    /**
     * <p>The output configuration details for the metric attribution.</p>
     */
    inline bool MetricsOutputConfigHasBeenSet() const { return m_metricsOutputConfigHasBeenSet; }

    /**
     * <p>The output configuration details for the metric attribution.</p>
     */
    inline void SetMetricsOutputConfig(const MetricAttributionOutput& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = value; }

    /**
     * <p>The output configuration details for the metric attribution.</p>
     */
    inline void SetMetricsOutputConfig(MetricAttributionOutput&& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = std::move(value); }

    /**
     * <p>The output configuration details for the metric attribution.</p>
     */
    inline CreateMetricAttributionRequest& WithMetricsOutputConfig(const MetricAttributionOutput& value) { SetMetricsOutputConfig(value); return *this;}

    /**
     * <p>The output configuration details for the metric attribution.</p>
     */
    inline CreateMetricAttributionRequest& WithMetricsOutputConfig(MetricAttributionOutput&& value) { SetMetricsOutputConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::Vector<MetricAttribute> m_metrics;
    bool m_metricsHasBeenSet = false;

    MetricAttributionOutput m_metricsOutputConfig;
    bool m_metricsOutputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
