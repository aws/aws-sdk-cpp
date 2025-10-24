﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/OptInType.h>

#include <utility>

namespace Aws {
namespace ServiceQuotas {
namespace Model {

/**
 */
class UpdateAutoManagementRequest : public ServiceQuotasRequest {
 public:
  AWS_SERVICEQUOTAS_API UpdateAutoManagementRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAutoManagement"; }

  AWS_SERVICEQUOTAS_API Aws::String SerializePayload() const override;

  AWS_SERVICEQUOTAS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Information on the opt-in type for your Automatic Management configuration.
   * There are two modes: Notify only and Notify and Auto-Adjust. Currently, only
   * NotifyOnly is available.</p>
   */
  inline OptInType GetOptInType() const { return m_optInType; }
  inline bool OptInTypeHasBeenSet() const { return m_optInTypeHasBeenSet; }
  inline void SetOptInType(OptInType value) {
    m_optInTypeHasBeenSet = true;
    m_optInType = value;
  }
  inline UpdateAutoManagementRequest& WithOptInType(OptInType value) {
    SetOptInType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <a
   * href="https://docs.aws.amazon.com/notifications/latest/userguide/resource-level-permissions.html#rlp-table">User
   * Notifications</a> Amazon Resource Name (ARN) for Automatic Management
   * notifications you want to update.</p>
   */
  inline const Aws::String& GetNotificationArn() const { return m_notificationArn; }
  inline bool NotificationArnHasBeenSet() const { return m_notificationArnHasBeenSet; }
  template <typename NotificationArnT = Aws::String>
  void SetNotificationArn(NotificationArnT&& value) {
    m_notificationArnHasBeenSet = true;
    m_notificationArn = std::forward<NotificationArnT>(value);
  }
  template <typename NotificationArnT = Aws::String>
  UpdateAutoManagementRequest& WithNotificationArn(NotificationArnT&& value) {
    SetNotificationArn(std::forward<NotificationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of Amazon Web Services services you want to exclude from Automatic
   * Management. You won't be notified of Service Quotas utilization for Amazon Web
   * Services services added to the Automatic Management exclusion list. </p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetExclusionList() const { return m_exclusionList; }
  inline bool ExclusionListHasBeenSet() const { return m_exclusionListHasBeenSet; }
  template <typename ExclusionListT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetExclusionList(ExclusionListT&& value) {
    m_exclusionListHasBeenSet = true;
    m_exclusionList = std::forward<ExclusionListT>(value);
  }
  template <typename ExclusionListT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  UpdateAutoManagementRequest& WithExclusionList(ExclusionListT&& value) {
    SetExclusionList(std::forward<ExclusionListT>(value));
    return *this;
  }
  template <typename ExclusionListKeyT = Aws::String, typename ExclusionListValueT = Aws::Vector<Aws::String>>
  UpdateAutoManagementRequest& AddExclusionList(ExclusionListKeyT&& key, ExclusionListValueT&& value) {
    m_exclusionListHasBeenSet = true;
    m_exclusionList.emplace(std::forward<ExclusionListKeyT>(key), std::forward<ExclusionListValueT>(value));
    return *this;
  }
  ///@}
 private:
  OptInType m_optInType{OptInType::NOT_SET};
  bool m_optInTypeHasBeenSet = false;

  Aws::String m_notificationArn;
  bool m_notificationArnHasBeenSet = false;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_exclusionList;
  bool m_exclusionListHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
