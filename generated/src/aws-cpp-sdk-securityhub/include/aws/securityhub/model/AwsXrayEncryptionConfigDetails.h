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
   * <p>Information about the encryption configuration for X-Ray.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsXrayEncryptionConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsXrayEncryptionConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsXrayEncryptionConfigDetails();
    AWS_SECURITYHUB_API AwsXrayEncryptionConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsXrayEncryptionConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the KMS key that is used for encryption. Provided if
     * <code>Type</code> is <code>KMS</code>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the KMS key that is used for encryption. Provided if
     * <code>Type</code> is <code>KMS</code>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The identifier of the KMS key that is used for encryption. Provided if
     * <code>Type</code> is <code>KMS</code>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the KMS key that is used for encryption. Provided if
     * <code>Type</code> is <code>KMS</code>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The identifier of the KMS key that is used for encryption. Provided if
     * <code>Type</code> is <code>KMS</code>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of the KMS key that is used for encryption. Provided if
     * <code>Type</code> is <code>KMS</code>.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the KMS key that is used for encryption. Provided if
     * <code>Type</code> is <code>KMS</code>.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the KMS key that is used for encryption. Provided if
     * <code>Type</code> is <code>KMS</code>.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The current status of the encryption configuration. Valid values are
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>When <code>Status</code> is
     * equal to <code>UPDATING</code>, X-Ray might use both the old and new
     * encryption.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the encryption configuration. Valid values are
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>When <code>Status</code> is
     * equal to <code>UPDATING</code>, X-Ray might use both the old and new
     * encryption.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the encryption configuration. Valid values are
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>When <code>Status</code> is
     * equal to <code>UPDATING</code>, X-Ray might use both the old and new
     * encryption.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the encryption configuration. Valid values are
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>When <code>Status</code> is
     * equal to <code>UPDATING</code>, X-Ray might use both the old and new
     * encryption.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the encryption configuration. Valid values are
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>When <code>Status</code> is
     * equal to <code>UPDATING</code>, X-Ray might use both the old and new
     * encryption.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the encryption configuration. Valid values are
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>When <code>Status</code> is
     * equal to <code>UPDATING</code>, X-Ray might use both the old and new
     * encryption.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the encryption configuration. Valid values are
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>When <code>Status</code> is
     * equal to <code>UPDATING</code>, X-Ray might use both the old and new
     * encryption.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the encryption configuration. Valid values are
     * <code>ACTIVE</code> or <code>UPDATING</code>.</p> <p>When <code>Status</code> is
     * equal to <code>UPDATING</code>, X-Ray might use both the old and new
     * encryption.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The type of encryption. <code>KMS</code> indicates that the encryption uses
     * KMS keys. <code>NONE</code> indicates the default encryption.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of encryption. <code>KMS</code> indicates that the encryption uses
     * KMS keys. <code>NONE</code> indicates the default encryption.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of encryption. <code>KMS</code> indicates that the encryption uses
     * KMS keys. <code>NONE</code> indicates the default encryption.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of encryption. <code>KMS</code> indicates that the encryption uses
     * KMS keys. <code>NONE</code> indicates the default encryption.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of encryption. <code>KMS</code> indicates that the encryption uses
     * KMS keys. <code>NONE</code> indicates the default encryption.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of encryption. <code>KMS</code> indicates that the encryption uses
     * KMS keys. <code>NONE</code> indicates the default encryption.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of encryption. <code>KMS</code> indicates that the encryption uses
     * KMS keys. <code>NONE</code> indicates the default encryption.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of encryption. <code>KMS</code> indicates that the encryption uses
     * KMS keys. <code>NONE</code> indicates the default encryption.</p>
     */
    inline AwsXrayEncryptionConfigDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
