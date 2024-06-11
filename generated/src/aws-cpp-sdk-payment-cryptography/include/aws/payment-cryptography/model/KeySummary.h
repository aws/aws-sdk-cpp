/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeyState.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
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
   * <p>Metadata about an Amazon Web Services Payment Cryptography key.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/KeySummary">AWS
   * API Reference</a></p>
   */
  class KeySummary
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API KeySummary();
    AWS_PAYMENTCRYPTOGRAPHY_API KeySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API KeySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }
    inline KeySummary& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}
    inline KeySummary& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}
    inline KeySummary& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of an Amazon Web Services Payment Cryptography that is being
     * created or deleted.</p>
     */
    inline const KeyState& GetKeyState() const{ return m_keyState; }
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }
    inline void SetKeyState(const KeyState& value) { m_keyStateHasBeenSet = true; m_keyState = value; }
    inline void SetKeyState(KeyState&& value) { m_keyStateHasBeenSet = true; m_keyState = std::move(value); }
    inline KeySummary& WithKeyState(const KeyState& value) { SetKeyState(value); return *this;}
    inline KeySummary& WithKeyState(KeyState&& value) { SetKeyState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline const KeyAttributes& GetKeyAttributes() const{ return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    inline void SetKeyAttributes(const KeyAttributes& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = value; }
    inline void SetKeyAttributes(KeyAttributes&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::move(value); }
    inline KeySummary& WithKeyAttributes(const KeyAttributes& value) { SetKeyAttributes(value); return *this;}
    inline KeySummary& WithKeyAttributes(KeyAttributes&& value) { SetKeyAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline const Aws::String& GetKeyCheckValue() const{ return m_keyCheckValue; }
    inline bool KeyCheckValueHasBeenSet() const { return m_keyCheckValueHasBeenSet; }
    inline void SetKeyCheckValue(const Aws::String& value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue = value; }
    inline void SetKeyCheckValue(Aws::String&& value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue = std::move(value); }
    inline void SetKeyCheckValue(const char* value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue.assign(value); }
    inline KeySummary& WithKeyCheckValue(const Aws::String& value) { SetKeyCheckValue(value); return *this;}
    inline KeySummary& WithKeyCheckValue(Aws::String&& value) { SetKeyCheckValue(std::move(value)); return *this;}
    inline KeySummary& WithKeyCheckValue(const char* value) { SetKeyCheckValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the key is exportable. This data is immutable after the key
     * is created.</p>
     */
    inline bool GetExportable() const{ return m_exportable; }
    inline bool ExportableHasBeenSet() const { return m_exportableHasBeenSet; }
    inline void SetExportable(bool value) { m_exportableHasBeenSet = true; m_exportable = value; }
    inline KeySummary& WithExportable(bool value) { SetExportable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the key is enabled. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline KeySummary& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    KeyState m_keyState;
    bool m_keyStateHasBeenSet = false;

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_keyCheckValue;
    bool m_keyCheckValueHasBeenSet = false;

    bool m_exportable;
    bool m_exportableHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
