/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/ACL.h>
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
  class DeleteACLResult
  {
  public:
    AWS_MEMORYDB_API DeleteACLResult();
    AWS_MEMORYDB_API DeleteACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DeleteACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Access Control List object that has been deleted.</p>
     */
    inline const ACL& GetACL() const{ return m_aCL; }

    /**
     * <p>The Access Control List object that has been deleted.</p>
     */
    inline void SetACL(const ACL& value) { m_aCL = value; }

    /**
     * <p>The Access Control List object that has been deleted.</p>
     */
    inline void SetACL(ACL&& value) { m_aCL = std::move(value); }

    /**
     * <p>The Access Control List object that has been deleted.</p>
     */
    inline DeleteACLResult& WithACL(const ACL& value) { SetACL(value); return *this;}

    /**
     * <p>The Access Control List object that has been deleted.</p>
     */
    inline DeleteACLResult& WithACL(ACL&& value) { SetACL(std::move(value)); return *this;}

  private:

    ACL m_aCL;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
