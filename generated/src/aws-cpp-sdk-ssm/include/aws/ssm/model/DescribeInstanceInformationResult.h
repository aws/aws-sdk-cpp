/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstanceInformation.h>
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
  class DescribeInstanceInformationResult
  {
  public:
    AWS_SSM_API DescribeInstanceInformationResult();
    AWS_SSM_API DescribeInstanceInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstanceInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The managed node information list.</p>
     */
    inline const Aws::Vector<InstanceInformation>& GetInstanceInformationList() const{ return m_instanceInformationList; }
    inline void SetInstanceInformationList(const Aws::Vector<InstanceInformation>& value) { m_instanceInformationList = value; }
    inline void SetInstanceInformationList(Aws::Vector<InstanceInformation>&& value) { m_instanceInformationList = std::move(value); }
    inline DescribeInstanceInformationResult& WithInstanceInformationList(const Aws::Vector<InstanceInformation>& value) { SetInstanceInformationList(value); return *this;}
    inline DescribeInstanceInformationResult& WithInstanceInformationList(Aws::Vector<InstanceInformation>&& value) { SetInstanceInformationList(std::move(value)); return *this;}
    inline DescribeInstanceInformationResult& AddInstanceInformationList(const InstanceInformation& value) { m_instanceInformationList.push_back(value); return *this; }
    inline DescribeInstanceInformationResult& AddInstanceInformationList(InstanceInformation&& value) { m_instanceInformationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeInstanceInformationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstanceInformationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstanceInformationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInstanceInformationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInstanceInformationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInstanceInformationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceInformation> m_instanceInformationList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
