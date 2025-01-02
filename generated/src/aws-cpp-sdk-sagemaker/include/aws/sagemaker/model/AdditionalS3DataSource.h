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
    AWS_SAGEMAKER_API AdditionalS3DataSource();
    AWS_SAGEMAKER_API AdditionalS3DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AdditionalS3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data type of the additional data source that you specify for use in
     * inference or training. </p>
     */
    inline const AdditionalS3DataSourceDataType& GetS3DataType() const{ return m_s3DataType; }
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }
    inline void SetS3DataType(const AdditionalS3DataSourceDataType& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }
    inline void SetS3DataType(AdditionalS3DataSourceDataType&& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = std::move(value); }
    inline AdditionalS3DataSource& WithS3DataType(const AdditionalS3DataSourceDataType& value) { SetS3DataType(value); return *this;}
    inline AdditionalS3DataSource& WithS3DataType(AdditionalS3DataSourceDataType&& value) { SetS3DataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline AdditionalS3DataSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline AdditionalS3DataSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline AdditionalS3DataSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of compression used for an additional data source used in inference
     * or training. Specify <code>None</code> if your additional data source is not
     * compressed.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }
    inline AdditionalS3DataSource& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}
    inline AdditionalS3DataSource& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag associated with S3 URI.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline AdditionalS3DataSource& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline AdditionalS3DataSource& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline AdditionalS3DataSource& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}
  private:

    AdditionalS3DataSourceDataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
