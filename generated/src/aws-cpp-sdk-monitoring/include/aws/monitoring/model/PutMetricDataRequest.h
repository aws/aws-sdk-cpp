/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricDatum.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class PutMetricDataRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetricData"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
    virtual Aws::Client::CompressionAlgorithm
    GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const override;
#endif

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline PutMetricDataRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline PutMetricDataRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace for the metric data. You can use ASCII characters for the
     * namespace, except for control characters which are not supported.</p> <p>To
     * avoid conflicts with Amazon Web Services service namespaces, you should not
     * specify a namespace that begins with <code>AWS/</code> </p>
     */
    inline PutMetricDataRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The data for the metric. The array can include no more than 1000 metrics per
     * call.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricData() const{ return m_metricData; }

    /**
     * <p>The data for the metric. The array can include no more than 1000 metrics per
     * call.</p>
     */
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }

    /**
     * <p>The data for the metric. The array can include no more than 1000 metrics per
     * call.</p>
     */
    inline void SetMetricData(const Aws::Vector<MetricDatum>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    /**
     * <p>The data for the metric. The array can include no more than 1000 metrics per
     * call.</p>
     */
    inline void SetMetricData(Aws::Vector<MetricDatum>&& value) { m_metricDataHasBeenSet = true; m_metricData = std::move(value); }

    /**
     * <p>The data for the metric. The array can include no more than 1000 metrics per
     * call.</p>
     */
    inline PutMetricDataRequest& WithMetricData(const Aws::Vector<MetricDatum>& value) { SetMetricData(value); return *this;}

    /**
     * <p>The data for the metric. The array can include no more than 1000 metrics per
     * call.</p>
     */
    inline PutMetricDataRequest& WithMetricData(Aws::Vector<MetricDatum>&& value) { SetMetricData(std::move(value)); return *this;}

    /**
     * <p>The data for the metric. The array can include no more than 1000 metrics per
     * call.</p>
     */
    inline PutMetricDataRequest& AddMetricData(const MetricDatum& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

    /**
     * <p>The data for the metric. The array can include no more than 1000 metrics per
     * call.</p>
     */
    inline PutMetricDataRequest& AddMetricData(MetricDatum&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<MetricDatum> m_metricData;
    bool m_metricDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
