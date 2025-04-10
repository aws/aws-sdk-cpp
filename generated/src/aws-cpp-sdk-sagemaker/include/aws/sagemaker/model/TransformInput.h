﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TransformDataSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CompressionType.h>
#include <aws/sagemaker/model/SplitType.h>
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
   * <p>Describes the input source of a transform job and the way the transform job
   * consumes it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformInput">AWS
   * API Reference</a></p>
   */
  class TransformInput
  {
  public:
    AWS_SAGEMAKER_API TransformInput() = default;
    AWS_SAGEMAKER_API TransformInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the location of the channel data, which is, the S3 location of the
     * input data that the model can consume.</p>
     */
    inline const TransformDataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = TransformDataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = TransformDataSource>
    TransformInput& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    TransformInput& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your transform data is compressed, specify the compression type. Amazon
     * SageMaker automatically decompresses the data for the transform job accordingly.
     * The default value is <code>None</code>.</p>
     */
    inline CompressionType GetCompressionType() const { return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(CompressionType value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline TransformInput& WithCompressionType(CompressionType value) { SetCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use to split the transform job's data files into smaller
     * batches. Splitting is necessary when the total size of each object is too large
     * to fit in a single request. You can also use data splitting to improve
     * performance by processing multiple concurrent mini-batches. The default value
     * for <code>SplitType</code> is <code>None</code>, which indicates that input data
     * files are not split, and request payloads contain the entire contents of an
     * input object. Set the value of this parameter to <code>Line</code> to split
     * records on a newline character boundary. <code>SplitType</code> also supports a
     * number of record-oriented binary data formats. Currently, the supported record
     * formats are:</p> <ul> <li> <p>RecordIO</p> </li> <li> <p>TFRecord</p> </li>
     * </ul> <p>When splitting is enabled, the size of a mini-batch depends on the
     * values of the <code>BatchStrategy</code> and <code>MaxPayloadInMB</code>
     * parameters. When the value of <code>BatchStrategy</code> is
     * <code>MultiRecord</code>, Amazon SageMaker sends the maximum number of records
     * in each request, up to the <code>MaxPayloadInMB</code> limit. If the value of
     * <code>BatchStrategy</code> is <code>SingleRecord</code>, Amazon SageMaker sends
     * individual records in each request.</p>  <p>Some data formats represent a
     * record as a binary payload wrapped with extra padding bytes. When splitting is
     * applied to a binary data format, padding is removed if the value of
     * <code>BatchStrategy</code> is set to <code>SingleRecord</code>. Padding is not
     * removed if the value of <code>BatchStrategy</code> is set to
     * <code>MultiRecord</code>.</p> <p>For more information about
     * <code>RecordIO</code>, see <a
     * href="https://mxnet.apache.org/api/faq/recordio">Create a Dataset Using
     * RecordIO</a> in the MXNet documentation. For more information about
     * <code>TFRecord</code>, see <a
     * href="https://www.tensorflow.org/guide/data#consuming_tfrecord_data">Consuming
     * TFRecord data</a> in the TensorFlow documentation.</p> 
     */
    inline SplitType GetSplitType() const { return m_splitType; }
    inline bool SplitTypeHasBeenSet() const { return m_splitTypeHasBeenSet; }
    inline void SetSplitType(SplitType value) { m_splitTypeHasBeenSet = true; m_splitType = value; }
    inline TransformInput& WithSplitType(SplitType value) { SetSplitType(value); return *this;}
    ///@}
  private:

    TransformDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    CompressionType m_compressionType{CompressionType::NOT_SET};
    bool m_compressionTypeHasBeenSet = false;

    SplitType m_splitType{SplitType::NOT_SET};
    bool m_splitTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
