/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
  class DeleteRefreshScheduleResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteRefreshScheduleResult();
    AWS_QUICKSIGHT_API DeleteRefreshScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteRefreshScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteRefreshScheduleResult& WithStatus(int value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteRefreshScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteRefreshScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteRefreshScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The ID of the refresh schedule.</p>
     */
    inline const Aws::String& GetScheduleId() const{ return m_scheduleId; }

    /**
     * <p>The ID of the refresh schedule.</p>
     */
    inline void SetScheduleId(const Aws::String& value) { m_scheduleId = value; }

    /**
     * <p>The ID of the refresh schedule.</p>
     */
    inline void SetScheduleId(Aws::String&& value) { m_scheduleId = std::move(value); }

    /**
     * <p>The ID of the refresh schedule.</p>
     */
    inline void SetScheduleId(const char* value) { m_scheduleId.assign(value); }

    /**
     * <p>The ID of the refresh schedule.</p>
     */
    inline DeleteRefreshScheduleResult& WithScheduleId(const Aws::String& value) { SetScheduleId(value); return *this;}

    /**
     * <p>The ID of the refresh schedule.</p>
     */
    inline DeleteRefreshScheduleResult& WithScheduleId(Aws::String&& value) { SetScheduleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the refresh schedule.</p>
     */
    inline DeleteRefreshScheduleResult& WithScheduleId(const char* value) { SetScheduleId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline DeleteRefreshScheduleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline DeleteRefreshScheduleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline DeleteRefreshScheduleResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    int m_status;

    Aws::String m_requestId;

    Aws::String m_scheduleId;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
