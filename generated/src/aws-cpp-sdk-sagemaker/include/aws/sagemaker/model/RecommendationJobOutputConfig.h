﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobCompiledOutputConfig.h>
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
   * <p>Provides information about the output configuration for the compiled
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class RecommendationJobOutputConfig
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobOutputConfig() = default;
    AWS_SAGEMAKER_API RecommendationJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt your
     * output artifacts with Amazon S3 server-side encryption. The SageMaker execution
     * role must have <code>kms:GenerateDataKey</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    RecommendationJobOutputConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the output configuration for the compiled
     * model.</p>
     */
    inline const RecommendationJobCompiledOutputConfig& GetCompiledOutputConfig() const { return m_compiledOutputConfig; }
    inline bool CompiledOutputConfigHasBeenSet() const { return m_compiledOutputConfigHasBeenSet; }
    template<typename CompiledOutputConfigT = RecommendationJobCompiledOutputConfig>
    void SetCompiledOutputConfig(CompiledOutputConfigT&& value) { m_compiledOutputConfigHasBeenSet = true; m_compiledOutputConfig = std::forward<CompiledOutputConfigT>(value); }
    template<typename CompiledOutputConfigT = RecommendationJobCompiledOutputConfig>
    RecommendationJobOutputConfig& WithCompiledOutputConfig(CompiledOutputConfigT&& value) { SetCompiledOutputConfig(std::forward<CompiledOutputConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    RecommendationJobCompiledOutputConfig m_compiledOutputConfig;
    bool m_compiledOutputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
