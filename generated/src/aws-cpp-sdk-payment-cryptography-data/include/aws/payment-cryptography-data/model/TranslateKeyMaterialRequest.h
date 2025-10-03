/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/payment-cryptography-data/model/IncomingKeyMaterial.h>
#include <aws/payment-cryptography-data/model/OutgoingKeyMaterial.h>
#include <aws/payment-cryptography-data/model/KeyCheckValueAlgorithm.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class TranslateKeyMaterialRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslateKeyMaterialRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TranslateKeyMaterial"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Parameter information of the TR31WrappedKeyBlock containing the transaction
     * key.</p>
     */
    inline const IncomingKeyMaterial& GetIncomingKeyMaterial() const { return m_incomingKeyMaterial; }
    inline bool IncomingKeyMaterialHasBeenSet() const { return m_incomingKeyMaterialHasBeenSet; }
    template<typename IncomingKeyMaterialT = IncomingKeyMaterial>
    void SetIncomingKeyMaterial(IncomingKeyMaterialT&& value) { m_incomingKeyMaterialHasBeenSet = true; m_incomingKeyMaterial = std::forward<IncomingKeyMaterialT>(value); }
    template<typename IncomingKeyMaterialT = IncomingKeyMaterial>
    TranslateKeyMaterialRequest& WithIncomingKeyMaterial(IncomingKeyMaterialT&& value) { SetIncomingKeyMaterial(std::forward<IncomingKeyMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information of the wrapping key used to wrap the transaction key in
     * the outgoing TR31WrappedKeyBlock.</p>
     */
    inline const OutgoingKeyMaterial& GetOutgoingKeyMaterial() const { return m_outgoingKeyMaterial; }
    inline bool OutgoingKeyMaterialHasBeenSet() const { return m_outgoingKeyMaterialHasBeenSet; }
    template<typename OutgoingKeyMaterialT = OutgoingKeyMaterial>
    void SetOutgoingKeyMaterial(OutgoingKeyMaterialT&& value) { m_outgoingKeyMaterialHasBeenSet = true; m_outgoingKeyMaterial = std::forward<OutgoingKeyMaterialT>(value); }
    template<typename OutgoingKeyMaterialT = OutgoingKeyMaterial>
    TranslateKeyMaterialRequest& WithOutgoingKeyMaterial(OutgoingKeyMaterialT&& value) { SetOutgoingKeyMaterial(std::forward<OutgoingKeyMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) algorithm used for calculating the KCV.</p>
     */
    inline KeyCheckValueAlgorithm GetKeyCheckValueAlgorithm() const { return m_keyCheckValueAlgorithm; }
    inline bool KeyCheckValueAlgorithmHasBeenSet() const { return m_keyCheckValueAlgorithmHasBeenSet; }
    inline void SetKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = value; }
    inline TranslateKeyMaterialRequest& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { SetKeyCheckValueAlgorithm(value); return *this;}
    ///@}
  private:

    IncomingKeyMaterial m_incomingKeyMaterial;
    bool m_incomingKeyMaterialHasBeenSet = false;

    OutgoingKeyMaterial m_outgoingKeyMaterial;
    bool m_outgoingKeyMaterialHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm{KeyCheckValueAlgorithm::NOT_SET};
    bool m_keyCheckValueAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
