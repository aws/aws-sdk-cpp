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
   * <p>The parameter values of the current PIN to be changed on the EMV chip
   * card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CurrentPinAttributes">AWS
   * API Reference</a></p>
   */
  class CurrentPinAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CurrentPinAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CurrentPinAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CurrentPinAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>keyArn</code> of the current PIN PEK.</p>
     */
    inline const Aws::String& GetCurrentPinPekIdentifier() const { return m_currentPinPekIdentifier; }
    inline bool CurrentPinPekIdentifierHasBeenSet() const { return m_currentPinPekIdentifierHasBeenSet; }
    template<typename CurrentPinPekIdentifierT = Aws::String>
    void SetCurrentPinPekIdentifier(CurrentPinPekIdentifierT&& value) { m_currentPinPekIdentifierHasBeenSet = true; m_currentPinPekIdentifier = std::forward<CurrentPinPekIdentifierT>(value); }
    template<typename CurrentPinPekIdentifierT = Aws::String>
    CurrentPinAttributes& WithCurrentPinPekIdentifier(CurrentPinPekIdentifierT&& value) { SetCurrentPinPekIdentifier(std::forward<CurrentPinPekIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted pinblock of the current pin stored on the chip card.</p>
     */
    inline const Aws::String& GetCurrentEncryptedPinBlock() const { return m_currentEncryptedPinBlock; }
    inline bool CurrentEncryptedPinBlockHasBeenSet() const { return m_currentEncryptedPinBlockHasBeenSet; }
    template<typename CurrentEncryptedPinBlockT = Aws::String>
    void SetCurrentEncryptedPinBlock(CurrentEncryptedPinBlockT&& value) { m_currentEncryptedPinBlockHasBeenSet = true; m_currentEncryptedPinBlock = std::forward<CurrentEncryptedPinBlockT>(value); }
    template<typename CurrentEncryptedPinBlockT = Aws::String>
    CurrentPinAttributes& WithCurrentEncryptedPinBlock(CurrentEncryptedPinBlockT&& value) { SetCurrentEncryptedPinBlock(std::forward<CurrentEncryptedPinBlockT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_currentPinPekIdentifier;
    bool m_currentPinPekIdentifierHasBeenSet = false;

    Aws::String m_currentEncryptedPinBlock;
    bool m_currentEncryptedPinBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
