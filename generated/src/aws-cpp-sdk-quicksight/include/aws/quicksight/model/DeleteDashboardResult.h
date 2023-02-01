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
  class DeleteDashboardResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteDashboardResult();
    AWS_QUICKSIGHT_API DeleteDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteDashboardResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Secure Socket Layer (SSL) properties that apply for the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Secure Socket Layer (SSL) properties that apply for the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Secure Socket Layer (SSL) properties that apply for the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Secure Socket Layer (SSL) properties that apply for the resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Secure Socket Layer (SSL) properties that apply for the resource.</p>
     */
    inline DeleteDashboardResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Secure Socket Layer (SSL) properties that apply for the resource.</p>
     */
    inline DeleteDashboardResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Secure Socket Layer (SSL) properties that apply for the resource.</p>
     */
    inline DeleteDashboardResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardId = value; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardId = std::move(value); }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardId.assign(value); }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DeleteDashboardResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DeleteDashboardResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DeleteDashboardResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


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
    inline DeleteDashboardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DeleteDashboardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DeleteDashboardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_status;

    Aws::String m_arn;

    Aws::String m_dashboardId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
