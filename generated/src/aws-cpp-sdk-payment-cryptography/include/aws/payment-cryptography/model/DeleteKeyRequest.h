/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
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
  class DeleteKeyRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API DeleteKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKey"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>KeyARN</code> of the key that is scheduled for deletion.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    DeleteKeyRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The waiting period for key deletion. The default value is seven days.</p>
     */
    inline int GetDeleteKeyInDays() const { return m_deleteKeyInDays; }
    inline bool DeleteKeyInDaysHasBeenSet() const { return m_deleteKeyInDaysHasBeenSet; }
    inline void SetDeleteKeyInDays(int value) { m_deleteKeyInDaysHasBeenSet = true; m_deleteKeyInDays = value; }
    inline DeleteKeyRequest& WithDeleteKeyInDays(int value) { SetDeleteKeyInDays(value); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    int m_deleteKeyInDays{0};
    bool m_deleteKeyInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
