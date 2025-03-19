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
    AWS_SAGEMAKER_API ModelCardExportArtifacts() = default;
    AWS_SAGEMAKER_API ModelCardExportArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCardExportArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 URI of the exported model artifacts.</p>
     */
    inline const Aws::String& GetS3ExportArtifacts() const { return m_s3ExportArtifacts; }
    inline bool S3ExportArtifactsHasBeenSet() const { return m_s3ExportArtifactsHasBeenSet; }
    template<typename S3ExportArtifactsT = Aws::String>
    void SetS3ExportArtifacts(S3ExportArtifactsT&& value) { m_s3ExportArtifactsHasBeenSet = true; m_s3ExportArtifacts = std::forward<S3ExportArtifactsT>(value); }
    template<typename S3ExportArtifactsT = Aws::String>
    ModelCardExportArtifacts& WithS3ExportArtifacts(S3ExportArtifactsT&& value) { SetS3ExportArtifacts(std::forward<S3ExportArtifactsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3ExportArtifacts;
    bool m_s3ExportArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
