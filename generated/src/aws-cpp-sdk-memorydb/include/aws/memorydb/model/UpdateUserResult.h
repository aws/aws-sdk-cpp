/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
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
  class UpdateUserResult
  {
  public:
    AWS_MEMORYDB_API UpdateUserResult();
    AWS_MEMORYDB_API UpdateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API UpdateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated user</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>The updated user</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>The updated user</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>The updated user</p>
     */
    inline UpdateUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>The updated user</p>
     */
    inline UpdateUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}

  private:

    User m_user;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
