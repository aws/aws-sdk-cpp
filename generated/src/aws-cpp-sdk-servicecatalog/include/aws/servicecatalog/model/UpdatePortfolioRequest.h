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
    AWS_SERVICECATALOG_API UpdatePortfolioRequest() = default;

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
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    UpdatePortfolioRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdatePortfolioRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to use for display purposes.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdatePortfolioRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the portfolio.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePortfolioRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name of the portfolio provider.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    UpdatePortfolioRequest& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add.</p>
     */
    inline const Aws::Vector<Tag>& GetAddTags() const { return m_addTags; }
    inline bool AddTagsHasBeenSet() const { return m_addTagsHasBeenSet; }
    template<typename AddTagsT = Aws::Vector<Tag>>
    void SetAddTags(AddTagsT&& value) { m_addTagsHasBeenSet = true; m_addTags = std::forward<AddTagsT>(value); }
    template<typename AddTagsT = Aws::Vector<Tag>>
    UpdatePortfolioRequest& WithAddTags(AddTagsT&& value) { SetAddTags(std::forward<AddTagsT>(value)); return *this;}
    template<typename AddTagsT = Tag>
    UpdatePortfolioRequest& AddAddTags(AddTagsT&& value) { m_addTagsHasBeenSet = true; m_addTags.emplace_back(std::forward<AddTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTags() const { return m_removeTags; }
    inline bool RemoveTagsHasBeenSet() const { return m_removeTagsHasBeenSet; }
    template<typename RemoveTagsT = Aws::Vector<Aws::String>>
    void SetRemoveTags(RemoveTagsT&& value) { m_removeTagsHasBeenSet = true; m_removeTags = std::forward<RemoveTagsT>(value); }
    template<typename RemoveTagsT = Aws::Vector<Aws::String>>
    UpdatePortfolioRequest& WithRemoveTags(RemoveTagsT&& value) { SetRemoveTags(std::forward<RemoveTagsT>(value)); return *this;}
    template<typename RemoveTagsT = Aws::String>
    UpdatePortfolioRequest& AddRemoveTags(RemoveTagsT&& value) { m_removeTagsHasBeenSet = true; m_removeTags.emplace_back(std::forward<RemoveTagsT>(value)); return *this; }
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
