/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Parameter.h>
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
namespace SSM
{
namespace Model
{
  class GetParametersResult
  {
  public:
    AWS_SSM_API GetParametersResult() = default;
    AWS_SSM_API GetParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of details for a parameter.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    GetParametersResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    GetParametersResult& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidParameters() const { return m_invalidParameters; }
    template<typename InvalidParametersT = Aws::Vector<Aws::String>>
    void SetInvalidParameters(InvalidParametersT&& value) { m_invalidParametersHasBeenSet = true; m_invalidParameters = std::forward<InvalidParametersT>(value); }
    template<typename InvalidParametersT = Aws::Vector<Aws::String>>
    GetParametersResult& WithInvalidParameters(InvalidParametersT&& value) { SetInvalidParameters(std::forward<InvalidParametersT>(value)); return *this;}
    template<typename InvalidParametersT = Aws::String>
    GetParametersResult& AddInvalidParameters(InvalidParametersT&& value) { m_invalidParametersHasBeenSet = true; m_invalidParameters.emplace_back(std::forward<InvalidParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetParametersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_invalidParameters;
    bool m_invalidParametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
