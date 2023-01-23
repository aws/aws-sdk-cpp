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
   * <p>Contains information about where human output will be stored.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FlowDefinitionOutputConfig">AWS
   * API Reference</a></p>
   */
  class FlowDefinitionOutputConfig
  {
  public:
    AWS_SAGEMAKER_API FlowDefinitionOutputConfig();
    AWS_SAGEMAKER_API FlowDefinitionOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FlowDefinitionOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 path where the object containing human output will be made
     * available.</p> <p>To learn more about the format of Amazon A2I output data, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-output-data.html">Amazon
     * A2I Output Data</a>.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>The Amazon S3 path where the object containing human output will be made
     * available.</p> <p>To learn more about the format of Amazon A2I output data, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-output-data.html">Amazon
     * A2I Output Data</a>.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 path where the object containing human output will be made
     * available.</p> <p>To learn more about the format of Amazon A2I output data, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-output-data.html">Amazon
     * A2I Output Data</a>.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>The Amazon S3 path where the object containing human output will be made
     * available.</p> <p>To learn more about the format of Amazon A2I output data, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-output-data.html">Amazon
     * A2I Output Data</a>.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>The Amazon S3 path where the object containing human output will be made
     * available.</p> <p>To learn more about the format of Amazon A2I output data, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-output-data.html">Amazon
     * A2I Output Data</a>.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>The Amazon S3 path where the object containing human output will be made
     * available.</p> <p>To learn more about the format of Amazon A2I output data, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-output-data.html">Amazon
     * A2I Output Data</a>.</p>
     */
    inline FlowDefinitionOutputConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 path where the object containing human output will be made
     * available.</p> <p>To learn more about the format of Amazon A2I output data, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-output-data.html">Amazon
     * A2I Output Data</a>.</p>
     */
    inline FlowDefinitionOutputConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where the object containing human output will be made
     * available.</p> <p>To learn more about the format of Amazon A2I output data, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-output-data.html">Amazon
     * A2I Output Data</a>.</p>
     */
    inline FlowDefinitionOutputConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline FlowDefinitionOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline FlowDefinitionOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline FlowDefinitionOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
