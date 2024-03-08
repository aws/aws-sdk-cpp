/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/networkmonitor/NetworkMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/networkmonitor/model/CreateMonitorProbeInput.h>
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
  class CreateMonitorRequest : public NetworkMonitorRequest
  {
  public:
    AWS_NETWORKMONITOR_API CreateMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMonitor"; }

    AWS_NETWORKMONITOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 255 characters.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 255 characters.</p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 255 characters.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 255 characters.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 255 characters.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 255 characters.</p>
     */
    inline CreateMonitorRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 255 characters.</p>
     */
    inline CreateMonitorRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 255 characters.</p>
     */
    inline CreateMonitorRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline const Aws::Vector<CreateMonitorProbeInput>& GetProbes() const{ return m_probes; }

    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline bool ProbesHasBeenSet() const { return m_probesHasBeenSet; }

    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline void SetProbes(const Aws::Vector<CreateMonitorProbeInput>& value) { m_probesHasBeenSet = true; m_probes = value; }

    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline void SetProbes(Aws::Vector<CreateMonitorProbeInput>&& value) { m_probesHasBeenSet = true; m_probes = std::move(value); }

    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline CreateMonitorRequest& WithProbes(const Aws::Vector<CreateMonitorProbeInput>& value) { SetProbes(value); return *this;}

    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline CreateMonitorRequest& WithProbes(Aws::Vector<CreateMonitorProbeInput>&& value) { SetProbes(std::move(value)); return *this;}

    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline CreateMonitorRequest& AddProbes(const CreateMonitorProbeInput& value) { m_probesHasBeenSet = true; m_probes.push_back(value); return *this; }

    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline CreateMonitorRequest& AddProbes(CreateMonitorProbeInput&& value) { m_probesHasBeenSet = true; m_probes.push_back(std::move(value)); return *this; }


    /**
     * <p>The time, in seconds, that metrics are aggregated and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>. </p>
     */
    inline long long GetAggregationPeriod() const{ return m_aggregationPeriod; }

    /**
     * <p>The time, in seconds, that metrics are aggregated and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>. </p>
     */
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }

    /**
     * <p>The time, in seconds, that metrics are aggregated and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>. </p>
     */
    inline void SetAggregationPeriod(long long value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }

    /**
     * <p>The time, in seconds, that metrics are aggregated and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>. </p>
     */
    inline CreateMonitorRequest& WithAggregationPeriod(long long value) { SetAggregationPeriod(value); return *this;}


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
    inline CreateMonitorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline CreateMonitorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline CreateMonitorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Vector<CreateMonitorProbeInput> m_probes;
    bool m_probesHasBeenSet = false;

    long long m_aggregationPeriod;
    bool m_aggregationPeriodHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
