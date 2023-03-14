/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstanceAssociationStatusInfo.h>
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
  class DescribeInstanceAssociationsStatusResult
  {
  public:
    AWS_SSM_API DescribeInstanceAssociationsStatusResult();
    AWS_SSM_API DescribeInstanceAssociationsStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstanceAssociationsStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Status information about the association.</p>
     */
    inline const Aws::Vector<InstanceAssociationStatusInfo>& GetInstanceAssociationStatusInfos() const{ return m_instanceAssociationStatusInfos; }

    /**
     * <p>Status information about the association.</p>
     */
    inline void SetInstanceAssociationStatusInfos(const Aws::Vector<InstanceAssociationStatusInfo>& value) { m_instanceAssociationStatusInfos = value; }

    /**
     * <p>Status information about the association.</p>
     */
    inline void SetInstanceAssociationStatusInfos(Aws::Vector<InstanceAssociationStatusInfo>&& value) { m_instanceAssociationStatusInfos = std::move(value); }

    /**
     * <p>Status information about the association.</p>
     */
    inline DescribeInstanceAssociationsStatusResult& WithInstanceAssociationStatusInfos(const Aws::Vector<InstanceAssociationStatusInfo>& value) { SetInstanceAssociationStatusInfos(value); return *this;}

    /**
     * <p>Status information about the association.</p>
     */
    inline DescribeInstanceAssociationsStatusResult& WithInstanceAssociationStatusInfos(Aws::Vector<InstanceAssociationStatusInfo>&& value) { SetInstanceAssociationStatusInfos(std::move(value)); return *this;}

    /**
     * <p>Status information about the association.</p>
     */
    inline DescribeInstanceAssociationsStatusResult& AddInstanceAssociationStatusInfos(const InstanceAssociationStatusInfo& value) { m_instanceAssociationStatusInfos.push_back(value); return *this; }

    /**
     * <p>Status information about the association.</p>
     */
    inline DescribeInstanceAssociationsStatusResult& AddInstanceAssociationStatusInfos(InstanceAssociationStatusInfo&& value) { m_instanceAssociationStatusInfos.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstanceAssociationsStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstanceAssociationsStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstanceAssociationsStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeInstanceAssociationsStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeInstanceAssociationsStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeInstanceAssociationsStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<InstanceAssociationStatusInfo> m_instanceAssociationStatusInfos;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
