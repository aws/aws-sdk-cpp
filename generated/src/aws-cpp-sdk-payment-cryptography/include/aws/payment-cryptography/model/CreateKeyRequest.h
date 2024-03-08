/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
#include <aws/payment-cryptography/model/KeyCheckValueAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payment-cryptography/model/Tag.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   */
  class CreateKeyRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API CreateKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKey"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies whether to enable the key. If the key is enabled, it is activated
     * for use within the service. If the key is not enabled, then it is created but
     * not activated. The default value is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the key. If the key is enabled, it is activated
     * for use within the service. If the key is not enabled, then it is created but
     * not activated. The default value is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the key. If the key is enabled, it is activated
     * for use within the service. If the key is not enabled, then it is created but
     * not activated. The default value is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the key. If the key is enabled, it is activated
     * for use within the service. If the key is not enabled, then it is created but
     * not activated. The default value is enabled.</p>
     */
    inline CreateKeyRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies whether the key is exportable from the service.</p>
     */
    inline bool GetExportable() const{ return m_exportable; }

    /**
     * <p>Specifies whether the key is exportable from the service.</p>
     */
    inline bool ExportableHasBeenSet() const { return m_exportableHasBeenSet; }

    /**
     * <p>Specifies whether the key is exportable from the service.</p>
     */
    inline void SetExportable(bool value) { m_exportableHasBeenSet = true; m_exportable = value; }

    /**
     * <p>Specifies whether the key is exportable from the service.</p>
     */
    inline CreateKeyRequest& WithExportable(bool value) { SetExportable(value); return *this;}


    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline const KeyAttributes& GetKeyAttributes() const{ return m_keyAttributes; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline void SetKeyAttributes(const KeyAttributes& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = value; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline void SetKeyAttributes(KeyAttributes&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::move(value); }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline CreateKeyRequest& WithKeyAttributes(const KeyAttributes& value) { SetKeyAttributes(value); return *this;}

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline CreateKeyRequest& WithKeyAttributes(KeyAttributes&& value) { SetKeyAttributes(std::move(value)); return *this;}


    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline const KeyCheckValueAlgorithm& GetKeyCheckValueAlgorithm() const{ return m_keyCheckValueAlgorithm; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline bool KeyCheckValueAlgorithmHasBeenSet() const { return m_keyCheckValueAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline void SetKeyCheckValueAlgorithm(const KeyCheckValueAlgorithm& value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = value; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline void SetKeyCheckValueAlgorithm(KeyCheckValueAlgorithm&& value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = std::move(value); }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline CreateKeyRequest& WithKeyCheckValueAlgorithm(const KeyCheckValueAlgorithm& value) { SetKeyCheckValueAlgorithm(value); return *this;}

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline CreateKeyRequest& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm&& value) { SetKeyCheckValueAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a>TagResource</a> operation.</p>
     * <p>Each tag consists of a tag key and a tag value. Both the tag key and the tag
     * value are required, but the tag value can be an empty (null) string. You can't
     * have more than one tag on an Amazon Web Services Payment Cryptography key with
     * the same tag key. </p>  <p>Don't include personal, confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging an Amazon Web Services Payment Cryptography key can allow or deny
     * permission to the key.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a>TagResource</a> operation.</p>
     * <p>Each tag consists of a tag key and a tag value. Both the tag key and the tag
     * value are required, but the tag value can be an empty (null) string. You can't
     * have more than one tag on an Amazon Web Services Payment Cryptography key with
     * the same tag key. </p>  <p>Don't include personal, confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging an Amazon Web Services Payment Cryptography key can allow or deny
     * permission to the key.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a>TagResource</a> operation.</p>
     * <p>Each tag consists of a tag key and a tag value. Both the tag key and the tag
     * value are required, but the tag value can be an empty (null) string. You can't
     * have more than one tag on an Amazon Web Services Payment Cryptography key with
     * the same tag key. </p>  <p>Don't include personal, confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging an Amazon Web Services Payment Cryptography key can allow or deny
     * permission to the key.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a>TagResource</a> operation.</p>
     * <p>Each tag consists of a tag key and a tag value. Both the tag key and the tag
     * value are required, but the tag value can be an empty (null) string. You can't
     * have more than one tag on an Amazon Web Services Payment Cryptography key with
     * the same tag key. </p>  <p>Don't include personal, confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging an Amazon Web Services Payment Cryptography key can allow or deny
     * permission to the key.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a>TagResource</a> operation.</p>
     * <p>Each tag consists of a tag key and a tag value. Both the tag key and the tag
     * value are required, but the tag value can be an empty (null) string. You can't
     * have more than one tag on an Amazon Web Services Payment Cryptography key with
     * the same tag key. </p>  <p>Don't include personal, confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging an Amazon Web Services Payment Cryptography key can allow or deny
     * permission to the key.</p> 
     */
    inline CreateKeyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a>TagResource</a> operation.</p>
     * <p>Each tag consists of a tag key and a tag value. Both the tag key and the tag
     * value are required, but the tag value can be an empty (null) string. You can't
     * have more than one tag on an Amazon Web Services Payment Cryptography key with
     * the same tag key. </p>  <p>Don't include personal, confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging an Amazon Web Services Payment Cryptography key can allow or deny
     * permission to the key.</p> 
     */
    inline CreateKeyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a>TagResource</a> operation.</p>
     * <p>Each tag consists of a tag key and a tag value. Both the tag key and the tag
     * value are required, but the tag value can be an empty (null) string. You can't
     * have more than one tag on an Amazon Web Services Payment Cryptography key with
     * the same tag key. </p>  <p>Don't include personal, confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging an Amazon Web Services Payment Cryptography key can allow or deny
     * permission to the key.</p> 
     */
    inline CreateKeyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a>TagResource</a> operation.</p>
     * <p>Each tag consists of a tag key and a tag value. Both the tag key and the tag
     * value are required, but the tag value can be an empty (null) string. You can't
     * have more than one tag on an Amazon Web Services Payment Cryptography key with
     * the same tag key. </p>  <p>Don't include personal, confidential or
     * sensitive information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p>   <p>Tagging or
     * untagging an Amazon Web Services Payment Cryptography key can allow or deny
     * permission to the key.</p> 
     */
    inline CreateKeyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_exportable;
    bool m_exportableHasBeenSet = false;

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm;
    bool m_keyCheckValueAlgorithmHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
