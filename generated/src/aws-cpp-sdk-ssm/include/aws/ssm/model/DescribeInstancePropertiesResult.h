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
    AWS_SSM_API DescribeInstancePropertiesResult() = default;
    AWS_SSM_API DescribeInstancePropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstancePropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Properties for the managed instances.</p>
     */
    inline const Aws::Vector<InstanceProperty>& GetInstanceProperties() const { return m_instanceProperties; }
    template<typename InstancePropertiesT = Aws::Vector<InstanceProperty>>
    void SetInstanceProperties(InstancePropertiesT&& value) { m_instancePropertiesHasBeenSet = true; m_instanceProperties = std::forward<InstancePropertiesT>(value); }
    template<typename InstancePropertiesT = Aws::Vector<InstanceProperty>>
    DescribeInstancePropertiesResult& WithInstanceProperties(InstancePropertiesT&& value) { SetInstanceProperties(std::forward<InstancePropertiesT>(value)); return *this;}
    template<typename InstancePropertiesT = InstanceProperty>
    DescribeInstancePropertiesResult& AddInstanceProperties(InstancePropertiesT&& value) { m_instancePropertiesHasBeenSet = true; m_instanceProperties.emplace_back(std::forward<InstancePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of properties to return. Use this token to get the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstancePropertiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInstancePropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceProperty> m_instanceProperties;
    bool m_instancePropertiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
