﻿/**
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
    AWS_SSMINCIDENTS_API ListReplicationSetsResult();
    AWS_SSMINCIDENTS_API ListReplicationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListReplicationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReplicationSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReplicationSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReplicationSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationSetArns() const{ return m_replicationSetArns; }
    inline void SetReplicationSetArns(const Aws::Vector<Aws::String>& value) { m_replicationSetArns = value; }
    inline void SetReplicationSetArns(Aws::Vector<Aws::String>&& value) { m_replicationSetArns = std::move(value); }
    inline ListReplicationSetsResult& WithReplicationSetArns(const Aws::Vector<Aws::String>& value) { SetReplicationSetArns(value); return *this;}
    inline ListReplicationSetsResult& WithReplicationSetArns(Aws::Vector<Aws::String>&& value) { SetReplicationSetArns(std::move(value)); return *this;}
    inline ListReplicationSetsResult& AddReplicationSetArns(const Aws::String& value) { m_replicationSetArns.push_back(value); return *this; }
    inline ListReplicationSetsResult& AddReplicationSetArns(Aws::String&& value) { m_replicationSetArns.push_back(std::move(value)); return *this; }
    inline ListReplicationSetsResult& AddReplicationSetArns(const char* value) { m_replicationSetArns.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReplicationSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReplicationSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReplicationSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_replicationSetArns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
