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
    AWS_SERVICECATALOG_API ProvisionProductRequest();

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
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }
    inline ProvisionProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline ProvisionProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline ProvisionProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline ProvisionProductRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}
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
    inline ProvisionProductRequest& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}
    inline ProvisionProductRequest& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithProductName(const char* value) { SetProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }
    inline ProvisionProductRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline ProvisionProductRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
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
    inline ProvisionProductRequest& WithProvisioningArtifactName(const Aws::String& value) { SetProvisioningArtifactName(value); return *this;}
    inline ProvisionProductRequest& WithProvisioningArtifactName(Aws::String&& value) { SetProvisioningArtifactName(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithProvisioningArtifactName(const char* value) { SetProvisioningArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }
    inline ProvisionProductRequest& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}
    inline ProvisionProductRequest& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithPathId(const char* value) { SetPathId(value); return *this;}
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
    inline ProvisionProductRequest& WithPathName(const Aws::String& value) { SetPathName(value); return *this;}
    inline ProvisionProductRequest& WithPathName(Aws::String&& value) { SetPathName(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithPathName(const char* value) { SetPathName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }
    inline ProvisionProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}
    inline ProvisionProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline const Aws::Vector<ProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }
    inline void SetProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }
    inline void SetProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::move(value); }
    inline ProvisionProductRequest& WithProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}
    inline ProvisionProductRequest& WithProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { SetProvisioningParameters(std::move(value)); return *this;}
    inline ProvisionProductRequest& AddProvisioningParameters(const ProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }
    inline ProvisionProductRequest& AddProvisioningParameters(ProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline const ProvisioningPreferences& GetProvisioningPreferences() const{ return m_provisioningPreferences; }
    inline bool ProvisioningPreferencesHasBeenSet() const { return m_provisioningPreferencesHasBeenSet; }
    inline void SetProvisioningPreferences(const ProvisioningPreferences& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = value; }
    inline void SetProvisioningPreferences(ProvisioningPreferences&& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = std::move(value); }
    inline ProvisionProductRequest& WithProvisioningPreferences(const ProvisioningPreferences& value) { SetProvisioningPreferences(value); return *this;}
    inline ProvisionProductRequest& WithProvisioningPreferences(ProvisioningPreferences&& value) { SetProvisioningPreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ProvisionProductRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ProvisionProductRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ProvisionProductRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ProvisionProductRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const{ return m_notificationArns; }
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }
    inline void SetNotificationArns(const Aws::Vector<Aws::String>& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = value; }
    inline void SetNotificationArns(Aws::Vector<Aws::String>&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::move(value); }
    inline ProvisionProductRequest& WithNotificationArns(const Aws::Vector<Aws::String>& value) { SetNotificationArns(value); return *this;}
    inline ProvisionProductRequest& WithNotificationArns(Aws::Vector<Aws::String>&& value) { SetNotificationArns(std::move(value)); return *this;}
    inline ProvisionProductRequest& AddNotificationArns(const Aws::String& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }
    inline ProvisionProductRequest& AddNotificationArns(Aws::String&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(std::move(value)); return *this; }
    inline ProvisionProductRequest& AddNotificationArns(const char* value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline const Aws::String& GetProvisionToken() const{ return m_provisionToken; }
    inline bool ProvisionTokenHasBeenSet() const { return m_provisionTokenHasBeenSet; }
    inline void SetProvisionToken(const Aws::String& value) { m_provisionTokenHasBeenSet = true; m_provisionToken = value; }
    inline void SetProvisionToken(Aws::String&& value) { m_provisionTokenHasBeenSet = true; m_provisionToken = std::move(value); }
    inline void SetProvisionToken(const char* value) { m_provisionTokenHasBeenSet = true; m_provisionToken.assign(value); }
    inline ProvisionProductRequest& WithProvisionToken(const Aws::String& value) { SetProvisionToken(value); return *this;}
    inline ProvisionProductRequest& WithProvisionToken(Aws::String&& value) { SetProvisionToken(std::move(value)); return *this;}
    inline ProvisionProductRequest& WithProvisionToken(const char* value) { SetProvisionToken(value); return *this;}
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

    Aws::String m_provisionToken;
    bool m_provisionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
