/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The configuration information for the customer managed key used for
   * encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ServerSideEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerSideEncryptionConfiguration
  {
  public:
    AWS_QCONNECT_API ServerSideEncryptionConfiguration();
    AWS_QCONNECT_API ServerSideEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ServerSideEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The customer managed key used for encryption. For more information about
     * setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>. For information about valid ID
     * values, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The customer managed key used for encryption. For more information about
     * setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>. For information about valid ID
     * values, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The customer managed key used for encryption. For more information about
     * setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>. For information about valid ID
     * values, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The customer managed key used for encryption. For more information about
     * setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>. For information about valid ID
     * values, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The customer managed key used for encryption. For more information about
     * setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>. For information about valid ID
     * values, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The customer managed key used for encryption. For more information about
     * setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>. For information about valid ID
     * values, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a>.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The customer managed key used for encryption. For more information about
     * setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>. For information about valid ID
     * values, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a>.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The customer managed key used for encryption. For more information about
     * setting up a customer managed key for Amazon Q, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>. For information about valid ID
     * values, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id">Key
     * identifiers (KeyId)</a>.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
