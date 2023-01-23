/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/DatabaseSummary.h>
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
namespace SsmSap
{
namespace Model
{
  class ListDatabasesResult
  {
  public:
    AWS_SSMSAP_API ListDatabasesResult();
    AWS_SSMSAP_API ListDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::Vector<DatabaseSummary>& GetDatabases() const{ return m_databases; }

    /**
     * <p/>
     */
    inline void SetDatabases(const Aws::Vector<DatabaseSummary>& value) { m_databases = value; }

    /**
     * <p/>
     */
    inline void SetDatabases(Aws::Vector<DatabaseSummary>&& value) { m_databases = std::move(value); }

    /**
     * <p/>
     */
    inline ListDatabasesResult& WithDatabases(const Aws::Vector<DatabaseSummary>& value) { SetDatabases(value); return *this;}

    /**
     * <p/>
     */
    inline ListDatabasesResult& WithDatabases(Aws::Vector<DatabaseSummary>&& value) { SetDatabases(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListDatabasesResult& AddDatabases(const DatabaseSummary& value) { m_databases.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ListDatabasesResult& AddDatabases(DatabaseSummary&& value) { m_databases.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p/>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p/>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p/>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p/>
     */
    inline ListDatabasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p/>
     */
    inline ListDatabasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListDatabasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatabaseSummary> m_databases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
