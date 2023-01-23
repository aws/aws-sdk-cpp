/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/InsightsConfiguration.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class UpdateGroupRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API UpdateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroup"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline UpdateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline UpdateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline UpdateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline UpdateGroupRequest& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline UpdateGroupRequest& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline UpdateGroupRequest& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}


    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline UpdateGroupRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline UpdateGroupRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline UpdateGroupRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}


    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the group. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline const InsightsConfiguration& GetInsightsConfiguration() const{ return m_insightsConfiguration; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the group. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline bool InsightsConfigurationHasBeenSet() const { return m_insightsConfigurationHasBeenSet; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the group. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline void SetInsightsConfiguration(const InsightsConfiguration& value) { m_insightsConfigurationHasBeenSet = true; m_insightsConfiguration = value; }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the group. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline void SetInsightsConfiguration(InsightsConfiguration&& value) { m_insightsConfigurationHasBeenSet = true; m_insightsConfiguration = std::move(value); }

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the group. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline UpdateGroupRequest& WithInsightsConfiguration(const InsightsConfiguration& value) { SetInsightsConfiguration(value); return *this;}

    /**
     * <p>The structure containing configurations related to insights.</p> <ul> <li>
     * <p>The InsightsEnabled boolean can be set to true to enable insights for the
     * group or false to disable insights for the group.</p> </li> <li> <p>The
     * NotificationsEnabled boolean can be set to true to enable insights notifications
     * for the group. Notifications can only be enabled on a group with InsightsEnabled
     * set to true.</p> </li> </ul>
     */
    inline UpdateGroupRequest& WithInsightsConfiguration(InsightsConfiguration&& value) { SetInsightsConfiguration(std::move(value)); return *this;}

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
