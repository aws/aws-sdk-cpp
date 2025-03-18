/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/LabelingJobS3DataSource.h>
#include <aws/sagemaker/model/LabelingJobSnsDataSource.h>
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
   * <p>Provides information about the location of input data.</p> <p>You must
   * specify at least one of the following: <code>S3DataSource</code> or
   * <code>SnsDataSource</code>.</p> <p>Use <code>SnsDataSource</code> to specify an
   * SNS input topic for a streaming labeling job. If you do not specify and SNS
   * input topic ARN, Ground Truth will create a one-time labeling job.</p> <p>Use
   * <code>S3DataSource</code> to specify an input manifest file for both streaming
   * and one-time labeling jobs. Adding an <code>S3DataSource</code> is optional if
   * you use <code>SnsDataSource</code> to create a streaming labeling
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobDataSource">AWS
   * API Reference</a></p>
   */
  class LabelingJobDataSource
  {
  public:
    AWS_SAGEMAKER_API LabelingJobDataSource() = default;
    AWS_SAGEMAKER_API LabelingJobDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location of the input data objects.</p>
     */
    inline const LabelingJobS3DataSource& GetS3DataSource() const { return m_s3DataSource; }
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }
    template<typename S3DataSourceT = LabelingJobS3DataSource>
    void SetS3DataSource(S3DataSourceT&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::forward<S3DataSourceT>(value); }
    template<typename S3DataSourceT = LabelingJobS3DataSource>
    LabelingJobDataSource& WithS3DataSource(S3DataSourceT&& value) { SetS3DataSource(std::forward<S3DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon SNS data source used for streaming labeling jobs. To learn more,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-send-data">Send
     * Data to a Streaming Labeling Job</a>. </p>
     */
    inline const LabelingJobSnsDataSource& GetSnsDataSource() const { return m_snsDataSource; }
    inline bool SnsDataSourceHasBeenSet() const { return m_snsDataSourceHasBeenSet; }
    template<typename SnsDataSourceT = LabelingJobSnsDataSource>
    void SetSnsDataSource(SnsDataSourceT&& value) { m_snsDataSourceHasBeenSet = true; m_snsDataSource = std::forward<SnsDataSourceT>(value); }
    template<typename SnsDataSourceT = LabelingJobSnsDataSource>
    LabelingJobDataSource& WithSnsDataSource(SnsDataSourceT&& value) { SetSnsDataSource(std::forward<SnsDataSourceT>(value)); return *this;}
    ///@}
  private:

    LabelingJobS3DataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;

    LabelingJobSnsDataSource m_snsDataSource;
    bool m_snsDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
