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
    AWS_SERVICECATALOG_API CreateProductRequest() = default;

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
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    CreateProductRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateProductRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the product.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    CreateProductRequest& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the product.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateProductRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distributor of the product.</p>
     */
    inline const Aws::String& GetDistributor() const { return m_distributor; }
    inline bool DistributorHasBeenSet() const { return m_distributorHasBeenSet; }
    template<typename DistributorT = Aws::String>
    void SetDistributor(DistributorT&& value) { m_distributorHasBeenSet = true; m_distributor = std::forward<DistributorT>(value); }
    template<typename DistributorT = Aws::String>
    CreateProductRequest& WithDistributor(DistributorT&& value) { SetDistributor(std::forward<DistributorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support information about the product.</p>
     */
    inline const Aws::String& GetSupportDescription() const { return m_supportDescription; }
    inline bool SupportDescriptionHasBeenSet() const { return m_supportDescriptionHasBeenSet; }
    template<typename SupportDescriptionT = Aws::String>
    void SetSupportDescription(SupportDescriptionT&& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = std::forward<SupportDescriptionT>(value); }
    template<typename SupportDescriptionT = Aws::String>
    CreateProductRequest& WithSupportDescription(SupportDescriptionT&& value) { SetSupportDescription(std::forward<SupportDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact email for product support.</p>
     */
    inline const Aws::String& GetSupportEmail() const { return m_supportEmail; }
    inline bool SupportEmailHasBeenSet() const { return m_supportEmailHasBeenSet; }
    template<typename SupportEmailT = Aws::String>
    void SetSupportEmail(SupportEmailT&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = std::forward<SupportEmailT>(value); }
    template<typename SupportEmailT = Aws::String>
    CreateProductRequest& WithSupportEmail(SupportEmailT&& value) { SetSupportEmail(std::forward<SupportEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact URL for product support.</p> <p> <code>^https?:\/\// </code>/ is
     * the pattern used to validate SupportUrl.</p>
     */
    inline const Aws::String& GetSupportUrl() const { return m_supportUrl; }
    inline bool SupportUrlHasBeenSet() const { return m_supportUrlHasBeenSet; }
    template<typename SupportUrlT = Aws::String>
    void SetSupportUrl(SupportUrlT&& value) { m_supportUrlHasBeenSet = true; m_supportUrl = std::forward<SupportUrlT>(value); }
    template<typename SupportUrlT = Aws::String>
    CreateProductRequest& WithSupportUrl(SupportUrlT&& value) { SetSupportUrl(std::forward<SupportUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of product.</p>
     */
    inline ProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(ProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline CreateProductRequest& WithProductType(ProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateProductRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateProductRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the provisioning artifact. </p>
     */
    inline const ProvisioningArtifactProperties& GetProvisioningArtifactParameters() const { return m_provisioningArtifactParameters; }
    inline bool ProvisioningArtifactParametersHasBeenSet() const { return m_provisioningArtifactParametersHasBeenSet; }
    template<typename ProvisioningArtifactParametersT = ProvisioningArtifactProperties>
    void SetProvisioningArtifactParameters(ProvisioningArtifactParametersT&& value) { m_provisioningArtifactParametersHasBeenSet = true; m_provisioningArtifactParameters = std::forward<ProvisioningArtifactParametersT>(value); }
    template<typename ProvisioningArtifactParametersT = ProvisioningArtifactProperties>
    CreateProductRequest& WithProvisioningArtifactParameters(ProvisioningArtifactParametersT&& value) { SetProvisioningArtifactParameters(std::forward<ProvisioningArtifactParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateProductRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
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
    inline const SourceConnection& GetSourceConnection() const { return m_sourceConnection; }
    inline bool SourceConnectionHasBeenSet() const { return m_sourceConnectionHasBeenSet; }
    template<typename SourceConnectionT = SourceConnection>
    void SetSourceConnection(SourceConnectionT&& value) { m_sourceConnectionHasBeenSet = true; m_sourceConnection = std::forward<SourceConnectionT>(value); }
    template<typename SourceConnectionT = SourceConnection>
    CreateProductRequest& WithSourceConnection(SourceConnectionT&& value) { SetSourceConnection(std::forward<SourceConnectionT>(value)); return *this;}
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

    ProductType m_productType{ProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ProvisioningArtifactProperties m_provisioningArtifactParameters;
    bool m_provisioningArtifactParametersHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;

    SourceConnection m_sourceConnection;
    bool m_sourceConnectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
