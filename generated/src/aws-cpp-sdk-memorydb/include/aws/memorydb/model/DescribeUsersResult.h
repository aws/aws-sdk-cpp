﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/User.h>
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
namespace MemoryDB
{
namespace Model
{
  class DescribeUsersResult
  {
  public:
    AWS_MEMORYDB_API DescribeUsersResult();
    AWS_MEMORYDB_API DescribeUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of users.</p>
     */
    inline const Aws::Vector<User>& GetUsers() const{ return m_users; }
    inline void SetUsers(const Aws::Vector<User>& value) { m_users = value; }
    inline void SetUsers(Aws::Vector<User>&& value) { m_users = std::move(value); }
    inline DescribeUsersResult& WithUsers(const Aws::Vector<User>& value) { SetUsers(value); return *this;}
    inline DescribeUsersResult& WithUsers(Aws::Vector<User>&& value) { SetUsers(std::move(value)); return *this;}
    inline DescribeUsersResult& AddUsers(const User& value) { m_users.push_back(value); return *this; }
    inline DescribeUsersResult& AddUsers(User&& value) { m_users.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<User> m_users;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
