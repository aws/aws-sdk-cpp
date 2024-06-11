/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
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
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Parameter information for key material import using symmetric TR-31 key
   * exchange method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ImportTr31KeyBlock">AWS
   * API Reference</a></p>
   */
  class ImportTr31KeyBlock
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr31KeyBlock();
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr31KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr31KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>KeyARN</code> of the key that will decrypt or unwrap a TR-31 key
     * block during import.</p>
     */
    inline const Aws::String& GetWrappingKeyIdentifier() const{ return m_wrappingKeyIdentifier; }
    inline bool WrappingKeyIdentifierHasBeenSet() const { return m_wrappingKeyIdentifierHasBeenSet; }
    inline void SetWrappingKeyIdentifier(const Aws::String& value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier = value; }
    inline void SetWrappingKeyIdentifier(Aws::String&& value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier = std::move(value); }
    inline void SetWrappingKeyIdentifier(const char* value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier.assign(value); }
    inline ImportTr31KeyBlock& WithWrappingKeyIdentifier(const Aws::String& value) { SetWrappingKeyIdentifier(value); return *this;}
    inline ImportTr31KeyBlock& WithWrappingKeyIdentifier(Aws::String&& value) { SetWrappingKeyIdentifier(std::move(value)); return *this;}
    inline ImportTr31KeyBlock& WithWrappingKeyIdentifier(const char* value) { SetWrappingKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TR-31 wrapped key block to import.</p>
     */
    inline const Aws::String& GetWrappedKeyBlock() const{ return m_wrappedKeyBlock; }
    inline bool WrappedKeyBlockHasBeenSet() const { return m_wrappedKeyBlockHasBeenSet; }
    inline void SetWrappedKeyBlock(const Aws::String& value) { m_wrappedKeyBlockHasBeenSet = true; m_wrappedKeyBlock = value; }
    inline void SetWrappedKeyBlock(Aws::String&& value) { m_wrappedKeyBlockHasBeenSet = true; m_wrappedKeyBlock = std::move(value); }
    inline void SetWrappedKeyBlock(const char* value) { m_wrappedKeyBlockHasBeenSet = true; m_wrappedKeyBlock.assign(value); }
    inline ImportTr31KeyBlock& WithWrappedKeyBlock(const Aws::String& value) { SetWrappedKeyBlock(value); return *this;}
    inline ImportTr31KeyBlock& WithWrappedKeyBlock(Aws::String&& value) { SetWrappedKeyBlock(std::move(value)); return *this;}
    inline ImportTr31KeyBlock& WithWrappedKeyBlock(const char* value) { SetWrappedKeyBlock(value); return *this;}
    ///@}
  private:

    Aws::String m_wrappingKeyIdentifier;
    bool m_wrappingKeyIdentifierHasBeenSet = false;

    Aws::String m_wrappedKeyBlock;
    bool m_wrappedKeyBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
