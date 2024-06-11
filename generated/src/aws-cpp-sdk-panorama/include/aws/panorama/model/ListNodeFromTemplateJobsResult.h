/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/NodeFromTemplateJob.h>
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
namespace Panorama
{
namespace Model
{
  class ListNodeFromTemplateJobsResult
  {
  public:
    AWS_PANORAMA_API ListNodeFromTemplateJobsResult();
    AWS_PANORAMA_API ListNodeFromTemplateJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListNodeFromTemplateJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNodeFromTemplateJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNodeFromTemplateJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNodeFromTemplateJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<NodeFromTemplateJob>& GetNodeFromTemplateJobs() const{ return m_nodeFromTemplateJobs; }
    inline void SetNodeFromTemplateJobs(const Aws::Vector<NodeFromTemplateJob>& value) { m_nodeFromTemplateJobs = value; }
    inline void SetNodeFromTemplateJobs(Aws::Vector<NodeFromTemplateJob>&& value) { m_nodeFromTemplateJobs = std::move(value); }
    inline ListNodeFromTemplateJobsResult& WithNodeFromTemplateJobs(const Aws::Vector<NodeFromTemplateJob>& value) { SetNodeFromTemplateJobs(value); return *this;}
    inline ListNodeFromTemplateJobsResult& WithNodeFromTemplateJobs(Aws::Vector<NodeFromTemplateJob>&& value) { SetNodeFromTemplateJobs(std::move(value)); return *this;}
    inline ListNodeFromTemplateJobsResult& AddNodeFromTemplateJobs(const NodeFromTemplateJob& value) { m_nodeFromTemplateJobs.push_back(value); return *this; }
    inline ListNodeFromTemplateJobsResult& AddNodeFromTemplateJobs(NodeFromTemplateJob&& value) { m_nodeFromTemplateJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNodeFromTemplateJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNodeFromTemplateJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNodeFromTemplateJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<NodeFromTemplateJob> m_nodeFromTemplateJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
