﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/MetricAttributionOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateMetricAttributionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API UpdateMetricAttributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMetricAttribution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Add new metric attributes to the metric attribution.</p>
     */
    inline const Aws::Vector<MetricAttribute>& GetAddMetrics() const{ return m_addMetrics; }
    inline bool AddMetricsHasBeenSet() const { return m_addMetricsHasBeenSet; }
    inline void SetAddMetrics(const Aws::Vector<MetricAttribute>& value) { m_addMetricsHasBeenSet = true; m_addMetrics = value; }
    inline void SetAddMetrics(Aws::Vector<MetricAttribute>&& value) { m_addMetricsHasBeenSet = true; m_addMetrics = std::move(value); }
    inline UpdateMetricAttributionRequest& WithAddMetrics(const Aws::Vector<MetricAttribute>& value) { SetAddMetrics(value); return *this;}
    inline UpdateMetricAttributionRequest& WithAddMetrics(Aws::Vector<MetricAttribute>&& value) { SetAddMetrics(std::move(value)); return *this;}
    inline UpdateMetricAttributionRequest& AddAddMetrics(const MetricAttribute& value) { m_addMetricsHasBeenSet = true; m_addMetrics.push_back(value); return *this; }
    inline UpdateMetricAttributionRequest& AddAddMetrics(MetricAttribute&& value) { m_addMetricsHasBeenSet = true; m_addMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove metric attributes from the metric attribution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveMetrics() const{ return m_removeMetrics; }
    inline bool RemoveMetricsHasBeenSet() const { return m_removeMetricsHasBeenSet; }
    inline void SetRemoveMetrics(const Aws::Vector<Aws::String>& value) { m_removeMetricsHasBeenSet = true; m_removeMetrics = value; }
    inline void SetRemoveMetrics(Aws::Vector<Aws::String>&& value) { m_removeMetricsHasBeenSet = true; m_removeMetrics = std::move(value); }
    inline UpdateMetricAttributionRequest& WithRemoveMetrics(const Aws::Vector<Aws::String>& value) { SetRemoveMetrics(value); return *this;}
    inline UpdateMetricAttributionRequest& WithRemoveMetrics(Aws::Vector<Aws::String>&& value) { SetRemoveMetrics(std::move(value)); return *this;}
    inline UpdateMetricAttributionRequest& AddRemoveMetrics(const Aws::String& value) { m_removeMetricsHasBeenSet = true; m_removeMetrics.push_back(value); return *this; }
    inline UpdateMetricAttributionRequest& AddRemoveMetrics(Aws::String&& value) { m_removeMetricsHasBeenSet = true; m_removeMetrics.push_back(std::move(value)); return *this; }
    inline UpdateMetricAttributionRequest& AddRemoveMetrics(const char* value) { m_removeMetricsHasBeenSet = true; m_removeMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An output config for the metric attribution.</p>
     */
    inline const MetricAttributionOutput& GetMetricsOutputConfig() const{ return m_metricsOutputConfig; }
    inline bool MetricsOutputConfigHasBeenSet() const { return m_metricsOutputConfigHasBeenSet; }
    inline void SetMetricsOutputConfig(const MetricAttributionOutput& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = value; }
    inline void SetMetricsOutputConfig(MetricAttributionOutput&& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = std::move(value); }
    inline UpdateMetricAttributionRequest& WithMetricsOutputConfig(const MetricAttributionOutput& value) { SetMetricsOutputConfig(value); return *this;}
    inline UpdateMetricAttributionRequest& WithMetricsOutputConfig(MetricAttributionOutput&& value) { SetMetricsOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the metric attribution to update.</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const{ return m_metricAttributionArn; }
    inline bool MetricAttributionArnHasBeenSet() const { return m_metricAttributionArnHasBeenSet; }
    inline void SetMetricAttributionArn(const Aws::String& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = value; }
    inline void SetMetricAttributionArn(Aws::String&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::move(value); }
    inline void SetMetricAttributionArn(const char* value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn.assign(value); }
    inline UpdateMetricAttributionRequest& WithMetricAttributionArn(const Aws::String& value) { SetMetricAttributionArn(value); return *this;}
    inline UpdateMetricAttributionRequest& WithMetricAttributionArn(Aws::String&& value) { SetMetricAttributionArn(std::move(value)); return *this;}
    inline UpdateMetricAttributionRequest& WithMetricAttributionArn(const char* value) { SetMetricAttributionArn(value); return *this;}
    ///@}
  private:

    Aws::Vector<MetricAttribute> m_addMetrics;
    bool m_addMetricsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeMetrics;
    bool m_removeMetricsHasBeenSet = false;

    MetricAttributionOutput m_metricsOutputConfig;
    bool m_metricsOutputConfigHasBeenSet = false;

    Aws::String m_metricAttributionArn;
    bool m_metricAttributionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
