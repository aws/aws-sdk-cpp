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
   * <p>Configure the export output details for an Amazon SageMaker Model
   * Card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelCardExportOutputConfig">AWS
   * API Reference</a></p>
   */
  class ModelCardExportOutputConfig
  {
  public:
    AWS_SAGEMAKER_API ModelCardExportOutputConfig();
    AWS_SAGEMAKER_API ModelCardExportOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCardExportOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 output path to export your model card PDF.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>The Amazon S3 output path to export your model card PDF.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 output path to export your model card PDF.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>The Amazon S3 output path to export your model card PDF.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>The Amazon S3 output path to export your model card PDF.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>The Amazon S3 output path to export your model card PDF.</p>
     */
    inline ModelCardExportOutputConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 output path to export your model card PDF.</p>
     */
    inline ModelCardExportOutputConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 output path to export your model card PDF.</p>
     */
    inline ModelCardExportOutputConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}

  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
