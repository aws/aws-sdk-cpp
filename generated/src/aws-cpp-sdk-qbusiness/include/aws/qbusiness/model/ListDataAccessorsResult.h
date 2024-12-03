/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DataAccessor.h>
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
namespace QBusiness
{
namespace Model
{
  class ListDataAccessorsResult
  {
  public:
    AWS_QBUSINESS_API ListDataAccessorsResult();
    AWS_QBUSINESS_API ListDataAccessorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListDataAccessorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of data accessors.</p>
     */
    inline const Aws::Vector<DataAccessor>& GetDataAccessors() const{ return m_dataAccessors; }
    inline void SetDataAccessors(const Aws::Vector<DataAccessor>& value) { m_dataAccessors = value; }
    inline void SetDataAccessors(Aws::Vector<DataAccessor>&& value) { m_dataAccessors = std::move(value); }
    inline ListDataAccessorsResult& WithDataAccessors(const Aws::Vector<DataAccessor>& value) { SetDataAccessors(value); return *this;}
    inline ListDataAccessorsResult& WithDataAccessors(Aws::Vector<DataAccessor>&& value) { SetDataAccessors(std::move(value)); return *this;}
    inline ListDataAccessorsResult& AddDataAccessors(const DataAccessor& value) { m_dataAccessors.push_back(value); return *this; }
    inline ListDataAccessorsResult& AddDataAccessors(DataAccessor&& value) { m_dataAccessors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next set of results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataAccessorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataAccessorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataAccessorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataAccessorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataAccessorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataAccessorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataAccessor> m_dataAccessors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
