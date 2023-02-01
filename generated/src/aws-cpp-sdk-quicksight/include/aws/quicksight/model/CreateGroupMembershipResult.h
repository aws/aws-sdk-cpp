/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GroupMember.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateGroupMembershipResult
  {
  public:
    AWS_QUICKSIGHT_API CreateGroupMembershipResult();
    AWS_QUICKSIGHT_API CreateGroupMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateGroupMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The group member.</p>
     */
    inline const GroupMember& GetGroupMember() const{ return m_groupMember; }

    /**
     * <p>The group member.</p>
     */
    inline void SetGroupMember(const GroupMember& value) { m_groupMember = value; }

    /**
     * <p>The group member.</p>
     */
    inline void SetGroupMember(GroupMember&& value) { m_groupMember = std::move(value); }

    /**
     * <p>The group member.</p>
     */
    inline CreateGroupMembershipResult& WithGroupMember(const GroupMember& value) { SetGroupMember(value); return *this;}

    /**
     * <p>The group member.</p>
     */
    inline CreateGroupMembershipResult& WithGroupMember(GroupMember&& value) { SetGroupMember(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateGroupMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateGroupMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateGroupMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline CreateGroupMembershipResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    GroupMember m_groupMember;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
