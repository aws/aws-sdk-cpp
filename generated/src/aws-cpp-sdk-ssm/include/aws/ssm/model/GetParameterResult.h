/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/Parameter.h>
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
namespace SSM
{
namespace Model
{
  class GetParameterResult
  {
  public:
    AWS_SSM_API GetParameterResult();
    AWS_SSM_API GetParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a parameter.</p>
     */
    inline const Parameter& GetParameter() const{ return m_parameter; }

    /**
     * <p>Information about a parameter.</p>
     */
    inline void SetParameter(const Parameter& value) { m_parameter = value; }

    /**
     * <p>Information about a parameter.</p>
     */
    inline void SetParameter(Parameter&& value) { m_parameter = std::move(value); }

    /**
     * <p>Information about a parameter.</p>
     */
    inline GetParameterResult& WithParameter(const Parameter& value) { SetParameter(value); return *this;}

    /**
     * <p>Information about a parameter.</p>
     */
    inline GetParameterResult& WithParameter(Parameter&& value) { SetParameter(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetParameterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetParameterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetParameterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Parameter m_parameter;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
