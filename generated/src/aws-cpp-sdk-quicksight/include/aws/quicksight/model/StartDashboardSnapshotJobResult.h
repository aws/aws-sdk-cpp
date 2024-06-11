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
  class StartDashboardSnapshotJobResult
  {
  public:
    AWS_QUICKSIGHT_API StartDashboardSnapshotJobResult();
    AWS_QUICKSIGHT_API StartDashboardSnapshotJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API StartDashboardSnapshotJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the dashboard snapshot job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline StartDashboardSnapshotJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StartDashboardSnapshotJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StartDashboardSnapshotJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job. The job ID is set when you start a new job with a
     * <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const Aws::String& GetSnapshotJobId() const{ return m_snapshotJobId; }
    inline void SetSnapshotJobId(const Aws::String& value) { m_snapshotJobId = value; }
    inline void SetSnapshotJobId(Aws::String&& value) { m_snapshotJobId = std::move(value); }
    inline void SetSnapshotJobId(const char* value) { m_snapshotJobId.assign(value); }
    inline StartDashboardSnapshotJobResult& WithSnapshotJobId(const Aws::String& value) { SetSnapshotJobId(value); return *this;}
    inline StartDashboardSnapshotJobResult& WithSnapshotJobId(Aws::String&& value) { SetSnapshotJobId(std::move(value)); return *this;}
    inline StartDashboardSnapshotJobResult& WithSnapshotJobId(const char* value) { SetSnapshotJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartDashboardSnapshotJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartDashboardSnapshotJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartDashboardSnapshotJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline StartDashboardSnapshotJobResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_snapshotJobId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
