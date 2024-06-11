﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLDataSource.h>
#include <aws/sagemaker/model/CompressionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLChannelType.h>
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
   * <p>A channel is a named input source that training algorithms can consume. The
   * validation dataset size is limited to less than 2 GB. The training dataset size
   * must be less than 100 GB. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Channel.html">
   * Channel</a>.</p>  <p>A validation dataset must contain the same headers as
   * the training dataset.</p>  <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLChannel">AWS
   * API Reference</a></p>
   */
  class AutoMLChannel
  {
  public:
    AWS_SAGEMAKER_API AutoMLChannel();
    AWS_SAGEMAKER_API AutoMLChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data source for an AutoML channel.</p>
     */
    inline const AutoMLDataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const AutoMLDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(AutoMLDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline AutoMLChannel& WithDataSource(const AutoMLDataSource& value) { SetDataSource(value); return *this;}
    inline AutoMLChannel& WithDataSource(AutoMLDataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use <code>Gzip</code> or <code>None</code>. The default value is
     * <code>None</code>.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }
    inline AutoMLChannel& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}
    inline AutoMLChannel& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target variable in supervised learning, usually represented
     * by 'y'.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const{ return m_targetAttributeName; }
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }
    inline void SetTargetAttributeName(const Aws::String& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = value; }
    inline void SetTargetAttributeName(Aws::String&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::move(value); }
    inline void SetTargetAttributeName(const char* value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName.assign(value); }
    inline AutoMLChannel& WithTargetAttributeName(const Aws::String& value) { SetTargetAttributeName(value); return *this;}
    inline AutoMLChannel& WithTargetAttributeName(Aws::String&& value) { SetTargetAttributeName(std::move(value)); return *this;}
    inline AutoMLChannel& WithTargetAttributeName(const char* value) { SetTargetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the data from the input source. You can use
     * <code>text/csv;header=present</code> or
     * <code>x-application/vnd.amazon+parquet</code>. The default value is
     * <code>text/csv;header=present</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline AutoMLChannel& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline AutoMLChannel& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline AutoMLChannel& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel type (optional) is an <code>enum</code> string. The default value
     * is <code>training</code>. Channels for training and validation must share the
     * same <code>ContentType</code> and <code>TargetAttributeName</code>. For
     * information on specifying training and validation channel types, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-data-sources-training-or-validation">How
     * to specify training and validation datasets</a>.</p>
     */
    inline const AutoMLChannelType& GetChannelType() const{ return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(const AutoMLChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline void SetChannelType(AutoMLChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }
    inline AutoMLChannel& WithChannelType(const AutoMLChannelType& value) { SetChannelType(value); return *this;}
    inline AutoMLChannel& WithChannelType(AutoMLChannelType&& value) { SetChannelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, this column name indicates which column of the dataset should
     * be treated as sample weights for use by the objective metric during the
     * training, evaluation, and the selection of the best model. This column is not
     * considered as a predictive feature. For more information on Autopilot metrics,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html">Metrics
     * and validation</a>.</p> <p>Sample weights should be numeric, non-negative, with
     * larger values indicating which rows are more important than others. Data points
     * that have invalid or no weight value are excluded.</p> <p>Support for sample
     * weights is available in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLAlgorithmConfig.html">Ensembling</a>
     * mode only.</p>
     */
    inline const Aws::String& GetSampleWeightAttributeName() const{ return m_sampleWeightAttributeName; }
    inline bool SampleWeightAttributeNameHasBeenSet() const { return m_sampleWeightAttributeNameHasBeenSet; }
    inline void SetSampleWeightAttributeName(const Aws::String& value) { m_sampleWeightAttributeNameHasBeenSet = true; m_sampleWeightAttributeName = value; }
    inline void SetSampleWeightAttributeName(Aws::String&& value) { m_sampleWeightAttributeNameHasBeenSet = true; m_sampleWeightAttributeName = std::move(value); }
    inline void SetSampleWeightAttributeName(const char* value) { m_sampleWeightAttributeNameHasBeenSet = true; m_sampleWeightAttributeName.assign(value); }
    inline AutoMLChannel& WithSampleWeightAttributeName(const Aws::String& value) { SetSampleWeightAttributeName(value); return *this;}
    inline AutoMLChannel& WithSampleWeightAttributeName(Aws::String&& value) { SetSampleWeightAttributeName(std::move(value)); return *this;}
    inline AutoMLChannel& WithSampleWeightAttributeName(const char* value) { SetSampleWeightAttributeName(value); return *this;}
    ///@}
  private:

    AutoMLDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet = false;

    Aws::String m_targetAttributeName;
    bool m_targetAttributeNameHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    AutoMLChannelType m_channelType;
    bool m_channelTypeHasBeenSet = false;

    Aws::String m_sampleWeightAttributeName;
    bool m_sampleWeightAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
