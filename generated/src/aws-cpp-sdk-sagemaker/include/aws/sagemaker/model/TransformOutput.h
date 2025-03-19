/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AssemblyType.h>
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
   * <p>Describes the results of a transform job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformOutput">AWS
   * API Reference</a></p>
   */
  class TransformOutput
  {
  public:
    AWS_SAGEMAKER_API TransformOutput() = default;
    AWS_SAGEMAKER_API TransformOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 path where you want Amazon SageMaker to store the results of
     * the transform job. For example,
     * <code>s3://bucket-name/key-name-prefix</code>.</p> <p>For every S3 object used
     * as input for the transform job, batch transform stores the transformed data with
     * an .<code>out</code> suffix in a corresponding subfolder in the location in the
     * output prefix. For example, for the input data stored at
     * <code>s3://bucket-name/input-name-prefix/dataset01/data.csv</code>, batch
     * transform stores the transformed data at
     * <code>s3://bucket-name/output-name-prefix/input-name-prefix/data.csv.out</code>.
     * Batch transform doesn't upload partially processed objects. For an input S3
     * object that contains multiple records, it creates an .<code>out</code> file only
     * if the transform job succeeds on the entire file. When the input contains
     * multiple S3 objects, the batch transform job processes the listed S3 objects and
     * uploads only the output for successfully processed objects. If any object fails
     * in the transform job batch transform marks the job as failed to prompt
     * investigation.</p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    TransformOutput& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type used to specify the output data. Amazon SageMaker uses the MIME
     * type with each http call to transfer data from the transform job.</p>
     */
    inline const Aws::String& GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    template<typename AcceptT = Aws::String>
    void SetAccept(AcceptT&& value) { m_acceptHasBeenSet = true; m_accept = std::forward<AcceptT>(value); }
    template<typename AcceptT = Aws::String>
    TransformOutput& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how to assemble the results of the transform job as a single S3
     * object. Choose a format that is most convenient to you. To concatenate the
     * results in binary format, specify <code>None</code>. To add a newline character
     * at the end of every transformed record, specify <code>Line</code>.</p>
     */
    inline AssemblyType GetAssembleWith() const { return m_assembleWith; }
    inline bool AssembleWithHasBeenSet() const { return m_assembleWithHasBeenSet; }
    inline void SetAssembleWith(AssemblyType value) { m_assembleWithHasBeenSet = true; m_assembleWith = value; }
    inline TransformOutput& WithAssembleWith(AssemblyType value) { SetAssembleWith(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt the model artifacts at rest using Amazon
     * S3 server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul> <p>If you don't provide a KMS key ID, Amazon SageMaker uses the default
     * KMS key for Amazon S3 for your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateModel.html">CreateModel</a>
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    TransformOutput& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    AssemblyType m_assembleWith{AssemblyType::NOT_SET};
    bool m_assembleWithHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
