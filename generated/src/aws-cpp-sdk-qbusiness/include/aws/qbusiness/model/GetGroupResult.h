/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/GroupStatusDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QBusiness
{
namespace Model
{
  class GetGroupResult
  {
  public:
    AWS_QBUSINESS_API GetGroupResult();
    AWS_QBUSINESS_API GetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the group.</p>
     */
    inline const GroupStatusDetail& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the group.</p>
     */
    inline void SetStatus(const GroupStatusDetail& value) { m_status = value; }

    /**
     * <p>The current status of the group.</p>
     */
    inline void SetStatus(GroupStatusDetail&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the group.</p>
     */
    inline GetGroupResult& WithStatus(const GroupStatusDetail& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the group.</p>
     */
    inline GetGroupResult& WithStatus(GroupStatusDetail&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status history of the group.</p>
     */
    inline const Aws::Vector<GroupStatusDetail>& GetStatusHistory() const{ return m_statusHistory; }

    /**
     * <p>The status history of the group.</p>
     */
    inline void SetStatusHistory(const Aws::Vector<GroupStatusDetail>& value) { m_statusHistory = value; }

    /**
     * <p>The status history of the group.</p>
     */
    inline void SetStatusHistory(Aws::Vector<GroupStatusDetail>&& value) { m_statusHistory = std::move(value); }

    /**
     * <p>The status history of the group.</p>
     */
    inline GetGroupResult& WithStatusHistory(const Aws::Vector<GroupStatusDetail>& value) { SetStatusHistory(value); return *this;}

    /**
     * <p>The status history of the group.</p>
     */
    inline GetGroupResult& WithStatusHistory(Aws::Vector<GroupStatusDetail>&& value) { SetStatusHistory(std::move(value)); return *this;}

    /**
     * <p>The status history of the group.</p>
     */
    inline GetGroupResult& AddStatusHistory(const GroupStatusDetail& value) { m_statusHistory.push_back(value); return *this; }

    /**
     * <p>The status history of the group.</p>
     */
    inline GetGroupResult& AddStatusHistory(GroupStatusDetail&& value) { m_statusHistory.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GroupStatusDetail m_status;

    Aws::Vector<GroupStatusDetail> m_statusHistory;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
