﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkSite.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PrivateNetworks
{
namespace Model
{
  class UpdateNetworkSitePlanResult
  {
  public:
    AWS_PRIVATENETWORKS_API UpdateNetworkSitePlanResult();
    AWS_PRIVATENETWORKS_API UpdateNetworkSitePlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API UpdateNetworkSitePlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the network site.</p>
     */
    inline const NetworkSite& GetNetworkSite() const{ return m_networkSite; }
    inline void SetNetworkSite(const NetworkSite& value) { m_networkSite = value; }
    inline void SetNetworkSite(NetworkSite&& value) { m_networkSite = std::move(value); }
    inline UpdateNetworkSitePlanResult& WithNetworkSite(const NetworkSite& value) { SetNetworkSite(value); return *this;}
    inline UpdateNetworkSitePlanResult& WithNetworkSite(NetworkSite&& value) { SetNetworkSite(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network site tags. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateNetworkSitePlanResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateNetworkSitePlanResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateNetworkSitePlanResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateNetworkSitePlanResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateNetworkSitePlanResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateNetworkSitePlanResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateNetworkSitePlanResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateNetworkSitePlanResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateNetworkSitePlanResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateNetworkSitePlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateNetworkSitePlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateNetworkSitePlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    NetworkSite m_networkSite;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
