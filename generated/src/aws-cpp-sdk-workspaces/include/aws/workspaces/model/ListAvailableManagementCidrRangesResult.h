/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkSpaces
{
namespace Model
{
  class ListAvailableManagementCidrRangesResult
  {
  public:
    AWS_WORKSPACES_API ListAvailableManagementCidrRangesResult() = default;
    AWS_WORKSPACES_API ListAvailableManagementCidrRangesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API ListAvailableManagementCidrRangesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of available IP address ranges, specified as IPv4 CIDR blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetManagementCidrRanges() const { return m_managementCidrRanges; }
    template<typename ManagementCidrRangesT = Aws::Vector<Aws::String>>
    void SetManagementCidrRanges(ManagementCidrRangesT&& value) { m_managementCidrRangesHasBeenSet = true; m_managementCidrRanges = std::forward<ManagementCidrRangesT>(value); }
    template<typename ManagementCidrRangesT = Aws::Vector<Aws::String>>
    ListAvailableManagementCidrRangesResult& WithManagementCidrRanges(ManagementCidrRangesT&& value) { SetManagementCidrRanges(std::forward<ManagementCidrRangesT>(value)); return *this;}
    template<typename ManagementCidrRangesT = Aws::String>
    ListAvailableManagementCidrRangesResult& AddManagementCidrRanges(ManagementCidrRangesT&& value) { m_managementCidrRangesHasBeenSet = true; m_managementCidrRanges.emplace_back(std::forward<ManagementCidrRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAvailableManagementCidrRangesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAvailableManagementCidrRangesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_managementCidrRanges;
    bool m_managementCidrRangesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
