/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/TriggerDetails.h>
#include <aws/ssm-incidents/model/RelatedItem.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class StartIncidentRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API StartIncidentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartIncident"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartIncidentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartIncidentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartIncidentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the impact to the customers. Providing an impact overwrites the
     * impact provided by a response plan.</p> <p class="title"> <b>Supported impact
     * codes</b> </p> <ul> <li> <p> <code>1</code> - Critical</p> </li> <li> <p>
     * <code>2</code> - High</p> </li> <li> <p> <code>3</code> - Medium</p> </li> <li>
     * <p> <code>4</code> - Low</p> </li> <li> <p> <code>5</code> - No Impact</p> </li>
     * </ul>
     */
    inline int GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }
    inline StartIncidentRequest& WithImpact(int value) { SetImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Add related items to the incident for other responders to use. Related items
     * are Amazon Web Services resources, external links, or files uploaded to an
     * Amazon S3 bucket. </p>
     */
    inline const Aws::Vector<RelatedItem>& GetRelatedItems() const{ return m_relatedItems; }
    inline bool RelatedItemsHasBeenSet() const { return m_relatedItemsHasBeenSet; }
    inline void SetRelatedItems(const Aws::Vector<RelatedItem>& value) { m_relatedItemsHasBeenSet = true; m_relatedItems = value; }
    inline void SetRelatedItems(Aws::Vector<RelatedItem>&& value) { m_relatedItemsHasBeenSet = true; m_relatedItems = std::move(value); }
    inline StartIncidentRequest& WithRelatedItems(const Aws::Vector<RelatedItem>& value) { SetRelatedItems(value); return *this;}
    inline StartIncidentRequest& WithRelatedItems(Aws::Vector<RelatedItem>&& value) { SetRelatedItems(std::move(value)); return *this;}
    inline StartIncidentRequest& AddRelatedItems(const RelatedItem& value) { m_relatedItemsHasBeenSet = true; m_relatedItems.push_back(value); return *this; }
    inline StartIncidentRequest& AddRelatedItems(RelatedItem&& value) { m_relatedItemsHasBeenSet = true; m_relatedItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the response plan that pre-defines summary,
     * chat channels, Amazon SNS topics, runbooks, title, and impact of the incident.
     * </p>
     */
    inline const Aws::String& GetResponsePlanArn() const{ return m_responsePlanArn; }
    inline bool ResponsePlanArnHasBeenSet() const { return m_responsePlanArnHasBeenSet; }
    inline void SetResponsePlanArn(const Aws::String& value) { m_responsePlanArnHasBeenSet = true; m_responsePlanArn = value; }
    inline void SetResponsePlanArn(Aws::String&& value) { m_responsePlanArnHasBeenSet = true; m_responsePlanArn = std::move(value); }
    inline void SetResponsePlanArn(const char* value) { m_responsePlanArnHasBeenSet = true; m_responsePlanArn.assign(value); }
    inline StartIncidentRequest& WithResponsePlanArn(const Aws::String& value) { SetResponsePlanArn(value); return *this;}
    inline StartIncidentRequest& WithResponsePlanArn(Aws::String&& value) { SetResponsePlanArn(std::move(value)); return *this;}
    inline StartIncidentRequest& WithResponsePlanArn(const char* value) { SetResponsePlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide a title for the incident. Providing a title overwrites the title
     * provided by the response plan. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline StartIncidentRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline StartIncidentRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline StartIncidentRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of what created the incident record in Incident Manager.</p>
     */
    inline const TriggerDetails& GetTriggerDetails() const{ return m_triggerDetails; }
    inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }
    inline void SetTriggerDetails(const TriggerDetails& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = value; }
    inline void SetTriggerDetails(TriggerDetails&& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = std::move(value); }
    inline StartIncidentRequest& WithTriggerDetails(const TriggerDetails& value) { SetTriggerDetails(value); return *this;}
    inline StartIncidentRequest& WithTriggerDetails(TriggerDetails&& value) { SetTriggerDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    int m_impact;
    bool m_impactHasBeenSet = false;

    Aws::Vector<RelatedItem> m_relatedItems;
    bool m_relatedItemsHasBeenSet = false;

    Aws::String m_responsePlanArn;
    bool m_responsePlanArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    TriggerDetails m_triggerDetails;
    bool m_triggerDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
