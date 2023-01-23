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
   * <p>The artifacts of the model card export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelCardExportArtifacts">AWS
   * API Reference</a></p>
   */
  class ModelCardExportArtifacts
  {
  public:
    AWS_SAGEMAKER_API ModelCardExportArtifacts();
    AWS_SAGEMAKER_API ModelCardExportArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCardExportArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline const Aws::String& GetS3ExportArtifacts() const{ return m_s3ExportArtifacts; }

    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline bool S3ExportArtifactsHasBeenSet() const { return m_s3ExportArtifactsHasBeenSet; }

    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline void SetS3ExportArtifacts(const Aws::String& value) { m_s3ExportArtifactsHasBeenSet = true; m_s3ExportArtifacts = value; }

    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline void SetS3ExportArtifacts(Aws::String&& value) { m_s3ExportArtifactsHasBeenSet = true; m_s3ExportArtifacts = std::move(value); }

    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline void SetS3ExportArtifacts(const char* value) { m_s3ExportArtifactsHasBeenSet = true; m_s3ExportArtifacts.assign(value); }

    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline ModelCardExportArtifacts& WithS3ExportArtifacts(const Aws::String& value) { SetS3ExportArtifacts(value); return *this;}

    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline ModelCardExportArtifacts& WithS3ExportArtifacts(Aws::String&& value) { SetS3ExportArtifacts(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline ModelCardExportArtifacts& WithS3ExportArtifacts(const char* value) { SetS3ExportArtifacts(value); return *this;}

  private:

    Aws::String m_s3ExportArtifacts;
    bool m_s3ExportArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
