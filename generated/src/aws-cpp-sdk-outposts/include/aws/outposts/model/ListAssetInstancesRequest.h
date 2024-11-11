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
    AWS_OUTPOSTS_API ListAssetInstancesRequest();

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
    inline const Aws::String& GetOutpostIdentifier() const{ return m_outpostIdentifier; }
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
    inline void SetOutpostIdentifier(const Aws::String& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = value; }
    inline void SetOutpostIdentifier(Aws::String&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::move(value); }
    inline void SetOutpostIdentifier(const char* value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier.assign(value); }
    inline ListAssetInstancesRequest& WithOutpostIdentifier(const Aws::String& value) { SetOutpostIdentifier(value); return *this;}
    inline ListAssetInstancesRequest& WithOutpostIdentifier(Aws::String&& value) { SetOutpostIdentifier(std::move(value)); return *this;}
    inline ListAssetInstancesRequest& WithOutpostIdentifier(const char* value) { SetOutpostIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by asset ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssetIdFilter() const{ return m_assetIdFilter; }
    inline bool AssetIdFilterHasBeenSet() const { return m_assetIdFilterHasBeenSet; }
    inline void SetAssetIdFilter(const Aws::Vector<Aws::String>& value) { m_assetIdFilterHasBeenSet = true; m_assetIdFilter = value; }
    inline void SetAssetIdFilter(Aws::Vector<Aws::String>&& value) { m_assetIdFilterHasBeenSet = true; m_assetIdFilter = std::move(value); }
    inline ListAssetInstancesRequest& WithAssetIdFilter(const Aws::Vector<Aws::String>& value) { SetAssetIdFilter(value); return *this;}
    inline ListAssetInstancesRequest& WithAssetIdFilter(Aws::Vector<Aws::String>&& value) { SetAssetIdFilter(std::move(value)); return *this;}
    inline ListAssetInstancesRequest& AddAssetIdFilter(const Aws::String& value) { m_assetIdFilterHasBeenSet = true; m_assetIdFilter.push_back(value); return *this; }
    inline ListAssetInstancesRequest& AddAssetIdFilter(Aws::String&& value) { m_assetIdFilterHasBeenSet = true; m_assetIdFilter.push_back(std::move(value)); return *this; }
    inline ListAssetInstancesRequest& AddAssetIdFilter(const char* value) { m_assetIdFilterHasBeenSet = true; m_assetIdFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by instance ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypeFilter() const{ return m_instanceTypeFilter; }
    inline bool InstanceTypeFilterHasBeenSet() const { return m_instanceTypeFilterHasBeenSet; }
    inline void SetInstanceTypeFilter(const Aws::Vector<Aws::String>& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter = value; }
    inline void SetInstanceTypeFilter(Aws::Vector<Aws::String>&& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter = std::move(value); }
    inline ListAssetInstancesRequest& WithInstanceTypeFilter(const Aws::Vector<Aws::String>& value) { SetInstanceTypeFilter(value); return *this;}
    inline ListAssetInstancesRequest& WithInstanceTypeFilter(Aws::Vector<Aws::String>&& value) { SetInstanceTypeFilter(std::move(value)); return *this;}
    inline ListAssetInstancesRequest& AddInstanceTypeFilter(const Aws::String& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter.push_back(value); return *this; }
    inline ListAssetInstancesRequest& AddInstanceTypeFilter(Aws::String&& value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter.push_back(std::move(value)); return *this; }
    inline ListAssetInstancesRequest& AddInstanceTypeFilter(const char* value) { m_instanceTypeFilterHasBeenSet = true; m_instanceTypeFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by account ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdFilter() const{ return m_accountIdFilter; }
    inline bool AccountIdFilterHasBeenSet() const { return m_accountIdFilterHasBeenSet; }
    inline void SetAccountIdFilter(const Aws::Vector<Aws::String>& value) { m_accountIdFilterHasBeenSet = true; m_accountIdFilter = value; }
    inline void SetAccountIdFilter(Aws::Vector<Aws::String>&& value) { m_accountIdFilterHasBeenSet = true; m_accountIdFilter = std::move(value); }
    inline ListAssetInstancesRequest& WithAccountIdFilter(const Aws::Vector<Aws::String>& value) { SetAccountIdFilter(value); return *this;}
    inline ListAssetInstancesRequest& WithAccountIdFilter(Aws::Vector<Aws::String>&& value) { SetAccountIdFilter(std::move(value)); return *this;}
    inline ListAssetInstancesRequest& AddAccountIdFilter(const Aws::String& value) { m_accountIdFilterHasBeenSet = true; m_accountIdFilter.push_back(value); return *this; }
    inline ListAssetInstancesRequest& AddAccountIdFilter(Aws::String&& value) { m_accountIdFilterHasBeenSet = true; m_accountIdFilter.push_back(std::move(value)); return *this; }
    inline ListAssetInstancesRequest& AddAccountIdFilter(const char* value) { m_accountIdFilterHasBeenSet = true; m_accountIdFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by Amazon Web Services service.</p>
     */
    inline const Aws::Vector<AWSServiceName>& GetAwsServiceFilter() const{ return m_awsServiceFilter; }
    inline bool AwsServiceFilterHasBeenSet() const { return m_awsServiceFilterHasBeenSet; }
    inline void SetAwsServiceFilter(const Aws::Vector<AWSServiceName>& value) { m_awsServiceFilterHasBeenSet = true; m_awsServiceFilter = value; }
    inline void SetAwsServiceFilter(Aws::Vector<AWSServiceName>&& value) { m_awsServiceFilterHasBeenSet = true; m_awsServiceFilter = std::move(value); }
    inline ListAssetInstancesRequest& WithAwsServiceFilter(const Aws::Vector<AWSServiceName>& value) { SetAwsServiceFilter(value); return *this;}
    inline ListAssetInstancesRequest& WithAwsServiceFilter(Aws::Vector<AWSServiceName>&& value) { SetAwsServiceFilter(std::move(value)); return *this;}
    inline ListAssetInstancesRequest& AddAwsServiceFilter(const AWSServiceName& value) { m_awsServiceFilterHasBeenSet = true; m_awsServiceFilter.push_back(value); return *this; }
    inline ListAssetInstancesRequest& AddAwsServiceFilter(AWSServiceName&& value) { m_awsServiceFilterHasBeenSet = true; m_awsServiceFilter.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssetInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAssetInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
