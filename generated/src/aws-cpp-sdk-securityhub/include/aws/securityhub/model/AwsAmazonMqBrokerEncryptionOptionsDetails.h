/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about broker encryption options. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAmazonMqBrokerEncryptionOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsAmazonMqBrokerEncryptionOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAmazonMqBrokerEncryptionOptionsDetails();
    AWS_SECURITYHUB_API AwsAmazonMqBrokerEncryptionOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerEncryptionOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The KMS key that’s used to encrypt your data at rest. If not provided,
     * Amazon MQ will use a default KMS key to encrypt your data. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> The KMS key that’s used to encrypt your data at rest. If not provided,
     * Amazon MQ will use a default KMS key to encrypt your data. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> The KMS key that’s used to encrypt your data at rest. If not provided,
     * Amazon MQ will use a default KMS key to encrypt your data. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> The KMS key that’s used to encrypt your data at rest. If not provided,
     * Amazon MQ will use a default KMS key to encrypt your data. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> The KMS key that’s used to encrypt your data at rest. If not provided,
     * Amazon MQ will use a default KMS key to encrypt your data. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> The KMS key that’s used to encrypt your data at rest. If not provided,
     * Amazon MQ will use a default KMS key to encrypt your data. </p>
     */
    inline AwsAmazonMqBrokerEncryptionOptionsDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> The KMS key that’s used to encrypt your data at rest. If not provided,
     * Amazon MQ will use a default KMS key to encrypt your data. </p>
     */
    inline AwsAmazonMqBrokerEncryptionOptionsDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> The KMS key that’s used to encrypt your data at rest. If not provided,
     * Amazon MQ will use a default KMS key to encrypt your data. </p>
     */
    inline AwsAmazonMqBrokerEncryptionOptionsDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> Specifies that an KMS key should be used for at-rest encryption. Set to
     * <code>true</code> by default if no value is provided (for example, for RabbitMQ
     * brokers). </p>
     */
    inline bool GetUseAwsOwnedKey() const{ return m_useAwsOwnedKey; }

    /**
     * <p> Specifies that an KMS key should be used for at-rest encryption. Set to
     * <code>true</code> by default if no value is provided (for example, for RabbitMQ
     * brokers). </p>
     */
    inline bool UseAwsOwnedKeyHasBeenSet() const { return m_useAwsOwnedKeyHasBeenSet; }

    /**
     * <p> Specifies that an KMS key should be used for at-rest encryption. Set to
     * <code>true</code> by default if no value is provided (for example, for RabbitMQ
     * brokers). </p>
     */
    inline void SetUseAwsOwnedKey(bool value) { m_useAwsOwnedKeyHasBeenSet = true; m_useAwsOwnedKey = value; }

    /**
     * <p> Specifies that an KMS key should be used for at-rest encryption. Set to
     * <code>true</code> by default if no value is provided (for example, for RabbitMQ
     * brokers). </p>
     */
    inline AwsAmazonMqBrokerEncryptionOptionsDetails& WithUseAwsOwnedKey(bool value) { SetUseAwsOwnedKey(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_useAwsOwnedKey;
    bool m_useAwsOwnedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
