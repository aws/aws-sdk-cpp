/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Configuration for the custom Amazon S3 file system.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/S3FileSystemConfig">AWS
   * API Reference</a></p>
   */
  class S3FileSystemConfig
  {
  public:
    AWS_SAGEMAKER_API S3FileSystemConfig() = default;
    AWS_SAGEMAKER_API S3FileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API S3FileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file system path where the Amazon S3 storage location will be mounted
     * within the Amazon SageMaker Studio environment.</p>
     */
    inline const Aws::String& GetMountPath() const { return m_mountPath; }
    inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
    template<typename MountPathT = Aws::String>
    void SetMountPath(MountPathT&& value) { m_mountPathHasBeenSet = true; m_mountPath = std::forward<MountPathT>(value); }
    template<typename MountPathT = Aws::String>
    S3FileSystemConfig& WithMountPath(MountPathT&& value) { SetMountPath(std::forward<MountPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI of the S3 file system configuration.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    S3FileSystemConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mountPath;
    bool m_mountPathHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
