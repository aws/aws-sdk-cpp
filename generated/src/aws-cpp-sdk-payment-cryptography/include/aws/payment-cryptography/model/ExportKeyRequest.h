/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/model/ExportAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/ExportKeyMaterial.h>
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
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportKey"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The attributes for IPEK generation during export.</p>
     */
    inline const ExportAttributes& GetExportAttributes() const{ return m_exportAttributes; }

    /**
     * <p>The attributes for IPEK generation during export.</p>
     */
    inline bool ExportAttributesHasBeenSet() const { return m_exportAttributesHasBeenSet; }

    /**
     * <p>The attributes for IPEK generation during export.</p>
     */
    inline void SetExportAttributes(const ExportAttributes& value) { m_exportAttributesHasBeenSet = true; m_exportAttributes = value; }

    /**
     * <p>The attributes for IPEK generation during export.</p>
     */
    inline void SetExportAttributes(ExportAttributes&& value) { m_exportAttributesHasBeenSet = true; m_exportAttributes = std::move(value); }

    /**
     * <p>The attributes for IPEK generation during export.</p>
     */
    inline ExportKeyRequest& WithExportAttributes(const ExportAttributes& value) { SetExportAttributes(value); return *this;}

    /**
     * <p>The attributes for IPEK generation during export.</p>
     */
    inline ExportKeyRequest& WithExportAttributes(ExportAttributes&& value) { SetExportAttributes(std::move(value)); return *this;}


    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline const Aws::String& GetExportKeyIdentifier() const{ return m_exportKeyIdentifier; }

    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline bool ExportKeyIdentifierHasBeenSet() const { return m_exportKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline void SetExportKeyIdentifier(const Aws::String& value) { m_exportKeyIdentifierHasBeenSet = true; m_exportKeyIdentifier = value; }

    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline void SetExportKeyIdentifier(Aws::String&& value) { m_exportKeyIdentifierHasBeenSet = true; m_exportKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline void SetExportKeyIdentifier(const char* value) { m_exportKeyIdentifierHasBeenSet = true; m_exportKeyIdentifier.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline ExportKeyRequest& WithExportKeyIdentifier(const Aws::String& value) { SetExportKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline ExportKeyRequest& WithExportKeyIdentifier(Aws::String&& value) { SetExportKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key under export from Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline ExportKeyRequest& WithExportKeyIdentifier(const char* value) { SetExportKeyIdentifier(value); return *this;}


    /**
     * <p>The key block format type, for example, TR-34 or TR-31, to use during key
     * material export.</p>
     */
    inline const ExportKeyMaterial& GetKeyMaterial() const{ return m_keyMaterial; }

    /**
     * <p>The key block format type, for example, TR-34 or TR-31, to use during key
     * material export.</p>
     */
    inline bool KeyMaterialHasBeenSet() const { return m_keyMaterialHasBeenSet; }

    /**
     * <p>The key block format type, for example, TR-34 or TR-31, to use during key
     * material export.</p>
     */
    inline void SetKeyMaterial(const ExportKeyMaterial& value) { m_keyMaterialHasBeenSet = true; m_keyMaterial = value; }

    /**
     * <p>The key block format type, for example, TR-34 or TR-31, to use during key
     * material export.</p>
     */
    inline void SetKeyMaterial(ExportKeyMaterial&& value) { m_keyMaterialHasBeenSet = true; m_keyMaterial = std::move(value); }

    /**
     * <p>The key block format type, for example, TR-34 or TR-31, to use during key
     * material export.</p>
     */
    inline ExportKeyRequest& WithKeyMaterial(const ExportKeyMaterial& value) { SetKeyMaterial(value); return *this;}

    /**
     * <p>The key block format type, for example, TR-34 or TR-31, to use during key
     * material export.</p>
     */
    inline ExportKeyRequest& WithKeyMaterial(ExportKeyMaterial&& value) { SetKeyMaterial(std::move(value)); return *this;}

  private:

    ExportAttributes m_exportAttributes;
    bool m_exportAttributesHasBeenSet = false;

    Aws::String m_exportKeyIdentifier;
    bool m_exportKeyIdentifierHasBeenSet = false;

    ExportKeyMaterial m_keyMaterial;
    bool m_keyMaterialHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
