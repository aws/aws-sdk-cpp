/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/model/S3ObjectEncryptionType.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>The encryption settings that are used by a journal export job to write data
   * in an Amazon Simple Storage Service (Amazon S3) bucket.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/S3EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class S3EncryptionConfiguration
  {
  public:
    AWS_QLDB_API S3EncryptionConfiguration();
    AWS_QLDB_API S3EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API S3EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 object encryption type.</p> <p>To learn more about server-side
     * encryption options in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
     * Data Using Server-Side Encryption</a> in the <i>Amazon S3 Developer
     * Guide</i>.</p>
     */
    inline const S3ObjectEncryptionType& GetObjectEncryptionType() const{ return m_objectEncryptionType; }

    /**
     * <p>The Amazon S3 object encryption type.</p> <p>To learn more about server-side
     * encryption options in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
     * Data Using Server-Side Encryption</a> in the <i>Amazon S3 Developer
     * Guide</i>.</p>
     */
    inline bool ObjectEncryptionTypeHasBeenSet() const { return m_objectEncryptionTypeHasBeenSet; }

    /**
     * <p>The Amazon S3 object encryption type.</p> <p>To learn more about server-side
     * encryption options in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
     * Data Using Server-Side Encryption</a> in the <i>Amazon S3 Developer
     * Guide</i>.</p>
     */
    inline void SetObjectEncryptionType(const S3ObjectEncryptionType& value) { m_objectEncryptionTypeHasBeenSet = true; m_objectEncryptionType = value; }

    /**
     * <p>The Amazon S3 object encryption type.</p> <p>To learn more about server-side
     * encryption options in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
     * Data Using Server-Side Encryption</a> in the <i>Amazon S3 Developer
     * Guide</i>.</p>
     */
    inline void SetObjectEncryptionType(S3ObjectEncryptionType&& value) { m_objectEncryptionTypeHasBeenSet = true; m_objectEncryptionType = std::move(value); }

    /**
     * <p>The Amazon S3 object encryption type.</p> <p>To learn more about server-side
     * encryption options in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
     * Data Using Server-Side Encryption</a> in the <i>Amazon S3 Developer
     * Guide</i>.</p>
     */
    inline S3EncryptionConfiguration& WithObjectEncryptionType(const S3ObjectEncryptionType& value) { SetObjectEncryptionType(value); return *this;}

    /**
     * <p>The Amazon S3 object encryption type.</p> <p>To learn more about server-side
     * encryption options in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
     * Data Using Server-Side Encryption</a> in the <i>Amazon S3 Developer
     * Guide</i>.</p>
     */
    inline S3EncryptionConfiguration& WithObjectEncryptionType(S3ObjectEncryptionType&& value) { SetObjectEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric key in Key Management Service
     * (KMS). Amazon S3 does not support asymmetric KMS keys.</p> <p>You must provide a
     * <code>KmsKeyArn</code> if you specify <code>SSE_KMS</code> as the
     * <code>ObjectEncryptionType</code>.</p> <p> <code>KmsKeyArn</code> is not
     * required if you specify <code>SSE_S3</code> as the
     * <code>ObjectEncryptionType</code>.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric key in Key Management Service
     * (KMS). Amazon S3 does not support asymmetric KMS keys.</p> <p>You must provide a
     * <code>KmsKeyArn</code> if you specify <code>SSE_KMS</code> as the
     * <code>ObjectEncryptionType</code>.</p> <p> <code>KmsKeyArn</code> is not
     * required if you specify <code>SSE_S3</code> as the
     * <code>ObjectEncryptionType</code>.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric key in Key Management Service
     * (KMS). Amazon S3 does not support asymmetric KMS keys.</p> <p>You must provide a
     * <code>KmsKeyArn</code> if you specify <code>SSE_KMS</code> as the
     * <code>ObjectEncryptionType</code>.</p> <p> <code>KmsKeyArn</code> is not
     * required if you specify <code>SSE_S3</code> as the
     * <code>ObjectEncryptionType</code>.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric key in Key Management Service
     * (KMS). Amazon S3 does not support asymmetric KMS keys.</p> <p>You must provide a
     * <code>KmsKeyArn</code> if you specify <code>SSE_KMS</code> as the
     * <code>ObjectEncryptionType</code>.</p> <p> <code>KmsKeyArn</code> is not
     * required if you specify <code>SSE_S3</code> as the
     * <code>ObjectEncryptionType</code>.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric key in Key Management Service
     * (KMS). Amazon S3 does not support asymmetric KMS keys.</p> <p>You must provide a
     * <code>KmsKeyArn</code> if you specify <code>SSE_KMS</code> as the
     * <code>ObjectEncryptionType</code>.</p> <p> <code>KmsKeyArn</code> is not
     * required if you specify <code>SSE_S3</code> as the
     * <code>ObjectEncryptionType</code>.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric key in Key Management Service
     * (KMS). Amazon S3 does not support asymmetric KMS keys.</p> <p>You must provide a
     * <code>KmsKeyArn</code> if you specify <code>SSE_KMS</code> as the
     * <code>ObjectEncryptionType</code>.</p> <p> <code>KmsKeyArn</code> is not
     * required if you specify <code>SSE_S3</code> as the
     * <code>ObjectEncryptionType</code>.</p>
     */
    inline S3EncryptionConfiguration& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric key in Key Management Service
     * (KMS). Amazon S3 does not support asymmetric KMS keys.</p> <p>You must provide a
     * <code>KmsKeyArn</code> if you specify <code>SSE_KMS</code> as the
     * <code>ObjectEncryptionType</code>.</p> <p> <code>KmsKeyArn</code> is not
     * required if you specify <code>SSE_S3</code> as the
     * <code>ObjectEncryptionType</code>.</p>
     */
    inline S3EncryptionConfiguration& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric key in Key Management Service
     * (KMS). Amazon S3 does not support asymmetric KMS keys.</p> <p>You must provide a
     * <code>KmsKeyArn</code> if you specify <code>SSE_KMS</code> as the
     * <code>ObjectEncryptionType</code>.</p> <p> <code>KmsKeyArn</code> is not
     * required if you specify <code>SSE_S3</code> as the
     * <code>ObjectEncryptionType</code>.</p>
     */
    inline S3EncryptionConfiguration& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    S3ObjectEncryptionType m_objectEncryptionType;
    bool m_objectEncryptionTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
