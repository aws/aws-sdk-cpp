/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Dashboard.h>
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
  class DescribeDashboardResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardResult();
    AWS_QUICKSIGHT_API DescribeDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the dashboard.</p>
     */
    inline const Dashboard& GetDashboard() const{ return m_dashboard; }

    /**
     * <p>Information about the dashboard.</p>
     */
    inline void SetDashboard(const Dashboard& value) { m_dashboard = value; }

    /**
     * <p>Information about the dashboard.</p>
     */
    inline void SetDashboard(Dashboard&& value) { m_dashboard = std::move(value); }

    /**
     * <p>Information about the dashboard.</p>
     */
    inline DescribeDashboardResult& WithDashboard(const Dashboard& value) { SetDashboard(value); return *this;}

    /**
     * <p>Information about the dashboard.</p>
     */
    inline DescribeDashboardResult& WithDashboard(Dashboard&& value) { SetDashboard(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of this request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of this request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of this request.</p>
     */
    inline DescribeDashboardResult& WithStatus(int value) { SetStatus(value); return *this;}


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
    inline DescribeDashboardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDashboardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDashboardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Dashboard m_dashboard;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
