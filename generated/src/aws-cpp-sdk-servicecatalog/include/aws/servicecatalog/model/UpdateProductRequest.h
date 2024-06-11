/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/SourceConnection.h>
#include <aws/servicecatalog/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class UpdateProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API UpdateProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProduct"; }

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
    inline UpdateProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline UpdateProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline UpdateProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateProductRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateProductRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateProductRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated product name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateProductRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateProductRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateProductRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated owner of the product.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline UpdateProductRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline UpdateProductRequest& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline UpdateProductRequest& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the product.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateProductRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateProductRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateProductRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated distributor of the product.</p>
     */
    inline const Aws::String& GetDistributor() const{ return m_distributor; }
    inline bool DistributorHasBeenSet() const { return m_distributorHasBeenSet; }
    inline void SetDistributor(const Aws::String& value) { m_distributorHasBeenSet = true; m_distributor = value; }
    inline void SetDistributor(Aws::String&& value) { m_distributorHasBeenSet = true; m_distributor = std::move(value); }
    inline void SetDistributor(const char* value) { m_distributorHasBeenSet = true; m_distributor.assign(value); }
    inline UpdateProductRequest& WithDistributor(const Aws::String& value) { SetDistributor(value); return *this;}
    inline UpdateProductRequest& WithDistributor(Aws::String&& value) { SetDistributor(std::move(value)); return *this;}
    inline UpdateProductRequest& WithDistributor(const char* value) { SetDistributor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated support description for the product.</p>
     */
    inline const Aws::String& GetSupportDescription() const{ return m_supportDescription; }
    inline bool SupportDescriptionHasBeenSet() const { return m_supportDescriptionHasBeenSet; }
    inline void SetSupportDescription(const Aws::String& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = value; }
    inline void SetSupportDescription(Aws::String&& value) { m_supportDescriptionHasBeenSet = true; m_supportDescription = std::move(value); }
    inline void SetSupportDescription(const char* value) { m_supportDescriptionHasBeenSet = true; m_supportDescription.assign(value); }
    inline UpdateProductRequest& WithSupportDescription(const Aws::String& value) { SetSupportDescription(value); return *this;}
    inline UpdateProductRequest& WithSupportDescription(Aws::String&& value) { SetSupportDescription(std::move(value)); return *this;}
    inline UpdateProductRequest& WithSupportDescription(const char* value) { SetSupportDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated support email for the product.</p>
     */
    inline const Aws::String& GetSupportEmail() const{ return m_supportEmail; }
    inline bool SupportEmailHasBeenSet() const { return m_supportEmailHasBeenSet; }
    inline void SetSupportEmail(const Aws::String& value) { m_supportEmailHasBeenSet = true; m_supportEmail = value; }
    inline void SetSupportEmail(Aws::String&& value) { m_supportEmailHasBeenSet = true; m_supportEmail = std::move(value); }
    inline void SetSupportEmail(const char* value) { m_supportEmailHasBeenSet = true; m_supportEmail.assign(value); }
    inline UpdateProductRequest& WithSupportEmail(const Aws::String& value) { SetSupportEmail(value); return *this;}
    inline UpdateProductRequest& WithSupportEmail(Aws::String&& value) { SetSupportEmail(std::move(value)); return *this;}
    inline UpdateProductRequest& WithSupportEmail(const char* value) { SetSupportEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated support URL for the product.</p>
     */
    inline const Aws::String& GetSupportUrl() const{ return m_supportUrl; }
    inline bool SupportUrlHasBeenSet() const { return m_supportUrlHasBeenSet; }
    inline void SetSupportUrl(const Aws::String& value) { m_supportUrlHasBeenSet = true; m_supportUrl = value; }
    inline void SetSupportUrl(Aws::String&& value) { m_supportUrlHasBeenSet = true; m_supportUrl = std::move(value); }
    inline void SetSupportUrl(const char* value) { m_supportUrlHasBeenSet = true; m_supportUrl.assign(value); }
    inline UpdateProductRequest& WithSupportUrl(const Aws::String& value) { SetSupportUrl(value); return *this;}
    inline UpdateProductRequest& WithSupportUrl(Aws::String&& value) { SetSupportUrl(std::move(value)); return *this;}
    inline UpdateProductRequest& WithSupportUrl(const char* value) { SetSupportUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the product.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const{ return m_addTags; }
    inline bool AddTagsHasBeenSet() const { return m_addTagsHasBeenSet; }
    inline void SetAddTags(const Aws::Vector<Tag>& value) { m_addTagsHasBeenSet = true; m_addTags = value; }
    inline void SetAddTags(Aws::Vector<Tag>&& value) { m_addTagsHasBeenSet = true; m_addTags = std::move(value); }
    inline UpdateProductRequest& WithAddTags(const Aws::Vector<Tag>& value) { SetAddTags(value); return *this;}
    inline UpdateProductRequest& WithAddTags(Aws::Vector<Tag>&& value) { SetAddTags(std::move(value)); return *this;}
    inline UpdateProductRequest& AddAddTags(const Tag& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }
    inline UpdateProductRequest& AddAddTags(Tag&& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to remove from the product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTags() const{ return m_removeTags; }
    inline bool RemoveTagsHasBeenSet() const { return m_removeTagsHasBeenSet; }
    inline void SetRemoveTags(const Aws::Vector<Aws::String>& value) { m_removeTagsHasBeenSet = true; m_removeTags = value; }
    inline void SetRemoveTags(Aws::Vector<Aws::String>&& value) { m_removeTagsHasBeenSet = true; m_removeTags = std::move(value); }
    inline UpdateProductRequest& WithRemoveTags(const Aws::Vector<Aws::String>& value) { SetRemoveTags(value); return *this;}
    inline UpdateProductRequest& WithRemoveTags(Aws::Vector<Aws::String>&& value) { SetRemoveTags(std::move(value)); return *this;}
    inline UpdateProductRequest& AddRemoveTags(const Aws::String& value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }
    inline UpdateProductRequest& AddRemoveTags(Aws::String&& value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(std::move(value)); return *this; }
    inline UpdateProductRequest& AddRemoveTags(const char* value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies connection details for the updated product and syncs the product to
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
    inline UpdateProductRequest& WithSourceConnection(const SourceConnection& value) { SetSourceConnection(value); return *this;}
    inline UpdateProductRequest& WithSourceConnection(SourceConnection&& value) { SetSourceConnection(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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

    Aws::Vector<Tag> m_addTags;
    bool m_addTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeTags;
    bool m_removeTagsHasBeenSet = false;

    SourceConnection m_sourceConnection;
    bool m_sourceConnectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
