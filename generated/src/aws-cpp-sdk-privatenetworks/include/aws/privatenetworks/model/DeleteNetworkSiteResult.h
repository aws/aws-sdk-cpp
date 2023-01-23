/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkSite.h>
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
  class DeleteNetworkSiteResult
  {
  public:
    AWS_PRIVATENETWORKS_API DeleteNetworkSiteResult();
    AWS_PRIVATENETWORKS_API DeleteNetworkSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API DeleteNetworkSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteNetworkSiteResult& WithNetworkSite(const NetworkSite& value) { SetNetworkSite(value); return *this;}

    /**
     * <p>Information about the network site.</p>
     */
    inline DeleteNetworkSiteResult& WithNetworkSite(NetworkSite&& value) { SetNetworkSite(std::move(value)); return *this;}

  private:

    NetworkSite m_networkSite;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
