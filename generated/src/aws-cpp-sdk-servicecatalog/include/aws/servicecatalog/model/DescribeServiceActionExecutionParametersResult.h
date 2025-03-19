/**
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
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult() = default;
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The parameters of the self-service action.</p>
     */
    inline const Aws::Vector<ExecutionParameter>& GetServiceActionParameters() const { return m_serviceActionParameters; }
    template<typename ServiceActionParametersT = Aws::Vector<ExecutionParameter>>
    void SetServiceActionParameters(ServiceActionParametersT&& value) { m_serviceActionParametersHasBeenSet = true; m_serviceActionParameters = std::forward<ServiceActionParametersT>(value); }
    template<typename ServiceActionParametersT = Aws::Vector<ExecutionParameter>>
    DescribeServiceActionExecutionParametersResult& WithServiceActionParameters(ServiceActionParametersT&& value) { SetServiceActionParameters(std::forward<ServiceActionParametersT>(value)); return *this;}
    template<typename ServiceActionParametersT = ExecutionParameter>
    DescribeServiceActionExecutionParametersResult& AddServiceActionParameters(ServiceActionParametersT&& value) { m_serviceActionParametersHasBeenSet = true; m_serviceActionParameters.emplace_back(std::forward<ServiceActionParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeServiceActionExecutionParametersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExecutionParameter> m_serviceActionParameters;
    bool m_serviceActionParametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
