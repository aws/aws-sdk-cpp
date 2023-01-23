/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-query/model/SelectColumn.h>
#include <aws/timestream-query/model/ParameterMapping.h>
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
namespace TimestreamQuery
{
namespace Model
{
  class PrepareQueryResult
  {
  public:
    AWS_TIMESTREAMQUERY_API PrepareQueryResult();
    AWS_TIMESTREAMQUERY_API PrepareQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API PrepareQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The query string that you want prepare.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query string that you want prepare.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }

    /**
     * <p>The query string that you want prepare.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }

    /**
     * <p>The query string that you want prepare.</p>
     */
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }

    /**
     * <p>The query string that you want prepare.</p>
     */
    inline PrepareQueryResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query string that you want prepare.</p>
     */
    inline PrepareQueryResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query string that you want prepare.</p>
     */
    inline PrepareQueryResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>A list of SELECT clause columns of the submitted query string. </p>
     */
    inline const Aws::Vector<SelectColumn>& GetColumns() const{ return m_columns; }

    /**
     * <p>A list of SELECT clause columns of the submitted query string. </p>
     */
    inline void SetColumns(const Aws::Vector<SelectColumn>& value) { m_columns = value; }

    /**
     * <p>A list of SELECT clause columns of the submitted query string. </p>
     */
    inline void SetColumns(Aws::Vector<SelectColumn>&& value) { m_columns = std::move(value); }

    /**
     * <p>A list of SELECT clause columns of the submitted query string. </p>
     */
    inline PrepareQueryResult& WithColumns(const Aws::Vector<SelectColumn>& value) { SetColumns(value); return *this;}

    /**
     * <p>A list of SELECT clause columns of the submitted query string. </p>
     */
    inline PrepareQueryResult& WithColumns(Aws::Vector<SelectColumn>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>A list of SELECT clause columns of the submitted query string. </p>
     */
    inline PrepareQueryResult& AddColumns(const SelectColumn& value) { m_columns.push_back(value); return *this; }

    /**
     * <p>A list of SELECT clause columns of the submitted query string. </p>
     */
    inline PrepareQueryResult& AddColumns(SelectColumn&& value) { m_columns.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of parameters used in the submitted query string. </p>
     */
    inline const Aws::Vector<ParameterMapping>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of parameters used in the submitted query string. </p>
     */
    inline void SetParameters(const Aws::Vector<ParameterMapping>& value) { m_parameters = value; }

    /**
     * <p>A list of parameters used in the submitted query string. </p>
     */
    inline void SetParameters(Aws::Vector<ParameterMapping>&& value) { m_parameters = std::move(value); }

    /**
     * <p>A list of parameters used in the submitted query string. </p>
     */
    inline PrepareQueryResult& WithParameters(const Aws::Vector<ParameterMapping>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of parameters used in the submitted query string. </p>
     */
    inline PrepareQueryResult& WithParameters(Aws::Vector<ParameterMapping>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of parameters used in the submitted query string. </p>
     */
    inline PrepareQueryResult& AddParameters(const ParameterMapping& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of parameters used in the submitted query string. </p>
     */
    inline PrepareQueryResult& AddParameters(ParameterMapping&& value) { m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_queryString;

    Aws::Vector<SelectColumn> m_columns;

    Aws::Vector<ParameterMapping> m_parameters;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
