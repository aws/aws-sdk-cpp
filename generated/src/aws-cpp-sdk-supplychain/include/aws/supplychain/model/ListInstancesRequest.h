/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supplychain/model/InstanceState.h>
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
   * <p>The request parameters for ListInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListInstancesRequest">AWS
   * API Reference</a></p>
   */
  class ListInstancesRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API ListInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInstances"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;

    AWS_SUPPLYCHAIN_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The pagination token to fetch the next page of instances.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the maximum number of instances to fetch in this paginated
     * request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter to ListInstances based on their names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNameFilter() const{ return m_instanceNameFilter; }
    inline bool InstanceNameFilterHasBeenSet() const { return m_instanceNameFilterHasBeenSet; }
    inline void SetInstanceNameFilter(const Aws::Vector<Aws::String>& value) { m_instanceNameFilterHasBeenSet = true; m_instanceNameFilter = value; }
    inline void SetInstanceNameFilter(Aws::Vector<Aws::String>&& value) { m_instanceNameFilterHasBeenSet = true; m_instanceNameFilter = std::move(value); }
    inline ListInstancesRequest& WithInstanceNameFilter(const Aws::Vector<Aws::String>& value) { SetInstanceNameFilter(value); return *this;}
    inline ListInstancesRequest& WithInstanceNameFilter(Aws::Vector<Aws::String>&& value) { SetInstanceNameFilter(std::move(value)); return *this;}
    inline ListInstancesRequest& AddInstanceNameFilter(const Aws::String& value) { m_instanceNameFilterHasBeenSet = true; m_instanceNameFilter.push_back(value); return *this; }
    inline ListInstancesRequest& AddInstanceNameFilter(Aws::String&& value) { m_instanceNameFilterHasBeenSet = true; m_instanceNameFilter.push_back(std::move(value)); return *this; }
    inline ListInstancesRequest& AddInstanceNameFilter(const char* value) { m_instanceNameFilterHasBeenSet = true; m_instanceNameFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filter to ListInstances based on their state.</p>
     */
    inline const Aws::Vector<InstanceState>& GetInstanceStateFilter() const{ return m_instanceStateFilter; }
    inline bool InstanceStateFilterHasBeenSet() const { return m_instanceStateFilterHasBeenSet; }
    inline void SetInstanceStateFilter(const Aws::Vector<InstanceState>& value) { m_instanceStateFilterHasBeenSet = true; m_instanceStateFilter = value; }
    inline void SetInstanceStateFilter(Aws::Vector<InstanceState>&& value) { m_instanceStateFilterHasBeenSet = true; m_instanceStateFilter = std::move(value); }
    inline ListInstancesRequest& WithInstanceStateFilter(const Aws::Vector<InstanceState>& value) { SetInstanceStateFilter(value); return *this;}
    inline ListInstancesRequest& WithInstanceStateFilter(Aws::Vector<InstanceState>&& value) { SetInstanceStateFilter(std::move(value)); return *this;}
    inline ListInstancesRequest& AddInstanceStateFilter(const InstanceState& value) { m_instanceStateFilterHasBeenSet = true; m_instanceStateFilter.push_back(value); return *this; }
    inline ListInstancesRequest& AddInstanceStateFilter(InstanceState&& value) { m_instanceStateFilterHasBeenSet = true; m_instanceStateFilter.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceNameFilter;
    bool m_instanceNameFilterHasBeenSet = false;

    Aws::Vector<InstanceState> m_instanceStateFilter;
    bool m_instanceStateFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
