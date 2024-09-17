/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/GroupMetadata.h>
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
namespace WorkDocs
{
namespace Model
{
  class DescribeGroupsResult
  {
  public:
    AWS_WORKDOCS_API DescribeGroupsResult();
    AWS_WORKDOCS_API DescribeGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of groups.</p>
     */
    inline const Aws::Vector<GroupMetadata>& GetGroups() const{ return m_groups; }
    inline void SetGroups(const Aws::Vector<GroupMetadata>& value) { m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupMetadata>&& value) { m_groups = std::move(value); }
    inline DescribeGroupsResult& WithGroups(const Aws::Vector<GroupMetadata>& value) { SetGroups(value); return *this;}
    inline DescribeGroupsResult& WithGroups(Aws::Vector<GroupMetadata>&& value) { SetGroups(std::move(value)); return *this;}
    inline DescribeGroupsResult& AddGroups(const GroupMetadata& value) { m_groups.push_back(value); return *this; }
    inline DescribeGroupsResult& AddGroups(GroupMetadata&& value) { m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GroupMetadata> m_groups;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
