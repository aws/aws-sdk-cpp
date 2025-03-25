/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/MarketplaceMeteringRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

  /**
   */
  class RegisterUsageRequest : public MarketplaceMeteringRequest
  {
  public:
    AWS_MARKETPLACEMETERING_API RegisterUsageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterUsage"; }

    AWS_MARKETPLACEMETERING_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACEMETERING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Product code is used to uniquely identify a product in Amazon Web Services
     * Marketplace. The product code should be the same as the one used during the
     * publishing of a new product.</p>
     */
    inline const Aws::String& GetProductCode() const { return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    template<typename ProductCodeT = Aws::String>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::String>
    RegisterUsageRequest& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Public Key Version provided by Amazon Web Services Marketplace</p>
     */
    inline int GetPublicKeyVersion() const { return m_publicKeyVersion; }
    inline bool PublicKeyVersionHasBeenSet() const { return m_publicKeyVersionHasBeenSet; }
    inline void SetPublicKeyVersion(int value) { m_publicKeyVersionHasBeenSet = true; m_publicKeyVersion = value; }
    inline RegisterUsageRequest& WithPublicKeyVersion(int value) { SetPublicKeyVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline const Aws::String& GetNonce() const { return m_nonce; }
    inline bool NonceHasBeenSet() const { return m_nonceHasBeenSet; }
    template<typename NonceT = Aws::String>
    void SetNonce(NonceT&& value) { m_nonceHasBeenSet = true; m_nonce = std::forward<NonceT>(value); }
    template<typename NonceT = Aws::String>
    RegisterUsageRequest& WithNonce(NonceT&& value) { SetNonce(std::forward<NonceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    int m_publicKeyVersion{0};
    bool m_publicKeyVersionHasBeenSet = false;

    Aws::String m_nonce;
    bool m_nonceHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
