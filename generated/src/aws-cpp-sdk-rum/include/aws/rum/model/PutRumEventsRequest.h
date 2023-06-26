/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/rum/model/AppMonitorDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CLOUDWATCHRUM_API PutRumEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRumEvents"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;


    /**
     * <p>A structure that contains information about the app monitor that collected
     * this telemetry information.</p>
     */
    inline const AppMonitorDetails& GetAppMonitorDetails() const{ return m_appMonitorDetails; }

    /**
     * <p>A structure that contains information about the app monitor that collected
     * this telemetry information.</p>
     */
    inline bool AppMonitorDetailsHasBeenSet() const { return m_appMonitorDetailsHasBeenSet; }

    /**
     * <p>A structure that contains information about the app monitor that collected
     * this telemetry information.</p>
     */
    inline void SetAppMonitorDetails(const AppMonitorDetails& value) { m_appMonitorDetailsHasBeenSet = true; m_appMonitorDetails = value; }

    /**
     * <p>A structure that contains information about the app monitor that collected
     * this telemetry information.</p>
     */
    inline void SetAppMonitorDetails(AppMonitorDetails&& value) { m_appMonitorDetailsHasBeenSet = true; m_appMonitorDetails = std::move(value); }

    /**
     * <p>A structure that contains information about the app monitor that collected
     * this telemetry information.</p>
     */
    inline PutRumEventsRequest& WithAppMonitorDetails(const AppMonitorDetails& value) { SetAppMonitorDetails(value); return *this;}

    /**
     * <p>A structure that contains information about the app monitor that collected
     * this telemetry information.</p>
     */
    inline PutRumEventsRequest& WithAppMonitorDetails(AppMonitorDetails&& value) { SetAppMonitorDetails(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline const Aws::String& GetBatchId() const{ return m_batchId; }

    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline bool BatchIdHasBeenSet() const { return m_batchIdHasBeenSet; }

    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline void SetBatchId(const Aws::String& value) { m_batchIdHasBeenSet = true; m_batchId = value; }

    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline void SetBatchId(Aws::String&& value) { m_batchIdHasBeenSet = true; m_batchId = std::move(value); }

    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline void SetBatchId(const char* value) { m_batchIdHasBeenSet = true; m_batchId.assign(value); }

    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline PutRumEventsRequest& WithBatchId(const Aws::String& value) { SetBatchId(value); return *this;}

    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline PutRumEventsRequest& WithBatchId(Aws::String&& value) { SetBatchId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this batch of RUM event data.</p>
     */
    inline PutRumEventsRequest& WithBatchId(const char* value) { SetBatchId(value); return *this;}


    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline PutRumEventsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline PutRumEventsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the app monitor that is sending this data.</p>
     */
    inline PutRumEventsRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline const Aws::Vector<RumEvent>& GetRumEvents() const{ return m_rumEvents; }

    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline bool RumEventsHasBeenSet() const { return m_rumEventsHasBeenSet; }

    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline void SetRumEvents(const Aws::Vector<RumEvent>& value) { m_rumEventsHasBeenSet = true; m_rumEvents = value; }

    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline void SetRumEvents(Aws::Vector<RumEvent>&& value) { m_rumEventsHasBeenSet = true; m_rumEvents = std::move(value); }

    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline PutRumEventsRequest& WithRumEvents(const Aws::Vector<RumEvent>& value) { SetRumEvents(value); return *this;}

    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline PutRumEventsRequest& WithRumEvents(Aws::Vector<RumEvent>&& value) { SetRumEvents(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline PutRumEventsRequest& AddRumEvents(const RumEvent& value) { m_rumEventsHasBeenSet = true; m_rumEvents.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the telemetry event data.</p>
     */
    inline PutRumEventsRequest& AddRumEvents(RumEvent&& value) { m_rumEventsHasBeenSet = true; m_rumEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>A structure that contains information about the user session that this batch
     * of events was collected from.</p>
     */
    inline const UserDetails& GetUserDetails() const{ return m_userDetails; }

    /**
     * <p>A structure that contains information about the user session that this batch
     * of events was collected from.</p>
     */
    inline bool UserDetailsHasBeenSet() const { return m_userDetailsHasBeenSet; }

    /**
     * <p>A structure that contains information about the user session that this batch
     * of events was collected from.</p>
     */
    inline void SetUserDetails(const UserDetails& value) { m_userDetailsHasBeenSet = true; m_userDetails = value; }

    /**
     * <p>A structure that contains information about the user session that this batch
     * of events was collected from.</p>
     */
    inline void SetUserDetails(UserDetails&& value) { m_userDetailsHasBeenSet = true; m_userDetails = std::move(value); }

    /**
     * <p>A structure that contains information about the user session that this batch
     * of events was collected from.</p>
     */
    inline PutRumEventsRequest& WithUserDetails(const UserDetails& value) { SetUserDetails(value); return *this;}

    /**
     * <p>A structure that contains information about the user session that this batch
     * of events was collected from.</p>
     */
    inline PutRumEventsRequest& WithUserDetails(UserDetails&& value) { SetUserDetails(std::move(value)); return *this;}

  private:

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
