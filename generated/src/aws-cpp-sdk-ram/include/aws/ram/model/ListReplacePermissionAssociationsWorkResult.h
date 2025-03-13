/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ReplacePermissionAssociationsWork.h>
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
namespace RAM
{
namespace Model
{
  class ListReplacePermissionAssociationsWorkResult
  {
  public:
    AWS_RAM_API ListReplacePermissionAssociationsWorkResult() = default;
    AWS_RAM_API ListReplacePermissionAssociationsWorkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API ListReplacePermissionAssociationsWorkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of data structures that provide details of the matching work
     * IDs.</p>
     */
    inline const Aws::Vector<ReplacePermissionAssociationsWork>& GetReplacePermissionAssociationsWorks() const { return m_replacePermissionAssociationsWorks; }
    template<typename ReplacePermissionAssociationsWorksT = Aws::Vector<ReplacePermissionAssociationsWork>>
    void SetReplacePermissionAssociationsWorks(ReplacePermissionAssociationsWorksT&& value) { m_replacePermissionAssociationsWorksHasBeenSet = true; m_replacePermissionAssociationsWorks = std::forward<ReplacePermissionAssociationsWorksT>(value); }
    template<typename ReplacePermissionAssociationsWorksT = Aws::Vector<ReplacePermissionAssociationsWork>>
    ListReplacePermissionAssociationsWorkResult& WithReplacePermissionAssociationsWorks(ReplacePermissionAssociationsWorksT&& value) { SetReplacePermissionAssociationsWorks(std::forward<ReplacePermissionAssociationsWorksT>(value)); return *this;}
    template<typename ReplacePermissionAssociationsWorksT = ReplacePermissionAssociationsWork>
    ListReplacePermissionAssociationsWorkResult& AddReplacePermissionAssociationsWorks(ReplacePermissionAssociationsWorksT&& value) { m_replacePermissionAssociationsWorksHasBeenSet = true; m_replacePermissionAssociationsWorks.emplace_back(std::forward<ReplacePermissionAssociationsWorksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReplacePermissionAssociationsWorkResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReplacePermissionAssociationsWorkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReplacePermissionAssociationsWork> m_replacePermissionAssociationsWorks;
    bool m_replacePermissionAssociationsWorksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
