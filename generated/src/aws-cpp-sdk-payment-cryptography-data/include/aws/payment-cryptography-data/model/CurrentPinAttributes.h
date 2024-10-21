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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CurrentPinAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CurrentPinAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CurrentPinAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>keyArn</code> of the current PIN PEK.</p>
     */
    inline const Aws::String& GetCurrentPinPekIdentifier() const{ return m_currentPinPekIdentifier; }
    inline bool CurrentPinPekIdentifierHasBeenSet() const { return m_currentPinPekIdentifierHasBeenSet; }
    inline void SetCurrentPinPekIdentifier(const Aws::String& value) { m_currentPinPekIdentifierHasBeenSet = true; m_currentPinPekIdentifier = value; }
    inline void SetCurrentPinPekIdentifier(Aws::String&& value) { m_currentPinPekIdentifierHasBeenSet = true; m_currentPinPekIdentifier = std::move(value); }
    inline void SetCurrentPinPekIdentifier(const char* value) { m_currentPinPekIdentifierHasBeenSet = true; m_currentPinPekIdentifier.assign(value); }
    inline CurrentPinAttributes& WithCurrentPinPekIdentifier(const Aws::String& value) { SetCurrentPinPekIdentifier(value); return *this;}
    inline CurrentPinAttributes& WithCurrentPinPekIdentifier(Aws::String&& value) { SetCurrentPinPekIdentifier(std::move(value)); return *this;}
    inline CurrentPinAttributes& WithCurrentPinPekIdentifier(const char* value) { SetCurrentPinPekIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted pinblock of the current pin stored on the chip card.</p>
     */
    inline const Aws::String& GetCurrentEncryptedPinBlock() const{ return m_currentEncryptedPinBlock; }
    inline bool CurrentEncryptedPinBlockHasBeenSet() const { return m_currentEncryptedPinBlockHasBeenSet; }
    inline void SetCurrentEncryptedPinBlock(const Aws::String& value) { m_currentEncryptedPinBlockHasBeenSet = true; m_currentEncryptedPinBlock = value; }
    inline void SetCurrentEncryptedPinBlock(Aws::String&& value) { m_currentEncryptedPinBlockHasBeenSet = true; m_currentEncryptedPinBlock = std::move(value); }
    inline void SetCurrentEncryptedPinBlock(const char* value) { m_currentEncryptedPinBlockHasBeenSet = true; m_currentEncryptedPinBlock.assign(value); }
    inline CurrentPinAttributes& WithCurrentEncryptedPinBlock(const Aws::String& value) { SetCurrentEncryptedPinBlock(value); return *this;}
    inline CurrentPinAttributes& WithCurrentEncryptedPinBlock(Aws::String&& value) { SetCurrentEncryptedPinBlock(std::move(value)); return *this;}
    inline CurrentPinAttributes& WithCurrentEncryptedPinBlock(const char* value) { SetCurrentEncryptedPinBlock(value); return *this;}
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
