/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Input parameters for removing replication regions from a specific
   * key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/RemoveKeyReplicationRegionsInput">AWS
   * API Reference</a></p>
   */
  class RemoveKeyReplicationRegionsRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API RemoveKeyReplicationRegionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveKeyReplicationRegions"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The key identifier (ARN or alias) of the key from which to remove replication
     * regions.</p> <p>This key must exist and have replication enabled in the
     * specified regions.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    RemoveKeyReplicationRegionsRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Web Services Regions to remove from the key's replication
     * configuration.</p> <p>The key will no longer be available for cryptographic
     * operations in these regions after removal. Ensure no active operations depend on
     * the key in these regions before removal.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const { return m_replicationRegions; }
    inline bool ReplicationRegionsHasBeenSet() const { return m_replicationRegionsHasBeenSet; }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = std::forward<ReplicationRegionsT>(value); }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    RemoveKeyReplicationRegionsRequest& WithReplicationRegions(ReplicationRegionsT&& value) { SetReplicationRegions(std::forward<ReplicationRegionsT>(value)); return *this;}
    template<typename ReplicationRegionsT = Aws::String>
    RemoveKeyReplicationRegionsRequest& AddReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.emplace_back(std::forward<ReplicationRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationRegions;
    bool m_replicationRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
