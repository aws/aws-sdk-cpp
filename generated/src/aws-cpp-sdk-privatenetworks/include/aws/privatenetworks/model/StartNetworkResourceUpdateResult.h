/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkResource.h>
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
  class StartNetworkResourceUpdateResult
  {
  public:
    AWS_PRIVATENETWORKS_API StartNetworkResourceUpdateResult();
    AWS_PRIVATENETWORKS_API StartNetworkResourceUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API StartNetworkResourceUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The network resource.</p>
     */
    inline const NetworkResource& GetNetworkResource() const{ return m_networkResource; }

    /**
     * <p>The network resource.</p>
     */
    inline void SetNetworkResource(const NetworkResource& value) { m_networkResource = value; }

    /**
     * <p>The network resource.</p>
     */
    inline void SetNetworkResource(NetworkResource&& value) { m_networkResource = std::move(value); }

    /**
     * <p>The network resource.</p>
     */
    inline StartNetworkResourceUpdateResult& WithNetworkResource(const NetworkResource& value) { SetNetworkResource(value); return *this;}

    /**
     * <p>The network resource.</p>
     */
    inline StartNetworkResourceUpdateResult& WithNetworkResource(NetworkResource&& value) { SetNetworkResource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartNetworkResourceUpdateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartNetworkResourceUpdateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartNetworkResourceUpdateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    NetworkResource m_networkResource;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
