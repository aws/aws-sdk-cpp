/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/MacAlgorithm.h>
#include <aws/payment-cryptography-data/model/MacAlgorithmDukpt.h>
#include <aws/payment-cryptography-data/model/MacAlgorithmEmv.h>
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
   * <p>Parameters that are required for DUKPT, HMAC, or EMV MAC generation or
   * verification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/MacAttributes">AWS
   * API Reference</a></p>
   */
  class MacAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption algorithm for MAC generation or verification.</p>
     */
    inline const MacAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p>The encryption algorithm for MAC generation or verification.</p>
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * <p>The encryption algorithm for MAC generation or verification.</p>
     */
    inline void SetAlgorithm(const MacAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p>The encryption algorithm for MAC generation or verification.</p>
     */
    inline void SetAlgorithm(MacAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * <p>The encryption algorithm for MAC generation or verification.</p>
     */
    inline MacAttributes& WithAlgorithm(const MacAlgorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * <p>The encryption algorithm for MAC generation or verification.</p>
     */
    inline MacAttributes& WithAlgorithm(MacAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * CMAC algorithm.</p>
     */
    inline const MacAlgorithmDukpt& GetDukptCmac() const{ return m_dukptCmac; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * CMAC algorithm.</p>
     */
    inline bool DukptCmacHasBeenSet() const { return m_dukptCmacHasBeenSet; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * CMAC algorithm.</p>
     */
    inline void SetDukptCmac(const MacAlgorithmDukpt& value) { m_dukptCmacHasBeenSet = true; m_dukptCmac = value; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * CMAC algorithm.</p>
     */
    inline void SetDukptCmac(MacAlgorithmDukpt&& value) { m_dukptCmacHasBeenSet = true; m_dukptCmac = std::move(value); }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * CMAC algorithm.</p>
     */
    inline MacAttributes& WithDukptCmac(const MacAlgorithmDukpt& value) { SetDukptCmac(value); return *this;}

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * CMAC algorithm.</p>
     */
    inline MacAttributes& WithDukptCmac(MacAlgorithmDukpt&& value) { SetDukptCmac(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm1.</p>
     */
    inline const MacAlgorithmDukpt& GetDukptIso9797Algorithm1() const{ return m_dukptIso9797Algorithm1; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm1.</p>
     */
    inline bool DukptIso9797Algorithm1HasBeenSet() const { return m_dukptIso9797Algorithm1HasBeenSet; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm1.</p>
     */
    inline void SetDukptIso9797Algorithm1(const MacAlgorithmDukpt& value) { m_dukptIso9797Algorithm1HasBeenSet = true; m_dukptIso9797Algorithm1 = value; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm1.</p>
     */
    inline void SetDukptIso9797Algorithm1(MacAlgorithmDukpt&& value) { m_dukptIso9797Algorithm1HasBeenSet = true; m_dukptIso9797Algorithm1 = std::move(value); }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm1.</p>
     */
    inline MacAttributes& WithDukptIso9797Algorithm1(const MacAlgorithmDukpt& value) { SetDukptIso9797Algorithm1(value); return *this;}

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm1.</p>
     */
    inline MacAttributes& WithDukptIso9797Algorithm1(MacAlgorithmDukpt&& value) { SetDukptIso9797Algorithm1(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm3.</p>
     */
    inline const MacAlgorithmDukpt& GetDukptIso9797Algorithm3() const{ return m_dukptIso9797Algorithm3; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm3.</p>
     */
    inline bool DukptIso9797Algorithm3HasBeenSet() const { return m_dukptIso9797Algorithm3HasBeenSet; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm3.</p>
     */
    inline void SetDukptIso9797Algorithm3(const MacAlgorithmDukpt& value) { m_dukptIso9797Algorithm3HasBeenSet = true; m_dukptIso9797Algorithm3 = value; }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm3.</p>
     */
    inline void SetDukptIso9797Algorithm3(MacAlgorithmDukpt&& value) { m_dukptIso9797Algorithm3HasBeenSet = true; m_dukptIso9797Algorithm3 = std::move(value); }

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm3.</p>
     */
    inline MacAttributes& WithDukptIso9797Algorithm3(const MacAlgorithmDukpt& value) { SetDukptIso9797Algorithm3(value); return *this;}

    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm3.</p>
     */
    inline MacAttributes& WithDukptIso9797Algorithm3(MacAlgorithmDukpt&& value) { SetDukptIso9797Algorithm3(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required for MAC generation or verification using EMV MAC
     * algorithm.</p>
     */
    inline const MacAlgorithmEmv& GetEmvMac() const{ return m_emvMac; }

    /**
     * <p>Parameters that are required for MAC generation or verification using EMV MAC
     * algorithm.</p>
     */
    inline bool EmvMacHasBeenSet() const { return m_emvMacHasBeenSet; }

    /**
     * <p>Parameters that are required for MAC generation or verification using EMV MAC
     * algorithm.</p>
     */
    inline void SetEmvMac(const MacAlgorithmEmv& value) { m_emvMacHasBeenSet = true; m_emvMac = value; }

    /**
     * <p>Parameters that are required for MAC generation or verification using EMV MAC
     * algorithm.</p>
     */
    inline void SetEmvMac(MacAlgorithmEmv&& value) { m_emvMacHasBeenSet = true; m_emvMac = std::move(value); }

    /**
     * <p>Parameters that are required for MAC generation or verification using EMV MAC
     * algorithm.</p>
     */
    inline MacAttributes& WithEmvMac(const MacAlgorithmEmv& value) { SetEmvMac(value); return *this;}

    /**
     * <p>Parameters that are required for MAC generation or verification using EMV MAC
     * algorithm.</p>
     */
    inline MacAttributes& WithEmvMac(MacAlgorithmEmv&& value) { SetEmvMac(std::move(value)); return *this;}

  private:

    MacAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet = false;

    MacAlgorithmDukpt m_dukptCmac;
    bool m_dukptCmacHasBeenSet = false;

    MacAlgorithmDukpt m_dukptIso9797Algorithm1;
    bool m_dukptIso9797Algorithm1HasBeenSet = false;

    MacAlgorithmDukpt m_dukptIso9797Algorithm3;
    bool m_dukptIso9797Algorithm3HasBeenSet = false;

    MacAlgorithmEmv m_emvMac;
    bool m_emvMacHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
