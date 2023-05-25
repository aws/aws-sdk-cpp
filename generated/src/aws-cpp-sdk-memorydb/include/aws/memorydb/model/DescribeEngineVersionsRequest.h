/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class DescribeEngineVersionsRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API DescribeEngineVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEngineVersions"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Redis engine version</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The Redis engine version</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The Redis engine version</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The Redis engine version</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The Redis engine version</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The Redis engine version</p>
     */
    inline DescribeEngineVersionsRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The Redis engine version</p>
     */
    inline DescribeEngineVersionsRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The Redis engine version</p>
     */
    inline DescribeEngineVersionsRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The name of a specific parameter group family to return details for.</p>
     */
    inline const Aws::String& GetParameterGroupFamily() const{ return m_parameterGroupFamily; }

    /**
     * <p>The name of a specific parameter group family to return details for.</p>
     */
    inline bool ParameterGroupFamilyHasBeenSet() const { return m_parameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of a specific parameter group family to return details for.</p>
     */
    inline void SetParameterGroupFamily(const Aws::String& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = value; }

    /**
     * <p>The name of a specific parameter group family to return details for.</p>
     */
    inline void SetParameterGroupFamily(Aws::String&& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = std::move(value); }

    /**
     * <p>The name of a specific parameter group family to return details for.</p>
     */
    inline void SetParameterGroupFamily(const char* value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily.assign(value); }

    /**
     * <p>The name of a specific parameter group family to return details for.</p>
     */
    inline DescribeEngineVersionsRequest& WithParameterGroupFamily(const Aws::String& value) { SetParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of a specific parameter group family to return details for.</p>
     */
    inline DescribeEngineVersionsRequest& WithParameterGroupFamily(Aws::String&& value) { SetParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of a specific parameter group family to return details for.</p>
     */
    inline DescribeEngineVersionsRequest& WithParameterGroupFamily(const char* value) { SetParameterGroupFamily(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline DescribeEngineVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeEngineVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeEngineVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeEngineVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>If true, specifies that only the default version of the specified engine or
     * engine and major version combination is to be returned.</p>
     */
    inline bool GetDefaultOnly() const{ return m_defaultOnly; }

    /**
     * <p>If true, specifies that only the default version of the specified engine or
     * engine and major version combination is to be returned.</p>
     */
    inline bool DefaultOnlyHasBeenSet() const { return m_defaultOnlyHasBeenSet; }

    /**
     * <p>If true, specifies that only the default version of the specified engine or
     * engine and major version combination is to be returned.</p>
     */
    inline void SetDefaultOnly(bool value) { m_defaultOnlyHasBeenSet = true; m_defaultOnly = value; }

    /**
     * <p>If true, specifies that only the default version of the specified engine or
     * engine and major version combination is to be returned.</p>
     */
    inline DescribeEngineVersionsRequest& WithDefaultOnly(bool value) { SetDefaultOnly(value); return *this;}

  private:

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_parameterGroupFamily;
    bool m_parameterGroupFamilyHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_defaultOnly;
    bool m_defaultOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
