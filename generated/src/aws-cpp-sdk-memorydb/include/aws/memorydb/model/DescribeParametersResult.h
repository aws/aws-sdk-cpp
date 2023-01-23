/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Parameter.h>
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
  class DescribeParametersResult
  {
  public:
    AWS_MEMORYDB_API DescribeParametersResult();
    AWS_MEMORYDB_API DescribeParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeParametersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeParametersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeParametersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of parameters specific to a particular parameter group. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of parameters specific to a particular parameter group. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parameters = value; }

    /**
     * <p>A list of parameters specific to a particular parameter group. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parameters = std::move(value); }

    /**
     * <p>A list of parameters specific to a particular parameter group. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline DescribeParametersResult& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of parameters specific to a particular parameter group. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline DescribeParametersResult& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of parameters specific to a particular parameter group. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline DescribeParametersResult& AddParameters(const Parameter& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of parameters specific to a particular parameter group. Each element
     * in the list contains detailed information about one parameter.</p>
     */
    inline DescribeParametersResult& AddParameters(Parameter&& value) { m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Parameter> m_parameters;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
