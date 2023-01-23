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
   * <p>The Amazon S3 storage configuration of a hub.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HubS3StorageConfig">AWS
   * API Reference</a></p>
   */
  class HubS3StorageConfig
  {
  public:
    AWS_SAGEMAKER_API HubS3StorageConfig();
    AWS_SAGEMAKER_API HubS3StorageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HubS3StorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 output path for the hub.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>The Amazon S3 output path for the hub.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 output path for the hub.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>The Amazon S3 output path for the hub.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>The Amazon S3 output path for the hub.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>The Amazon S3 output path for the hub.</p>
     */
    inline HubS3StorageConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 output path for the hub.</p>
     */
    inline HubS3StorageConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 output path for the hub.</p>
     */
    inline HubS3StorageConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}

  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
