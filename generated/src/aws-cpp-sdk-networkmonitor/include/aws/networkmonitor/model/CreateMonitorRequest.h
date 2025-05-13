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
    AWS_NETWORKMONITOR_API CreateMonitorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMonitor"; }

    AWS_NETWORKMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name identifying the monitor. It can contain only letters, underscores
     * (_), or dashes (-), and can be up to 200 characters.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    CreateMonitorRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays a list of all of the probes created for a monitor.</p>
     */
    inline const Aws::Vector<CreateMonitorProbeInput>& GetProbes() const { return m_probes; }
    inline bool ProbesHasBeenSet() const { return m_probesHasBeenSet; }
    template<typename ProbesT = Aws::Vector<CreateMonitorProbeInput>>
    void SetProbes(ProbesT&& value) { m_probesHasBeenSet = true; m_probes = std::forward<ProbesT>(value); }
    template<typename ProbesT = Aws::Vector<CreateMonitorProbeInput>>
    CreateMonitorRequest& WithProbes(ProbesT&& value) { SetProbes(std::forward<ProbesT>(value)); return *this;}
    template<typename ProbesT = CreateMonitorProbeInput>
    CreateMonitorRequest& AddProbes(ProbesT&& value) { m_probesHasBeenSet = true; m_probes.emplace_back(std::forward<ProbesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time, in seconds, that metrics are aggregated and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>.
     * <code>60</code> is the default if no period is chosen.</p>
     */
    inline long long GetAggregationPeriod() const { return m_aggregationPeriod; }
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }
    inline void SetAggregationPeriod(long long value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }
    inline CreateMonitorRequest& WithAggregationPeriod(long long value) { SetAggregationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateMonitorRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMonitorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMonitorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::Vector<CreateMonitorProbeInput> m_probes;
    bool m_probesHasBeenSet = false;

    long long m_aggregationPeriod{0};
    bool m_aggregationPeriodHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
