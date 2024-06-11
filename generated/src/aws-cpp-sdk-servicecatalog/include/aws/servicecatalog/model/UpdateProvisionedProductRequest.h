/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/UpdateProvisioningPreferences.h>
#include <aws/servicecatalog/model/UpdateProvisioningParameter.h>
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
  class UpdateProvisionedProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API UpdateProvisionedProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisionedProduct"; }

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
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioned product. You cannot specify both
     * <code>ProvisionedProductName</code> and <code>ProvisionedProductId</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioned product. You must provide the name or ID,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::move(value); }
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the product. You must provide the name or ID, but not
     * both.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline UpdateProvisionedProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline UpdateProvisionedProductRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }
    inline UpdateProvisionedProductRequest& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}
    inline UpdateProvisionedProductRequest& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithProductName(const char* value) { SetProductName(value); return *this;}
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
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const{ return m_provisioningArtifactName; }
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }
    inline void SetProvisioningArtifactName(const Aws::String& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = value; }
    inline void SetProvisioningArtifactName(Aws::String&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::move(value); }
    inline void SetProvisioningArtifactName(const char* value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName.assign(value); }
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactName(const Aws::String& value) { SetProvisioningArtifactName(value); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactName(Aws::String&& value) { SetProvisioningArtifactName(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisioningArtifactName(const char* value) { SetProvisioningArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier. This value is optional if the product has a default
     * path, and required if the product has more than one path. You must provide the
     * name or ID, but not both.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }
    inline UpdateProvisionedProductRequest& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}
    inline UpdateProvisionedProductRequest& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithPathId(const char* value) { SetPathId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetPathName() const{ return m_pathName; }
    inline bool PathNameHasBeenSet() const { return m_pathNameHasBeenSet; }
    inline void SetPathName(const Aws::String& value) { m_pathNameHasBeenSet = true; m_pathName = value; }
    inline void SetPathName(Aws::String&& value) { m_pathNameHasBeenSet = true; m_pathName = std::move(value); }
    inline void SetPathName(const char* value) { m_pathNameHasBeenSet = true; m_pathName.assign(value); }
    inline UpdateProvisionedProductRequest& WithPathName(const Aws::String& value) { SetPathName(value); return *this;}
    inline UpdateProvisionedProductRequest& WithPathName(Aws::String&& value) { SetPathName(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithPathName(const char* value) { SetPathName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new parameters.</p>
     */
    inline const Aws::Vector<UpdateProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }
    inline void SetProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }
    inline void SetProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::move(value); }
    inline UpdateProvisionedProductRequest& WithProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { SetProvisioningParameters(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& AddProvisioningParameters(const UpdateProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }
    inline UpdateProvisionedProductRequest& AddProvisioningParameters(UpdateProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline const UpdateProvisioningPreferences& GetProvisioningPreferences() const{ return m_provisioningPreferences; }
    inline bool ProvisioningPreferencesHasBeenSet() const { return m_provisioningPreferencesHasBeenSet; }
    inline void SetProvisioningPreferences(const UpdateProvisioningPreferences& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = value; }
    inline void SetProvisioningPreferences(UpdateProvisioningPreferences&& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = std::move(value); }
    inline UpdateProvisionedProductRequest& WithProvisioningPreferences(const UpdateProvisioningPreferences& value) { SetProvisioningPreferences(value); return *this;}
    inline UpdateProvisionedProductRequest& WithProvisioningPreferences(UpdateProvisioningPreferences&& value) { SetProvisioningPreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags. Requires the product to have <code>RESOURCE_UPDATE</code>
     * constraint with <code>TagUpdatesOnProvisionedProduct</code> set to
     * <code>ALLOWED</code> to allow tag updates.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline UpdateProvisionedProductRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline UpdateProvisionedProductRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline UpdateProvisionedProductRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The idempotency token that uniquely identifies the provisioning update
     * request.</p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }
    inline UpdateProvisionedProductRequest& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}
    inline UpdateProvisionedProductRequest& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}
    inline UpdateProvisionedProductRequest& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_provisioningArtifactName;
    bool m_provisioningArtifactNameHasBeenSet = false;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet = false;

    Aws::String m_pathName;
    bool m_pathNameHasBeenSet = false;

    Aws::Vector<UpdateProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet = false;

    UpdateProvisioningPreferences m_provisioningPreferences;
    bool m_provisioningPreferencesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
