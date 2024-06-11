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
   * <p>Contains information about the output location for managed spot training
   * checkpoint data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CheckpointConfig">AWS
   * API Reference</a></p>
   */
  class CheckpointConfig
  {
  public:
    AWS_SAGEMAKER_API CheckpointConfig();
    AWS_SAGEMAKER_API CheckpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CheckpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the S3 path where you want SageMaker to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline CheckpointConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline CheckpointConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline CheckpointConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/ml/checkpoints/</code>. </p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }
    inline CheckpointConfig& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}
    inline CheckpointConfig& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}
    inline CheckpointConfig& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
