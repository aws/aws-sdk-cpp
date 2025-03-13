/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceBundle.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeWorkspaceBundlesResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceBundlesResult() = default;
    AWS_WORKSPACES_API DescribeWorkspaceBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspaceBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the bundles.</p>
     */
    inline const Aws::Vector<WorkspaceBundle>& GetBundles() const { return m_bundles; }
    template<typename BundlesT = Aws::Vector<WorkspaceBundle>>
    void SetBundles(BundlesT&& value) { m_bundlesHasBeenSet = true; m_bundles = std::forward<BundlesT>(value); }
    template<typename BundlesT = Aws::Vector<WorkspaceBundle>>
    DescribeWorkspaceBundlesResult& WithBundles(BundlesT&& value) { SetBundles(std::forward<BundlesT>(value)); return *this;}
    template<typename BundlesT = WorkspaceBundle>
    DescribeWorkspaceBundlesResult& AddBundles(BundlesT&& value) { m_bundlesHasBeenSet = true; m_bundles.emplace_back(std::forward<BundlesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. This token is valid for one day and
     * must be used within that time frame.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspaceBundlesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspaceBundlesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspaceBundle> m_bundles;
    bool m_bundlesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
