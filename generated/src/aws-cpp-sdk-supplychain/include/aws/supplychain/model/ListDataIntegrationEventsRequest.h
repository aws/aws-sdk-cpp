/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationEventType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for ListDataIntegrationEvents.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataIntegrationEventsRequest">AWS
   * API Reference</a></p>
   */
  class ListDataIntegrationEventsRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API ListDataIntegrationEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataIntegrationEvents"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;

    AWS_SUPPLYCHAIN_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ListDataIntegrationEventsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List data integration events for the specified eventType.</p>
     */
    inline DataIntegrationEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(DataIntegrationEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline ListDataIntegrationEventsRequest& WithEventType(DataIntegrationEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to fetch the next page of the data integration
     * events.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataIntegrationEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the maximum number of data integration events to fetch in one
     * paginated request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDataIntegrationEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    DataIntegrationEventType m_eventType{DataIntegrationEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
