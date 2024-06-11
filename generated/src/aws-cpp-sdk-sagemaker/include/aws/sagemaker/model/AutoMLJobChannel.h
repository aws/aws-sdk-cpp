/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLChannelType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CompressionType.h>
#include <aws/sagemaker/model/AutoMLDataSource.h>
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
   * <p>A channel is a named input source that training algorithms can consume. This
   * channel is used for AutoML jobs V2 (jobs created by calling <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJobV2.html">CreateAutoMLJobV2</a>).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobChannel">AWS
   * API Reference</a></p>
   */
  class AutoMLJobChannel
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobChannel();
    AWS_SAGEMAKER_API AutoMLJobChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of channel. Defines whether the data are used for training or
     * validation. The default value is <code>training</code>. Channels for
     * <code>training</code> and <code>validation</code> must share the same
     * <code>ContentType</code> </p>  <p>The type of channel defaults to
     * <code>training</code> for the time-series forecasting problem type.</p> 
     */
    inline const AutoMLChannelType& GetChannelType() const{ return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(const AutoMLChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline void SetChannelType(AutoMLChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }
    inline AutoMLJobChannel& WithChannelType(const AutoMLChannelType& value) { SetChannelType(value); return *this;}
    inline AutoMLJobChannel& WithChannelType(AutoMLChannelType&& value) { SetChannelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the data from the input source. The following are the
     * allowed content types for different problems:</p> <ul> <li> <p>For tabular
     * problem types: <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p> </li> <li> <p>For image
     * classification: <code>image/png</code>, <code>image/jpeg</code>, or
     * <code>image/ *</code>. The default value is <code>image/ *</code>.</p> </li> <li>
     * <p>For text classification: <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p> </li> <li> <p>For time-series
     * forecasting: <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p> </li> <li> <p>For text generation
     * (LLMs fine-tuning): <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline AutoMLJobChannel& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline AutoMLJobChannel& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline AutoMLJobChannel& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed compression types depend on the input format and problem type. We
     * allow the compression type <code>Gzip</code> for <code>S3Prefix</code> inputs on
     * tabular data only. For all other inputs, the compression type should be
     * <code>None</code>. If no compression type is provided, we default to
     * <code>None</code>.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }
    inline AutoMLJobChannel& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}
    inline AutoMLJobChannel& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for an AutoML channel (Required).</p>
     */
    inline const AutoMLDataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const AutoMLDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(AutoMLDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline AutoMLJobChannel& WithDataSource(const AutoMLDataSource& value) { SetDataSource(value); return *this;}
    inline AutoMLJobChannel& WithDataSource(AutoMLDataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}
  private:

    AutoMLChannelType m_channelType;
    bool m_channelTypeHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet = false;

    AutoMLDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
