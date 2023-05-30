/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/DataLakeException.h>
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
namespace SecurityLake
{
namespace Model
{
  class ListDataLakeExceptionsResult
  {
  public:
    AWS_SECURITYLAKE_API ListDataLakeExceptionsResult();
    AWS_SECURITYLAKE_API ListDataLakeExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API ListDataLakeExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the failures that cannot be retried in the current Region.</p>
     */
    inline const Aws::Vector<DataLakeException>& GetExceptions() const{ return m_exceptions; }

    /**
     * <p>Lists the failures that cannot be retried in the current Region.</p>
     */
    inline void SetExceptions(const Aws::Vector<DataLakeException>& value) { m_exceptions = value; }

    /**
     * <p>Lists the failures that cannot be retried in the current Region.</p>
     */
    inline void SetExceptions(Aws::Vector<DataLakeException>&& value) { m_exceptions = std::move(value); }

    /**
     * <p>Lists the failures that cannot be retried in the current Region.</p>
     */
    inline ListDataLakeExceptionsResult& WithExceptions(const Aws::Vector<DataLakeException>& value) { SetExceptions(value); return *this;}

    /**
     * <p>Lists the failures that cannot be retried in the current Region.</p>
     */
    inline ListDataLakeExceptionsResult& WithExceptions(Aws::Vector<DataLakeException>&& value) { SetExceptions(std::move(value)); return *this;}

    /**
     * <p>Lists the failures that cannot be retried in the current Region.</p>
     */
    inline ListDataLakeExceptionsResult& AddExceptions(const DataLakeException& value) { m_exceptions.push_back(value); return *this; }

    /**
     * <p>Lists the failures that cannot be retried in the current Region.</p>
     */
    inline ListDataLakeExceptionsResult& AddExceptions(DataLakeException&& value) { m_exceptions.push_back(std::move(value)); return *this; }


    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline ListDataLakeExceptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline ListDataLakeExceptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline ListDataLakeExceptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDataLakeExceptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDataLakeExceptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDataLakeExceptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataLakeException> m_exceptions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
