﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/DeviceIdentifierFilterKeys.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class ListDeviceIdentifiersRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API ListDeviceIdentifiersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeviceIdentifiers"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>ORDER</code> - The Amazon Resource Name
     * (ARN) of the order.</p> </li> <li> <p> <code>STATUS</code> - The status
     * (<code>ACTIVE</code> | <code>INACTIVE</code>).</p> </li> <li> <p>
     * <code>TRAFFIC_GROUP</code> - The Amazon Resource Name (ARN) of the traffic
     * group.</p> </li> </ul> <p>Filter values are case sensitive. If you specify
     * multiple values for a filter, the values are joined with an <code>OR</code>, and
     * the request returns all results that match any of the specified values.</p>
     */
    inline const Aws::Map<DeviceIdentifierFilterKeys, Aws::Vector<Aws::String>>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Map<DeviceIdentifierFilterKeys, Aws::Vector<Aws::String>>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Map<DeviceIdentifierFilterKeys, Aws::Vector<Aws::String>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListDeviceIdentifiersRequest& WithFilters(const Aws::Map<DeviceIdentifierFilterKeys, Aws::Vector<Aws::String>>& value) { SetFilters(value); return *this;}
    inline ListDeviceIdentifiersRequest& WithFilters(Aws::Map<DeviceIdentifierFilterKeys, Aws::Vector<Aws::String>>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListDeviceIdentifiersRequest& AddFilters(const DeviceIdentifierFilterKeys& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }
    inline ListDeviceIdentifiersRequest& AddFilters(DeviceIdentifierFilterKeys&& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }
    inline ListDeviceIdentifiersRequest& AddFilters(const DeviceIdentifierFilterKeys& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }
    inline ListDeviceIdentifiersRequest& AddFilters(DeviceIdentifierFilterKeys&& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDeviceIdentifiersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }
    inline ListDeviceIdentifiersRequest& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}
    inline ListDeviceIdentifiersRequest& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}
    inline ListDeviceIdentifiersRequest& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetStartToken() const{ return m_startToken; }
    inline bool StartTokenHasBeenSet() const { return m_startTokenHasBeenSet; }
    inline void SetStartToken(const Aws::String& value) { m_startTokenHasBeenSet = true; m_startToken = value; }
    inline void SetStartToken(Aws::String&& value) { m_startTokenHasBeenSet = true; m_startToken = std::move(value); }
    inline void SetStartToken(const char* value) { m_startTokenHasBeenSet = true; m_startToken.assign(value); }
    inline ListDeviceIdentifiersRequest& WithStartToken(const Aws::String& value) { SetStartToken(value); return *this;}
    inline ListDeviceIdentifiersRequest& WithStartToken(Aws::String&& value) { SetStartToken(std::move(value)); return *this;}
    inline ListDeviceIdentifiersRequest& WithStartToken(const char* value) { SetStartToken(value); return *this;}
    ///@}
  private:

    Aws::Map<DeviceIdentifierFilterKeys, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_startToken;
    bool m_startTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
