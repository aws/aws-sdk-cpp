/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetDevicesRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevices"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }
    inline GetDevicesRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}
    inline GetDevicesRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}
    inline GetDevicesRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more device IDs. The maximum is 10.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceIds() const{ return m_deviceIds; }
    inline bool DeviceIdsHasBeenSet() const { return m_deviceIdsHasBeenSet; }
    inline void SetDeviceIds(const Aws::Vector<Aws::String>& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = value; }
    inline void SetDeviceIds(Aws::Vector<Aws::String>&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = std::move(value); }
    inline GetDevicesRequest& WithDeviceIds(const Aws::Vector<Aws::String>& value) { SetDeviceIds(value); return *this;}
    inline GetDevicesRequest& WithDeviceIds(Aws::Vector<Aws::String>&& value) { SetDeviceIds(std::move(value)); return *this;}
    inline GetDevicesRequest& AddDeviceIds(const Aws::String& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(value); return *this; }
    inline GetDevicesRequest& AddDeviceIds(Aws::String&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(std::move(value)); return *this; }
    inline GetDevicesRequest& AddDeviceIds(const char* value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the site.</p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }
    inline GetDevicesRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}
    inline GetDevicesRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}
    inline GetDevicesRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetDevicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDevicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDevicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceIds;
    bool m_deviceIdsHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
