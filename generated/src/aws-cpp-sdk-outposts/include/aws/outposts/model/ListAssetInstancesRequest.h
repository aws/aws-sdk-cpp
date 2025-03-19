/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/AWSServiceName.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class ListAssetInstancesRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListAssetInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetInstances"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
    template<typename OutpostIdentifierT = Aws::String>
    void SetOutpostIdentifier(OutpostIdentifierT&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::forward<OutpostIdentifierT>(value); }
    template<typename OutpostIdentifierT = Aws::String>
    ListAssetInstancesRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) { SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by asset ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssetIdFilter() const { return m_assetIdFilter; }
    inline bool AssetIdFilterHasBeenSet() const { return m_assetIdFilterHasBeenSet; }
    template<typename AssetIdFilterT = Aws::Vector<Aws::String>>
    void SetAssetIdFilter(AssetIdFilterT&& value) { m_assetIdFilterHasBeenSet = true; m_assetIdFilter = std::forward<AssetIdFilterT>(value); }
    template<typename AssetIdFilterT = Aws::Vector<Aws::String>>
    ListAssetInstancesRequest& WithAssetIdFilter(AssetIdFilterT&& value) { SetAssetIdFilter(std::forward<AssetIdFilterT>(value)); return *this;}
    template<typename AssetIdFilterT = Aws::String>
    ListAssetInstancesRequest& AddAssetIdFilter(AssetIdFilterT&& value) { m_assetIdFilterHasBeenSet = true; m_assetIdFilter.emplace_back(std::forward<AssetIdFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by instance ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypeFilter() const { return m_instanceTypeFilter; }
    inline bool InstanceTypeFilterHasBeenSet() const { return m_instanceTypeFilterHasBeenSet; }
    template<typename InstanceTypeFilterT = Aws::Vector<Aws::String>>
    void SetInstanceTypeFilter(InstanceTypeFilterT&& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter = std::forward<InstanceTypeFilterT>(value); }
    template<typename InstanceTypeFilterT = Aws::Vector<Aws::String>>
    ListAssetInstancesRequest& WithInstanceTypeFilter(InstanceTypeFilterT&& value) { SetInstanceTypeFilter(std::forward<InstanceTypeFilterT>(value)); return *this;}
    template<typename InstanceTypeFilterT = Aws::String>
    ListAssetInstancesRequest& AddInstanceTypeFilter(InstanceTypeFilterT&& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter.emplace_back(std::forward<InstanceTypeFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by account ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdFilter() const { return m_accountIdFilter; }
    inline bool AccountIdFilterHasBeenSet() const { return m_accountIdFilterHasBeenSet; }
    template<typename AccountIdFilterT = Aws::Vector<Aws::String>>
    void SetAccountIdFilter(AccountIdFilterT&& value) { m_accountIdFilterHasBeenSet = true; m_accountIdFilter = std::forward<AccountIdFilterT>(value); }
    template<typename AccountIdFilterT = Aws::Vector<Aws::String>>
    ListAssetInstancesRequest& WithAccountIdFilter(AccountIdFilterT&& value) { SetAccountIdFilter(std::forward<AccountIdFilterT>(value)); return *this;}
    template<typename AccountIdFilterT = Aws::String>
    ListAssetInstancesRequest& AddAccountIdFilter(AccountIdFilterT&& value) { m_accountIdFilterHasBeenSet = true; m_accountIdFilter.emplace_back(std::forward<AccountIdFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by Amazon Web Services service.</p>
     */
    inline const Aws::Vector<AWSServiceName>& GetAwsServiceFilter() const { return m_awsServiceFilter; }
    inline bool AwsServiceFilterHasBeenSet() const { return m_awsServiceFilterHasBeenSet; }
    template<typename AwsServiceFilterT = Aws::Vector<AWSServiceName>>
    void SetAwsServiceFilter(AwsServiceFilterT&& value) { m_awsServiceFilterHasBeenSet = true; m_awsServiceFilter = std::forward<AwsServiceFilterT>(value); }
    template<typename AwsServiceFilterT = Aws::Vector<AWSServiceName>>
    ListAssetInstancesRequest& WithAwsServiceFilter(AwsServiceFilterT&& value) { SetAwsServiceFilter(std::forward<AwsServiceFilterT>(value)); return *this;}
    inline ListAssetInstancesRequest& AddAwsServiceFilter(AWSServiceName value) { m_awsServiceFilterHasBeenSet = true; m_awsServiceFilter.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssetInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssetInstancesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_assetIdFilter;
    bool m_assetIdFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypeFilter;
    bool m_instanceTypeFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIdFilter;
    bool m_accountIdFilterHasBeenSet = false;

    Aws::Vector<AWSServiceName> m_awsServiceFilter;
    bool m_awsServiceFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
