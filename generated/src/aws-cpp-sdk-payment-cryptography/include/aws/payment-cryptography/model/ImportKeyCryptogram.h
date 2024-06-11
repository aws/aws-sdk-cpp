﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/WrappingKeySpec.h>
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
   * <p>Parameter information for key material import using asymmetric RSA wrap and
   * unwrap key exchange method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ImportKeyCryptogram">AWS
   * API Reference</a></p>
   */
  class ImportKeyCryptogram
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyCryptogram();
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyCryptogram(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyCryptogram& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const KeyAttributes& GetKeyAttributes() const{ return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    inline void SetKeyAttributes(const KeyAttributes& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = value; }
    inline void SetKeyAttributes(KeyAttributes&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::move(value); }
    inline ImportKeyCryptogram& WithKeyAttributes(const KeyAttributes& value) { SetKeyAttributes(value); return *this;}
    inline ImportKeyCryptogram& WithKeyAttributes(KeyAttributes&& value) { SetKeyAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the key is exportable from the service.</p>
     */
    inline bool GetExportable() const{ return m_exportable; }
    inline bool ExportableHasBeenSet() const { return m_exportableHasBeenSet; }
    inline void SetExportable(bool value) { m_exportableHasBeenSet = true; m_exportable = value; }
    inline ImportKeyCryptogram& WithExportable(bool value) { SetExportable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RSA wrapped key cryptogram under import.</p>
     */
    inline const Aws::String& GetWrappedKeyCryptogram() const{ return m_wrappedKeyCryptogram; }
    inline bool WrappedKeyCryptogramHasBeenSet() const { return m_wrappedKeyCryptogramHasBeenSet; }
    inline void SetWrappedKeyCryptogram(const Aws::String& value) { m_wrappedKeyCryptogramHasBeenSet = true; m_wrappedKeyCryptogram = value; }
    inline void SetWrappedKeyCryptogram(Aws::String&& value) { m_wrappedKeyCryptogramHasBeenSet = true; m_wrappedKeyCryptogram = std::move(value); }
    inline void SetWrappedKeyCryptogram(const char* value) { m_wrappedKeyCryptogramHasBeenSet = true; m_wrappedKeyCryptogram.assign(value); }
    inline ImportKeyCryptogram& WithWrappedKeyCryptogram(const Aws::String& value) { SetWrappedKeyCryptogram(value); return *this;}
    inline ImportKeyCryptogram& WithWrappedKeyCryptogram(Aws::String&& value) { SetWrappedKeyCryptogram(std::move(value)); return *this;}
    inline ImportKeyCryptogram& WithWrappedKeyCryptogram(const char* value) { SetWrappedKeyCryptogram(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import token that initiates key import using the asymmetric RSA wrap and
     * unwrap key exchange method into AWS Payment Cryptography. It expires after 7
     * days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline const Aws::String& GetImportToken() const{ return m_importToken; }
    inline bool ImportTokenHasBeenSet() const { return m_importTokenHasBeenSet; }
    inline void SetImportToken(const Aws::String& value) { m_importTokenHasBeenSet = true; m_importToken = value; }
    inline void SetImportToken(Aws::String&& value) { m_importTokenHasBeenSet = true; m_importToken = std::move(value); }
    inline void SetImportToken(const char* value) { m_importTokenHasBeenSet = true; m_importToken.assign(value); }
    inline ImportKeyCryptogram& WithImportToken(const Aws::String& value) { SetImportToken(value); return *this;}
    inline ImportKeyCryptogram& WithImportToken(Aws::String&& value) { SetImportToken(std::move(value)); return *this;}
    inline ImportKeyCryptogram& WithImportToken(const char* value) { SetImportToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wrapping spec for the wrapped key cryptogram.</p>
     */
    inline const WrappingKeySpec& GetWrappingSpec() const{ return m_wrappingSpec; }
    inline bool WrappingSpecHasBeenSet() const { return m_wrappingSpecHasBeenSet; }
    inline void SetWrappingSpec(const WrappingKeySpec& value) { m_wrappingSpecHasBeenSet = true; m_wrappingSpec = value; }
    inline void SetWrappingSpec(WrappingKeySpec&& value) { m_wrappingSpecHasBeenSet = true; m_wrappingSpec = std::move(value); }
    inline ImportKeyCryptogram& WithWrappingSpec(const WrappingKeySpec& value) { SetWrappingSpec(value); return *this;}
    inline ImportKeyCryptogram& WithWrappingSpec(WrappingKeySpec&& value) { SetWrappingSpec(std::move(value)); return *this;}
    ///@}
  private:

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    bool m_exportable;
    bool m_exportableHasBeenSet = false;

    Aws::String m_wrappedKeyCryptogram;
    bool m_wrappedKeyCryptogramHasBeenSet = false;

    Aws::String m_importToken;
    bool m_importTokenHasBeenSet = false;

    WrappingKeySpec m_wrappingSpec;
    bool m_wrappingSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
