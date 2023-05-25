/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/Permission.h>
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
namespace WorkMail
{
namespace Model
{
  class ListMailboxPermissionsResult
  {
  public:
    AWS_WORKMAIL_API ListMailboxPermissionsResult();
    AWS_WORKMAIL_API ListMailboxPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListMailboxPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>One page of the user, group, or resource mailbox permissions.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>One page of the user, group, or resource mailbox permissions.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissions = value; }

    /**
     * <p>One page of the user, group, or resource mailbox permissions.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>One page of the user, group, or resource mailbox permissions.</p>
     */
    inline ListMailboxPermissionsResult& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>One page of the user, group, or resource mailbox permissions.</p>
     */
    inline ListMailboxPermissionsResult& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>One page of the user, group, or resource mailbox permissions.</p>
     */
    inline ListMailboxPermissionsResult& AddPermissions(const Permission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>One page of the user, group, or resource mailbox permissions.</p>
     */
    inline ListMailboxPermissionsResult& AddPermissions(Permission&& value) { m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListMailboxPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListMailboxPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListMailboxPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMailboxPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMailboxPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMailboxPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Permission> m_permissions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
