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
  class RestoreCoreNetworkPolicyVersionResult
  {
  public:
    AWS_NETWORKMANAGER_API RestoreCoreNetworkPolicyVersionResult() = default;
    AWS_NETWORKMANAGER_API RestoreCoreNetworkPolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API RestoreCoreNetworkPolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the restored core network policy.</p>
     */
    inline const CoreNetworkPolicy& GetCoreNetworkPolicy() const { return m_coreNetworkPolicy; }
    template<typename CoreNetworkPolicyT = CoreNetworkPolicy>
    void SetCoreNetworkPolicy(CoreNetworkPolicyT&& value) { m_coreNetworkPolicyHasBeenSet = true; m_coreNetworkPolicy = std::forward<CoreNetworkPolicyT>(value); }
    template<typename CoreNetworkPolicyT = CoreNetworkPolicy>
    RestoreCoreNetworkPolicyVersionResult& WithCoreNetworkPolicy(CoreNetworkPolicyT&& value) { SetCoreNetworkPolicy(std::forward<CoreNetworkPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RestoreCoreNetworkPolicyVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CoreNetworkPolicy m_coreNetworkPolicy;
    bool m_coreNetworkPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
