/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/Tag.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 */
class PutDashboardRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API PutDashboardRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutDashboard"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the dashboard. If a dashboard with this name already exists, this
   * call modifies that dashboard, replacing its current contents. Otherwise, a new
   * dashboard is created. The maximum length is 255, and valid characters are A-Z,
   * a-z, 0-9, "-", and "_". This parameter is required.</p>
   */
  inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
  inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
  template <typename DashboardNameT = Aws::String>
  void SetDashboardName(DashboardNameT&& value) {
    m_dashboardNameHasBeenSet = true;
    m_dashboardName = std::forward<DashboardNameT>(value);
  }
  template <typename DashboardNameT = Aws::String>
  PutDashboardRequest& WithDashboardName(DashboardNameT&& value) {
    SetDashboardName(std::forward<DashboardNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed information about the dashboard in JSON format, including the
   * widgets to include and their location on the dashboard. This parameter is
   * required.</p> <p>For more information about the syntax, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Dashboard-Body-Structure.html">Dashboard
   * Body Structure and Syntax</a>.</p>
   */
  inline const Aws::String& GetDashboardBody() const { return m_dashboardBody; }
  inline bool DashboardBodyHasBeenSet() const { return m_dashboardBodyHasBeenSet; }
  template <typename DashboardBodyT = Aws::String>
  void SetDashboardBody(DashboardBodyT&& value) {
    m_dashboardBodyHasBeenSet = true;
    m_dashboardBody = std::forward<DashboardBodyT>(value);
  }
  template <typename DashboardBodyT = Aws::String>
  PutDashboardRequest& WithDashboardBody(DashboardBodyT&& value) {
    SetDashboardBody(std::forward<DashboardBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to associate with the dashboard. You can associate
   * as many as 50 tags with a dashboard.</p> <p>Tags can help you organize and
   * categorize your dashboards. You can also use them to scope user permissions by
   * granting a user permission to access or change only dashboards with certain tag
   * values.</p> <p>You can use this parameter only when creating a new dashboard. If
   * you specify <code>Tags</code> when updating an existing dashboard, the tag
   * updates are ignored. To add or update tags on an existing dashboard, use <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.
   * To remove tags, use <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  PutDashboardRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  PutDashboardRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dashboardName;

  Aws::String m_dashboardBody;

  Aws::Vector<Tag> m_tags;
  bool m_dashboardNameHasBeenSet = false;
  bool m_dashboardBodyHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
