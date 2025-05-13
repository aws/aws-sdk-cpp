/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ProvisioningPreferences.h>
#include <aws/servicecatalog/model/ProvisioningParameter.h>
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
  class ProvisionProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ProvisionProductRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionProduct"; }

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
    ProvisionProductRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    ProvisionProductRequest& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    ProvisionProductRequest& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    ProvisionProductRequest& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const { return m_provisioningArtifactName; }
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }
    template<typename ProvisioningArtifactNameT = Aws::String>
    void SetProvisioningArtifactName(ProvisioningArtifactNameT&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::forward<ProvisioningArtifactNameT>(value); }
    template<typename ProvisioningArtifactNameT = Aws::String>
    ProvisionProductRequest& WithProvisioningArtifactName(ProvisioningArtifactNameT&& value) { SetProvisioningArtifactName(std::forward<ProvisioningArtifactNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline const Aws::String& GetPathId() const { return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    template<typename PathIdT = Aws::String>
    void SetPathId(PathIdT&& value) { m_pathIdHasBeenSet = true; m_pathId = std::forward<PathIdT>(value); }
    template<typename PathIdT = Aws::String>
    ProvisionProductRequest& WithPathId(PathIdT&& value) { SetPathId(std::forward<PathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetPathName() const { return m_pathName; }
    inline bool PathNameHasBeenSet() const { return m_pathNameHasBeenSet; }
    template<typename PathNameT = Aws::String>
    void SetPathName(PathNameT&& value) { m_pathNameHasBeenSet = true; m_pathName = std::forward<PathNameT>(value); }
    template<typename PathNameT = Aws::String>
    ProvisionProductRequest& WithPathName(PathNameT&& value) { SetPathName(std::forward<PathNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const { return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    template<typename ProvisionedProductNameT = Aws::String>
    void SetProvisionedProductName(ProvisionedProductNameT&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::forward<ProvisionedProductNameT>(value); }
    template<typename ProvisionedProductNameT = Aws::String>
    ProvisionProductRequest& WithProvisionedProductName(ProvisionedProductNameT&& value) { SetProvisionedProductName(std::forward<ProvisionedProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline const Aws::Vector<ProvisioningParameter>& GetProvisioningParameters() const { return m_provisioningParameters; }
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }
    template<typename ProvisioningParametersT = Aws::Vector<ProvisioningParameter>>
    void SetProvisioningParameters(ProvisioningParametersT&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::forward<ProvisioningParametersT>(value); }
    template<typename ProvisioningParametersT = Aws::Vector<ProvisioningParameter>>
    ProvisionProductRequest& WithProvisioningParameters(ProvisioningParametersT&& value) { SetProvisioningParameters(std::forward<ProvisioningParametersT>(value)); return *this;}
    template<typename ProvisioningParametersT = ProvisioningParameter>
    ProvisionProductRequest& AddProvisioningParameters(ProvisioningParametersT&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.emplace_back(std::forward<ProvisioningParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline const ProvisioningPreferences& GetProvisioningPreferences() const { return m_provisioningPreferences; }
    inline bool ProvisioningPreferencesHasBeenSet() const { return m_provisioningPreferencesHasBeenSet; }
    template<typename ProvisioningPreferencesT = ProvisioningPreferences>
    void SetProvisioningPreferences(ProvisioningPreferencesT&& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = std::forward<ProvisioningPreferencesT>(value); }
    template<typename ProvisioningPreferencesT = ProvisioningPreferences>
    ProvisionProductRequest& WithProvisioningPreferences(ProvisioningPreferencesT&& value) { SetProvisioningPreferences(std::forward<ProvisioningPreferencesT>(value)); return *this;}
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
    ProvisionProductRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ProvisionProductRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const { return m_notificationArns; }
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }
    template<typename NotificationArnsT = Aws::Vector<Aws::String>>
    void SetNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::forward<NotificationArnsT>(value); }
    template<typename NotificationArnsT = Aws::Vector<Aws::String>>
    ProvisionProductRequest& WithNotificationArns(NotificationArnsT&& value) { SetNotificationArns(std::forward<NotificationArnsT>(value)); return *this;}
    template<typename NotificationArnsT = Aws::String>
    ProvisionProductRequest& AddNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.emplace_back(std::forward<NotificationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline const Aws::String& GetProvisionToken() const { return m_provisionToken; }
    inline bool ProvisionTokenHasBeenSet() const { return m_provisionTokenHasBeenSet; }
    template<typename ProvisionTokenT = Aws::String>
    void SetProvisionToken(ProvisionTokenT&& value) { m_provisionTokenHasBeenSet = true; m_provisionToken = std::forward<ProvisionTokenT>(value); }
    template<typename ProvisionTokenT = Aws::String>
    ProvisionProductRequest& WithProvisionToken(ProvisionTokenT&& value) { SetProvisionToken(std::forward<ProvisionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

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

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::Vector<ProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet = false;

    ProvisioningPreferences m_provisioningPreferences;
    bool m_provisioningPreferencesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationArns;
    bool m_notificationArnsHasBeenSet = false;

    Aws::String m_provisionToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_provisionTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
