/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/GroupSummary.h>
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
namespace XRay
{
namespace Model
{
  class GetGroupsResult
  {
  public:
    AWS_XRAY_API GetGroupsResult();
    AWS_XRAY_API GetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The collection of all active groups.</p>
     */
    inline const Aws::Vector<GroupSummary>& GetGroups() const{ return m_groups; }

    /**
     * <p>The collection of all active groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupSummary>& value) { m_groups = value; }

    /**
     * <p>The collection of all active groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupSummary>&& value) { m_groups = std::move(value); }

    /**
     * <p>The collection of all active groups.</p>
     */
    inline GetGroupsResult& WithGroups(const Aws::Vector<GroupSummary>& value) { SetGroups(value); return *this;}

    /**
     * <p>The collection of all active groups.</p>
     */
    inline GetGroupsResult& WithGroups(Aws::Vector<GroupSummary>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The collection of all active groups.</p>
     */
    inline GetGroupsResult& AddGroups(const GroupSummary& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The collection of all active groups.</p>
     */
    inline GetGroupsResult& AddGroups(GroupSummary&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline GetGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline GetGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline GetGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupSummary> m_groups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
