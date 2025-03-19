/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AdditionalS3DataSourceDataType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CompressionType.h>
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
   * <p>A data source used for training or inference that is in addition to the input
   * dataset or model data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AdditionalS3DataSource">AWS
   * API Reference</a></p>
   */
  class AdditionalS3DataSource
  {
  public:
    AWS_SAGEMAKER_API AdditionalS3DataSource() = default;
    AWS_SAGEMAKER_API AdditionalS3DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AdditionalS3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data type of the additional data source that you specify for use in
     * inference or training. </p>
     */
    inline AdditionalS3DataSourceDataType GetS3DataType() const { return m_s3DataType; }
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }
    inline void SetS3DataType(AdditionalS3DataSourceDataType value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }
    inline AdditionalS3DataSource& WithS3DataType(AdditionalS3DataSourceDataType value) { SetS3DataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    AdditionalS3DataSource& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of compression used for an additional data source used in inference
     * or training. Specify <code>None</code> if your additional data source is not
     * compressed.</p>
     */
    inline CompressionType GetCompressionType() const { return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(CompressionType value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline AdditionalS3DataSource& WithCompressionType(CompressionType value) { SetCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag associated with S3 URI.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    AdditionalS3DataSource& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}
  private:

    AdditionalS3DataSourceDataType m_s3DataType{AdditionalS3DataSourceDataType::NOT_SET};
    bool m_s3DataTypeHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    CompressionType m_compressionType{CompressionType::NOT_SET};
    bool m_compressionTypeHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
