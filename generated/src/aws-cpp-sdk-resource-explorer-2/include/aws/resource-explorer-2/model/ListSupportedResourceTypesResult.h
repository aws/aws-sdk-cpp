/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/model/SupportedResourceType.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class ListSupportedResourceTypesResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API ListSupportedResourceTypesResult();
    AWS_RESOURCEEXPLORER2_API ListSupportedResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API ListSupportedResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline ListSupportedResourceTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline ListSupportedResourceTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline ListSupportedResourceTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of resource types supported by Resource Explorer.</p>
     */
    inline const Aws::Vector<SupportedResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The list of resource types supported by Resource Explorer.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<SupportedResourceType>& value) { m_resourceTypes = value; }

    /**
     * <p>The list of resource types supported by Resource Explorer.</p>
     */
    inline void SetResourceTypes(Aws::Vector<SupportedResourceType>&& value) { m_resourceTypes = std::move(value); }

    /**
     * <p>The list of resource types supported by Resource Explorer.</p>
     */
    inline ListSupportedResourceTypesResult& WithResourceTypes(const Aws::Vector<SupportedResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The list of resource types supported by Resource Explorer.</p>
     */
    inline ListSupportedResourceTypesResult& WithResourceTypes(Aws::Vector<SupportedResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The list of resource types supported by Resource Explorer.</p>
     */
    inline ListSupportedResourceTypesResult& AddResourceTypes(const SupportedResourceType& value) { m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The list of resource types supported by Resource Explorer.</p>
     */
    inline ListSupportedResourceTypesResult& AddResourceTypes(SupportedResourceType&& value) { m_resourceTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSupportedResourceTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSupportedResourceTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSupportedResourceTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<SupportedResourceType> m_resourceTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
