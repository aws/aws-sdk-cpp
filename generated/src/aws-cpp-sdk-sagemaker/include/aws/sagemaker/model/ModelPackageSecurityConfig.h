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
   * <p>An optional Key Management Service key to encrypt, decrypt, and re-encrypt
   * model package information for regulated workloads with highly sensitive
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageSecurityConfig">AWS
   * API Reference</a></p>
   */
  class ModelPackageSecurityConfig
  {
  public:
    AWS_SAGEMAKER_API ModelPackageSecurityConfig();
    AWS_SAGEMAKER_API ModelPackageSecurityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageSecurityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline ModelPackageSecurityConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline ModelPackageSecurityConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline ModelPackageSecurityConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
