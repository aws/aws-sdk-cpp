/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>Options to control how OpenSearch encrypts all data-at-rest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/EncryptionAtRestOptions">AWS
   * API Reference</a></p>
   */
  class EncryptionAtRestOptions
  {
  public:
    AWS_OSIS_API EncryptionAtRestOptions();
    AWS_OSIS_API EncryptionAtRestOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API EncryptionAtRestOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the KMS key used to encrypt data-at-rest in OpenSearch Ingestion.
     * By default, data is encrypted using an AWS owned key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key used to encrypt data-at-rest in OpenSearch Ingestion.
     * By default, data is encrypted using an AWS owned key.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the KMS key used to encrypt data-at-rest in OpenSearch Ingestion.
     * By default, data is encrypted using an AWS owned key.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key used to encrypt data-at-rest in OpenSearch Ingestion.
     * By default, data is encrypted using an AWS owned key.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key used to encrypt data-at-rest in OpenSearch Ingestion.
     * By default, data is encrypted using an AWS owned key.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key used to encrypt data-at-rest in OpenSearch Ingestion.
     * By default, data is encrypted using an AWS owned key.</p>
     */
    inline EncryptionAtRestOptions& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key used to encrypt data-at-rest in OpenSearch Ingestion.
     * By default, data is encrypted using an AWS owned key.</p>
     */
    inline EncryptionAtRestOptions& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key used to encrypt data-at-rest in OpenSearch Ingestion.
     * By default, data is encrypted using an AWS owned key.</p>
     */
    inline EncryptionAtRestOptions& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
