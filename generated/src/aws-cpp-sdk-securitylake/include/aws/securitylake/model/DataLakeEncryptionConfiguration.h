/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provides encryption details of Amazon Security Lake object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class DataLakeEncryptionConfiguration
  {
  public:
    AWS_SECURITYLAKE_API DataLakeEncryptionConfiguration();
    AWS_SECURITYLAKE_API DataLakeEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The id of KMS encryption key used by Amazon Security Lake to encrypt the
     * Security Lake object.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The id of KMS encryption key used by Amazon Security Lake to encrypt the
     * Security Lake object.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The id of KMS encryption key used by Amazon Security Lake to encrypt the
     * Security Lake object.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The id of KMS encryption key used by Amazon Security Lake to encrypt the
     * Security Lake object.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The id of KMS encryption key used by Amazon Security Lake to encrypt the
     * Security Lake object.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The id of KMS encryption key used by Amazon Security Lake to encrypt the
     * Security Lake object.</p>
     */
    inline DataLakeEncryptionConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The id of KMS encryption key used by Amazon Security Lake to encrypt the
     * Security Lake object.</p>
     */
    inline DataLakeEncryptionConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The id of KMS encryption key used by Amazon Security Lake to encrypt the
     * Security Lake object.</p>
     */
    inline DataLakeEncryptionConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
