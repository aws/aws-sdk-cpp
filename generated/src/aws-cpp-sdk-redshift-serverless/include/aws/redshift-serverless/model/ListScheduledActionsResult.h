﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/ScheduledActionAssociation.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListScheduledActionsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListScheduledActionsResult();
    AWS_REDSHIFTSERVERLESS_API ListScheduledActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListScheduledActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListScheduledActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListScheduledActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListScheduledActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All of the returned scheduled action association objects.</p>
     */
    inline const Aws::Vector<ScheduledActionAssociation>& GetScheduledActions() const{ return m_scheduledActions; }
    inline void SetScheduledActions(const Aws::Vector<ScheduledActionAssociation>& value) { m_scheduledActions = value; }
    inline void SetScheduledActions(Aws::Vector<ScheduledActionAssociation>&& value) { m_scheduledActions = std::move(value); }
    inline ListScheduledActionsResult& WithScheduledActions(const Aws::Vector<ScheduledActionAssociation>& value) { SetScheduledActions(value); return *this;}
    inline ListScheduledActionsResult& WithScheduledActions(Aws::Vector<ScheduledActionAssociation>&& value) { SetScheduledActions(std::move(value)); return *this;}
    inline ListScheduledActionsResult& AddScheduledActions(const ScheduledActionAssociation& value) { m_scheduledActions.push_back(value); return *this; }
    inline ListScheduledActionsResult& AddScheduledActions(ScheduledActionAssociation&& value) { m_scheduledActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListScheduledActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListScheduledActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListScheduledActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ScheduledActionAssociation> m_scheduledActions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
