/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterMetadata.h>
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
  class DescribeParametersResult
  {
  public:
    AWS_SSM_API DescribeParametersResult();
    AWS_SSM_API DescribeParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Parameters returned by the request.</p>
     */
    inline const Aws::Vector<ParameterMetadata>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Vector<ParameterMetadata>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Vector<ParameterMetadata>&& value) { m_parameters = std::move(value); }
    inline DescribeParametersResult& WithParameters(const Aws::Vector<ParameterMetadata>& value) { SetParameters(value); return *this;}
    inline DescribeParametersResult& WithParameters(Aws::Vector<ParameterMetadata>&& value) { SetParameters(std::move(value)); return *this;}
    inline DescribeParametersResult& AddParameters(const ParameterMetadata& value) { m_parameters.push_back(value); return *this; }
    inline DescribeParametersResult& AddParameters(ParameterMetadata&& value) { m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeParametersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeParametersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeParametersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeParametersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeParametersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeParametersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ParameterMetadata> m_parameters;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
