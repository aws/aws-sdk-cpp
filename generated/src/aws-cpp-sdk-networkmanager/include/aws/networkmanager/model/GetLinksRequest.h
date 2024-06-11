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
  class GetLinksRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetLinksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLinks"; }

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
    inline GetLinksRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}
    inline GetLinksRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}
    inline GetLinksRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more link IDs. The maximum is 10.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkIds() const{ return m_linkIds; }
    inline bool LinkIdsHasBeenSet() const { return m_linkIdsHasBeenSet; }
    inline void SetLinkIds(const Aws::Vector<Aws::String>& value) { m_linkIdsHasBeenSet = true; m_linkIds = value; }
    inline void SetLinkIds(Aws::Vector<Aws::String>&& value) { m_linkIdsHasBeenSet = true; m_linkIds = std::move(value); }
    inline GetLinksRequest& WithLinkIds(const Aws::Vector<Aws::String>& value) { SetLinkIds(value); return *this;}
    inline GetLinksRequest& WithLinkIds(Aws::Vector<Aws::String>&& value) { SetLinkIds(std::move(value)); return *this;}
    inline GetLinksRequest& AddLinkIds(const Aws::String& value) { m_linkIdsHasBeenSet = true; m_linkIds.push_back(value); return *this; }
    inline GetLinksRequest& AddLinkIds(Aws::String&& value) { m_linkIdsHasBeenSet = true; m_linkIds.push_back(std::move(value)); return *this; }
    inline GetLinksRequest& AddLinkIds(const char* value) { m_linkIdsHasBeenSet = true; m_linkIds.push_back(value); return *this; }
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
    inline GetLinksRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}
    inline GetLinksRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}
    inline GetLinksRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The link type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline GetLinksRequest& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline GetLinksRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline GetLinksRequest& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The link provider.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }
    inline GetLinksRequest& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline GetLinksRequest& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline GetLinksRequest& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetLinksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline GetLinksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetLinksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetLinksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkIds;
    bool m_linkIdsHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
