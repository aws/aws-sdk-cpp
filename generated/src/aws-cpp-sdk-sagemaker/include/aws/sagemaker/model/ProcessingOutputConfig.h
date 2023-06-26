/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingOutput.h>
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
   * <p>Configuration for uploading output from the processing
   * container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingOutputConfig">AWS
   * API Reference</a></p>
   */
  class ProcessingOutputConfig
  {
  public:
    AWS_SAGEMAKER_API ProcessingOutputConfig();
    AWS_SAGEMAKER_API ProcessingOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of outputs configuring the data to upload from the processing
     * container.</p>
     */
    inline const Aws::Vector<ProcessingOutput>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>An array of outputs configuring the data to upload from the processing
     * container.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>An array of outputs configuring the data to upload from the processing
     * container.</p>
     */
    inline void SetOutputs(const Aws::Vector<ProcessingOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>An array of outputs configuring the data to upload from the processing
     * container.</p>
     */
    inline void SetOutputs(Aws::Vector<ProcessingOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>An array of outputs configuring the data to upload from the processing
     * container.</p>
     */
    inline ProcessingOutputConfig& WithOutputs(const Aws::Vector<ProcessingOutput>& value) { SetOutputs(value); return *this;}

    /**
     * <p>An array of outputs configuring the data to upload from the processing
     * container.</p>
     */
    inline ProcessingOutputConfig& WithOutputs(Aws::Vector<ProcessingOutput>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>An array of outputs configuring the data to upload from the processing
     * container.</p>
     */
    inline ProcessingOutputConfig& AddOutputs(const ProcessingOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>An array of outputs configuring the data to upload from the processing
     * container.</p>
     */
    inline ProcessingOutputConfig& AddOutputs(ProcessingOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the processing job output.
     * <code>KmsKeyId</code> can be an ID of a KMS key, ARN of a KMS key, alias of a
     * KMS key, or alias of a KMS key. The <code>KmsKeyId</code> is applied to all
     * outputs.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the processing job output.
     * <code>KmsKeyId</code> can be an ID of a KMS key, ARN of a KMS key, alias of a
     * KMS key, or alias of a KMS key. The <code>KmsKeyId</code> is applied to all
     * outputs.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the processing job output.
     * <code>KmsKeyId</code> can be an ID of a KMS key, ARN of a KMS key, alias of a
     * KMS key, or alias of a KMS key. The <code>KmsKeyId</code> is applied to all
     * outputs.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the processing job output.
     * <code>KmsKeyId</code> can be an ID of a KMS key, ARN of a KMS key, alias of a
     * KMS key, or alias of a KMS key. The <code>KmsKeyId</code> is applied to all
     * outputs.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the processing job output.
     * <code>KmsKeyId</code> can be an ID of a KMS key, ARN of a KMS key, alias of a
     * KMS key, or alias of a KMS key. The <code>KmsKeyId</code> is applied to all
     * outputs.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the processing job output.
     * <code>KmsKeyId</code> can be an ID of a KMS key, ARN of a KMS key, alias of a
     * KMS key, or alias of a KMS key. The <code>KmsKeyId</code> is applied to all
     * outputs.</p>
     */
    inline ProcessingOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the processing job output.
     * <code>KmsKeyId</code> can be an ID of a KMS key, ARN of a KMS key, alias of a
     * KMS key, or alias of a KMS key. The <code>KmsKeyId</code> is applied to all
     * outputs.</p>
     */
    inline ProcessingOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the processing job output.
     * <code>KmsKeyId</code> can be an ID of a KMS key, ARN of a KMS key, alias of a
     * KMS key, or alias of a KMS key. The <code>KmsKeyId</code> is applied to all
     * outputs.</p>
     */
    inline ProcessingOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::Vector<ProcessingOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
