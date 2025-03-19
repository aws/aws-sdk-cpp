/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DataSource.h>
#include <aws/sagemaker/model/CompressionType.h>
#include <aws/sagemaker/model/RecordWrapper.h>
#include <aws/sagemaker/model/TrainingInputMode.h>
#include <aws/sagemaker/model/ShuffleConfig.h>
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
   * <p>A channel is a named input source that training algorithms can consume.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_SAGEMAKER_API Channel() = default;
    AWS_SAGEMAKER_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel. </p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    Channel& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the channel data.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    Channel& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the data.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    Channel& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in Pipe input mode.
     * In File mode, leave this field unset or set it to None.</p>
     */
    inline CompressionType GetCompressionType() const { return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(CompressionType value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline Channel& WithCompressionType(CompressionType value) { SetCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format. In this case, SageMaker wraps
     * each individual S3 object in a RecordIO record. If the input data is already in
     * RecordIO format, you don't need to set this attribute. For more information, see
     * <a
     * href="https://mxnet.apache.org/api/architecture/note_data_loading#data-format">Create
     * a Dataset Using RecordIO</a>. </p> <p>In File mode, leave this field unset or
     * set it to None.</p>
     */
    inline RecordWrapper GetRecordWrapperType() const { return m_recordWrapperType; }
    inline bool RecordWrapperTypeHasBeenSet() const { return m_recordWrapperTypeHasBeenSet; }
    inline void SetRecordWrapperType(RecordWrapper value) { m_recordWrapperTypeHasBeenSet = true; m_recordWrapperType = value; }
    inline Channel& WithRecordWrapperType(RecordWrapper value) { SetRecordWrapperType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The input mode to use for the data channel in a training job. If
     * you don't set a value for <code>InputMode</code>, SageMaker uses the value set
     * for <code>TrainingInputMode</code>. Use this parameter to override the
     * <code>TrainingInputMode</code> setting in a <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AlgorithmSpecification.html">AlgorithmSpecification</a>
     * request when you have a channel that needs a different input mode from the
     * training job's general setting. To download the data from Amazon Simple Storage
     * Service (Amazon S3) to the provisioned ML storage volume, and mount the
     * directory to a Docker volume, use <code>File</code> input mode. To stream data
     * directly from Amazon S3 to the container, choose <code>Pipe</code> input
     * mode.</p> <p>To use a model for incremental training, choose <code>File</code>
     * input model.</p>
     */
    inline TrainingInputMode GetInputMode() const { return m_inputMode; }
    inline bool InputModeHasBeenSet() const { return m_inputModeHasBeenSet; }
    inline void SetInputMode(TrainingInputMode value) { m_inputModeHasBeenSet = true; m_inputMode = value; }
    inline Channel& WithInputMode(TrainingInputMode value) { SetInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a shuffle option for input data in a channel. If you use
     * <code>S3Prefix</code> for <code>S3DataType</code>, this shuffles the results of
     * the S3 key prefix matches. If you use <code>ManifestFile</code>, the order of
     * the S3 object references in the <code>ManifestFile</code> is shuffled. If you
     * use <code>AugmentedManifestFile</code>, the order of the JSON lines in the
     * <code>AugmentedManifestFile</code> is shuffled. The shuffling order is
     * determined using the <code>Seed</code> value.</p> <p>For Pipe input mode,
     * shuffling is done at the start of every epoch. With large datasets this ensures
     * that the order of the training data is different for each epoch, it helps reduce
     * bias and possible overfitting. In a multi-node training job when ShuffleConfig
     * is combined with <code>S3DataDistributionType</code> of
     * <code>ShardedByS3Key</code>, the data is shuffled across nodes so that the
     * content sent to a particular node on the first epoch might be sent to a
     * different node on the second epoch.</p>
     */
    inline const ShuffleConfig& GetShuffleConfig() const { return m_shuffleConfig; }
    inline bool ShuffleConfigHasBeenSet() const { return m_shuffleConfigHasBeenSet; }
    template<typename ShuffleConfigT = ShuffleConfig>
    void SetShuffleConfig(ShuffleConfigT&& value) { m_shuffleConfigHasBeenSet = true; m_shuffleConfig = std::forward<ShuffleConfigT>(value); }
    template<typename ShuffleConfigT = ShuffleConfig>
    Channel& WithShuffleConfig(ShuffleConfigT&& value) { SetShuffleConfig(std::forward<ShuffleConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    CompressionType m_compressionType{CompressionType::NOT_SET};
    bool m_compressionTypeHasBeenSet = false;

    RecordWrapper m_recordWrapperType{RecordWrapper::NOT_SET};
    bool m_recordWrapperTypeHasBeenSet = false;

    TrainingInputMode m_inputMode{TrainingInputMode::NOT_SET};
    bool m_inputModeHasBeenSet = false;

    ShuffleConfig m_shuffleConfig;
    bool m_shuffleConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
