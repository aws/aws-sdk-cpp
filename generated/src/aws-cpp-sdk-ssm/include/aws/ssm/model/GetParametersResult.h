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
    AWS_SSM_API GetParametersResult();
    AWS_SSM_API GetParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of details for a parameter.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parameters = std::move(value); }
    inline GetParametersResult& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}
    inline GetParametersResult& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline GetParametersResult& AddParameters(const Parameter& value) { m_parameters.push_back(value); return *this; }
    inline GetParametersResult& AddParameters(Parameter&& value) { m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameters that aren't formatted correctly or don't run during an
     * execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidParameters() const{ return m_invalidParameters; }
    inline void SetInvalidParameters(const Aws::Vector<Aws::String>& value) { m_invalidParameters = value; }
    inline void SetInvalidParameters(Aws::Vector<Aws::String>&& value) { m_invalidParameters = std::move(value); }
    inline GetParametersResult& WithInvalidParameters(const Aws::Vector<Aws::String>& value) { SetInvalidParameters(value); return *this;}
    inline GetParametersResult& WithInvalidParameters(Aws::Vector<Aws::String>&& value) { SetInvalidParameters(std::move(value)); return *this;}
    inline GetParametersResult& AddInvalidParameters(const Aws::String& value) { m_invalidParameters.push_back(value); return *this; }
    inline GetParametersResult& AddInvalidParameters(Aws::String&& value) { m_invalidParameters.push_back(std::move(value)); return *this; }
    inline GetParametersResult& AddInvalidParameters(const char* value) { m_invalidParameters.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetParametersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetParametersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetParametersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Parameter> m_parameters;

    Aws::Vector<Aws::String> m_invalidParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
