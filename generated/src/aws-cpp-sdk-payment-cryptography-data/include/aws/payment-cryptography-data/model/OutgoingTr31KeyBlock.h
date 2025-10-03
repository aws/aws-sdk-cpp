/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Parameter information of the TR31WrappedKeyBlock containing the transaction
   * key wrapped using a KEK.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/OutgoingTr31KeyBlock">AWS
   * API Reference</a></p>
   */
  class OutgoingTr31KeyBlock
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API OutgoingTr31KeyBlock() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API OutgoingTr31KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API OutgoingTr31KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the KEK used to wrap the transaction key.</p>
     */
    inline const Aws::String& GetWrappingKeyIdentifier() const { return m_wrappingKeyIdentifier; }
    inline bool WrappingKeyIdentifierHasBeenSet() const { return m_wrappingKeyIdentifierHasBeenSet; }
    template<typename WrappingKeyIdentifierT = Aws::String>
    void SetWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier = std::forward<WrappingKeyIdentifierT>(value); }
    template<typename WrappingKeyIdentifierT = Aws::String>
    OutgoingTr31KeyBlock& WithWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) { SetWrappingKeyIdentifier(std::forward<WrappingKeyIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wrappingKeyIdentifier;
    bool m_wrappingKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
