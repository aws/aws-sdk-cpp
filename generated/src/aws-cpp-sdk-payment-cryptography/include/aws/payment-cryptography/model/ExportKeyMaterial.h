/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/ExportKeyCryptogram.h>
#include <aws/payment-cryptography/model/ExportTr31KeyBlock.h>
#include <aws/payment-cryptography/model/ExportTr34KeyBlock.h>
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
   * <p>Parameter information for key material export from Amazon Web Services
   * Payment Cryptography using TR-31 or TR-34 or RSA wrap and unwrap key exchange
   * method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportKeyMaterial">AWS
   * API Reference</a></p>
   */
  class ExportKeyMaterial
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyMaterial();
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyMaterial(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parameter information for key material export using asymmetric RSA wrap and
     * unwrap key exchange method</p>
     */
    inline const ExportKeyCryptogram& GetKeyCryptogram() const{ return m_keyCryptogram; }

    /**
     * <p>Parameter information for key material export using asymmetric RSA wrap and
     * unwrap key exchange method</p>
     */
    inline bool KeyCryptogramHasBeenSet() const { return m_keyCryptogramHasBeenSet; }

    /**
     * <p>Parameter information for key material export using asymmetric RSA wrap and
     * unwrap key exchange method</p>
     */
    inline void SetKeyCryptogram(const ExportKeyCryptogram& value) { m_keyCryptogramHasBeenSet = true; m_keyCryptogram = value; }

    /**
     * <p>Parameter information for key material export using asymmetric RSA wrap and
     * unwrap key exchange method</p>
     */
    inline void SetKeyCryptogram(ExportKeyCryptogram&& value) { m_keyCryptogramHasBeenSet = true; m_keyCryptogram = std::move(value); }

    /**
     * <p>Parameter information for key material export using asymmetric RSA wrap and
     * unwrap key exchange method</p>
     */
    inline ExportKeyMaterial& WithKeyCryptogram(const ExportKeyCryptogram& value) { SetKeyCryptogram(value); return *this;}

    /**
     * <p>Parameter information for key material export using asymmetric RSA wrap and
     * unwrap key exchange method</p>
     */
    inline ExportKeyMaterial& WithKeyCryptogram(ExportKeyCryptogram&& value) { SetKeyCryptogram(std::move(value)); return *this;}


    /**
     * <p>Parameter information for key material export using symmetric TR-31 key
     * exchange method.</p>
     */
    inline const ExportTr31KeyBlock& GetTr31KeyBlock() const{ return m_tr31KeyBlock; }

    /**
     * <p>Parameter information for key material export using symmetric TR-31 key
     * exchange method.</p>
     */
    inline bool Tr31KeyBlockHasBeenSet() const { return m_tr31KeyBlockHasBeenSet; }

    /**
     * <p>Parameter information for key material export using symmetric TR-31 key
     * exchange method.</p>
     */
    inline void SetTr31KeyBlock(const ExportTr31KeyBlock& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = value; }

    /**
     * <p>Parameter information for key material export using symmetric TR-31 key
     * exchange method.</p>
     */
    inline void SetTr31KeyBlock(ExportTr31KeyBlock&& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = std::move(value); }

    /**
     * <p>Parameter information for key material export using symmetric TR-31 key
     * exchange method.</p>
     */
    inline ExportKeyMaterial& WithTr31KeyBlock(const ExportTr31KeyBlock& value) { SetTr31KeyBlock(value); return *this;}

    /**
     * <p>Parameter information for key material export using symmetric TR-31 key
     * exchange method.</p>
     */
    inline ExportKeyMaterial& WithTr31KeyBlock(ExportTr31KeyBlock&& value) { SetTr31KeyBlock(std::move(value)); return *this;}


    /**
     * <p>Parameter information for key material export using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline const ExportTr34KeyBlock& GetTr34KeyBlock() const{ return m_tr34KeyBlock; }

    /**
     * <p>Parameter information for key material export using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline bool Tr34KeyBlockHasBeenSet() const { return m_tr34KeyBlockHasBeenSet; }

    /**
     * <p>Parameter information for key material export using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline void SetTr34KeyBlock(const ExportTr34KeyBlock& value) { m_tr34KeyBlockHasBeenSet = true; m_tr34KeyBlock = value; }

    /**
     * <p>Parameter information for key material export using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline void SetTr34KeyBlock(ExportTr34KeyBlock&& value) { m_tr34KeyBlockHasBeenSet = true; m_tr34KeyBlock = std::move(value); }

    /**
     * <p>Parameter information for key material export using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline ExportKeyMaterial& WithTr34KeyBlock(const ExportTr34KeyBlock& value) { SetTr34KeyBlock(value); return *this;}

    /**
     * <p>Parameter information for key material export using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline ExportKeyMaterial& WithTr34KeyBlock(ExportTr34KeyBlock&& value) { SetTr34KeyBlock(std::move(value)); return *this;}

  private:

    ExportKeyCryptogram m_keyCryptogram;
    bool m_keyCryptogramHasBeenSet = false;

    ExportTr31KeyBlock m_tr31KeyBlock;
    bool m_tr31KeyBlockHasBeenSet = false;

    ExportTr34KeyBlock m_tr34KeyBlock;
    bool m_tr34KeyBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
