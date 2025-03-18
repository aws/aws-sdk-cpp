/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/AppMonitorConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/CustomEvents.h>
#include <aws/rum/model/DataStorage.h>
#include <aws/rum/model/DeobfuscationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rum/model/StateEnum.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A RUM app monitor collects telemetry data from your application and sends
   * that data to RUM. The data includes performance and reliability information such
   * as page load time, client-side errors, and user behavior.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/AppMonitor">AWS API
   * Reference</a></p>
   */
  class AppMonitor
  {
  public:
    AWS_CLOUDWATCHRUM_API AppMonitor() = default;
    AWS_CLOUDWATCHRUM_API AppMonitor(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API AppMonitor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains much of the configuration data for the app
     * monitor.</p>
     */
    inline const AppMonitorConfiguration& GetAppMonitorConfiguration() const { return m_appMonitorConfiguration; }
    inline bool AppMonitorConfigurationHasBeenSet() const { return m_appMonitorConfigurationHasBeenSet; }
    template<typename AppMonitorConfigurationT = AppMonitorConfiguration>
    void SetAppMonitorConfiguration(AppMonitorConfigurationT&& value) { m_appMonitorConfigurationHasBeenSet = true; m_appMonitorConfiguration = std::forward<AppMonitorConfigurationT>(value); }
    template<typename AppMonitorConfigurationT = AppMonitorConfiguration>
    AppMonitor& WithAppMonitorConfiguration(AppMonitorConfigurationT&& value) { SetAppMonitorConfiguration(std::forward<AppMonitorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline const Aws::String& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::String>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::String>
    AppMonitor& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events.</p> <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline const CustomEvents& GetCustomEvents() const { return m_customEvents; }
    inline bool CustomEventsHasBeenSet() const { return m_customEventsHasBeenSet; }
    template<typename CustomEventsT = CustomEvents>
    void SetCustomEvents(CustomEventsT&& value) { m_customEventsHasBeenSet = true; m_customEvents = std::forward<CustomEventsT>(value); }
    template<typename CustomEventsT = CustomEvents>
    AppMonitor& WithCustomEvents(CustomEventsT&& value) { SetCustomEvents(std::forward<CustomEventsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about whether this app monitor stores a
     * copy of the telemetry data that RUM collects using CloudWatch Logs.</p>
     */
    inline const DataStorage& GetDataStorage() const { return m_dataStorage; }
    inline bool DataStorageHasBeenSet() const { return m_dataStorageHasBeenSet; }
    template<typename DataStorageT = DataStorage>
    void SetDataStorage(DataStorageT&& value) { m_dataStorageHasBeenSet = true; m_dataStorage = std::forward<DataStorageT>(value); }
    template<typename DataStorageT = DataStorage>
    AppMonitor& WithDataStorage(DataStorageT&& value) { SetDataStorage(std::forward<DataStorageT>(value)); return *this;}
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
    AppMonitor& WithDeobfuscationConfiguration(DeobfuscationConfigurationT&& value) { SetDeobfuscationConfiguration(std::forward<DeobfuscationConfigurationT>(value)); return *this;}
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
    AppMonitor& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List the domain names for which your application has administrative
     * authority. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainList() const { return m_domainList; }
    inline bool DomainListHasBeenSet() const { return m_domainListHasBeenSet; }
    template<typename DomainListT = Aws::Vector<Aws::String>>
    void SetDomainList(DomainListT&& value) { m_domainListHasBeenSet = true; m_domainList = std::forward<DomainListT>(value); }
    template<typename DomainListT = Aws::Vector<Aws::String>>
    AppMonitor& WithDomainList(DomainListT&& value) { SetDomainList(std::forward<DomainListT>(value)); return *this;}
    template<typename DomainListT = Aws::String>
    AppMonitor& AddDomainList(DomainListT&& value) { m_domainListHasBeenSet = true; m_domainList.emplace_back(std::forward<DomainListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AppMonitor& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline const Aws::String& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::String>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::String>
    AppMonitor& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app monitor.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AppMonitor& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the app monitor.</p>
     */
    inline StateEnum GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(StateEnum value) { m_stateHasBeenSet = true; m_state = value; }
    inline AppMonitor& WithState(StateEnum value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    AppMonitor& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AppMonitor& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    AppMonitorConfiguration m_appMonitorConfiguration;
    bool m_appMonitorConfigurationHasBeenSet = false;

    Aws::String m_created;
    bool m_createdHasBeenSet = false;

    CustomEvents m_customEvents;
    bool m_customEventsHasBeenSet = false;

    DataStorage m_dataStorage;
    bool m_dataStorageHasBeenSet = false;

    DeobfuscationConfiguration m_deobfuscationConfiguration;
    bool m_deobfuscationConfigurationHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainList;
    bool m_domainListHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StateEnum m_state{StateEnum::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
