﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ExecutionParameter.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeServiceActionExecutionParametersResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult();
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline const Aws::Vector<ExecutionParameter>& GetServiceActionParameters() const{ return m_serviceActionParameters; }
    inline void SetServiceActionParameters(const Aws::Vector<ExecutionParameter>& value) { m_serviceActionParameters = value; }
    inline void SetServiceActionParameters(Aws::Vector<ExecutionParameter>&& value) { m_serviceActionParameters = std::move(value); }
    inline DescribeServiceActionExecutionParametersResult& WithServiceActionParameters(const Aws::Vector<ExecutionParameter>& value) { SetServiceActionParameters(value); return *this;}
    inline DescribeServiceActionExecutionParametersResult& WithServiceActionParameters(Aws::Vector<ExecutionParameter>&& value) { SetServiceActionParameters(std::move(value)); return *this;}
    inline DescribeServiceActionExecutionParametersResult& AddServiceActionParameters(const ExecutionParameter& value) { m_serviceActionParameters.push_back(value); return *this; }
    inline DescribeServiceActionExecutionParametersResult& AddServiceActionParameters(ExecutionParameter&& value) { m_serviceActionParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeServiceActionExecutionParametersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeServiceActionExecutionParametersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeServiceActionExecutionParametersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExecutionParameter> m_serviceActionParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
