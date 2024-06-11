/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/quicksight/model/DashboardVersionDefinition.h>
#include <aws/quicksight/model/DashboardPublishOptions.h>
#include <aws/quicksight/model/DashboardError.h>
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
  class DescribeDashboardDefinitionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult();
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardId.assign(value); }
    inline DescribeDashboardDefinitionResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline DescribeDashboardDefinitionResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline DescribeDashboardDefinitionResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline const Aws::Vector<DashboardError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<DashboardError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<DashboardError>&& value) { m_errors = std::move(value); }
    inline DescribeDashboardDefinitionResult& WithErrors(const Aws::Vector<DashboardError>& value) { SetErrors(value); return *this;}
    inline DescribeDashboardDefinitionResult& WithErrors(Aws::Vector<DashboardError>&& value) { SetErrors(std::move(value)); return *this;}
    inline DescribeDashboardDefinitionResult& AddErrors(const DashboardError& value) { m_errors.push_back(value); return *this; }
    inline DescribeDashboardDefinitionResult& AddErrors(DashboardError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display name of the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeDashboardDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeDashboardDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeDashboardDefinitionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status associated with the dashboard version.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatus = value; }
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatus = std::move(value); }
    inline DescribeDashboardDefinitionResult& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}
    inline DescribeDashboardDefinitionResult& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }
    inline void SetThemeArn(const Aws::String& value) { m_themeArn = value; }
    inline void SetThemeArn(Aws::String&& value) { m_themeArn = std::move(value); }
    inline void SetThemeArn(const char* value) { m_themeArn.assign(value); }
    inline DescribeDashboardDefinitionResult& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}
    inline DescribeDashboardDefinitionResult& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}
    inline DescribeDashboardDefinitionResult& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const DashboardVersionDefinition& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const DashboardVersionDefinition& value) { m_definition = value; }
    inline void SetDefinition(DashboardVersionDefinition&& value) { m_definition = std::move(value); }
    inline DescribeDashboardDefinitionResult& WithDefinition(const DashboardVersionDefinition& value) { SetDefinition(value); return *this;}
    inline DescribeDashboardDefinitionResult& WithDefinition(DashboardVersionDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DescribeDashboardDefinitionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDashboardDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDashboardDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDashboardDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for publishing the dashboard:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, Amazon QuickSight disables the left filter pane on
     * the published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .CSV format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. This option is <code>COLLAPSED</code> by default. </p>
     * </li> </ul>
     */
    inline const DashboardPublishOptions& GetDashboardPublishOptions() const{ return m_dashboardPublishOptions; }
    inline void SetDashboardPublishOptions(const DashboardPublishOptions& value) { m_dashboardPublishOptions = value; }
    inline void SetDashboardPublishOptions(DashboardPublishOptions&& value) { m_dashboardPublishOptions = std::move(value); }
    inline DescribeDashboardDefinitionResult& WithDashboardPublishOptions(const DashboardPublishOptions& value) { SetDashboardPublishOptions(value); return *this;}
    inline DescribeDashboardDefinitionResult& WithDashboardPublishOptions(DashboardPublishOptions&& value) { SetDashboardPublishOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;

    Aws::Vector<DashboardError> m_errors;

    Aws::String m_name;

    ResourceStatus m_resourceStatus;

    Aws::String m_themeArn;

    DashboardVersionDefinition m_definition;

    int m_status;

    Aws::String m_requestId;

    DashboardPublishOptions m_dashboardPublishOptions;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
