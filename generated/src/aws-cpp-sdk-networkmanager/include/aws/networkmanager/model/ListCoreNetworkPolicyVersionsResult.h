/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkPolicyVersion.h>
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
  class ListCoreNetworkPolicyVersionsResult
  {
  public:
    AWS_NETWORKMANAGER_API ListCoreNetworkPolicyVersionsResult() = default;
    AWS_NETWORKMANAGER_API ListCoreNetworkPolicyVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListCoreNetworkPolicyVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes core network policy versions.</p>
     */
    inline const Aws::Vector<CoreNetworkPolicyVersion>& GetCoreNetworkPolicyVersions() const { return m_coreNetworkPolicyVersions; }
    template<typename CoreNetworkPolicyVersionsT = Aws::Vector<CoreNetworkPolicyVersion>>
    void SetCoreNetworkPolicyVersions(CoreNetworkPolicyVersionsT&& value) { m_coreNetworkPolicyVersionsHasBeenSet = true; m_coreNetworkPolicyVersions = std::forward<CoreNetworkPolicyVersionsT>(value); }
    template<typename CoreNetworkPolicyVersionsT = Aws::Vector<CoreNetworkPolicyVersion>>
    ListCoreNetworkPolicyVersionsResult& WithCoreNetworkPolicyVersions(CoreNetworkPolicyVersionsT&& value) { SetCoreNetworkPolicyVersions(std::forward<CoreNetworkPolicyVersionsT>(value)); return *this;}
    template<typename CoreNetworkPolicyVersionsT = CoreNetworkPolicyVersion>
    ListCoreNetworkPolicyVersionsResult& AddCoreNetworkPolicyVersions(CoreNetworkPolicyVersionsT&& value) { m_coreNetworkPolicyVersionsHasBeenSet = true; m_coreNetworkPolicyVersions.emplace_back(std::forward<CoreNetworkPolicyVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCoreNetworkPolicyVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCoreNetworkPolicyVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CoreNetworkPolicyVersion> m_coreNetworkPolicyVersions;
    bool m_coreNetworkPolicyVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
