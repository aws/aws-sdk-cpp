﻿/**
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
  class PutCoreNetworkPolicyResult
  {
  public:
    AWS_NETWORKMANAGER_API PutCoreNetworkPolicyResult();
    AWS_NETWORKMANAGER_API PutCoreNetworkPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API PutCoreNetworkPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the changed core network policy.</p>
     */
    inline const CoreNetworkPolicy& GetCoreNetworkPolicy() const{ return m_coreNetworkPolicy; }
    inline void SetCoreNetworkPolicy(const CoreNetworkPolicy& value) { m_coreNetworkPolicy = value; }
    inline void SetCoreNetworkPolicy(CoreNetworkPolicy&& value) { m_coreNetworkPolicy = std::move(value); }
    inline PutCoreNetworkPolicyResult& WithCoreNetworkPolicy(const CoreNetworkPolicy& value) { SetCoreNetworkPolicy(value); return *this;}
    inline PutCoreNetworkPolicyResult& WithCoreNetworkPolicy(CoreNetworkPolicy&& value) { SetCoreNetworkPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutCoreNetworkPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutCoreNetworkPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutCoreNetworkPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CoreNetworkPolicy m_coreNetworkPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
