/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/CoreNetwork.h>
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
namespace NetworkManager
{
namespace Model
{
  class DeleteCoreNetworkResult
  {
  public:
    AWS_NETWORKMANAGER_API DeleteCoreNetworkResult();
    AWS_NETWORKMANAGER_API DeleteCoreNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DeleteCoreNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deleted core network.</p>
     */
    inline const CoreNetwork& GetCoreNetwork() const{ return m_coreNetwork; }

    /**
     * <p>Information about the deleted core network.</p>
     */
    inline void SetCoreNetwork(const CoreNetwork& value) { m_coreNetwork = value; }

    /**
     * <p>Information about the deleted core network.</p>
     */
    inline void SetCoreNetwork(CoreNetwork&& value) { m_coreNetwork = std::move(value); }

    /**
     * <p>Information about the deleted core network.</p>
     */
    inline DeleteCoreNetworkResult& WithCoreNetwork(const CoreNetwork& value) { SetCoreNetwork(value); return *this;}

    /**
     * <p>Information about the deleted core network.</p>
     */
    inline DeleteCoreNetworkResult& WithCoreNetwork(CoreNetwork&& value) { SetCoreNetwork(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteCoreNetworkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteCoreNetworkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteCoreNetworkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CoreNetwork m_coreNetwork;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
