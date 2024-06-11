/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ProvisioningArtifactProperties.h>
#include <aws/servicecatalog/model/SourceConnection.h>
#include <aws/servicecatalog/model/Tag.h>
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
  class CreateProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API CreateProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProduct"; }

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
    inline CreateProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline CreateProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline CreateProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateProductRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateProductRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateProductRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the product.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline CreateProductRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline CreateProductRequest& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline CreateProductRequest& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the product.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateProductRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateProductRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateProductRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distributor of the product.</p>
     */
    inline const Aws::String& GetDistributor() const{ return m_distributor; }
    inline bool DistributorHasBeenSet() const { return m_distributorHasBeenSet; }
    inline void SetDistributor(const Aws::String& value) { m_distributorHasBeenSet = true; m_distributor = value; }
    inline void SetDistributor(Aws::String&& value) { m_distributorHasBeenSet = true; m_distributor = std::move(value); }
    inline void SetDistributor(const char* value) { m_distributorHasBeenSet = true; m_distributor.assign(value); }
    inline CreateProductRequest& WithDistributor(const Aws::String& value) { SetDistributor(value); return *this;}
    inline CreateProductRequest& WithDistributor(Aws::String&& value) { SetDistributor(std::move(value)); return *this;}
    inline CreateProductRequest& WithDistributor(const char* value) { SetDistributor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support information about the product.</p>
     */
    inline const Aws::String& GetSupportDescription() const{ return m_supportDescription; }
    inline bool SupportDescriptionHasBeenSet() const { return m_supportDescriptionHasBeenSet; }
    inline void SetSupportDescription(const Aws::String& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = value; }
    inline void SetSupportDescription(Aws::String&& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = std::move(value); }
    inline void SetSupportDescription(const char* value) { m_supportDescriptionHasBeenSet = true; m_supportDescription.assign(value); }
    inline CreateProductRequest& WithSupportDescription(const Aws::String& value) { SetSupportDescription(value); return *this;}
    inline CreateProductRequest& WithSupportDescription(Aws::String&& value) { SetSupportDescription(std::move(value)); return *this;}
    inline CreateProductRequest& WithSupportDescription(const char* value) { SetSupportDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact email for product support.</p>
     */
    inline const Aws::String& GetSupportEmail() const{ return m_supportEmail; }
    inline bool SupportEmailHasBeenSet() const { return m_supportEmailHasBeenSet; }
    inline void SetSupportEmail(const Aws::String& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }
    inline void SetSupportEmail(Aws::String&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = std::move(value); }
    inline void SetSupportEmail(const char* value) { m_supportEmailHasBeenSet = true; m_supportEmail.assign(value); }
    inline CreateProductRequest& WithSupportEmail(const Aws::String& value) { SetSupportEmail(value); return *this;}
    inline CreateProductRequest& WithSupportEmail(Aws::String&& value) { SetSupportEmail(std::move(value)); return *this;}
    inline CreateProductRequest& WithSupportEmail(const char* value) { SetSupportEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact URL for product support.</p> <p> <code>^https?:\/\// </code>/ is
     * the pattern used to validate SupportUrl.</p>
     */
    inline const Aws::String& GetSupportUrl() const{ return m_supportUrl; }
    inline bool SupportUrlHasBeenSet() const { return m_supportUrlHasBeenSet; }
    inline void SetSupportUrl(const Aws::String& value) { m_supportUrlHasBeenSet = true; m_supportUrl = value; }
    inline void SetSupportUrl(Aws::String&& value) { m_supportUrlHasBeenSet = true; m_supportUrl = std::move(value); }
    inline void SetSupportUrl(const char* value) { m_supportUrlHasBeenSet = true; m_supportUrl.assign(value); }
    inline CreateProductRequest& WithSupportUrl(const Aws::String& value) { SetSupportUrl(value); return *this;}
    inline CreateProductRequest& WithSupportUrl(Aws::String&& value) { SetSupportUrl(std::move(value)); return *this;}
    inline CreateProductRequest& WithSupportUrl(const char* value) { SetSupportUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of product.</p>
     */
    inline const ProductType& GetProductType() const{ return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(const ProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline void SetProductType(ProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }
    inline CreateProductRequest& WithProductType(const ProductType& value) { SetProductType(value); return *this;}
    inline CreateProductRequest& WithProductType(ProductType&& value) { SetProductType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateProductRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateProductRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateProductRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateProductRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the provisioning artifact. </p>
     */
    inline const ProvisioningArtifactProperties& GetProvisioningArtifactParameters() const{ return m_provisioningArtifactParameters; }
    inline bool ProvisioningArtifactParametersHasBeenSet() const { return m_provisioningArtifactParametersHasBeenSet; }
    inline void SetProvisioningArtifactParameters(const ProvisioningArtifactProperties& value) { m_provisioningArtifactParametersHasBeenSet = true; m_provisioningArtifactParameters = value; }
    inline void SetProvisioningArtifactParameters(ProvisioningArtifactProperties&& value) { m_provisioningArtifactParametersHasBeenSet = true; m_provisioningArtifactParameters = std::move(value); }
    inline CreateProductRequest& WithProvisioningArtifactParameters(const ProvisioningArtifactProperties& value) { SetProvisioningArtifactParameters(value); return *this;}
    inline CreateProductRequest& WithProvisioningArtifactParameters(ProvisioningArtifactProperties&& value) { SetProvisioningArtifactParameters(std::move(value)); return *this;}
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
    inline CreateProductRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline CreateProductRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline CreateProductRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies connection details for the created product and syncs the product to
     * the connection source artifact. This automatically manages the product's
     * artifacts based on changes to the source. The <code>SourceConnection</code>
     * parameter consists of the following sub-fields.</p> <ul> <li> <p>
     * <code>Type</code> </p> </li> <li> <p> <code>ConnectionParamters</code> </p>
     * </li> </ul>
     */
    inline const SourceConnection& GetSourceConnection() const{ return m_sourceConnection; }
    inline bool SourceConnectionHasBeenSet() const { return m_sourceConnectionHasBeenSet; }
    inline void SetSourceConnection(const SourceConnection& value) { m_sourceConnectionHasBeenSet = true; m_sourceConnection = value; }
    inline void SetSourceConnection(SourceConnection&& value) { m_sourceConnectionHasBeenSet = true; m_sourceConnection = std::move(value); }
    inline CreateProductRequest& WithSourceConnection(const SourceConnection& value) { SetSourceConnection(value); return *this;}
    inline CreateProductRequest& WithSourceConnection(SourceConnection&& value) { SetSourceConnection(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_distributor;
    bool m_distributorHasBeenSet = false;

    Aws::String m_supportDescription;
    bool m_supportDescriptionHasBeenSet = false;

    Aws::String m_supportEmail;
    bool m_supportEmailHasBeenSet = false;

    Aws::String m_supportUrl;
    bool m_supportUrlHasBeenSet = false;

    ProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ProvisioningArtifactProperties m_provisioningArtifactParameters;
    bool m_provisioningArtifactParametersHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    SourceConnection m_sourceConnection;
    bool m_sourceConnectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
