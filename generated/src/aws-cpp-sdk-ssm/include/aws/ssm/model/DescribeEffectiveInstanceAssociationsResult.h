/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstanceAssociation.h>
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
  class DescribeEffectiveInstanceAssociationsResult
  {
  public:
    AWS_SSM_API DescribeEffectiveInstanceAssociationsResult();
    AWS_SSM_API DescribeEffectiveInstanceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeEffectiveInstanceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The associations for the requested managed node.</p>
     */
    inline const Aws::Vector<InstanceAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>The associations for the requested managed node.</p>
     */
    inline void SetAssociations(const Aws::Vector<InstanceAssociation>& value) { m_associations = value; }

    /**
     * <p>The associations for the requested managed node.</p>
     */
    inline void SetAssociations(Aws::Vector<InstanceAssociation>&& value) { m_associations = std::move(value); }

    /**
     * <p>The associations for the requested managed node.</p>
     */
    inline DescribeEffectiveInstanceAssociationsResult& WithAssociations(const Aws::Vector<InstanceAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>The associations for the requested managed node.</p>
     */
    inline DescribeEffectiveInstanceAssociationsResult& WithAssociations(Aws::Vector<InstanceAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>The associations for the requested managed node.</p>
     */
    inline DescribeEffectiveInstanceAssociationsResult& AddAssociations(const InstanceAssociation& value) { m_associations.push_back(value); return *this; }

    /**
     * <p>The associations for the requested managed node.</p>
     */
    inline DescribeEffectiveInstanceAssociationsResult& AddAssociations(InstanceAssociation&& value) { m_associations.push_back(std::move(value)); return *this; }


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
    inline DescribeEffectiveInstanceAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeEffectiveInstanceAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeEffectiveInstanceAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEffectiveInstanceAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEffectiveInstanceAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEffectiveInstanceAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<InstanceAssociation> m_associations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
