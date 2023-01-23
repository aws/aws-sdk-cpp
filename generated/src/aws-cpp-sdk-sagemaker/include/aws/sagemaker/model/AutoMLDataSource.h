/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLS3DataSource.h>
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
   * <p>The data source for the Autopilot job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLDataSource">AWS
   * API Reference</a></p>
   */
  class AutoMLDataSource
  {
  public:
    AWS_SAGEMAKER_API AutoMLDataSource();
    AWS_SAGEMAKER_API AutoMLDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of the input data.</p>
     */
    inline const AutoMLS3DataSource& GetS3DataSource() const{ return m_s3DataSource; }

    /**
     * <p>The Amazon S3 location of the input data.</p>
     */
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the input data.</p>
     */
    inline void SetS3DataSource(const AutoMLS3DataSource& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }

    /**
     * <p>The Amazon S3 location of the input data.</p>
     */
    inline void SetS3DataSource(AutoMLS3DataSource&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }

    /**
     * <p>The Amazon S3 location of the input data.</p>
     */
    inline AutoMLDataSource& WithS3DataSource(const AutoMLS3DataSource& value) { SetS3DataSource(value); return *this;}

    /**
     * <p>The Amazon S3 location of the input data.</p>
     */
    inline AutoMLDataSource& WithS3DataSource(AutoMLS3DataSource&& value) { SetS3DataSource(std::move(value)); return *this;}

  private:

    AutoMLS3DataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
