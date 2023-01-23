/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{
  class ListDatabasesResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ListDatabasesResult();
    AWS_REDSHIFTDATAAPISERVICE_API ListDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API ListDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of databases. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDatabases() const{ return m_databases; }

    /**
     * <p>The names of databases. </p>
     */
    inline void SetDatabases(const Aws::Vector<Aws::String>& value) { m_databases = value; }

    /**
     * <p>The names of databases. </p>
     */
    inline void SetDatabases(Aws::Vector<Aws::String>&& value) { m_databases = std::move(value); }

    /**
     * <p>The names of databases. </p>
     */
    inline ListDatabasesResult& WithDatabases(const Aws::Vector<Aws::String>& value) { SetDatabases(value); return *this;}

    /**
     * <p>The names of databases. </p>
     */
    inline ListDatabasesResult& WithDatabases(Aws::Vector<Aws::String>&& value) { SetDatabases(std::move(value)); return *this;}

    /**
     * <p>The names of databases. </p>
     */
    inline ListDatabasesResult& AddDatabases(const Aws::String& value) { m_databases.push_back(value); return *this; }

    /**
     * <p>The names of databases. </p>
     */
    inline ListDatabasesResult& AddDatabases(Aws::String&& value) { m_databases.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of databases. </p>
     */
    inline ListDatabasesResult& AddDatabases(const char* value) { m_databases.push_back(value); return *this; }


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline ListDatabasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline ListDatabasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline ListDatabasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_databases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
