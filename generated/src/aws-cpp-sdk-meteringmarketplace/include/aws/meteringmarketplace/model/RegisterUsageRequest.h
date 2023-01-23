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
    AWS_MARKETPLACEMETERING_API RegisterUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterUsage"; }

    AWS_MARKETPLACEMETERING_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACEMETERING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline void SetProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode = value; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline void SetProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline void SetProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.assign(value); }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline RegisterUsageRequest& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline RegisterUsageRequest& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code should be the same as the one used during the publishing of a new
     * product.</p>
     */
    inline RegisterUsageRequest& WithProductCode(const char* value) { SetProductCode(value); return *this;}


    /**
     * <p>Public Key Version provided by AWS Marketplace</p>
     */
    inline int GetPublicKeyVersion() const{ return m_publicKeyVersion; }

    /**
     * <p>Public Key Version provided by AWS Marketplace</p>
     */
    inline bool PublicKeyVersionHasBeenSet() const { return m_publicKeyVersionHasBeenSet; }

    /**
     * <p>Public Key Version provided by AWS Marketplace</p>
     */
    inline void SetPublicKeyVersion(int value) { m_publicKeyVersionHasBeenSet = true; m_publicKeyVersion = value; }

    /**
     * <p>Public Key Version provided by AWS Marketplace</p>
     */
    inline RegisterUsageRequest& WithPublicKeyVersion(int value) { SetPublicKeyVersion(value); return *this;}


    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline const Aws::String& GetNonce() const{ return m_nonce; }

    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline bool NonceHasBeenSet() const { return m_nonceHasBeenSet; }

    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline void SetNonce(const Aws::String& value) { m_nonceHasBeenSet = true; m_nonce = value; }

    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline void SetNonce(Aws::String&& value) { m_nonceHasBeenSet = true; m_nonce = std::move(value); }

    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline void SetNonce(const char* value) { m_nonceHasBeenSet = true; m_nonce.assign(value); }

    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline RegisterUsageRequest& WithNonce(const Aws::String& value) { SetNonce(value); return *this;}

    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline RegisterUsageRequest& WithNonce(Aws::String&& value) { SetNonce(std::move(value)); return *this;}

    /**
     * <p>(Optional) To scope down the registration to a specific running software
     * instance and guard against replay attacks.</p>
     */
    inline RegisterUsageRequest& WithNonce(const char* value) { SetNonce(value); return *this;}

  private:

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    int m_publicKeyVersion;
    bool m_publicKeyVersionHasBeenSet = false;

    Aws::String m_nonce;
    bool m_nonceHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
