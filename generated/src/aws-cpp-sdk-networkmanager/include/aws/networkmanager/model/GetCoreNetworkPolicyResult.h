/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/CoreNetworkPolicy.h>
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
  class GetCoreNetworkPolicyResult
  {
  public:
    AWS_NETWORKMANAGER_API GetCoreNetworkPolicyResult();
    AWS_NETWORKMANAGER_API GetCoreNetworkPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetCoreNetworkPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details about a core network policy.</p>
     */
    inline const CoreNetworkPolicy& GetCoreNetworkPolicy() const{ return m_coreNetworkPolicy; }

    /**
     * <p>The details about a core network policy.</p>
     */
    inline void SetCoreNetworkPolicy(const CoreNetworkPolicy& value) { m_coreNetworkPolicy = value; }

    /**
     * <p>The details about a core network policy.</p>
     */
    inline void SetCoreNetworkPolicy(CoreNetworkPolicy&& value) { m_coreNetworkPolicy = std::move(value); }

    /**
     * <p>The details about a core network policy.</p>
     */
    inline GetCoreNetworkPolicyResult& WithCoreNetworkPolicy(const CoreNetworkPolicy& value) { SetCoreNetworkPolicy(value); return *this;}

    /**
     * <p>The details about a core network policy.</p>
     */
    inline GetCoreNetworkPolicyResult& WithCoreNetworkPolicy(CoreNetworkPolicy&& value) { SetCoreNetworkPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCoreNetworkPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCoreNetworkPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCoreNetworkPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CoreNetworkPolicy m_coreNetworkPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
