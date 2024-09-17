/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstanceProperty.h>
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
  class DescribeInstancePropertiesResult
  {
  public:
    AWS_SSM_API DescribeInstancePropertiesResult();
    AWS_SSM_API DescribeInstancePropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstancePropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Properties for the managed instances.</p>
     */
    inline const Aws::Vector<InstanceProperty>& GetInstanceProperties() const{ return m_instanceProperties; }
    inline void SetInstanceProperties(const Aws::Vector<InstanceProperty>& value) { m_instanceProperties = value; }
    inline void SetInstanceProperties(Aws::Vector<InstanceProperty>&& value) { m_instanceProperties = std::move(value); }
    inline DescribeInstancePropertiesResult& WithInstanceProperties(const Aws::Vector<InstanceProperty>& value) { SetInstanceProperties(value); return *this;}
    inline DescribeInstancePropertiesResult& WithInstanceProperties(Aws::Vector<InstanceProperty>&& value) { SetInstanceProperties(std::move(value)); return *this;}
    inline DescribeInstancePropertiesResult& AddInstanceProperties(const InstanceProperty& value) { m_instanceProperties.push_back(value); return *this; }
    inline DescribeInstancePropertiesResult& AddInstanceProperties(InstanceProperty&& value) { m_instanceProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of properties to return. Use this token to get the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeInstancePropertiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstancePropertiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstancePropertiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInstancePropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInstancePropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInstancePropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceProperty> m_instanceProperties;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
