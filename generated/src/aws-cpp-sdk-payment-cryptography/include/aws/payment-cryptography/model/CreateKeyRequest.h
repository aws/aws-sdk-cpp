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
#include <aws/payment-cryptography/model/DeriveKeyUsage.h>
#include <aws/payment-cryptography/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_PAYMENTCRYPTOGRAPHY_API CreateKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKey"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline const KeyAttributes& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = KeyAttributes>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = KeyAttributes>
    CreateKeyRequest& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline KeyCheckValueAlgorithm GetKeyCheckValueAlgorithm() const { return m_keyCheckValueAlgorithm; }
    inline bool KeyCheckValueAlgorithmHasBeenSet() const { return m_keyCheckValueAlgorithmHasBeenSet; }
    inline void SetKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = value; }
    inline CreateKeyRequest& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { SetKeyCheckValueAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the key is exportable from the service.</p>
     */
    inline bool GetExportable() const { return m_exportable; }
    inline bool ExportableHasBeenSet() const { return m_exportableHasBeenSet; }
    inline void SetExportable(bool value) { m_exportableHasBeenSet = true; m_exportable = value; }
    inline CreateKeyRequest& WithExportable(bool value) { SetExportable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable the key. If the key is enabled, it is activated
     * for use within the service. If the key is not enabled, then it is created but
     * not activated. The default value is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateKeyRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is created. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_TagResource.html">TagResource</a>
     * operation.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You can't have more than one tag on an Amazon Web Services Payment
     * Cryptography key with the same tag key. </p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     *  <p>Tagging or untagging an Amazon Web Services Payment Cryptography key
     * can allow or deny permission to the key.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateKeyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateKeyRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The intended cryptographic usage of keys derived from the ECC key pair to be
     * created.</p> <p>After creating an ECC key pair, you cannot change the intended
     * cryptographic usage of keys derived from it using ECDH.</p>
     */
    inline DeriveKeyUsage GetDeriveKeyUsage() const { return m_deriveKeyUsage; }
    inline bool DeriveKeyUsageHasBeenSet() const { return m_deriveKeyUsageHasBeenSet; }
    inline void SetDeriveKeyUsage(DeriveKeyUsage value) { m_deriveKeyUsageHasBeenSet = true; m_deriveKeyUsage = value; }
    inline CreateKeyRequest& WithDeriveKeyUsage(DeriveKeyUsage value) { SetDeriveKeyUsage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const { return m_replicationRegions; }
    inline bool ReplicationRegionsHasBeenSet() const { return m_replicationRegionsHasBeenSet; }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = std::forward<ReplicationRegionsT>(value); }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    CreateKeyRequest& WithReplicationRegions(ReplicationRegionsT&& value) { SetReplicationRegions(std::forward<ReplicationRegionsT>(value)); return *this;}
    template<typename ReplicationRegionsT = Aws::String>
    CreateKeyRequest& AddReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.emplace_back(std::forward<ReplicationRegionsT>(value)); return *this; }
    ///@}
  private:

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm{KeyCheckValueAlgorithm::NOT_SET};
    bool m_keyCheckValueAlgorithmHasBeenSet = false;

    bool m_exportable{false};
    bool m_exportableHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DeriveKeyUsage m_deriveKeyUsage{DeriveKeyUsage::NOT_SET};
    bool m_deriveKeyUsageHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationRegions;
    bool m_replicationRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
