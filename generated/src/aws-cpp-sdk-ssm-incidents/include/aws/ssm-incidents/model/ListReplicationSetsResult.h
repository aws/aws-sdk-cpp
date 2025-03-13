/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSMIncidents
{
namespace Model
{
  class ListReplicationSetsResult
  {
  public:
    AWS_SSMINCIDENTS_API ListReplicationSetsResult() = default;
    AWS_SSMINCIDENTS_API ListReplicationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListReplicationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReplicationSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationSetArns() const { return m_replicationSetArns; }
    template<typename ReplicationSetArnsT = Aws::Vector<Aws::String>>
    void SetReplicationSetArns(ReplicationSetArnsT&& value) { m_replicationSetArnsHasBeenSet = true; m_replicationSetArns = std::forward<ReplicationSetArnsT>(value); }
    template<typename ReplicationSetArnsT = Aws::Vector<Aws::String>>
    ListReplicationSetsResult& WithReplicationSetArns(ReplicationSetArnsT&& value) { SetReplicationSetArns(std::forward<ReplicationSetArnsT>(value)); return *this;}
    template<typename ReplicationSetArnsT = Aws::String>
    ListReplicationSetsResult& AddReplicationSetArns(ReplicationSetArnsT&& value) { m_replicationSetArnsHasBeenSet = true; m_replicationSetArns.emplace_back(std::forward<ReplicationSetArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReplicationSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationSetArns;
    bool m_replicationSetArnsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
