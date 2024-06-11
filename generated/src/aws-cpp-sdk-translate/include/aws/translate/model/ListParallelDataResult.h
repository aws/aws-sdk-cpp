﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataProperties.h>
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
namespace Translate
{
namespace Model
{
  class ListParallelDataResult
  {
  public:
    AWS_TRANSLATE_API ListParallelDataResult();
    AWS_TRANSLATE_API ListParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ListParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the parallel data resources returned by this request.</p>
     */
    inline const Aws::Vector<ParallelDataProperties>& GetParallelDataPropertiesList() const{ return m_parallelDataPropertiesList; }
    inline void SetParallelDataPropertiesList(const Aws::Vector<ParallelDataProperties>& value) { m_parallelDataPropertiesList = value; }
    inline void SetParallelDataPropertiesList(Aws::Vector<ParallelDataProperties>&& value) { m_parallelDataPropertiesList = std::move(value); }
    inline ListParallelDataResult& WithParallelDataPropertiesList(const Aws::Vector<ParallelDataProperties>& value) { SetParallelDataPropertiesList(value); return *this;}
    inline ListParallelDataResult& WithParallelDataPropertiesList(Aws::Vector<ParallelDataProperties>&& value) { SetParallelDataPropertiesList(std::move(value)); return *this;}
    inline ListParallelDataResult& AddParallelDataPropertiesList(const ParallelDataProperties& value) { m_parallelDataPropertiesList.push_back(value); return *this; }
    inline ListParallelDataResult& AddParallelDataPropertiesList(ParallelDataProperties&& value) { m_parallelDataPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListParallelDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListParallelDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListParallelDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListParallelDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListParallelDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListParallelDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ParallelDataProperties> m_parallelDataPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
