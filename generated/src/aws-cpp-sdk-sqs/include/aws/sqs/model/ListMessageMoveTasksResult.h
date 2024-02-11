/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/sqs/model/ListMessageMoveTasksResultEntry.h>
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
namespace SQS
{
namespace Model
{
  class ListMessageMoveTasksResult
  {
  public:
    AWS_SQS_API ListMessageMoveTasksResult();
    AWS_SQS_API ListMessageMoveTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SQS_API ListMessageMoveTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of message movement tasks and their attributes.</p>
     */
    inline const Aws::Vector<ListMessageMoveTasksResultEntry>& GetResults() const{ return m_results; }

    /**
     * <p>A list of message movement tasks and their attributes.</p>
     */
    inline void SetResults(const Aws::Vector<ListMessageMoveTasksResultEntry>& value) { m_results = value; }

    /**
     * <p>A list of message movement tasks and their attributes.</p>
     */
    inline void SetResults(Aws::Vector<ListMessageMoveTasksResultEntry>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of message movement tasks and their attributes.</p>
     */
    inline ListMessageMoveTasksResult& WithResults(const Aws::Vector<ListMessageMoveTasksResultEntry>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of message movement tasks and their attributes.</p>
     */
    inline ListMessageMoveTasksResult& WithResults(Aws::Vector<ListMessageMoveTasksResultEntry>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of message movement tasks and their attributes.</p>
     */
    inline ListMessageMoveTasksResult& AddResults(const ListMessageMoveTasksResultEntry& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of message movement tasks and their attributes.</p>
     */
    inline ListMessageMoveTasksResult& AddResults(ListMessageMoveTasksResultEntry&& value) { m_results.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMessageMoveTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMessageMoveTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMessageMoveTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListMessageMoveTasksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListMessageMoveTasksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ListMessageMoveTasksResultEntry> m_results;

    Aws::String m_requestId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
