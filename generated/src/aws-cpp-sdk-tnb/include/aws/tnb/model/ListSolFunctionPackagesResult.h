/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolFunctionPackageInfo.h>
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
  class ListSolFunctionPackagesResult
  {
  public:
    AWS_TNB_API ListSolFunctionPackagesResult() = default;
    AWS_TNB_API ListSolFunctionPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolFunctionPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Function packages. A function package is a .zip file in CSAR (Cloud Service
     * Archive) format that contains a network function (an ETSI standard
     * telecommunication application) and function package descriptor that uses the
     * TOSCA standard to describe how the network functions should run on your
     * network.</p>
     */
    inline const Aws::Vector<ListSolFunctionPackageInfo>& GetFunctionPackages() const { return m_functionPackages; }
    template<typename FunctionPackagesT = Aws::Vector<ListSolFunctionPackageInfo>>
    void SetFunctionPackages(FunctionPackagesT&& value) { m_functionPackagesHasBeenSet = true; m_functionPackages = std::forward<FunctionPackagesT>(value); }
    template<typename FunctionPackagesT = Aws::Vector<ListSolFunctionPackageInfo>>
    ListSolFunctionPackagesResult& WithFunctionPackages(FunctionPackagesT&& value) { SetFunctionPackages(std::forward<FunctionPackagesT>(value)); return *this;}
    template<typename FunctionPackagesT = ListSolFunctionPackageInfo>
    ListSolFunctionPackagesResult& AddFunctionPackages(FunctionPackagesT&& value) { m_functionPackagesHasBeenSet = true; m_functionPackages.emplace_back(std::forward<FunctionPackagesT>(value)); return *this; }
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
    ListSolFunctionPackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSolFunctionPackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListSolFunctionPackageInfo> m_functionPackages;
    bool m_functionPackagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
