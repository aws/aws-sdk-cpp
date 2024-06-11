﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ActivateReadSetJobItem.h>
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
namespace Omics
{
namespace Model
{
  class ListReadSetActivationJobsResult
  {
  public:
    AWS_OMICS_API ListReadSetActivationJobsResult();
    AWS_OMICS_API ListReadSetActivationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetActivationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReadSetActivationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReadSetActivationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReadSetActivationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<ActivateReadSetJobItem>& GetActivationJobs() const{ return m_activationJobs; }
    inline void SetActivationJobs(const Aws::Vector<ActivateReadSetJobItem>& value) { m_activationJobs = value; }
    inline void SetActivationJobs(Aws::Vector<ActivateReadSetJobItem>&& value) { m_activationJobs = std::move(value); }
    inline ListReadSetActivationJobsResult& WithActivationJobs(const Aws::Vector<ActivateReadSetJobItem>& value) { SetActivationJobs(value); return *this;}
    inline ListReadSetActivationJobsResult& WithActivationJobs(Aws::Vector<ActivateReadSetJobItem>&& value) { SetActivationJobs(std::move(value)); return *this;}
    inline ListReadSetActivationJobsResult& AddActivationJobs(const ActivateReadSetJobItem& value) { m_activationJobs.push_back(value); return *this; }
    inline ListReadSetActivationJobsResult& AddActivationJobs(ActivateReadSetJobItem&& value) { m_activationJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReadSetActivationJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReadSetActivationJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReadSetActivationJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ActivateReadSetJobItem> m_activationJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
