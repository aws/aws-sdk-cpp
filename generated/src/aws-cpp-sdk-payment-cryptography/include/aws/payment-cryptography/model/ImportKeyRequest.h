/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/model/ImportKeyMaterial.h>
#include <aws/payment-cryptography/model/KeyCheckValueAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ImportKeyRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportKey"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The key or public key certificate type to use during key material import, for
     * example TR-34 or RootCertificatePublicKey.</p>
     */
    inline const ImportKeyMaterial& GetKeyMaterial() const { return m_keyMaterial; }
    inline bool KeyMaterialHasBeenSet() const { return m_keyMaterialHasBeenSet; }
    template<typename KeyMaterialT = ImportKeyMaterial>
    void SetKeyMaterial(KeyMaterialT&& value) { m_keyMaterialHasBeenSet = true; m_keyMaterial = std::forward<KeyMaterialT>(value); }
    template<typename KeyMaterialT = ImportKeyMaterial>
    ImportKeyRequest& WithKeyMaterial(KeyMaterialT&& value) { SetKeyMaterial(std::forward<KeyMaterialT>(value)); return *this;}
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
    inline ImportKeyRequest& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { SetKeyCheckValueAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether import key is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ImportKeyRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags to the Amazon Web Services Payment Cryptography key.
     * Use this parameter to tag a key when it is imported. To tag an existing Amazon
     * Web Services Payment Cryptography key, use the <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_TagResource.html">TagResource</a>
     * operation.</p> <p>Each tag consists of a tag key and a tag value. Both the tag
     * key and the tag value are required, but the tag value can be an empty (null)
     * string. You can't have more than one tag on an Amazon Web Services Payment
     * Cryptography key with the same tag key. If you specify an existing tag key with
     * a different tag value, Amazon Web Services Payment Cryptography replaces the
     * current tag value with the specified one.</p>  <p>Don't include
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
    ImportKeyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportKeyRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const { return m_replicationRegions; }
    inline bool ReplicationRegionsHasBeenSet() const { return m_replicationRegionsHasBeenSet; }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = std::forward<ReplicationRegionsT>(value); }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    ImportKeyRequest& WithReplicationRegions(ReplicationRegionsT&& value) { SetReplicationRegions(std::forward<ReplicationRegionsT>(value)); return *this;}
    template<typename ReplicationRegionsT = Aws::String>
    ImportKeyRequest& AddReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.emplace_back(std::forward<ReplicationRegionsT>(value)); return *this; }
    ///@}
  private:

    ImportKeyMaterial m_keyMaterial;
    bool m_keyMaterialHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm{KeyCheckValueAlgorithm::NOT_SET};
    bool m_keyCheckValueAlgorithmHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationRegions;
    bool m_replicationRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
