/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/S3ModelDataSource.h>
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
   * <p>Specifies the location of ML model data to deploy. If specified, you must
   * specify one and only one of the available data sources.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDataSource">AWS
   * API Reference</a></p>
   */
  class ModelDataSource
  {
  public:
    AWS_SAGEMAKER_API ModelDataSource();
    AWS_SAGEMAKER_API ModelDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the S3 location of ML model data to deploy.</p>
     */
    inline const S3ModelDataSource& GetS3DataSource() const{ return m_s3DataSource; }

    /**
     * <p>Specifies the S3 location of ML model data to deploy.</p>
     */
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }

    /**
     * <p>Specifies the S3 location of ML model data to deploy.</p>
     */
    inline void SetS3DataSource(const S3ModelDataSource& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }

    /**
     * <p>Specifies the S3 location of ML model data to deploy.</p>
     */
    inline void SetS3DataSource(S3ModelDataSource&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }

    /**
     * <p>Specifies the S3 location of ML model data to deploy.</p>
     */
    inline ModelDataSource& WithS3DataSource(const S3ModelDataSource& value) { SetS3DataSource(value); return *this;}

    /**
     * <p>Specifies the S3 location of ML model data to deploy.</p>
     */
    inline ModelDataSource& WithS3DataSource(S3ModelDataSource&& value) { SetS3DataSource(std::move(value)); return *this;}

  private:

    S3ModelDataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
