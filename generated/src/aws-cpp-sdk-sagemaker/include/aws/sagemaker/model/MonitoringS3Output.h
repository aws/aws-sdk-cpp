/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingS3UploadMode.h>
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
   * <p>Information about where and how you want to store the results of a monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringS3Output">AWS
   * API Reference</a></p>
   */
  class MonitoringS3Output
  {
  public:
    AWS_SAGEMAKER_API MonitoringS3Output() = default;
    AWS_SAGEMAKER_API MonitoringS3Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringS3Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A URI that identifies the Amazon S3 storage location where Amazon SageMaker
     * AI saves the results of a monitoring job.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    MonitoringS3Output& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local path to the Amazon S3 storage location where Amazon SageMaker AI
     * saves the results of a monitoring job. LocalPath is an absolute path for the
     * output data.</p>
     */
    inline const Aws::String& GetLocalPath() const { return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    template<typename LocalPathT = Aws::String>
    void SetLocalPath(LocalPathT&& value) { m_localPathHasBeenSet = true; m_localPath = std::forward<LocalPathT>(value); }
    template<typename LocalPathT = Aws::String>
    MonitoringS3Output& WithLocalPath(LocalPathT&& value) { SetLocalPath(std::forward<LocalPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to upload the results of the monitoring job continuously or after the
     * job completes.</p>
     */
    inline ProcessingS3UploadMode GetS3UploadMode() const { return m_s3UploadMode; }
    inline bool S3UploadModeHasBeenSet() const { return m_s3UploadModeHasBeenSet; }
    inline void SetS3UploadMode(ProcessingS3UploadMode value) { m_s3UploadModeHasBeenSet = true; m_s3UploadMode = value; }
    inline MonitoringS3Output& WithS3UploadMode(ProcessingS3UploadMode value) { SetS3UploadMode(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    ProcessingS3UploadMode m_s3UploadMode{ProcessingS3UploadMode::NOT_SET};
    bool m_s3UploadModeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
