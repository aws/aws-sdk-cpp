/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateDashboardLinksResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardLinksResult();
    AWS_QUICKSIGHT_API UpdateDashboardLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateDashboardLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDashboardLinksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDashboardLinksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDashboardLinksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline UpdateDashboardLinksResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(const char* value) { m_dashboardArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline UpdateDashboardLinksResult& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline UpdateDashboardLinksResult& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline UpdateDashboardLinksResult& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}


    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkEntities() const{ return m_linkEntities; }

    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline void SetLinkEntities(const Aws::Vector<Aws::String>& value) { m_linkEntities = value; }

    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline void SetLinkEntities(Aws::Vector<Aws::String>&& value) { m_linkEntities = std::move(value); }

    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline UpdateDashboardLinksResult& WithLinkEntities(const Aws::Vector<Aws::String>& value) { SetLinkEntities(value); return *this;}

    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline UpdateDashboardLinksResult& WithLinkEntities(Aws::Vector<Aws::String>&& value) { SetLinkEntities(std::move(value)); return *this;}

    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline UpdateDashboardLinksResult& AddLinkEntities(const Aws::String& value) { m_linkEntities.push_back(value); return *this; }

    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline UpdateDashboardLinksResult& AddLinkEntities(Aws::String&& value) { m_linkEntities.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline UpdateDashboardLinksResult& AddLinkEntities(const char* value) { m_linkEntities.push_back(value); return *this; }

  private:

    Aws::String m_requestId;

    int m_status;

    Aws::String m_dashboardArn;

    Aws::Vector<Aws::String> m_linkEntities;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
