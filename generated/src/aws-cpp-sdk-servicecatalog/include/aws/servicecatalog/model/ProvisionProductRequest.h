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


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ProvisionProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ProvisionProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ProvisionProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>The name of the product. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithProductName(const char* value) { SetProductName(value); return *this;}


    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact. You must provide the name or ID,
     * but not both.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const{ return m_provisioningArtifactName; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(const Aws::String& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = value; }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(Aws::String&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::move(value); }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline void SetProvisioningArtifactName(const char* value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName.assign(value); }

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactName(const Aws::String& value) { SetProvisioningArtifactName(value); return *this;}

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactName(Aws::String&& value) { SetProvisioningArtifactName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning artifact. You must provide the name or ID, but
     * not both.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactName(const char* value) { SetProvisioningArtifactName(value); return *this;}


    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>. You must provide the name or
     * ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithPathId(const char* value) { SetPathId(value); return *this;}


    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline const Aws::String& GetPathName() const{ return m_pathName; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline bool PathNameHasBeenSet() const { return m_pathNameHasBeenSet; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(const Aws::String& value) { m_pathNameHasBeenSet = true; m_pathName = value; }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(Aws::String&& value) { m_pathNameHasBeenSet = true; m_pathName = std::move(value); }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline void SetPathName(const char* value) { m_pathNameHasBeenSet = true; m_pathName.assign(value); }

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithPathName(const Aws::String& value) { SetPathName(value); return *this;}

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithPathName(Aws::String&& value) { SetPathName(std::move(value)); return *this;}

    /**
     * <p>The name of the path. You must provide the name or ID, but not both.</p>
     */
    inline ProvisionProductRequest& WithPathName(const char* value) { SetPathName(value); return *this;}


    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }

    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }

    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline ProvisionProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline ProvisionProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline ProvisionProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}


    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline const Aws::Vector<ProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline void SetProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline void SetProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::move(value); }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionProductRequest& WithProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionProductRequest& WithProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { SetProvisioningParameters(std::move(value)); return *this;}

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionProductRequest& AddProvisioningParameters(const ProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionProductRequest& AddProvisioningParameters(ProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline const ProvisioningPreferences& GetProvisioningPreferences() const{ return m_provisioningPreferences; }

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline bool ProvisioningPreferencesHasBeenSet() const { return m_provisioningPreferencesHasBeenSet; }

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline void SetProvisioningPreferences(const ProvisioningPreferences& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = value; }

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline void SetProvisioningPreferences(ProvisioningPreferences&& value) { m_provisioningPreferencesHasBeenSet = true; m_provisioningPreferences = std::move(value); }

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline ProvisionProductRequest& WithProvisioningPreferences(const ProvisioningPreferences& value) { SetProvisioningPreferences(value); return *this;}

    /**
     * <p>An object that contains information about the provisioning preferences for a
     * stack set.</p>
     */
    inline ProvisionProductRequest& WithProvisioningPreferences(ProvisioningPreferences&& value) { SetProvisioningPreferences(std::move(value)); return *this;}


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline ProvisionProductRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline ProvisionProductRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline ProvisionProductRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline ProvisionProductRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const{ return m_notificationArns; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline void SetNotificationArns(const Aws::Vector<Aws::String>& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = value; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline void SetNotificationArns(Aws::Vector<Aws::String>&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::move(value); }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& WithNotificationArns(const Aws::Vector<Aws::String>& value) { SetNotificationArns(value); return *this;}

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& WithNotificationArns(Aws::Vector<Aws::String>&& value) { SetNotificationArns(std::move(value)); return *this;}

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& AddNotificationArns(const Aws::String& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& AddNotificationArns(Aws::String&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& AddNotificationArns(const char* value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }


    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline const Aws::String& GetProvisionToken() const{ return m_provisionToken; }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline bool ProvisionTokenHasBeenSet() const { return m_provisionTokenHasBeenSet; }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline void SetProvisionToken(const Aws::String& value) { m_provisionTokenHasBeenSet = true; m_provisionToken = value; }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline void SetProvisionToken(Aws::String&& value) { m_provisionTokenHasBeenSet = true; m_provisionToken = std::move(value); }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline void SetProvisionToken(const char* value) { m_provisionTokenHasBeenSet = true; m_provisionToken.assign(value); }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline ProvisionProductRequest& WithProvisionToken(const Aws::String& value) { SetProvisionToken(value); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline ProvisionProductRequest& WithProvisionToken(Aws::String&& value) { SetProvisionToken(std::move(value)); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request.</p>
     */
    inline ProvisionProductRequest& WithProvisionToken(const char* value) { SetProvisionToken(value); return *this;}

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
