/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/OptInLevel.h>
#include <aws/service-quotas/model/OptInType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/OptInStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/model/QuotaInfo.h>
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
namespace ServiceQuotas
{
namespace Model
{
  class GetAutoManagementConfigurationResult
  {
  public:
    AWS_SERVICEQUOTAS_API GetAutoManagementConfigurationResult() = default;
    AWS_SERVICEQUOTAS_API GetAutoManagementConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API GetAutoManagementConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information on the opt-in level for Automatic Management. Only Amazon Web
     * Services account level is supported.</p>
     */
    inline OptInLevel GetOptInLevel() const { return m_optInLevel; }
    inline void SetOptInLevel(OptInLevel value) { m_optInLevelHasBeenSet = true; m_optInLevel = value; }
    inline GetAutoManagementConfigurationResult& WithOptInLevel(OptInLevel value) { SetOptInLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the opt-in type for Automatic Management. There are two modes:
     * Notify only and Notify and Auto-Adjust. Currently, only NotifyOnly is
     * available.</p>
     */
    inline OptInType GetOptInType() const { return m_optInType; }
    inline void SetOptInType(OptInType value) { m_optInTypeHasBeenSet = true; m_optInType = value; }
    inline GetAutoManagementConfigurationResult& WithOptInType(OptInType value) { SetOptInType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/notifications/latest/userguide/resource-level-permissions.html#rlp-table">User
     * Notifications</a> Amazon Resource Name (ARN) for Automatic Management
     * notifications.</p>
     */
    inline const Aws::String& GetNotificationArn() const { return m_notificationArn; }
    template<typename NotificationArnT = Aws::String>
    void SetNotificationArn(NotificationArnT&& value) { m_notificationArnHasBeenSet = true; m_notificationArn = std::forward<NotificationArnT>(value); }
    template<typename NotificationArnT = Aws::String>
    GetAutoManagementConfigurationResult& WithNotificationArn(NotificationArnT&& value) { SetNotificationArn(std::forward<NotificationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status on whether Automatic Management is started or stopped.</p>
     */
    inline OptInStatus GetOptInStatus() const { return m_optInStatus; }
    inline void SetOptInStatus(OptInStatus value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline GetAutoManagementConfigurationResult& WithOptInStatus(OptInStatus value) { SetOptInStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Amazon Web Services services excluded from Automatic Management. You
     * won't be notified of Service Quotas utilization for Amazon Web Services services
     * added to the Automatic Management exclusion list. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<QuotaInfo>>& GetExclusionList() const { return m_exclusionList; }
    template<typename ExclusionListT = Aws::Map<Aws::String, Aws::Vector<QuotaInfo>>>
    void SetExclusionList(ExclusionListT&& value) { m_exclusionListHasBeenSet = true; m_exclusionList = std::forward<ExclusionListT>(value); }
    template<typename ExclusionListT = Aws::Map<Aws::String, Aws::Vector<QuotaInfo>>>
    GetAutoManagementConfigurationResult& WithExclusionList(ExclusionListT&& value) { SetExclusionList(std::forward<ExclusionListT>(value)); return *this;}
    template<typename ExclusionListKeyT = Aws::String, typename ExclusionListValueT = Aws::Vector<QuotaInfo>>
    GetAutoManagementConfigurationResult& AddExclusionList(ExclusionListKeyT&& key, ExclusionListValueT&& value) {
      m_exclusionListHasBeenSet = true; m_exclusionList.emplace(std::forward<ExclusionListKeyT>(key), std::forward<ExclusionListValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutoManagementConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OptInLevel m_optInLevel{OptInLevel::NOT_SET};
    bool m_optInLevelHasBeenSet = false;

    OptInType m_optInType{OptInType::NOT_SET};
    bool m_optInTypeHasBeenSet = false;

    Aws::String m_notificationArn;
    bool m_notificationArnHasBeenSet = false;

    OptInStatus m_optInStatus{OptInStatus::NOT_SET};
    bool m_optInStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<QuotaInfo>> m_exclusionList;
    bool m_exclusionListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
