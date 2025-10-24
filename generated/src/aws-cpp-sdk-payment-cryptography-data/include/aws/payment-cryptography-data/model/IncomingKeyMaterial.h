/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/IncomingDiffieHellmanTr31KeyBlock.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PaymentCryptographyData {
namespace Model {

/**
 * <p>Parameter information of the incoming WrappedKeyBlock containing the
 * transaction key.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/IncomingKeyMaterial">AWS
 * API Reference</a></p>
 */
class IncomingKeyMaterial {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API IncomingKeyMaterial() = default;
  AWS_PAYMENTCRYPTOGRAPHYDATA_API IncomingKeyMaterial(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API IncomingKeyMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Parameter information of the TR31WrappedKeyBlock containing the transaction
   * key wrapped using an ECDH dervied key.</p>
   */
  inline const IncomingDiffieHellmanTr31KeyBlock& GetDiffieHellmanTr31KeyBlock() const { return m_diffieHellmanTr31KeyBlock; }
  inline bool DiffieHellmanTr31KeyBlockHasBeenSet() const { return m_diffieHellmanTr31KeyBlockHasBeenSet; }
  template <typename DiffieHellmanTr31KeyBlockT = IncomingDiffieHellmanTr31KeyBlock>
  void SetDiffieHellmanTr31KeyBlock(DiffieHellmanTr31KeyBlockT&& value) {
    m_diffieHellmanTr31KeyBlockHasBeenSet = true;
    m_diffieHellmanTr31KeyBlock = std::forward<DiffieHellmanTr31KeyBlockT>(value);
  }
  template <typename DiffieHellmanTr31KeyBlockT = IncomingDiffieHellmanTr31KeyBlock>
  IncomingKeyMaterial& WithDiffieHellmanTr31KeyBlock(DiffieHellmanTr31KeyBlockT&& value) {
    SetDiffieHellmanTr31KeyBlock(std::forward<DiffieHellmanTr31KeyBlockT>(value));
    return *this;
  }
  ///@}
 private:
  IncomingDiffieHellmanTr31KeyBlock m_diffieHellmanTr31KeyBlock;
  bool m_diffieHellmanTr31KeyBlockHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
