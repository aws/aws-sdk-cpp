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
   * <p>Provides information about stream encryption. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsKinesisStreamStreamEncryptionDetails">AWS
   * API Reference</a></p>
   */
  class AwsKinesisStreamStreamEncryptionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsKinesisStreamStreamEncryptionDetails();
    AWS_SECURITYHUB_API AwsKinesisStreamStreamEncryptionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsKinesisStreamStreamEncryptionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption type to use. </p>
     */
    inline const Aws::String& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The encryption type to use. </p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The encryption type to use. </p>
     */
    inline void SetEncryptionType(const Aws::String& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The encryption type to use. </p>
     */
    inline void SetEncryptionType(Aws::String&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The encryption type to use. </p>
     */
    inline void SetEncryptionType(const char* value) { m_encryptionTypeHasBeenSet = true; m_encryptionType.assign(value); }

    /**
     * <p>The encryption type to use. </p>
     */
    inline AwsKinesisStreamStreamEncryptionDetails& WithEncryptionType(const Aws::String& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The encryption type to use. </p>
     */
    inline AwsKinesisStreamStreamEncryptionDetails& WithEncryptionType(Aws::String&& value) { SetEncryptionType(std::move(value)); return *this;}

    /**
     * <p>The encryption type to use. </p>
     */
    inline AwsKinesisStreamStreamEncryptionDetails& WithEncryptionType(const char* value) { SetEncryptionType(value); return *this;}


    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline AwsKinesisStreamStreamEncryptionDetails& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline AwsKinesisStreamStreamEncryptionDetails& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline AwsKinesisStreamStreamEncryptionDetails& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
