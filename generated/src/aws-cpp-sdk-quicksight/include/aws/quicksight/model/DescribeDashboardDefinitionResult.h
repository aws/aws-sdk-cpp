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
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult() = default;
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the dashboard described.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    DescribeDashboardDefinitionResult& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline const Aws::Vector<DashboardError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<DashboardError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<DashboardError>>
    DescribeDashboardDefinitionResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = DashboardError>
    DescribeDashboardDefinitionResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display name of the dashboard.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeDashboardDefinitionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline ResourceStatus GetResourceStatus() const { return m_resourceStatus; }
    inline void SetResourceStatus(ResourceStatus value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }
    inline DescribeDashboardDefinitionResult& WithResourceStatus(ResourceStatus value) { SetResourceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the theme of the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const { return m_themeArn; }
    template<typename ThemeArnT = Aws::String>
    void SetThemeArn(ThemeArnT&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::forward<ThemeArnT>(value); }
    template<typename ThemeArnT = Aws::String>
    DescribeDashboardDefinitionResult& WithThemeArn(ThemeArnT&& value) { SetThemeArn(std::forward<ThemeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const DashboardVersionDefinition& GetDefinition() const { return m_definition; }
    template<typename DefinitionT = DashboardVersionDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = DashboardVersionDefinition>
    DescribeDashboardDefinitionResult& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDashboardDefinitionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDashboardDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for publishing the dashboard:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, QuickSight disables the left filter pane on the
     * published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .CSV format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. This option is <code>COLLAPSED</code> by default. </p>
     * </li> <li> <p> <code>AvailabilityStatus</code> for
     * <code>ExecutiveSummaryOption</code> - This status can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. The option to build an executive
     * summary is disabled when this is set to <code>DISABLED</code>. This option is
     * <code>ENABLED</code> by default.</p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>DataStoriesSharingOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. The option
     * to share a data story is disabled when this is set to <code>DISABLED</code>.
     * This option is <code>ENABLED</code> by default.</p> </li> </ul>
     */
    inline const DashboardPublishOptions& GetDashboardPublishOptions() const { return m_dashboardPublishOptions; }
    template<typename DashboardPublishOptionsT = DashboardPublishOptions>
    void SetDashboardPublishOptions(DashboardPublishOptionsT&& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = std::forward<DashboardPublishOptionsT>(value); }
    template<typename DashboardPublishOptionsT = DashboardPublishOptions>
    DescribeDashboardDefinitionResult& WithDashboardPublishOptions(DashboardPublishOptionsT&& value) { SetDashboardPublishOptions(std::forward<DashboardPublishOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::Vector<DashboardError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceStatus m_resourceStatus{ResourceStatus::NOT_SET};
    bool m_resourceStatusHasBeenSet = false;

    Aws::String m_themeArn;
    bool m_themeArnHasBeenSet = false;

    DashboardVersionDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    DashboardPublishOptions m_dashboardPublishOptions;
    bool m_dashboardPublishOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
