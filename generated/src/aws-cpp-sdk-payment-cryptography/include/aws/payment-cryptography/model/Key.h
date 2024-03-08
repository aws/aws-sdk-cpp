/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
#include <aws/payment-cryptography/model/KeyCheckValueAlgorithm.h>
#include <aws/payment-cryptography/model/KeyOrigin.h>
#include <aws/payment-cryptography/model/KeyState.h>
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
    AWS_PAYMENTCRYPTOGRAPHY_API Key();
    AWS_PAYMENTCRYPTOGRAPHY_API Key(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Key& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when the key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p>The date and time when the key was created.</p>
     */
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }

    /**
     * <p>The date and time when the key was created.</p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The date and time when the key was created.</p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    /**
     * <p>The date and time when the key was created.</p>
     */
    inline Key& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The date and time when the key was created.</p>
     */
    inline Key& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when <code>KeyState</code> is
     * <code>DELETE_PENDING</code> and the key is scheduled for deletion.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletePendingTimestamp() const{ return m_deletePendingTimestamp; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when <code>KeyState</code> is
     * <code>DELETE_PENDING</code> and the key is scheduled for deletion.</p>
     */
    inline bool DeletePendingTimestampHasBeenSet() const { return m_deletePendingTimestampHasBeenSet; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when <code>KeyState</code> is
     * <code>DELETE_PENDING</code> and the key is scheduled for deletion.</p>
     */
    inline void SetDeletePendingTimestamp(const Aws::Utils::DateTime& value) { m_deletePendingTimestampHasBeenSet = true; m_deletePendingTimestamp = value; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when <code>KeyState</code> is
     * <code>DELETE_PENDING</code> and the key is scheduled for deletion.</p>
     */
    inline void SetDeletePendingTimestamp(Aws::Utils::DateTime&& value) { m_deletePendingTimestampHasBeenSet = true; m_deletePendingTimestamp = std::move(value); }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when <code>KeyState</code> is
     * <code>DELETE_PENDING</code> and the key is scheduled for deletion.</p>
     */
    inline Key& WithDeletePendingTimestamp(const Aws::Utils::DateTime& value) { SetDeletePendingTimestamp(value); return *this;}

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when <code>KeyState</code> is
     * <code>DELETE_PENDING</code> and the key is scheduled for deletion.</p>
     */
    inline Key& WithDeletePendingTimestamp(Aws::Utils::DateTime&& value) { SetDeletePendingTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when when the <code>KeyState</code>
     * is <code>DELETE_COMPLETE</code> and the Amazon Web Services Payment Cryptography
     * key is deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTimestamp() const{ return m_deleteTimestamp; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when when the <code>KeyState</code>
     * is <code>DELETE_COMPLETE</code> and the Amazon Web Services Payment Cryptography
     * key is deleted.</p>
     */
    inline bool DeleteTimestampHasBeenSet() const { return m_deleteTimestampHasBeenSet; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when when the <code>KeyState</code>
     * is <code>DELETE_COMPLETE</code> and the Amazon Web Services Payment Cryptography
     * key is deleted.</p>
     */
    inline void SetDeleteTimestamp(const Aws::Utils::DateTime& value) { m_deleteTimestampHasBeenSet = true; m_deleteTimestamp = value; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when when the <code>KeyState</code>
     * is <code>DELETE_COMPLETE</code> and the Amazon Web Services Payment Cryptography
     * key is deleted.</p>
     */
    inline void SetDeleteTimestamp(Aws::Utils::DateTime&& value) { m_deleteTimestampHasBeenSet = true; m_deleteTimestamp = std::move(value); }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when when the <code>KeyState</code>
     * is <code>DELETE_COMPLETE</code> and the Amazon Web Services Payment Cryptography
     * key is deleted.</p>
     */
    inline Key& WithDeleteTimestamp(const Aws::Utils::DateTime& value) { SetDeleteTimestamp(value); return *this;}

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * delete the key. This value is present only when when the <code>KeyState</code>
     * is <code>DELETE_COMPLETE</code> and the Amazon Web Services Payment Cryptography
     * key is deleted.</p>
     */
    inline Key& WithDeleteTimestamp(Aws::Utils::DateTime&& value) { SetDeleteTimestamp(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the key is enabled. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the key is enabled. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the key is enabled. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the key is enabled. </p>
     */
    inline Key& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies whether the key is exportable. This data is immutable after the key
     * is created.</p>
     */
    inline bool GetExportable() const{ return m_exportable; }

    /**
     * <p>Specifies whether the key is exportable. This data is immutable after the key
     * is created.</p>
     */
    inline bool ExportableHasBeenSet() const { return m_exportableHasBeenSet; }

    /**
     * <p>Specifies whether the key is exportable. This data is immutable after the key
     * is created.</p>
     */
    inline void SetExportable(bool value) { m_exportableHasBeenSet = true; m_exportable = value; }

    /**
     * <p>Specifies whether the key is exportable. This data is immutable after the key
     * is created.</p>
     */
    inline Key& WithExportable(bool value) { SetExportable(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline Key& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline Key& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the key.</p>
     */
    inline Key& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}


    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline const KeyAttributes& GetKeyAttributes() const{ return m_keyAttributes; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline void SetKeyAttributes(const KeyAttributes& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = value; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline void SetKeyAttributes(KeyAttributes&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::move(value); }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline Key& WithKeyAttributes(const KeyAttributes& value) { SetKeyAttributes(value); return *this;}

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the key is
     * created.</p>
     */
    inline Key& WithKeyAttributes(KeyAttributes&& value) { SetKeyAttributes(std::move(value)); return *this;}


    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline const Aws::String& GetKeyCheckValue() const{ return m_keyCheckValue; }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline bool KeyCheckValueHasBeenSet() const { return m_keyCheckValueHasBeenSet; }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline void SetKeyCheckValue(const Aws::String& value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue = value; }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline void SetKeyCheckValue(Aws::String&& value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue = std::move(value); }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline void SetKeyCheckValue(const char* value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue.assign(value); }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline Key& WithKeyCheckValue(const Aws::String& value) { SetKeyCheckValue(value); return *this;}

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline Key& WithKeyCheckValue(Aws::String&& value) { SetKeyCheckValue(std::move(value)); return *this;}

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline Key& WithKeyCheckValue(const char* value) { SetKeyCheckValue(value); return *this;}


    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline const KeyCheckValueAlgorithm& GetKeyCheckValueAlgorithm() const{ return m_keyCheckValueAlgorithm; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline bool KeyCheckValueAlgorithmHasBeenSet() const { return m_keyCheckValueAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline void SetKeyCheckValueAlgorithm(const KeyCheckValueAlgorithm& value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = value; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline void SetKeyCheckValueAlgorithm(KeyCheckValueAlgorithm&& value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = std::move(value); }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline Key& WithKeyCheckValueAlgorithm(const KeyCheckValueAlgorithm& value) { SetKeyCheckValueAlgorithm(value); return *this;}

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline Key& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm&& value) { SetKeyCheckValueAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The source of the key material. For keys created within Amazon Web Services
     * Payment Cryptography, the value is <code>AWS_PAYMENT_CRYPTOGRAPHY</code>. For
     * keys imported into Amazon Web Services Payment Cryptography, the value is
     * <code>EXTERNAL</code>.</p>
     */
    inline const KeyOrigin& GetKeyOrigin() const{ return m_keyOrigin; }

    /**
     * <p>The source of the key material. For keys created within Amazon Web Services
     * Payment Cryptography, the value is <code>AWS_PAYMENT_CRYPTOGRAPHY</code>. For
     * keys imported into Amazon Web Services Payment Cryptography, the value is
     * <code>EXTERNAL</code>.</p>
     */
    inline bool KeyOriginHasBeenSet() const { return m_keyOriginHasBeenSet; }

    /**
     * <p>The source of the key material. For keys created within Amazon Web Services
     * Payment Cryptography, the value is <code>AWS_PAYMENT_CRYPTOGRAPHY</code>. For
     * keys imported into Amazon Web Services Payment Cryptography, the value is
     * <code>EXTERNAL</code>.</p>
     */
    inline void SetKeyOrigin(const KeyOrigin& value) { m_keyOriginHasBeenSet = true; m_keyOrigin = value; }

    /**
     * <p>The source of the key material. For keys created within Amazon Web Services
     * Payment Cryptography, the value is <code>AWS_PAYMENT_CRYPTOGRAPHY</code>. For
     * keys imported into Amazon Web Services Payment Cryptography, the value is
     * <code>EXTERNAL</code>.</p>
     */
    inline void SetKeyOrigin(KeyOrigin&& value) { m_keyOriginHasBeenSet = true; m_keyOrigin = std::move(value); }

    /**
     * <p>The source of the key material. For keys created within Amazon Web Services
     * Payment Cryptography, the value is <code>AWS_PAYMENT_CRYPTOGRAPHY</code>. For
     * keys imported into Amazon Web Services Payment Cryptography, the value is
     * <code>EXTERNAL</code>.</p>
     */
    inline Key& WithKeyOrigin(const KeyOrigin& value) { SetKeyOrigin(value); return *this;}

    /**
     * <p>The source of the key material. For keys created within Amazon Web Services
     * Payment Cryptography, the value is <code>AWS_PAYMENT_CRYPTOGRAPHY</code>. For
     * keys imported into Amazon Web Services Payment Cryptography, the value is
     * <code>EXTERNAL</code>.</p>
     */
    inline Key& WithKeyOrigin(KeyOrigin&& value) { SetKeyOrigin(std::move(value)); return *this;}


    /**
     * <p>The state of key that is being created or deleted.</p>
     */
    inline const KeyState& GetKeyState() const{ return m_keyState; }

    /**
     * <p>The state of key that is being created or deleted.</p>
     */
    inline bool KeyStateHasBeenSet() const { return m_keyStateHasBeenSet; }

    /**
     * <p>The state of key that is being created or deleted.</p>
     */
    inline void SetKeyState(const KeyState& value) { m_keyStateHasBeenSet = true; m_keyState = value; }

    /**
     * <p>The state of key that is being created or deleted.</p>
     */
    inline void SetKeyState(KeyState&& value) { m_keyStateHasBeenSet = true; m_keyState = std::move(value); }

    /**
     * <p>The state of key that is being created or deleted.</p>
     */
    inline Key& WithKeyState(const KeyState& value) { SetKeyState(value); return *this;}

    /**
     * <p>The state of key that is being created or deleted.</p>
     */
    inline Key& WithKeyState(KeyState&& value) { SetKeyState(std::move(value)); return *this;}


    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * start using the key material for cryptographic operations.</p>
     */
    inline const Aws::Utils::DateTime& GetUsageStartTimestamp() const{ return m_usageStartTimestamp; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * start using the key material for cryptographic operations.</p>
     */
    inline bool UsageStartTimestampHasBeenSet() const { return m_usageStartTimestampHasBeenSet; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * start using the key material for cryptographic operations.</p>
     */
    inline void SetUsageStartTimestamp(const Aws::Utils::DateTime& value) { m_usageStartTimestampHasBeenSet = true; m_usageStartTimestamp = value; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * start using the key material for cryptographic operations.</p>
     */
    inline void SetUsageStartTimestamp(Aws::Utils::DateTime&& value) { m_usageStartTimestampHasBeenSet = true; m_usageStartTimestamp = std::move(value); }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * start using the key material for cryptographic operations.</p>
     */
    inline Key& WithUsageStartTimestamp(const Aws::Utils::DateTime& value) { SetUsageStartTimestamp(value); return *this;}

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * start using the key material for cryptographic operations.</p>
     */
    inline Key& WithUsageStartTimestamp(Aws::Utils::DateTime&& value) { SetUsageStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * stop using the key material for cryptographic operations.</p>
     */
    inline const Aws::Utils::DateTime& GetUsageStopTimestamp() const{ return m_usageStopTimestamp; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * stop using the key material for cryptographic operations.</p>
     */
    inline bool UsageStopTimestampHasBeenSet() const { return m_usageStopTimestampHasBeenSet; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * stop using the key material for cryptographic operations.</p>
     */
    inline void SetUsageStopTimestamp(const Aws::Utils::DateTime& value) { m_usageStopTimestampHasBeenSet = true; m_usageStopTimestamp = value; }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * stop using the key material for cryptographic operations.</p>
     */
    inline void SetUsageStopTimestamp(Aws::Utils::DateTime&& value) { m_usageStopTimestampHasBeenSet = true; m_usageStopTimestamp = std::move(value); }

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * stop using the key material for cryptographic operations.</p>
     */
    inline Key& WithUsageStopTimestamp(const Aws::Utils::DateTime& value) { SetUsageStopTimestamp(value); return *this;}

    /**
     * <p>The date and time after which Amazon Web Services Payment Cryptography will
     * stop using the key material for cryptographic operations.</p>
     */
    inline Key& WithUsageStopTimestamp(Aws::Utils::DateTime&& value) { SetUsageStopTimestamp(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deletePendingTimestamp;
    bool m_deletePendingTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTimestamp;
    bool m_deleteTimestampHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_exportable;
    bool m_exportableHasBeenSet = false;

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_keyCheckValue;
    bool m_keyCheckValueHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm;
    bool m_keyCheckValueAlgorithmHasBeenSet = false;

    KeyOrigin m_keyOrigin;
    bool m_keyOriginHasBeenSet = false;

    KeyState m_keyState;
    bool m_keyStateHasBeenSet = false;

    Aws::Utils::DateTime m_usageStartTimestamp;
    bool m_usageStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_usageStopTimestamp;
    bool m_usageStopTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
