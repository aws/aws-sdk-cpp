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
   * <p>Parameter information for IPEK generation during export.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportDukptInitialKey">AWS
   * API Reference</a></p>
   */
  class ExportDukptInitialKey
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportDukptInitialKey() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ExportDukptInitialKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportDukptInitialKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The KSN for IPEK generation using DUKPT. </p> <p>KSN must be padded before
     * sending to Amazon Web Services Payment Cryptography. KSN hex length should be 20
     * for a TDES_2KEY key or 24 for an AES key.</p>
     */
    inline const Aws::String& GetKeySerialNumber() const { return m_keySerialNumber; }
    inline bool KeySerialNumberHasBeenSet() const { return m_keySerialNumberHasBeenSet; }
    template<typename KeySerialNumberT = Aws::String>
    void SetKeySerialNumber(KeySerialNumberT&& value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber = std::forward<KeySerialNumberT>(value); }
    template<typename KeySerialNumberT = Aws::String>
    ExportDukptInitialKey& WithKeySerialNumber(KeySerialNumberT&& value) { SetKeySerialNumber(std::forward<KeySerialNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keySerialNumber;
    bool m_keySerialNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
