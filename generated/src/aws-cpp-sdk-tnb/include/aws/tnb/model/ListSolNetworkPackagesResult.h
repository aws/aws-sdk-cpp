/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkPackageInfo.h>
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
namespace tnb
{
namespace Model
{
  class ListSolNetworkPackagesResult
  {
  public:
    AWS_TNB_API ListSolNetworkPackagesResult() = default;
    AWS_TNB_API ListSolNetworkPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolNetworkPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network packages. A network package is a .zip file in CSAR (Cloud Service
     * Archive) format defines the function packages you want to deploy and the Amazon
     * Web Services infrastructure you want to deploy them on.</p>
     */
    inline const Aws::Vector<ListSolNetworkPackageInfo>& GetNetworkPackages() const { return m_networkPackages; }
    template<typename NetworkPackagesT = Aws::Vector<ListSolNetworkPackageInfo>>
    void SetNetworkPackages(NetworkPackagesT&& value) { m_networkPackagesHasBeenSet = true; m_networkPackages = std::forward<NetworkPackagesT>(value); }
    template<typename NetworkPackagesT = Aws::Vector<ListSolNetworkPackageInfo>>
    ListSolNetworkPackagesResult& WithNetworkPackages(NetworkPackagesT&& value) { SetNetworkPackages(std::forward<NetworkPackagesT>(value)); return *this;}
    template<typename NetworkPackagesT = ListSolNetworkPackageInfo>
    ListSolNetworkPackagesResult& AddNetworkPackages(NetworkPackagesT&& value) { m_networkPackagesHasBeenSet = true; m_networkPackages.emplace_back(std::forward<NetworkPackagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSolNetworkPackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSolNetworkPackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListSolNetworkPackageInfo> m_networkPackages;
    bool m_networkPackagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
