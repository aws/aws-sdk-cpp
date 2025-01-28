/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/EngagementContextDetails.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class CreateEngagementRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CreateEngagementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEngagement"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>CreateEngagementRequest$Catalog</code> parameter specifies the
     * catalog related to the engagement. Accepted values are <code>AWS</code> and
     * <code>Sandbox</code>, which determine the environment in which the engagement is
     * managed.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline CreateEngagementRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline CreateEngagementRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline CreateEngagementRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CreateEngagementRequest$ClientToken</code> parameter specifies a
     * unique, case-sensitive identifier to ensure that the request is handled exactly
     * once. The value must not exceed sixty-four alphanumeric characters.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateEngagementRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateEngagementRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateEngagementRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Contexts</code> field is a required array of objects, with a
     * maximum of 5 contexts allowed, specifying detailed information about customer
     * projects associated with the Engagement. Each context object contains a
     * <code>Type</code> field indicating the context type, which must be
     * <code>CustomerProject</code> in this version, and a <code>Payload</code> field
     * containing the <code>CustomerProject</code> details. The
     * <code>CustomerProject</code> object is composed of two main components:
     * <code>Customer</code> and <code>Project</code>. The <code>Customer</code> object
     * includes information such as <code>CompanyName</code>, <code>WebsiteUrl</code>,
     * <code>Industry</code>, and <code>CountryCode</code>, providing essential details
     * about the customer. The <code>Project</code> object contains <code>Title</code>,
     * <code>BusinessProblem</code>, and <code>TargetCompletionDate</code>, offering
     * insights into the specific project associated with the customer. This structure
     * allows comprehensive context to be included within the Engagement, facilitating
     * effective collaboration between parties by providing relevant customer and
     * project information.</p>
     */
    inline const Aws::Vector<EngagementContextDetails>& GetContexts() const{ return m_contexts; }
    inline bool ContextsHasBeenSet() const { return m_contextsHasBeenSet; }
    inline void SetContexts(const Aws::Vector<EngagementContextDetails>& value) { m_contextsHasBeenSet = true; m_contexts = value; }
    inline void SetContexts(Aws::Vector<EngagementContextDetails>&& value) { m_contextsHasBeenSet = true; m_contexts = std::move(value); }
    inline CreateEngagementRequest& WithContexts(const Aws::Vector<EngagementContextDetails>& value) { SetContexts(value); return *this;}
    inline CreateEngagementRequest& WithContexts(Aws::Vector<EngagementContextDetails>&& value) { SetContexts(std::move(value)); return *this;}
    inline CreateEngagementRequest& AddContexts(const EngagementContextDetails& value) { m_contextsHasBeenSet = true; m_contexts.push_back(value); return *this; }
    inline CreateEngagementRequest& AddContexts(EngagementContextDetails&& value) { m_contextsHasBeenSet = true; m_contexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a description of the <code>Engagement</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEngagementRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEngagementRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEngagementRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the title of the <code>Engagement</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline CreateEngagementRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline CreateEngagementRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline CreateEngagementRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<EngagementContextDetails> m_contexts;
    bool m_contextsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
