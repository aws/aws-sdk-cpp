/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RefreshSchedule.h>
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
  class DescribeRefreshScheduleResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeRefreshScheduleResult();
    AWS_QUICKSIGHT_API DescribeRefreshScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeRefreshScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The refresh schedule.</p>
     */
    inline const RefreshSchedule& GetRefreshSchedule() const{ return m_refreshSchedule; }

    /**
     * <p>The refresh schedule.</p>
     */
    inline void SetRefreshSchedule(const RefreshSchedule& value) { m_refreshSchedule = value; }

    /**
     * <p>The refresh schedule.</p>
     */
    inline void SetRefreshSchedule(RefreshSchedule&& value) { m_refreshSchedule = std::move(value); }

    /**
     * <p>The refresh schedule.</p>
     */
    inline DescribeRefreshScheduleResult& WithRefreshSchedule(const RefreshSchedule& value) { SetRefreshSchedule(value); return *this;}

    /**
     * <p>The refresh schedule.</p>
     */
    inline DescribeRefreshScheduleResult& WithRefreshSchedule(RefreshSchedule&& value) { SetRefreshSchedule(std::move(value)); return *this;}


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
    inline DescribeRefreshScheduleResult& WithStatus(int value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRefreshScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRefreshScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRefreshScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline DescribeRefreshScheduleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline DescribeRefreshScheduleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline DescribeRefreshScheduleResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    RefreshSchedule m_refreshSchedule;

    int m_status;

    Aws::String m_requestId;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
