﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SubscribedWorkteam.h>
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
namespace SageMaker
{
namespace Model
{
  class ListSubscribedWorkteamsResult
  {
  public:
    AWS_SAGEMAKER_API ListSubscribedWorkteamsResult();
    AWS_SAGEMAKER_API ListSubscribedWorkteamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListSubscribedWorkteamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline const Aws::Vector<SubscribedWorkteam>& GetSubscribedWorkteams() const{ return m_subscribedWorkteams; }
    inline void SetSubscribedWorkteams(const Aws::Vector<SubscribedWorkteam>& value) { m_subscribedWorkteams = value; }
    inline void SetSubscribedWorkteams(Aws::Vector<SubscribedWorkteam>&& value) { m_subscribedWorkteams = std::move(value); }
    inline ListSubscribedWorkteamsResult& WithSubscribedWorkteams(const Aws::Vector<SubscribedWorkteam>& value) { SetSubscribedWorkteams(value); return *this;}
    inline ListSubscribedWorkteamsResult& WithSubscribedWorkteams(Aws::Vector<SubscribedWorkteam>&& value) { SetSubscribedWorkteams(std::move(value)); return *this;}
    inline ListSubscribedWorkteamsResult& AddSubscribedWorkteams(const SubscribedWorkteam& value) { m_subscribedWorkteams.push_back(value); return *this; }
    inline ListSubscribedWorkteamsResult& AddSubscribedWorkteams(SubscribedWorkteam&& value) { m_subscribedWorkteams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSubscribedWorkteamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSubscribedWorkteamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSubscribedWorkteamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSubscribedWorkteamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSubscribedWorkteamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSubscribedWorkteamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SubscribedWorkteam> m_subscribedWorkteams;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
