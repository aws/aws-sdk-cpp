/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdatePortfolioRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API UpdatePortfolioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePortfolio"; }

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
    inline UpdatePortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline UpdatePortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline UpdatePortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdatePortfolioRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdatePortfolioRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdatePortfolioRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to use for display purposes.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdatePortfolioRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdatePortfolioRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdatePortfolioRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the portfolio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdatePortfolioRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePortfolioRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePortfolioRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }
    inline UpdatePortfolioRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline UpdatePortfolioRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline UpdatePortfolioRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const{ return m_addTags; }
    inline bool AddTagsHasBeenSet() const { return m_addTagsHasBeenSet; }
    inline void SetAddTags(const Aws::Vector<Tag>& value) { m_addTagsHasBeenSet = true; m_addTags = value; }
    inline void SetAddTags(Aws::Vector<Tag>&& value) { m_addTagsHasBeenSet = true; m_addTags = std::move(value); }
    inline UpdatePortfolioRequest& WithAddTags(const Aws::Vector<Tag>& value) { SetAddTags(value); return *this;}
    inline UpdatePortfolioRequest& WithAddTags(Aws::Vector<Tag>&& value) { SetAddTags(std::move(value)); return *this;}
    inline UpdatePortfolioRequest& AddAddTags(const Tag& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(value); return *this; }
    inline UpdatePortfolioRequest& AddAddTags(Tag&& value) { m_addTagsHasBeenSet = true; m_addTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTags() const{ return m_removeTags; }
    inline bool RemoveTagsHasBeenSet() const { return m_removeTagsHasBeenSet; }
    inline void SetRemoveTags(const Aws::Vector<Aws::String>& value) { m_removeTagsHasBeenSet = true; m_removeTags = value; }
    inline void SetRemoveTags(Aws::Vector<Aws::String>&& value) { m_removeTagsHasBeenSet = true; m_removeTags = std::move(value); }
    inline UpdatePortfolioRequest& WithRemoveTags(const Aws::Vector<Aws::String>& value) { SetRemoveTags(value); return *this;}
    inline UpdatePortfolioRequest& WithRemoveTags(Aws::Vector<Aws::String>&& value) { SetRemoveTags(std::move(value)); return *this;}
    inline UpdatePortfolioRequest& AddRemoveTags(const Aws::String& value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }
    inline UpdatePortfolioRequest& AddRemoveTags(Aws::String&& value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(std::move(value)); return *this; }
    inline UpdatePortfolioRequest& AddRemoveTags(const char* value) { m_removeTagsHasBeenSet = true; m_removeTags.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::Vector<Tag> m_addTags;
    bool m_addTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeTags;
    bool m_removeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
