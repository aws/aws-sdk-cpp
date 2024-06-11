﻿/**
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


    ///@{
    /**
     * <p>The query string that you want prepare.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }
    inline PrepareQueryResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline PrepareQueryResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline PrepareQueryResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of SELECT clause columns of the submitted query string. </p>
     */
    inline const Aws::Vector<SelectColumn>& GetColumns() const{ return m_columns; }
    inline void SetColumns(const Aws::Vector<SelectColumn>& value) { m_columns = value; }
    inline void SetColumns(Aws::Vector<SelectColumn>&& value) { m_columns = std::move(value); }
    inline PrepareQueryResult& WithColumns(const Aws::Vector<SelectColumn>& value) { SetColumns(value); return *this;}
    inline PrepareQueryResult& WithColumns(Aws::Vector<SelectColumn>&& value) { SetColumns(std::move(value)); return *this;}
    inline PrepareQueryResult& AddColumns(const SelectColumn& value) { m_columns.push_back(value); return *this; }
    inline PrepareQueryResult& AddColumns(SelectColumn&& value) { m_columns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameters used in the submitted query string. </p>
     */
    inline const Aws::Vector<ParameterMapping>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Vector<ParameterMapping>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Vector<ParameterMapping>&& value) { m_parameters = std::move(value); }
    inline PrepareQueryResult& WithParameters(const Aws::Vector<ParameterMapping>& value) { SetParameters(value); return *this;}
    inline PrepareQueryResult& WithParameters(Aws::Vector<ParameterMapping>&& value) { SetParameters(std::move(value)); return *this;}
    inline PrepareQueryResult& AddParameters(const ParameterMapping& value) { m_parameters.push_back(value); return *this; }
    inline PrepareQueryResult& AddParameters(ParameterMapping&& value) { m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PrepareQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PrepareQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PrepareQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queryString;

    Aws::Vector<SelectColumn> m_columns;

    Aws::Vector<ParameterMapping> m_parameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
