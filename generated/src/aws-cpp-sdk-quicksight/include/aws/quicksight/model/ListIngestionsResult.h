﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Ingestion.h>
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
namespace QuickSight
{
namespace Model
{
  class ListIngestionsResult
  {
  public:
    AWS_QUICKSIGHT_API ListIngestionsResult();
    AWS_QUICKSIGHT_API ListIngestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListIngestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the ingestions.</p>
     */
    inline const Aws::Vector<Ingestion>& GetIngestions() const{ return m_ingestions; }
    inline void SetIngestions(const Aws::Vector<Ingestion>& value) { m_ingestions = value; }
    inline void SetIngestions(Aws::Vector<Ingestion>&& value) { m_ingestions = std::move(value); }
    inline ListIngestionsResult& WithIngestions(const Aws::Vector<Ingestion>& value) { SetIngestions(value); return *this;}
    inline ListIngestionsResult& WithIngestions(Aws::Vector<Ingestion>&& value) { SetIngestions(std::move(value)); return *this;}
    inline ListIngestionsResult& AddIngestions(const Ingestion& value) { m_ingestions.push_back(value); return *this; }
    inline ListIngestionsResult& AddIngestions(Ingestion&& value) { m_ingestions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIngestionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIngestionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIngestionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIngestionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIngestionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIngestionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListIngestionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<Ingestion> m_ingestions;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
