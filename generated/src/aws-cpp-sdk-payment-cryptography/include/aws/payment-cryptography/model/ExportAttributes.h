﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/ExportDukptInitialKey.h>
#include <aws/payment-cryptography/model/KeyCheckValueAlgorithm.h>
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
   * <p>The attributes for IPEK generation during export.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportAttributes">AWS
   * API Reference</a></p>
   */
  class ExportAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportAttributes();
    AWS_PAYMENTCRYPTOGRAPHY_API ExportAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameter information for IPEK export.</p>
     */
    inline const ExportDukptInitialKey& GetExportDukptInitialKey() const{ return m_exportDukptInitialKey; }
    inline bool ExportDukptInitialKeyHasBeenSet() const { return m_exportDukptInitialKeyHasBeenSet; }
    inline void SetExportDukptInitialKey(const ExportDukptInitialKey& value) { m_exportDukptInitialKeyHasBeenSet = true; m_exportDukptInitialKey = value; }
    inline void SetExportDukptInitialKey(ExportDukptInitialKey&& value) { m_exportDukptInitialKeyHasBeenSet = true; m_exportDukptInitialKey = std::move(value); }
    inline ExportAttributes& WithExportDukptInitialKey(const ExportDukptInitialKey& value) { SetExportDukptInitialKey(value); return *this;}
    inline ExportAttributes& WithExportDukptInitialKey(ExportDukptInitialKey&& value) { SetExportDukptInitialKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity. Specify KCV
     * for IPEK export only.</p> <p>For TDES keys, the KCV is computed by encrypting 8
     * bytes, each with value of zero, with the key to be checked and retaining the 3
     * highest order bytes of the encrypted result. For AES keys, the KCV is computed
     * using a CMAC algorithm where the input data is 16 bytes of zero and retaining
     * the 3 highest order bytes of the encrypted result.</p>
     */
    inline const KeyCheckValueAlgorithm& GetKeyCheckValueAlgorithm() const{ return m_keyCheckValueAlgorithm; }
    inline bool KeyCheckValueAlgorithmHasBeenSet() const { return m_keyCheckValueAlgorithmHasBeenSet; }
    inline void SetKeyCheckValueAlgorithm(const KeyCheckValueAlgorithm& value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = value; }
    inline void SetKeyCheckValueAlgorithm(KeyCheckValueAlgorithm&& value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = std::move(value); }
    inline ExportAttributes& WithKeyCheckValueAlgorithm(const KeyCheckValueAlgorithm& value) { SetKeyCheckValueAlgorithm(value); return *this;}
    inline ExportAttributes& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm&& value) { SetKeyCheckValueAlgorithm(std::move(value)); return *this;}
    ///@}
  private:

    ExportDukptInitialKey m_exportDukptInitialKey;
    bool m_exportDukptInitialKeyHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm;
    bool m_keyCheckValueAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
