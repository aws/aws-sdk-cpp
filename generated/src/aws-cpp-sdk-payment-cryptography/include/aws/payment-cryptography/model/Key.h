﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
#include <aws/payment-cryptography/model/KeyCheckValueAlgorithm.h>
#include <aws/payment-cryptography/model/KeyState.h>
#include <aws/payment-cryptography/model/KeyOrigin.h>
#include <aws/core/utils/DateTime.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/Key">AWS
   * API Reference</a></p>
   */
  class Key
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API Key() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API Key(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Key& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline const Aws::String& GetKeyArn() const { return m_keyArn; }
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }
    template<typename KeyArnT = Aws::String>
    void SetKeyArn(KeyArnT&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::forward<KeyArnT>(value); }
    template<typename KeyArnT = Aws::String>
    Key& WithKeyArn(KeyArnT&& value) { SetKeyArn(std::forward<KeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline const KeyAttributes& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = KeyAttributes>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = KeyAttributes>
    Key& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline const Aws::String& GetKeyCheckValue() const { return m_keyCheckValue; }
    inline bool KeyCheckValueHasBeenSet() const { return m_keyCheckValueHasBeenSet; }
    template<typename KeyCheckValueT = Aws::String>
    void SetKeyCheckValue(KeyCheckValueT&& value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue = std::forward<KeyCheckValueT>(value); }
    template<typename KeyCheckValueT = Aws::String>
    Key& WithKeyCheckValue(KeyCheckValueT&& value) { SetKeyCheckValue(std::forward<KeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline KeyCheckValueAlgorithm GetKeyCheckValueAlgorithm() const { return m_keyCheckValueAlgorithm; }
    inline bool KeyCheckValueAlgorithmHasBeenSet() const { return m_keyCheckValueAlgorithmHasBeenSet; }
    inline void SetKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = value; }
    inline Key& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { SetKeyCheckValueAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the key is enabled. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline Key& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the key is exportable. This data is immutable after the key
     * is created.</p>
     */
    inline bool GetExportable() const { return m_exportable; }
    inline bool ExportableHasBeenSet() const { return m_exportableHasBeenSet; }
    inline void SetExportable(bool value) { m_exportableHasBeenSet = true; m_exportable = value; }
    inline Key& WithExportable(bool value) { SetExportable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of key that is being created or deleted.</p>
     */
    inline KeyState GetKeyState() const { return m_keyState; }
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }
    inline void SetKeyState(KeyState value) { m_keyStateHasBeenSet = true; m_keyState = value; }
    inline Key& WithKeyState(KeyState value) { SetKeyState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the key material. For keys created within Amazon Web Services
     * Payment Cryptography, the value is <code>AWS_PAYMENT_CRYPTOGRAPHY</code>. For
     * keys imported into Amazon Web Services Payment Cryptography, the value is
     * <code>EXTERNAL</code>.</p>
     */
    inline KeyOrigin GetKeyOrigin() const { return m_keyOrigin; }
    inline bool KeyOriginHasBeenSet() const { return m_keyOriginHasBeenSet; }
    inline void SetKeyOrigin(KeyOrigin value) { m_keyOriginHasBeenSet = true; m_keyOrigin = value; }
    inline Key& WithKeyOrigin(KeyOrigin value) { SetKeyOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const { return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    void SetCreateTimestamp(CreateTimestampT&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::forward<CreateTimestampT>(value); }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    Key& WithCreateTimestamp(CreateTimestampT&& value) { SetCreateTimestamp(std::forward<CreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * start using the key material for cryptographic operations.</p>
     */
    inline const Aws::Utils::DateTime& GetUsageStartTimestamp() const { return m_usageStartTimestamp; }
    inline bool UsageStartTimestampHasBeenSet() const { return m_usageStartTimestampHasBeenSet; }
    template<typename UsageStartTimestampT = Aws::Utils::DateTime>
    void SetUsageStartTimestamp(UsageStartTimestampT&& value) { m_usageStartTimestampHasBeenSet = true; m_usageStartTimestamp = std::forward<UsageStartTimestampT>(value); }
    template<typename UsageStartTimestampT = Aws::Utils::DateTime>
    Key& WithUsageStartTimestamp(UsageStartTimestampT&& value) { SetUsageStartTimestamp(std::forward<UsageStartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * stop using the key material for cryptographic operations.</p>
     */
    inline const Aws::Utils::DateTime& GetUsageStopTimestamp() const { return m_usageStopTimestamp; }
    inline bool UsageStopTimestampHasBeenSet() const { return m_usageStopTimestampHasBeenSet; }
    template<typename UsageStopTimestampT = Aws::Utils::DateTime>
    void SetUsageStopTimestamp(UsageStopTimestampT&& value) { m_usageStopTimestampHasBeenSet = true; m_usageStopTimestamp = std::forward<UsageStopTimestampT>(value); }
    template<typename UsageStopTimestampT = Aws::Utils::DateTime>
    Key& WithUsageStopTimestamp(UsageStopTimestampT&& value) { SetUsageStopTimestamp(std::forward<UsageStopTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when <code>KeyState</code> is
     * <code>DELETE_PENDING</code> and the key is scheduled for deletion.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletePendingTimestamp() const { return m_deletePendingTimestamp; }
    inline bool DeletePendingTimestampHasBeenSet() const { return m_deletePendingTimestampHasBeenSet; }
    template<typename DeletePendingTimestampT = Aws::Utils::DateTime>
    void SetDeletePendingTimestamp(DeletePendingTimestampT&& value) { m_deletePendingTimestampHasBeenSet = true; m_deletePendingTimestamp = std::forward<DeletePendingTimestampT>(value); }
    template<typename DeletePendingTimestampT = Aws::Utils::DateTime>
    Key& WithDeletePendingTimestamp(DeletePendingTimestampT&& value) { SetDeletePendingTimestamp(std::forward<DeletePendingTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when when the <code>KeyState</code>
     * is <code>DELETE_COMPLETE</code> and the Amazon Web Services Payment Cryptography
     * key is deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTimestamp() const { return m_deleteTimestamp; }
    inline bool DeleteTimestampHasBeenSet() const { return m_deleteTimestampHasBeenSet; }
    template<typename DeleteTimestampT = Aws::Utils::DateTime>
    void SetDeleteTimestamp(DeleteTimestampT&& value) { m_deleteTimestampHasBeenSet = true; m_deleteTimestamp = std::forward<DeleteTimestampT>(value); }
    template<typename DeleteTimestampT = Aws::Utils::DateTime>
    Key& WithDeleteTimestamp(DeleteTimestampT&& value) { SetDeleteTimestamp(std::forward<DeleteTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_keyCheckValue;
    bool m_keyCheckValueHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm{KeyCheckValueAlgorithm::NOT_SET};
    bool m_keyCheckValueAlgorithmHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_exportable{false};
    bool m_exportableHasBeenSet = false;

    KeyState m_keyState{KeyState::NOT_SET};
    bool m_keyStateHasBeenSet = false;

    KeyOrigin m_keyOrigin{KeyOrigin::NOT_SET};
    bool m_keyOriginHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp{};
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_usageStartTimestamp{};
    bool m_usageStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_usageStopTimestamp{};
    bool m_usageStopTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deletePendingTimestamp{};
    bool m_deletePendingTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTimestamp{};
    bool m_deleteTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
