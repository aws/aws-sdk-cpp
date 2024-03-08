/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/networkmonitor/NetworkMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/ProbeInput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NetworkMonitor
{
namespace Model
{

  /**
   */
  class CreateProbeRequest : public NetworkMonitorRequest
  {
  public:
    AWS_NETWORKMONITOR_API CreateProbeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProbe"; }

    AWS_NETWORKMONITOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the monitor to associated with the probe. To get a list of
     * available monitors, use <code>ListMonitors</code>.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor to associated with the probe. To get a list of
     * available monitors, use <code>ListMonitors</code>.</p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name of the monitor to associated with the probe. To get a list of
     * available monitors, use <code>ListMonitors</code>.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name of the monitor to associated with the probe. To get a list of
     * available monitors, use <code>ListMonitors</code>.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor to associated with the probe. To get a list of
     * available monitors, use <code>ListMonitors</code>.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor to associated with the probe. To get a list of
     * available monitors, use <code>ListMonitors</code>.</p>
     */
    inline CreateProbeRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor to associated with the probe. To get a list of
     * available monitors, use <code>ListMonitors</code>.</p>
     */
    inline CreateProbeRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor to associated with the probe. To get a list of
     * available monitors, use <code>ListMonitors</code>.</p>
     */
    inline CreateProbeRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>Describes the details of an individual probe for a monitor.</p>
     */
    inline const ProbeInput& GetProbe() const{ return m_probe; }

    /**
     * <p>Describes the details of an individual probe for a monitor.</p>
     */
    inline bool ProbeHasBeenSet() const { return m_probeHasBeenSet; }

    /**
     * <p>Describes the details of an individual probe for a monitor.</p>
     */
    inline void SetProbe(const ProbeInput& value) { m_probeHasBeenSet = true; m_probe = value; }

    /**
     * <p>Describes the details of an individual probe for a monitor.</p>
     */
    inline void SetProbe(ProbeInput&& value) { m_probeHasBeenSet = true; m_probe = std::move(value); }

    /**
     * <p>Describes the details of an individual probe for a monitor.</p>
     */
    inline CreateProbeRequest& WithProbe(const ProbeInput& value) { SetProbe(value); return *this;}

    /**
     * <p>Describes the details of an individual probe for a monitor.</p>
     */
    inline CreateProbeRequest& WithProbe(ProbeInput&& value) { SetProbe(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline CreateProbeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline CreateProbeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline CreateProbeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline CreateProbeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    ProbeInput m_probe;
    bool m_probeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
