/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/OutgoingTr31KeyBlock.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Parameter information of the outgoing TR31WrappedKeyBlock containing the
   * transaction key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/OutgoingKeyMaterial">AWS
   * API Reference</a></p>
   */
  class OutgoingKeyMaterial
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API OutgoingKeyMaterial() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API OutgoingKeyMaterial(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API OutgoingKeyMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameter information of the TR31WrappedKeyBlock containing the transaction
     * key wrapped using a KEK.</p>
     */
    inline const OutgoingTr31KeyBlock& GetTr31KeyBlock() const { return m_tr31KeyBlock; }
    inline bool Tr31KeyBlockHasBeenSet() const { return m_tr31KeyBlockHasBeenSet; }
    template<typename Tr31KeyBlockT = OutgoingTr31KeyBlock>
    void SetTr31KeyBlock(Tr31KeyBlockT&& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = std::forward<Tr31KeyBlockT>(value); }
    template<typename Tr31KeyBlockT = OutgoingTr31KeyBlock>
    OutgoingKeyMaterial& WithTr31KeyBlock(Tr31KeyBlockT&& value) { SetTr31KeyBlock(std::forward<Tr31KeyBlockT>(value)); return *this;}
    ///@}
  private:

    OutgoingTr31KeyBlock m_tr31KeyBlock;
    bool m_tr31KeyBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
