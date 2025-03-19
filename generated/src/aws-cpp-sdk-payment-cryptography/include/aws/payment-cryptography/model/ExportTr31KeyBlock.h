/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeyBlockHeaders.h>
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
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Parameter information for key material export using symmetric TR-31 key
   * exchange method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportTr31KeyBlock">AWS
   * API Reference</a></p>
   */
  class ExportTr31KeyBlock
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr31KeyBlock() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr31KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr31KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline const Aws::String& GetWrappingKeyIdentifier() const { return m_wrappingKeyIdentifier; }
    inline bool WrappingKeyIdentifierHasBeenSet() const { return m_wrappingKeyIdentifierHasBeenSet; }
    template<typename WrappingKeyIdentifierT = Aws::String>
    void SetWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier = std::forward<WrappingKeyIdentifierT>(value); }
    template<typename WrappingKeyIdentifierT = Aws::String>
    ExportTr31KeyBlock& WithWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) { SetWrappingKeyIdentifier(std::forward<WrappingKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata for export associated with the key material. This data is
     * signed but transmitted in clear text.</p>
     */
    inline const KeyBlockHeaders& GetKeyBlockHeaders() const { return m_keyBlockHeaders; }
    inline bool KeyBlockHeadersHasBeenSet() const { return m_keyBlockHeadersHasBeenSet; }
    template<typename KeyBlockHeadersT = KeyBlockHeaders>
    void SetKeyBlockHeaders(KeyBlockHeadersT&& value) { m_keyBlockHeadersHasBeenSet = true; m_keyBlockHeaders = std::forward<KeyBlockHeadersT>(value); }
    template<typename KeyBlockHeadersT = KeyBlockHeaders>
    ExportTr31KeyBlock& WithKeyBlockHeaders(KeyBlockHeadersT&& value) { SetKeyBlockHeaders(std::forward<KeyBlockHeadersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wrappingKeyIdentifier;
    bool m_wrappingKeyIdentifierHasBeenSet = false;

    KeyBlockHeaders m_keyBlockHeaders;
    bool m_keyBlockHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
