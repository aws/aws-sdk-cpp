/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ProtectionGroup.h>
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
namespace Shield
{
namespace Model
{
  class ListProtectionGroupsResult
  {
  public:
    AWS_SHIELD_API ListProtectionGroupsResult() = default;
    AWS_SHIELD_API ListProtectionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API ListProtectionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<ProtectionGroup>& GetProtectionGroups() const { return m_protectionGroups; }
    template<typename ProtectionGroupsT = Aws::Vector<ProtectionGroup>>
    void SetProtectionGroups(ProtectionGroupsT&& value) { m_protectionGroupsHasBeenSet = true; m_protectionGroups = std::forward<ProtectionGroupsT>(value); }
    template<typename ProtectionGroupsT = Aws::Vector<ProtectionGroup>>
    ListProtectionGroupsResult& WithProtectionGroups(ProtectionGroupsT&& value) { SetProtectionGroups(std::forward<ProtectionGroupsT>(value)); return *this;}
    template<typename ProtectionGroupsT = ProtectionGroup>
    ListProtectionGroupsResult& AddProtectionGroups(ProtectionGroupsT&& value) { m_protectionGroupsHasBeenSet = true; m_protectionGroups.emplace_back(std::forward<ProtectionGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProtectionGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProtectionGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProtectionGroup> m_protectionGroups;
    bool m_protectionGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
