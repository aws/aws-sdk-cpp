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
    AWS_SSMINCIDENTS_API StartIncidentRequest() = default;

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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartIncidentRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    inline int GetImpact() const { return m_impact; }
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
    inline const Aws::Vector<RelatedItem>& GetRelatedItems() const { return m_relatedItems; }
    inline bool RelatedItemsHasBeenSet() const { return m_relatedItemsHasBeenSet; }
    template<typename RelatedItemsT = Aws::Vector<RelatedItem>>
    void SetRelatedItems(RelatedItemsT&& value) { m_relatedItemsHasBeenSet = true; m_relatedItems = std::forward<RelatedItemsT>(value); }
    template<typename RelatedItemsT = Aws::Vector<RelatedItem>>
    StartIncidentRequest& WithRelatedItems(RelatedItemsT&& value) { SetRelatedItems(std::forward<RelatedItemsT>(value)); return *this;}
    template<typename RelatedItemsT = RelatedItem>
    StartIncidentRequest& AddRelatedItems(RelatedItemsT&& value) { m_relatedItemsHasBeenSet = true; m_relatedItems.emplace_back(std::forward<RelatedItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the response plan that pre-defines summary,
     * chat channels, Amazon SNS topics, runbooks, title, and impact of the incident.
     * </p>
     */
    inline const Aws::String& GetResponsePlanArn() const { return m_responsePlanArn; }
    inline bool ResponsePlanArnHasBeenSet() const { return m_responsePlanArnHasBeenSet; }
    template<typename ResponsePlanArnT = Aws::String>
    void SetResponsePlanArn(ResponsePlanArnT&& value) { m_responsePlanArnHasBeenSet = true; m_responsePlanArn = std::forward<ResponsePlanArnT>(value); }
    template<typename ResponsePlanArnT = Aws::String>
    StartIncidentRequest& WithResponsePlanArn(ResponsePlanArnT&& value) { SetResponsePlanArn(std::forward<ResponsePlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide a title for the incident. Providing a title overwrites the title
     * provided by the response plan. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    StartIncidentRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of what created the incident record in Incident Manager.</p>
     */
    inline const TriggerDetails& GetTriggerDetails() const { return m_triggerDetails; }
    inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }
    template<typename TriggerDetailsT = TriggerDetails>
    void SetTriggerDetails(TriggerDetailsT&& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = std::forward<TriggerDetailsT>(value); }
    template<typename TriggerDetailsT = TriggerDetails>
    StartIncidentRequest& WithTriggerDetails(TriggerDetailsT&& value) { SetTriggerDetails(std::forward<TriggerDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    int m_impact{0};
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
