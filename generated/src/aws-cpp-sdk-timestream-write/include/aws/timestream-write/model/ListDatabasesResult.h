/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/Database.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class ListDatabasesResult
  {
  public:
    AWS_TIMESTREAMWRITE_API ListDatabasesResult();
    AWS_TIMESTREAMWRITE_API ListDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API ListDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of database names.</p>
     */
    inline const Aws::Vector<Database>& GetDatabases() const{ return m_databases; }

    /**
     * <p>A list of database names.</p>
     */
    inline void SetDatabases(const Aws::Vector<Database>& value) { m_databases = value; }

    /**
     * <p>A list of database names.</p>
     */
    inline void SetDatabases(Aws::Vector<Database>&& value) { m_databases = std::move(value); }

    /**
     * <p>A list of database names.</p>
     */
    inline ListDatabasesResult& WithDatabases(const Aws::Vector<Database>& value) { SetDatabases(value); return *this;}

    /**
     * <p>A list of database names.</p>
     */
    inline ListDatabasesResult& WithDatabases(Aws::Vector<Database>&& value) { SetDatabases(std::move(value)); return *this;}

    /**
     * <p>A list of database names.</p>
     */
    inline ListDatabasesResult& AddDatabases(const Database& value) { m_databases.push_back(value); return *this; }

    /**
     * <p>A list of database names.</p>
     */
    inline ListDatabasesResult& AddDatabases(Database&& value) { m_databases.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token. This parameter is returned when the response is
     * truncated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token. This parameter is returned when the response is
     * truncated.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token. This parameter is returned when the response is
     * truncated.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token. This parameter is returned when the response is
     * truncated.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token. This parameter is returned when the response is
     * truncated.</p>
     */
    inline ListDatabasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token. This parameter is returned when the response is
     * truncated.</p>
     */
    inline ListDatabasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token. This parameter is returned when the response is
     * truncated.</p>
     */
    inline ListDatabasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Database> m_databases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
