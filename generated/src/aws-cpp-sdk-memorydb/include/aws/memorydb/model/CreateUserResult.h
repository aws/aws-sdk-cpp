﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/User.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateUserResult
  {
  public:
    AWS_MEMORYDB_API CreateUserResult();
    AWS_MEMORYDB_API CreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API CreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly-created user.</p>
     */
    inline const User& GetUser() const{ return m_user; }
    inline void SetUser(const User& value) { m_user = value; }
    inline void SetUser(User&& value) { m_user = std::move(value); }
    inline CreateUserResult& WithUser(const User& value) { SetUser(value); return *this;}
    inline CreateUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    User m_user;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
