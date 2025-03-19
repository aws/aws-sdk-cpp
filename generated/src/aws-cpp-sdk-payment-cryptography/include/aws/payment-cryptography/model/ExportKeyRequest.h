/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/model/ExportKeyMaterial.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/ExportAttributes.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   */
  class ExportKeyRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportKey"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The key block format type, for example, TR-34 or TR-31, to use during key
     * material export.</p>
     */
    inline const ExportKeyMaterial& GetKeyMaterial() const { return m_keyMaterial; }
    inline bool KeyMaterialHasBeenSet() const { return m_keyMaterialHasBeenSet; }
    template<typename KeyMaterialT = ExportKeyMaterial>
    void SetKeyMaterial(KeyMaterialT&& value) { m_keyMaterialHasBeenSet = true; m_keyMaterial = std::forward<KeyMaterialT>(value); }
    template<typename KeyMaterialT = ExportKeyMaterial>
    ExportKeyRequest& WithKeyMaterial(KeyMaterialT&& value) { SetKeyMaterial(std::forward<KeyMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline const Aws::String& GetExportKeyIdentifier() const { return m_exportKeyIdentifier; }
    inline bool ExportKeyIdentifierHasBeenSet() const { return m_exportKeyIdentifierHasBeenSet; }
    template<typename ExportKeyIdentifierT = Aws::String>
    void SetExportKeyIdentifier(ExportKeyIdentifierT&& value) { m_exportKeyIdentifierHasBeenSet = true; m_exportKeyIdentifier = std::forward<ExportKeyIdentifierT>(value); }
    template<typename ExportKeyIdentifierT = Aws::String>
    ExportKeyRequest& WithExportKeyIdentifier(ExportKeyIdentifierT&& value) { SetExportKeyIdentifier(std::forward<ExportKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes for IPEK generation during export.</p>
     */
    inline const ExportAttributes& GetExportAttributes() const { return m_exportAttributes; }
    inline bool ExportAttributesHasBeenSet() const { return m_exportAttributesHasBeenSet; }
    template<typename ExportAttributesT = ExportAttributes>
    void SetExportAttributes(ExportAttributesT&& value) { m_exportAttributesHasBeenSet = true; m_exportAttributes = std::forward<ExportAttributesT>(value); }
    template<typename ExportAttributesT = ExportAttributes>
    ExportKeyRequest& WithExportAttributes(ExportAttributesT&& value) { SetExportAttributes(std::forward<ExportAttributesT>(value)); return *this;}
    ///@}
  private:

    ExportKeyMaterial m_keyMaterial;
    bool m_keyMaterialHasBeenSet = false;

    Aws::String m_exportKeyIdentifier;
    bool m_exportKeyIdentifierHasBeenSet = false;

    ExportAttributes m_exportAttributes;
    bool m_exportAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
