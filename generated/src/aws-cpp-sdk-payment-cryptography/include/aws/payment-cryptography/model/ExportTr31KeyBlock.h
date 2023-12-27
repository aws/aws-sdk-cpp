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
   * <p>Parameter information for key material export using symmetric TR-31 key
   * exchange method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportTr31KeyBlock">AWS
   * API Reference</a></p>
   */
  class ExportTr31KeyBlock
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr31KeyBlock();
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr31KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr31KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline const Aws::String& GetWrappingKeyIdentifier() const{ return m_wrappingKeyIdentifier; }

    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline bool WrappingKeyIdentifierHasBeenSet() const { return m_wrappingKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline void SetWrappingKeyIdentifier(const Aws::String& value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier = value; }

    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline void SetWrappingKeyIdentifier(Aws::String&& value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline void SetWrappingKeyIdentifier(const char* value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline ExportTr31KeyBlock& WithWrappingKeyIdentifier(const Aws::String& value) { SetWrappingKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline ExportTr31KeyBlock& WithWrappingKeyIdentifier(Aws::String&& value) { SetWrappingKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the the wrapping key. This key encrypts or wraps
     * the key under export for TR-31 key block generation.</p>
     */
    inline ExportTr31KeyBlock& WithWrappingKeyIdentifier(const char* value) { SetWrappingKeyIdentifier(value); return *this;}

  private:

    Aws::String m_wrappingKeyIdentifier;
    bool m_wrappingKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
