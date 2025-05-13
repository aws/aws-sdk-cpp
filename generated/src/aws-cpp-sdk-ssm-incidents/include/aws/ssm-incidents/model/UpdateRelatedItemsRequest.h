/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/RelatedItemsUpdate.h>
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
  class UpdateRelatedItemsRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API UpdateRelatedItemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRelatedItems"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A token that ensures that a client calls the operation only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateRelatedItemsRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident record that contains the
     * related items that you update.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const { return m_incidentRecordArn; }
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }
    template<typename IncidentRecordArnT = Aws::String>
    void SetIncidentRecordArn(IncidentRecordArnT&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::forward<IncidentRecordArnT>(value); }
    template<typename IncidentRecordArnT = Aws::String>
    UpdateRelatedItemsRequest& WithIncidentRecordArn(IncidentRecordArnT&& value) { SetIncidentRecordArn(std::forward<IncidentRecordArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the item that you are add to, or delete from, an incident.</p>
     */
    inline const RelatedItemsUpdate& GetRelatedItemsUpdate() const { return m_relatedItemsUpdate; }
    inline bool RelatedItemsUpdateHasBeenSet() const { return m_relatedItemsUpdateHasBeenSet; }
    template<typename RelatedItemsUpdateT = RelatedItemsUpdate>
    void SetRelatedItemsUpdate(RelatedItemsUpdateT&& value) { m_relatedItemsUpdateHasBeenSet = true; m_relatedItemsUpdate = std::forward<RelatedItemsUpdateT>(value); }
    template<typename RelatedItemsUpdateT = RelatedItemsUpdate>
    UpdateRelatedItemsRequest& WithRelatedItemsUpdate(RelatedItemsUpdateT&& value) { SetRelatedItemsUpdate(std::forward<RelatedItemsUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;

    RelatedItemsUpdate m_relatedItemsUpdate;
    bool m_relatedItemsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
