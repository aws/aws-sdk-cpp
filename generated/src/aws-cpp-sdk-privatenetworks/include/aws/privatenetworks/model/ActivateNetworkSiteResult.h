/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkSite.h>
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
  class ActivateNetworkSiteResult
  {
  public:
    AWS_PRIVATENETWORKS_API ActivateNetworkSiteResult();
    AWS_PRIVATENETWORKS_API ActivateNetworkSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ActivateNetworkSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the network site.</p>
     */
    inline const NetworkSite& GetNetworkSite() const{ return m_networkSite; }

    /**
     * <p>Information about the network site.</p>
     */
    inline void SetNetworkSite(const NetworkSite& value) { m_networkSite = value; }

    /**
     * <p>Information about the network site.</p>
     */
    inline void SetNetworkSite(NetworkSite&& value) { m_networkSite = std::move(value); }

    /**
     * <p>Information about the network site.</p>
     */
    inline ActivateNetworkSiteResult& WithNetworkSite(const NetworkSite& value) { SetNetworkSite(value); return *this;}

    /**
     * <p>Information about the network site.</p>
     */
    inline ActivateNetworkSiteResult& WithNetworkSite(NetworkSite&& value) { SetNetworkSite(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ActivateNetworkSiteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ActivateNetworkSiteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ActivateNetworkSiteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    NetworkSite m_networkSite;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
