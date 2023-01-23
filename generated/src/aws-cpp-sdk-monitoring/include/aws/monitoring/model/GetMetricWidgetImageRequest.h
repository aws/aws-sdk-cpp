/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class GetMetricWidgetImageRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API GetMetricWidgetImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricWidgetImage"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A JSON string that defines the bitmap graph to be retrieved. The string
     * includes the metrics to include in the graph, statistics, annotations, title,
     * axis limits, and so on. You can include only one <code>MetricWidget</code>
     * parameter in each <code>GetMetricWidgetImage</code> call.</p> <p>For more
     * information about the syntax of <code>MetricWidget</code> see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Metric-Widget-Structure.html">GetMetricWidgetImage:
     * Metric Widget Structure and Syntax</a>.</p> <p>If any metric on the graph could
     * not load all the requested data points, an orange triangle with an exclamation
     * point appears next to the graph legend.</p>
     */
    inline const Aws::String& GetMetricWidget() const{ return m_metricWidget; }

    /**
     * <p>A JSON string that defines the bitmap graph to be retrieved. The string
     * includes the metrics to include in the graph, statistics, annotations, title,
     * axis limits, and so on. You can include only one <code>MetricWidget</code>
     * parameter in each <code>GetMetricWidgetImage</code> call.</p> <p>For more
     * information about the syntax of <code>MetricWidget</code> see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Metric-Widget-Structure.html">GetMetricWidgetImage:
     * Metric Widget Structure and Syntax</a>.</p> <p>If any metric on the graph could
     * not load all the requested data points, an orange triangle with an exclamation
     * point appears next to the graph legend.</p>
     */
    inline bool MetricWidgetHasBeenSet() const { return m_metricWidgetHasBeenSet; }

    /**
     * <p>A JSON string that defines the bitmap graph to be retrieved. The string
     * includes the metrics to include in the graph, statistics, annotations, title,
     * axis limits, and so on. You can include only one <code>MetricWidget</code>
     * parameter in each <code>GetMetricWidgetImage</code> call.</p> <p>For more
     * information about the syntax of <code>MetricWidget</code> see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Metric-Widget-Structure.html">GetMetricWidgetImage:
     * Metric Widget Structure and Syntax</a>.</p> <p>If any metric on the graph could
     * not load all the requested data points, an orange triangle with an exclamation
     * point appears next to the graph legend.</p>
     */
    inline void SetMetricWidget(const Aws::String& value) { m_metricWidgetHasBeenSet = true; m_metricWidget = value; }

    /**
     * <p>A JSON string that defines the bitmap graph to be retrieved. The string
     * includes the metrics to include in the graph, statistics, annotations, title,
     * axis limits, and so on. You can include only one <code>MetricWidget</code>
     * parameter in each <code>GetMetricWidgetImage</code> call.</p> <p>For more
     * information about the syntax of <code>MetricWidget</code> see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Metric-Widget-Structure.html">GetMetricWidgetImage:
     * Metric Widget Structure and Syntax</a>.</p> <p>If any metric on the graph could
     * not load all the requested data points, an orange triangle with an exclamation
     * point appears next to the graph legend.</p>
     */
    inline void SetMetricWidget(Aws::String&& value) { m_metricWidgetHasBeenSet = true; m_metricWidget = std::move(value); }

    /**
     * <p>A JSON string that defines the bitmap graph to be retrieved. The string
     * includes the metrics to include in the graph, statistics, annotations, title,
     * axis limits, and so on. You can include only one <code>MetricWidget</code>
     * parameter in each <code>GetMetricWidgetImage</code> call.</p> <p>For more
     * information about the syntax of <code>MetricWidget</code> see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Metric-Widget-Structure.html">GetMetricWidgetImage:
     * Metric Widget Structure and Syntax</a>.</p> <p>If any metric on the graph could
     * not load all the requested data points, an orange triangle with an exclamation
     * point appears next to the graph legend.</p>
     */
    inline void SetMetricWidget(const char* value) { m_metricWidgetHasBeenSet = true; m_metricWidget.assign(value); }

    /**
     * <p>A JSON string that defines the bitmap graph to be retrieved. The string
     * includes the metrics to include in the graph, statistics, annotations, title,
     * axis limits, and so on. You can include only one <code>MetricWidget</code>
     * parameter in each <code>GetMetricWidgetImage</code> call.</p> <p>For more
     * information about the syntax of <code>MetricWidget</code> see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Metric-Widget-Structure.html">GetMetricWidgetImage:
     * Metric Widget Structure and Syntax</a>.</p> <p>If any metric on the graph could
     * not load all the requested data points, an orange triangle with an exclamation
     * point appears next to the graph legend.</p>
     */
    inline GetMetricWidgetImageRequest& WithMetricWidget(const Aws::String& value) { SetMetricWidget(value); return *this;}

    /**
     * <p>A JSON string that defines the bitmap graph to be retrieved. The string
     * includes the metrics to include in the graph, statistics, annotations, title,
     * axis limits, and so on. You can include only one <code>MetricWidget</code>
     * parameter in each <code>GetMetricWidgetImage</code> call.</p> <p>For more
     * information about the syntax of <code>MetricWidget</code> see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Metric-Widget-Structure.html">GetMetricWidgetImage:
     * Metric Widget Structure and Syntax</a>.</p> <p>If any metric on the graph could
     * not load all the requested data points, an orange triangle with an exclamation
     * point appears next to the graph legend.</p>
     */
    inline GetMetricWidgetImageRequest& WithMetricWidget(Aws::String&& value) { SetMetricWidget(std::move(value)); return *this;}

    /**
     * <p>A JSON string that defines the bitmap graph to be retrieved. The string
     * includes the metrics to include in the graph, statistics, annotations, title,
     * axis limits, and so on. You can include only one <code>MetricWidget</code>
     * parameter in each <code>GetMetricWidgetImage</code> call.</p> <p>For more
     * information about the syntax of <code>MetricWidget</code> see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Metric-Widget-Structure.html">GetMetricWidgetImage:
     * Metric Widget Structure and Syntax</a>.</p> <p>If any metric on the graph could
     * not load all the requested data points, an orange triangle with an exclamation
     * point appears next to the graph legend.</p>
     */
    inline GetMetricWidgetImageRequest& WithMetricWidget(const char* value) { SetMetricWidget(value); return *this;}


    /**
     * <p>The format of the resulting image. Only PNG images are supported.</p> <p>The
     * default is <code>png</code>. If you specify <code>png</code>, the API returns an
     * HTTP response with the content-type set to <code>text/xml</code>. The image data
     * is in a <code>MetricWidgetImage</code> field. For example:</p> <p> <code>
     * &lt;GetMetricWidgetImageResponse xmlns=&lt;URLstring&gt;&gt;</code> </p> <p>
     * <code> &lt;GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;MetricWidgetImage&gt;</code> </p> <p> <code>
     * iVBORw0KGgoAAAANSUhEUgAAAlgAAAGQEAYAAAAip...</code> </p> <p> <code>
     * &lt;/MetricWidgetImage&gt;</code> </p> <p> <code>
     * &lt;/GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;ResponseMetadata&gt;</code> </p> <p> <code>
     * &lt;RequestId&gt;6f0d4192-4d42-11e8-82c1-f539a07e0e3b&lt;/RequestId&gt;</code>
     * </p> <p> <code> &lt;/ResponseMetadata&gt;</code> </p> <p>
     * <code>&lt;/GetMetricWidgetImageResponse&gt;</code> </p> <p>The
     * <code>image/png</code> setting is intended only for custom HTTP requests. For
     * most use cases, and all actions using an Amazon Web Services SDK, you should use
     * <code>png</code>. If you specify <code>image/png</code>, the HTTP response has a
     * content-type set to <code>image/png</code>, and the body of the response is a
     * PNG image. </p>
     */
    inline const Aws::String& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The format of the resulting image. Only PNG images are supported.</p> <p>The
     * default is <code>png</code>. If you specify <code>png</code>, the API returns an
     * HTTP response with the content-type set to <code>text/xml</code>. The image data
     * is in a <code>MetricWidgetImage</code> field. For example:</p> <p> <code>
     * &lt;GetMetricWidgetImageResponse xmlns=&lt;URLstring&gt;&gt;</code> </p> <p>
     * <code> &lt;GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;MetricWidgetImage&gt;</code> </p> <p> <code>
     * iVBORw0KGgoAAAANSUhEUgAAAlgAAAGQEAYAAAAip...</code> </p> <p> <code>
     * &lt;/MetricWidgetImage&gt;</code> </p> <p> <code>
     * &lt;/GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;ResponseMetadata&gt;</code> </p> <p> <code>
     * &lt;RequestId&gt;6f0d4192-4d42-11e8-82c1-f539a07e0e3b&lt;/RequestId&gt;</code>
     * </p> <p> <code> &lt;/ResponseMetadata&gt;</code> </p> <p>
     * <code>&lt;/GetMetricWidgetImageResponse&gt;</code> </p> <p>The
     * <code>image/png</code> setting is intended only for custom HTTP requests. For
     * most use cases, and all actions using an Amazon Web Services SDK, you should use
     * <code>png</code>. If you specify <code>image/png</code>, the HTTP response has a
     * content-type set to <code>image/png</code>, and the body of the response is a
     * PNG image. </p>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p>The format of the resulting image. Only PNG images are supported.</p> <p>The
     * default is <code>png</code>. If you specify <code>png</code>, the API returns an
     * HTTP response with the content-type set to <code>text/xml</code>. The image data
     * is in a <code>MetricWidgetImage</code> field. For example:</p> <p> <code>
     * &lt;GetMetricWidgetImageResponse xmlns=&lt;URLstring&gt;&gt;</code> </p> <p>
     * <code> &lt;GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;MetricWidgetImage&gt;</code> </p> <p> <code>
     * iVBORw0KGgoAAAANSUhEUgAAAlgAAAGQEAYAAAAip...</code> </p> <p> <code>
     * &lt;/MetricWidgetImage&gt;</code> </p> <p> <code>
     * &lt;/GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;ResponseMetadata&gt;</code> </p> <p> <code>
     * &lt;RequestId&gt;6f0d4192-4d42-11e8-82c1-f539a07e0e3b&lt;/RequestId&gt;</code>
     * </p> <p> <code> &lt;/ResponseMetadata&gt;</code> </p> <p>
     * <code>&lt;/GetMetricWidgetImageResponse&gt;</code> </p> <p>The
     * <code>image/png</code> setting is intended only for custom HTTP requests. For
     * most use cases, and all actions using an Amazon Web Services SDK, you should use
     * <code>png</code>. If you specify <code>image/png</code>, the HTTP response has a
     * content-type set to <code>image/png</code>, and the body of the response is a
     * PNG image. </p>
     */
    inline void SetOutputFormat(const Aws::String& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>The format of the resulting image. Only PNG images are supported.</p> <p>The
     * default is <code>png</code>. If you specify <code>png</code>, the API returns an
     * HTTP response with the content-type set to <code>text/xml</code>. The image data
     * is in a <code>MetricWidgetImage</code> field. For example:</p> <p> <code>
     * &lt;GetMetricWidgetImageResponse xmlns=&lt;URLstring&gt;&gt;</code> </p> <p>
     * <code> &lt;GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;MetricWidgetImage&gt;</code> </p> <p> <code>
     * iVBORw0KGgoAAAANSUhEUgAAAlgAAAGQEAYAAAAip...</code> </p> <p> <code>
     * &lt;/MetricWidgetImage&gt;</code> </p> <p> <code>
     * &lt;/GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;ResponseMetadata&gt;</code> </p> <p> <code>
     * &lt;RequestId&gt;6f0d4192-4d42-11e8-82c1-f539a07e0e3b&lt;/RequestId&gt;</code>
     * </p> <p> <code> &lt;/ResponseMetadata&gt;</code> </p> <p>
     * <code>&lt;/GetMetricWidgetImageResponse&gt;</code> </p> <p>The
     * <code>image/png</code> setting is intended only for custom HTTP requests. For
     * most use cases, and all actions using an Amazon Web Services SDK, you should use
     * <code>png</code>. If you specify <code>image/png</code>, the HTTP response has a
     * content-type set to <code>image/png</code>, and the body of the response is a
     * PNG image. </p>
     */
    inline void SetOutputFormat(Aws::String&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>The format of the resulting image. Only PNG images are supported.</p> <p>The
     * default is <code>png</code>. If you specify <code>png</code>, the API returns an
     * HTTP response with the content-type set to <code>text/xml</code>. The image data
     * is in a <code>MetricWidgetImage</code> field. For example:</p> <p> <code>
     * &lt;GetMetricWidgetImageResponse xmlns=&lt;URLstring&gt;&gt;</code> </p> <p>
     * <code> &lt;GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;MetricWidgetImage&gt;</code> </p> <p> <code>
     * iVBORw0KGgoAAAANSUhEUgAAAlgAAAGQEAYAAAAip...</code> </p> <p> <code>
     * &lt;/MetricWidgetImage&gt;</code> </p> <p> <code>
     * &lt;/GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;ResponseMetadata&gt;</code> </p> <p> <code>
     * &lt;RequestId&gt;6f0d4192-4d42-11e8-82c1-f539a07e0e3b&lt;/RequestId&gt;</code>
     * </p> <p> <code> &lt;/ResponseMetadata&gt;</code> </p> <p>
     * <code>&lt;/GetMetricWidgetImageResponse&gt;</code> </p> <p>The
     * <code>image/png</code> setting is intended only for custom HTTP requests. For
     * most use cases, and all actions using an Amazon Web Services SDK, you should use
     * <code>png</code>. If you specify <code>image/png</code>, the HTTP response has a
     * content-type set to <code>image/png</code>, and the body of the response is a
     * PNG image. </p>
     */
    inline void SetOutputFormat(const char* value) { m_outputFormatHasBeenSet = true; m_outputFormat.assign(value); }

    /**
     * <p>The format of the resulting image. Only PNG images are supported.</p> <p>The
     * default is <code>png</code>. If you specify <code>png</code>, the API returns an
     * HTTP response with the content-type set to <code>text/xml</code>. The image data
     * is in a <code>MetricWidgetImage</code> field. For example:</p> <p> <code>
     * &lt;GetMetricWidgetImageResponse xmlns=&lt;URLstring&gt;&gt;</code> </p> <p>
     * <code> &lt;GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;MetricWidgetImage&gt;</code> </p> <p> <code>
     * iVBORw0KGgoAAAANSUhEUgAAAlgAAAGQEAYAAAAip...</code> </p> <p> <code>
     * &lt;/MetricWidgetImage&gt;</code> </p> <p> <code>
     * &lt;/GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;ResponseMetadata&gt;</code> </p> <p> <code>
     * &lt;RequestId&gt;6f0d4192-4d42-11e8-82c1-f539a07e0e3b&lt;/RequestId&gt;</code>
     * </p> <p> <code> &lt;/ResponseMetadata&gt;</code> </p> <p>
     * <code>&lt;/GetMetricWidgetImageResponse&gt;</code> </p> <p>The
     * <code>image/png</code> setting is intended only for custom HTTP requests. For
     * most use cases, and all actions using an Amazon Web Services SDK, you should use
     * <code>png</code>. If you specify <code>image/png</code>, the HTTP response has a
     * content-type set to <code>image/png</code>, and the body of the response is a
     * PNG image. </p>
     */
    inline GetMetricWidgetImageRequest& WithOutputFormat(const Aws::String& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The format of the resulting image. Only PNG images are supported.</p> <p>The
     * default is <code>png</code>. If you specify <code>png</code>, the API returns an
     * HTTP response with the content-type set to <code>text/xml</code>. The image data
     * is in a <code>MetricWidgetImage</code> field. For example:</p> <p> <code>
     * &lt;GetMetricWidgetImageResponse xmlns=&lt;URLstring&gt;&gt;</code> </p> <p>
     * <code> &lt;GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;MetricWidgetImage&gt;</code> </p> <p> <code>
     * iVBORw0KGgoAAAANSUhEUgAAAlgAAAGQEAYAAAAip...</code> </p> <p> <code>
     * &lt;/MetricWidgetImage&gt;</code> </p> <p> <code>
     * &lt;/GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;ResponseMetadata&gt;</code> </p> <p> <code>
     * &lt;RequestId&gt;6f0d4192-4d42-11e8-82c1-f539a07e0e3b&lt;/RequestId&gt;</code>
     * </p> <p> <code> &lt;/ResponseMetadata&gt;</code> </p> <p>
     * <code>&lt;/GetMetricWidgetImageResponse&gt;</code> </p> <p>The
     * <code>image/png</code> setting is intended only for custom HTTP requests. For
     * most use cases, and all actions using an Amazon Web Services SDK, you should use
     * <code>png</code>. If you specify <code>image/png</code>, the HTTP response has a
     * content-type set to <code>image/png</code>, and the body of the response is a
     * PNG image. </p>
     */
    inline GetMetricWidgetImageRequest& WithOutputFormat(Aws::String&& value) { SetOutputFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the resulting image. Only PNG images are supported.</p> <p>The
     * default is <code>png</code>. If you specify <code>png</code>, the API returns an
     * HTTP response with the content-type set to <code>text/xml</code>. The image data
     * is in a <code>MetricWidgetImage</code> field. For example:</p> <p> <code>
     * &lt;GetMetricWidgetImageResponse xmlns=&lt;URLstring&gt;&gt;</code> </p> <p>
     * <code> &lt;GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;MetricWidgetImage&gt;</code> </p> <p> <code>
     * iVBORw0KGgoAAAANSUhEUgAAAlgAAAGQEAYAAAAip...</code> </p> <p> <code>
     * &lt;/MetricWidgetImage&gt;</code> </p> <p> <code>
     * &lt;/GetMetricWidgetImageResult&gt;</code> </p> <p> <code>
     * &lt;ResponseMetadata&gt;</code> </p> <p> <code>
     * &lt;RequestId&gt;6f0d4192-4d42-11e8-82c1-f539a07e0e3b&lt;/RequestId&gt;</code>
     * </p> <p> <code> &lt;/ResponseMetadata&gt;</code> </p> <p>
     * <code>&lt;/GetMetricWidgetImageResponse&gt;</code> </p> <p>The
     * <code>image/png</code> setting is intended only for custom HTTP requests. For
     * most use cases, and all actions using an Amazon Web Services SDK, you should use
     * <code>png</code>. If you specify <code>image/png</code>, the HTTP response has a
     * content-type set to <code>image/png</code>, and the body of the response is a
     * PNG image. </p>
     */
    inline GetMetricWidgetImageRequest& WithOutputFormat(const char* value) { SetOutputFormat(value); return *this;}

  private:

    Aws::String m_metricWidget;
    bool m_metricWidgetHasBeenSet = false;

    Aws::String m_outputFormat;
    bool m_outputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
