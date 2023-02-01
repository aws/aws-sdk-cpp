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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class CreatePortfolioRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API CreatePortfolioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePortfolio"; }

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
    inline CreatePortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreatePortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreatePortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The name to use for display purposes.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline CreatePortfolioRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline CreatePortfolioRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name to use for display purposes.</p>
     */
    inline CreatePortfolioRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The description of the portfolio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the portfolio.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the portfolio.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the portfolio.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the portfolio.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the portfolio.</p>
     */
    inline CreatePortfolioRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the portfolio.</p>
     */
    inline CreatePortfolioRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the portfolio.</p>
     */
    inline CreatePortfolioRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the portfolio provider.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The name of the portfolio provider.</p>
     */
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }

    /**
     * <p>The name of the portfolio provider.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The name of the portfolio provider.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * <p>The name of the portfolio provider.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The name of the portfolio provider.</p>
     */
    inline CreatePortfolioRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the portfolio provider.</p>
     */
    inline CreatePortfolioRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the portfolio provider.</p>
     */
    inline CreatePortfolioRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}


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
    inline CreatePortfolioRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreatePortfolioRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreatePortfolioRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreatePortfolioRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreatePortfolioRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreatePortfolioRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreatePortfolioRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
