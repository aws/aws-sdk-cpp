/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/rum/model/AppMonitorConfiguration.h>
#include <aws/rum/model/CustomEvents.h>
#include <aws/rum/model/DeobfuscationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class UpdateAppMonitorRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API UpdateAppMonitorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppMonitor"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A structure that contains much of the configuration data for the app monitor.
     * If you are using Amazon Cognito for authorization, you must include this
     * structure in your request, and it must include the ID of the Amazon Cognito
     * identity pool to use for authorization. If you don't include
     * <code>AppMonitorConfiguration</code>, you must set up your own authorization
     * method. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-get-started-authorization.html">Authorize
     * your application to send data to Amazon Web Services</a>.</p>
     */
    inline const AppMonitorConfiguration& GetAppMonitorConfiguration() const { return m_appMonitorConfiguration; }
    inline bool AppMonitorConfigurationHasBeenSet() const { return m_appMonitorConfigurationHasBeenSet; }
    template<typename AppMonitorConfigurationT = AppMonitorConfiguration>
    void SetAppMonitorConfiguration(AppMonitorConfigurationT&& value) { m_appMonitorConfigurationHasBeenSet = true; m_appMonitorConfiguration = std::forward<AppMonitorConfigurationT>(value); }
    template<typename AppMonitorConfigurationT = AppMonitorConfiguration>
    UpdateAppMonitorRequest& WithAppMonitorConfiguration(AppMonitorConfigurationT&& value) { SetAppMonitorConfiguration(std::forward<AppMonitorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events. The default is for custom events to be <code>DISABLED</code>.</p>
     * <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline const CustomEvents& GetCustomEvents() const { return m_customEvents; }
    inline bool CustomEventsHasBeenSet() const { return m_customEventsHasBeenSet; }
    template<typename CustomEventsT = CustomEvents>
    void SetCustomEvents(CustomEventsT&& value) { m_customEventsHasBeenSet = true; m_customEvents = std::forward<CustomEventsT>(value); }
    template<typename CustomEventsT = CustomEvents>
    UpdateAppMonitorRequest& WithCustomEvents(CustomEventsT&& value) { SetCustomEvents(std::forward<CustomEventsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data collected by RUM is kept by RUM for 30 days and then deleted. This
     * parameter specifies whether RUM sends a copy of this telemetry data to Amazon
     * CloudWatch Logs in your account. This enables you to keep the telemetry data for
     * more than 30 days, but it does incur Amazon CloudWatch Logs charges.</p>
     */
    inline bool GetCwLogEnabled() const { return m_cwLogEnabled; }
    inline bool CwLogEnabledHasBeenSet() const { return m_cwLogEnabledHasBeenSet; }
    inline void SetCwLogEnabled(bool value) { m_cwLogEnabledHasBeenSet = true; m_cwLogEnabled = value; }
    inline UpdateAppMonitorRequest& WithCwLogEnabled(bool value) { SetCwLogEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A structure that contains the configuration for how an app monitor can
     * deobfuscate stack traces. </p>
     */
    inline const DeobfuscationConfiguration& GetDeobfuscationConfiguration() const { return m_deobfuscationConfiguration; }
    inline bool DeobfuscationConfigurationHasBeenSet() const { return m_deobfuscationConfigurationHasBeenSet; }
    template<typename DeobfuscationConfigurationT = DeobfuscationConfiguration>
    void SetDeobfuscationConfiguration(DeobfuscationConfigurationT&& value) { m_deobfuscationConfigurationHasBeenSet = true; m_deobfuscationConfiguration = std::forward<DeobfuscationConfigurationT>(value); }
    template<typename DeobfuscationConfigurationT = DeobfuscationConfiguration>
    UpdateAppMonitorRequest& WithDeobfuscationConfiguration(DeobfuscationConfigurationT&& value) { SetDeobfuscationConfiguration(std::forward<DeobfuscationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    UpdateAppMonitorRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List the domain names for which your application has administrative
     * authority. The <code>UpdateAppMonitor</code> allows either the domain or the
     * domain list. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainList() const { return m_domainList; }
    inline bool DomainListHasBeenSet() const { return m_domainListHasBeenSet; }
    template<typename DomainListT = Aws::Vector<Aws::String>>
    void SetDomainList(DomainListT&& value) { m_domainListHasBeenSet = true; m_domainList = std::forward<DomainListT>(value); }
    template<typename DomainListT = Aws::Vector<Aws::String>>
    UpdateAppMonitorRequest& WithDomainList(DomainListT&& value) { SetDomainList(std::forward<DomainListT>(value)); return *this;}
    template<typename DomainListT = Aws::String>
    UpdateAppMonitorRequest& AddDomainList(DomainListT&& value) { m_domainListHasBeenSet = true; m_domainList.emplace_back(std::forward<DomainListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the app monitor to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAppMonitorRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    AppMonitorConfiguration m_appMonitorConfiguration;
    bool m_appMonitorConfigurationHasBeenSet = false;

    CustomEvents m_customEvents;
    bool m_customEventsHasBeenSet = false;

    bool m_cwLogEnabled{false};
    bool m_cwLogEnabledHasBeenSet = false;

    DeobfuscationConfiguration m_deobfuscationConfiguration;
    bool m_deobfuscationConfigurationHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainList;
    bool m_domainListHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
