/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ApplicationResourceAssociation.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeApplicationAssociationsResult
  {
  public:
    AWS_WORKSPACES_API DescribeApplicationAssociationsResult();
    AWS_WORKSPACES_API DescribeApplicationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeApplicationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of associations and information about them.</p>
     */
    inline const Aws::Vector<ApplicationResourceAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>List of associations and information about them.</p>
     */
    inline void SetAssociations(const Aws::Vector<ApplicationResourceAssociation>& value) { m_associations = value; }

    /**
     * <p>List of associations and information about them.</p>
     */
    inline void SetAssociations(Aws::Vector<ApplicationResourceAssociation>&& value) { m_associations = std::move(value); }

    /**
     * <p>List of associations and information about them.</p>
     */
    inline DescribeApplicationAssociationsResult& WithAssociations(const Aws::Vector<ApplicationResourceAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>List of associations and information about them.</p>
     */
    inline DescribeApplicationAssociationsResult& WithAssociations(Aws::Vector<ApplicationResourceAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>List of associations and information about them.</p>
     */
    inline DescribeApplicationAssociationsResult& AddAssociations(const ApplicationResourceAssociation& value) { m_associations.push_back(value); return *this; }

    /**
     * <p>List of associations and information about them.</p>
     */
    inline DescribeApplicationAssociationsResult& AddAssociations(ApplicationResourceAssociation&& value) { m_associations.push_back(std::move(value)); return *this; }


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeApplicationAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeApplicationAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeApplicationAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ApplicationResourceAssociation> m_associations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
