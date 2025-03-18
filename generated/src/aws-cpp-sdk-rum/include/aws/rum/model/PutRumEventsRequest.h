/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/AppMonitorDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rum/model/UserDetails.h>
#include <aws/rum/model/RumEvent.h>
#include <utility>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class PutRumEventsRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API PutRumEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRumEvents"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>If the app monitor uses a resource-based policy that requires
     * <code>PutRumEvents</code> requests to specify a certain alias, specify that
     * alias here. This alias will be compared to the <code>rum:alias</code> context
     * key in the resource-based policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-resource-policies.html">Using
     * resource-based policies with CloudWatch RUM</a>.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    PutRumEventsRequest& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about the app monitor that collected
     * this telemetry information.</p>
     */
    inline const AppMonitorDetails& GetAppMonitorDetails() const { return m_appMonitorDetails; }
    inline bool AppMonitorDetailsHasBeenSet() const { return m_appMonitorDetailsHasBeenSet; }
    template<typename AppMonitorDetailsT = AppMonitorDetails>
    void SetAppMonitorDetails(AppMonitorDetailsT&& value) { m_appMonitorDetailsHasBeenSet = true; m_appMonitorDetails = std::forward<AppMonitorDetailsT>(value); }
    template<typename AppMonitorDetailsT = AppMonitorDetails>
    PutRumEventsRequest& WithAppMonitorDetails(AppMonitorDetailsT&& value) { SetAppMonitorDetails(std::forward<AppMonitorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline const Aws::String& GetBatchId() const { return m_batchId; }
    inline bool BatchIdHasBeenSet() const { return m_batchIdHasBeenSet; }
    template<typename BatchIdT = Aws::String>
    void SetBatchId(BatchIdT&& value) { m_batchIdHasBeenSet = true; m_batchId = std::forward<BatchIdT>(value); }
    template<typename BatchIdT = Aws::String>
    PutRumEventsRequest& WithBatchId(BatchIdT&& value) { SetBatchId(std::forward<BatchIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PutRumEventsRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline const Aws::Vector<RumEvent>& GetRumEvents() const { return m_rumEvents; }
    inline bool RumEventsHasBeenSet() const { return m_rumEventsHasBeenSet; }
    template<typename RumEventsT = Aws::Vector<RumEvent>>
    void SetRumEvents(RumEventsT&& value) { m_rumEventsHasBeenSet = true; m_rumEvents = std::forward<RumEventsT>(value); }
    template<typename RumEventsT = Aws::Vector<RumEvent>>
    PutRumEventsRequest& WithRumEvents(RumEventsT&& value) { SetRumEvents(std::forward<RumEventsT>(value)); return *this;}
    template<typename RumEventsT = RumEvent>
    PutRumEventsRequest& AddRumEvents(RumEventsT&& value) { m_rumEventsHasBeenSet = true; m_rumEvents.emplace_back(std::forward<RumEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about the user session that this batch
     * of events was collected from.</p>
     */
    inline const UserDetails& GetUserDetails() const { return m_userDetails; }
    inline bool UserDetailsHasBeenSet() const { return m_userDetailsHasBeenSet; }
    template<typename UserDetailsT = UserDetails>
    void SetUserDetails(UserDetailsT&& value) { m_userDetailsHasBeenSet = true; m_userDetails = std::forward<UserDetailsT>(value); }
    template<typename UserDetailsT = UserDetails>
    PutRumEventsRequest& WithUserDetails(UserDetailsT&& value) { SetUserDetails(std::forward<UserDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    AppMonitorDetails m_appMonitorDetails;
    bool m_appMonitorDetailsHasBeenSet = false;

    Aws::String m_batchId;
    bool m_batchIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<RumEvent> m_rumEvents;
    bool m_rumEventsHasBeenSet = false;

    UserDetails m_userDetails;
    bool m_userDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
