/**
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
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyCryptogram() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyCryptogram(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyCryptogram& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const KeyAttributes& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = KeyAttributes>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = KeyAttributes>
    ImportKeyCryptogram& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the key is exportable from the service.</p>
     */
    inline bool GetExportable() const { return m_exportable; }
    inline bool ExportableHasBeenSet() const { return m_exportableHasBeenSet; }
    inline void SetExportable(bool value) { m_exportableHasBeenSet = true; m_exportable = value; }
    inline ImportKeyCryptogram& WithExportable(bool value) { SetExportable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RSA wrapped key cryptogram under import.</p>
     */
    inline const Aws::String& GetWrappedKeyCryptogram() const { return m_wrappedKeyCryptogram; }
    inline bool WrappedKeyCryptogramHasBeenSet() const { return m_wrappedKeyCryptogramHasBeenSet; }
    template<typename WrappedKeyCryptogramT = Aws::String>
    void SetWrappedKeyCryptogram(WrappedKeyCryptogramT&& value) { m_wrappedKeyCryptogramHasBeenSet = true; m_wrappedKeyCryptogram = std::forward<WrappedKeyCryptogramT>(value); }
    template<typename WrappedKeyCryptogramT = Aws::String>
    ImportKeyCryptogram& WithWrappedKeyCryptogram(WrappedKeyCryptogramT&& value) { SetWrappedKeyCryptogram(std::forward<WrappedKeyCryptogramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import token that initiates key import using the asymmetric RSA wrap and
     * unwrap key exchange method into AWS Payment Cryptography. It expires after 30
     * days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline const Aws::String& GetImportToken() const { return m_importToken; }
    inline bool ImportTokenHasBeenSet() const { return m_importTokenHasBeenSet; }
    template<typename ImportTokenT = Aws::String>
    void SetImportToken(ImportTokenT&& value) { m_importTokenHasBeenSet = true; m_importToken = std::forward<ImportTokenT>(value); }
    template<typename ImportTokenT = Aws::String>
    ImportKeyCryptogram& WithImportToken(ImportTokenT&& value) { SetImportToken(std::forward<ImportTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wrapping spec for the wrapped key cryptogram.</p>
     */
    inline WrappingKeySpec GetWrappingSpec() const { return m_wrappingSpec; }
    inline bool WrappingSpecHasBeenSet() const { return m_wrappingSpecHasBeenSet; }
    inline void SetWrappingSpec(WrappingKeySpec value) { m_wrappingSpecHasBeenSet = true; m_wrappingSpec = value; }
    inline ImportKeyCryptogram& WithWrappingSpec(WrappingKeySpec value) { SetWrappingSpec(value); return *this;}
    ///@}
  private:

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    bool m_exportable{false};
    bool m_exportableHasBeenSet = false;

    Aws::String m_wrappedKeyCryptogram;
    bool m_wrappedKeyCryptogramHasBeenSet = false;

    Aws::String m_importToken;
    bool m_importTokenHasBeenSet = false;

    WrappingKeySpec m_wrappingSpec{WrappingKeySpec::NOT_SET};
    bool m_wrappingSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
