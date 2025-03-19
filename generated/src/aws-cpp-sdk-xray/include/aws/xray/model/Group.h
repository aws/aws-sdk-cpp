/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/InsightsConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>Details and metadata for a group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Group">AWS API
   * Reference</a></p>
   */
  class Group
  {
  public:
    AWS_XRAY_API Group() = default;
    AWS_XRAY_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    Group& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the group generated based on the
     * GroupName.</p>
     */
    inline const Aws::String& GetGroupARN() const { return m_groupARN; }
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }
    template<typename GroupARNT = Aws::String>
    void SetGroupARN(GroupARNT&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::forward<GroupARNT>(value); }
    template<typename GroupARNT = Aws::String>
    Group& WithGroupARN(GroupARNT&& value) { SetGroupARN(std::forward<GroupARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    template<typename FilterExpressionT = Aws::String>
    void SetFilterExpression(FilterExpressionT&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::forward<FilterExpressionT>(value); }
    template<typename FilterExpressionT = Aws::String>
    Group& WithFilterExpression(FilterExpressionT&& value) { SetFilterExpression(std::forward<FilterExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * through Amazon EventBridge for the group.</p> </li> </ul>
     */
    inline const InsightsConfiguration& GetInsightsConfiguration() const { return m_insightsConfiguration; }
    inline bool InsightsConfigurationHasBeenSet() const { return m_insightsConfigurationHasBeenSet; }
    template<typename InsightsConfigurationT = InsightsConfiguration>
    void SetInsightsConfiguration(InsightsConfigurationT&& value) { m_insightsConfigurationHasBeenSet = true; m_insightsConfiguration = std::forward<InsightsConfigurationT>(value); }
    template<typename InsightsConfigurationT = InsightsConfiguration>
    Group& WithInsightsConfiguration(InsightsConfigurationT&& value) { SetInsightsConfiguration(std::forward<InsightsConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet = false;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    InsightsConfiguration m_insightsConfiguration;
    bool m_insightsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
