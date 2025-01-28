/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/model/AwsSubmission.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/Tag.h>
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
  class StartEngagementFromOpportunityTaskRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API StartEngagementFromOpportunityTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartEngagementFromOpportunityTask"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const AwsSubmission& GetAwsSubmission() const{ return m_awsSubmission; }
    inline bool AwsSubmissionHasBeenSet() const { return m_awsSubmissionHasBeenSet; }
    inline void SetAwsSubmission(const AwsSubmission& value) { m_awsSubmissionHasBeenSet = true; m_awsSubmission = value; }
    inline void SetAwsSubmission(AwsSubmission&& value) { m_awsSubmissionHasBeenSet = true; m_awsSubmission = std::move(value); }
    inline StartEngagementFromOpportunityTaskRequest& WithAwsSubmission(const AwsSubmission& value) { SetAwsSubmission(value); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& WithAwsSubmission(AwsSubmission&& value) { SetAwsSubmission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the catalog in which the engagement is tracked. Acceptable values
     * include <code>AWS</code> for production and <code>Sandbox</code> for testing
     * environments.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline StartEngagementFromOpportunityTaskRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token provided by the client to help ensure the idempotency of the
     * request. It helps prevent the same task from being performed multiple times.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartEngagementFromOpportunityTaskRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the opportunity from which the engagement task is to
     * be initiated. This helps ensure that the task is applied to the correct
     * opportunity.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline StartEngagementFromOpportunityTaskRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects specifying each tag name and value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartEngagementFromOpportunityTaskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartEngagementFromOpportunityTaskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StartEngagementFromOpportunityTaskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AwsSubmission m_awsSubmission;
    bool m_awsSubmissionHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
