/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/MacAlgorithm.h>
#include <aws/payment-cryptography-data/model/MacAlgorithmEmv.h>
#include <aws/payment-cryptography-data/model/MacAlgorithmDukpt.h>
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API MacAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption algorithm for MAC generation or verification.</p>
     */
    inline MacAlgorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(MacAlgorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline MacAttributes& WithAlgorithm(MacAlgorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required for MAC generation or verification using EMV MAC
     * algorithm.</p>
     */
    inline const MacAlgorithmEmv& GetEmvMac() const { return m_emvMac; }
    inline bool EmvMacHasBeenSet() const { return m_emvMacHasBeenSet; }
    template<typename EmvMacT = MacAlgorithmEmv>
    void SetEmvMac(EmvMacT&& value) { m_emvMacHasBeenSet = true; m_emvMac = std::forward<EmvMacT>(value); }
    template<typename EmvMacT = MacAlgorithmEmv>
    MacAttributes& WithEmvMac(EmvMacT&& value) { SetEmvMac(std::forward<EmvMacT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm1.</p>
     */
    inline const MacAlgorithmDukpt& GetDukptIso9797Algorithm1() const { return m_dukptIso9797Algorithm1; }
    inline bool DukptIso9797Algorithm1HasBeenSet() const { return m_dukptIso9797Algorithm1HasBeenSet; }
    template<typename DukptIso9797Algorithm1T = MacAlgorithmDukpt>
    void SetDukptIso9797Algorithm1(DukptIso9797Algorithm1T&& value) { m_dukptIso9797Algorithm1HasBeenSet = true; m_dukptIso9797Algorithm1 = std::forward<DukptIso9797Algorithm1T>(value); }
    template<typename DukptIso9797Algorithm1T = MacAlgorithmDukpt>
    MacAttributes& WithDukptIso9797Algorithm1(DukptIso9797Algorithm1T&& value) { SetDukptIso9797Algorithm1(std::forward<DukptIso9797Algorithm1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * ISO 9797 algorithm3.</p>
     */
    inline const MacAlgorithmDukpt& GetDukptIso9797Algorithm3() const { return m_dukptIso9797Algorithm3; }
    inline bool DukptIso9797Algorithm3HasBeenSet() const { return m_dukptIso9797Algorithm3HasBeenSet; }
    template<typename DukptIso9797Algorithm3T = MacAlgorithmDukpt>
    void SetDukptIso9797Algorithm3(DukptIso9797Algorithm3T&& value) { m_dukptIso9797Algorithm3HasBeenSet = true; m_dukptIso9797Algorithm3 = std::forward<DukptIso9797Algorithm3T>(value); }
    template<typename DukptIso9797Algorithm3T = MacAlgorithmDukpt>
    MacAttributes& WithDukptIso9797Algorithm3(DukptIso9797Algorithm3T&& value) { SetDukptIso9797Algorithm3(std::forward<DukptIso9797Algorithm3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required for MAC generation or verification using DUKPT
     * CMAC algorithm.</p>
     */
    inline const MacAlgorithmDukpt& GetDukptCmac() const { return m_dukptCmac; }
    inline bool DukptCmacHasBeenSet() const { return m_dukptCmacHasBeenSet; }
    template<typename DukptCmacT = MacAlgorithmDukpt>
    void SetDukptCmac(DukptCmacT&& value) { m_dukptCmacHasBeenSet = true; m_dukptCmac = std::forward<DukptCmacT>(value); }
    template<typename DukptCmacT = MacAlgorithmDukpt>
    MacAttributes& WithDukptCmac(DukptCmacT&& value) { SetDukptCmac(std::forward<DukptCmacT>(value)); return *this;}
    ///@}
  private:

    MacAlgorithm m_algorithm{MacAlgorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    MacAlgorithmEmv m_emvMac;
    bool m_emvMacHasBeenSet = false;

    MacAlgorithmDukpt m_dukptIso9797Algorithm1;
    bool m_dukptIso9797Algorithm1HasBeenSet = false;

    MacAlgorithmDukpt m_dukptIso9797Algorithm3;
    bool m_dukptIso9797Algorithm3HasBeenSet = false;

    MacAlgorithmDukpt m_dukptCmac;
    bool m_dukptCmacHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
