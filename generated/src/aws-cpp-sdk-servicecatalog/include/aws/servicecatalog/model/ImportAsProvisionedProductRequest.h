/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class ImportAsProvisionedProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ImportAsProvisionedProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportAsProvisionedProduct"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }
    inline ImportAsProvisionedProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline ImportAsProvisionedProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline ImportAsProvisionedProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline ImportAsProvisionedProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline ImportAsProvisionedProductRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline ImportAsProvisionedProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }
    inline ImportAsProvisionedProductRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline ImportAsProvisionedProductRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline ImportAsProvisionedProductRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the provisioned product. The value must be unique
     * for the Amazon Web Services account. The name cannot be updated after the
     * product is provisioned. </p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }
    inline ImportAsProvisionedProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}
    inline ImportAsProvisionedProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}
    inline ImportAsProvisionedProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the resource to be imported. It only currently
     * supports CloudFormation stack IDs.</p>
     */
    inline const Aws::String& GetPhysicalId() const{ return m_physicalId; }
    inline bool PhysicalIdHasBeenSet() const { return m_physicalIdHasBeenSet; }
    inline void SetPhysicalId(const Aws::String& value) { m_physicalIdHasBeenSet = true; m_physicalId = value; }
    inline void SetPhysicalId(Aws::String&& value) { m_physicalIdHasBeenSet = true; m_physicalId = std::move(value); }
    inline void SetPhysicalId(const char* value) { m_physicalIdHasBeenSet = true; m_physicalId.assign(value); }
    inline ImportAsProvisionedProductRequest& WithPhysicalId(const Aws::String& value) { SetPhysicalId(value); return *this;}
    inline ImportAsProvisionedProductRequest& WithPhysicalId(Aws::String&& value) { SetPhysicalId(std::move(value)); return *this;}
    inline ImportAsProvisionedProductRequest& WithPhysicalId(const char* value) { SetPhysicalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline ImportAsProvisionedProductRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline ImportAsProvisionedProductRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline ImportAsProvisionedProductRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::String m_physicalId;
    bool m_physicalIdHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
