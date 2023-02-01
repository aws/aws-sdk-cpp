/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareInvitation.h>
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
namespace RAM
{
namespace Model
{
  class GetResourceShareInvitationsResult
  {
  public:
    AWS_RAM_API GetResourceShareInvitationsResult();
    AWS_RAM_API GetResourceShareInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API GetResourceShareInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that contain the details about the invitations.</p>
     */
    inline const Aws::Vector<ResourceShareInvitation>& GetResourceShareInvitations() const{ return m_resourceShareInvitations; }

    /**
     * <p>An array of objects that contain the details about the invitations.</p>
     */
    inline void SetResourceShareInvitations(const Aws::Vector<ResourceShareInvitation>& value) { m_resourceShareInvitations = value; }

    /**
     * <p>An array of objects that contain the details about the invitations.</p>
     */
    inline void SetResourceShareInvitations(Aws::Vector<ResourceShareInvitation>&& value) { m_resourceShareInvitations = std::move(value); }

    /**
     * <p>An array of objects that contain the details about the invitations.</p>
     */
    inline GetResourceShareInvitationsResult& WithResourceShareInvitations(const Aws::Vector<ResourceShareInvitation>& value) { SetResourceShareInvitations(value); return *this;}

    /**
     * <p>An array of objects that contain the details about the invitations.</p>
     */
    inline GetResourceShareInvitationsResult& WithResourceShareInvitations(Aws::Vector<ResourceShareInvitation>&& value) { SetResourceShareInvitations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contain the details about the invitations.</p>
     */
    inline GetResourceShareInvitationsResult& AddResourceShareInvitations(const ResourceShareInvitation& value) { m_resourceShareInvitations.push_back(value); return *this; }

    /**
     * <p>An array of objects that contain the details about the invitations.</p>
     */
    inline GetResourceShareInvitationsResult& AddResourceShareInvitations(ResourceShareInvitation&& value) { m_resourceShareInvitations.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline GetResourceShareInvitationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline GetResourceShareInvitationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline GetResourceShareInvitationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceShareInvitation> m_resourceShareInvitations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
