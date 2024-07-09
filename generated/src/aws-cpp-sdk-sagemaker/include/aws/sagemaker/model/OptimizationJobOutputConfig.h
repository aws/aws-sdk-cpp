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
   * <p>Details for where to store the optimized model that you create with the
   * optimization job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OptimizationJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class OptimizationJobOutputConfig
  {
  public:
    AWS_SAGEMAKER_API OptimizationJobOutputConfig();
    AWS_SAGEMAKER_API OptimizationJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a key in Amazon Web Services KMS. SageMaker
     * uses they key to encrypt the artifacts of the optimized model when SageMaker
     * uploads the model to Amazon S3.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline OptimizationJobOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline OptimizationJobOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline OptimizationJobOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI for where to store the optimized model that you create with
     * an optimization job.</p>
     */
    inline const Aws::String& GetS3OutputLocation() const{ return m_s3OutputLocation; }
    inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }
    inline void SetS3OutputLocation(const Aws::String& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = value; }
    inline void SetS3OutputLocation(Aws::String&& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = std::move(value); }
    inline void SetS3OutputLocation(const char* value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation.assign(value); }
    inline OptimizationJobOutputConfig& WithS3OutputLocation(const Aws::String& value) { SetS3OutputLocation(value); return *this;}
    inline OptimizationJobOutputConfig& WithS3OutputLocation(Aws::String&& value) { SetS3OutputLocation(std::move(value)); return *this;}
    inline OptimizationJobOutputConfig& WithS3OutputLocation(const char* value) { SetS3OutputLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_s3OutputLocation;
    bool m_s3OutputLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
