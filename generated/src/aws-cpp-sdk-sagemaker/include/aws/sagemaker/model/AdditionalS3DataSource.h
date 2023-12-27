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


    /**
     * <p>The data type of the additional data source that you specify for use in
     * inference or training. </p>
     */
    inline const AdditionalS3DataSourceDataType& GetS3DataType() const{ return m_s3DataType; }

    /**
     * <p>The data type of the additional data source that you specify for use in
     * inference or training. </p>
     */
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }

    /**
     * <p>The data type of the additional data source that you specify for use in
     * inference or training. </p>
     */
    inline void SetS3DataType(const AdditionalS3DataSourceDataType& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }

    /**
     * <p>The data type of the additional data source that you specify for use in
     * inference or training. </p>
     */
    inline void SetS3DataType(AdditionalS3DataSourceDataType&& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = std::move(value); }

    /**
     * <p>The data type of the additional data source that you specify for use in
     * inference or training. </p>
     */
    inline AdditionalS3DataSource& WithS3DataType(const AdditionalS3DataSourceDataType& value) { SetS3DataType(value); return *this;}

    /**
     * <p>The data type of the additional data source that you specify for use in
     * inference or training. </p>
     */
    inline AdditionalS3DataSource& WithS3DataType(AdditionalS3DataSourceDataType&& value) { SetS3DataType(std::move(value)); return *this;}


    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline AdditionalS3DataSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline AdditionalS3DataSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The uniform resource identifier (URI) used to identify an additional data
     * source used in inference or training.</p>
     */
    inline AdditionalS3DataSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The type of compression used for an additional data source used in inference
     * or training. Specify <code>None</code> if your additional data source is not
     * compressed.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>The type of compression used for an additional data source used in inference
     * or training. Specify <code>None</code> if your additional data source is not
     * compressed.</p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>The type of compression used for an additional data source used in inference
     * or training. Specify <code>None</code> if your additional data source is not
     * compressed.</p>
     */
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>The type of compression used for an additional data source used in inference
     * or training. Specify <code>None</code> if your additional data source is not
     * compressed.</p>
     */
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>The type of compression used for an additional data source used in inference
     * or training. Specify <code>None</code> if your additional data source is not
     * compressed.</p>
     */
    inline AdditionalS3DataSource& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>The type of compression used for an additional data source used in inference
     * or training. Specify <code>None</code> if your additional data source is not
     * compressed.</p>
     */
    inline AdditionalS3DataSource& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}

  private:

    AdditionalS3DataSourceDataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
