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
    AWS_CLOUDWATCHRUM_API AppMonitor();
    AWS_CLOUDWATCHRUM_API AppMonitor(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API AppMonitor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that contains much of the configuration data for the app
     * monitor.</p>
     */
    inline const AppMonitorConfiguration& GetAppMonitorConfiguration() const{ return m_appMonitorConfiguration; }

    /**
     * <p>A structure that contains much of the configuration data for the app
     * monitor.</p>
     */
    inline bool AppMonitorConfigurationHasBeenSet() const { return m_appMonitorConfigurationHasBeenSet; }

    /**
     * <p>A structure that contains much of the configuration data for the app
     * monitor.</p>
     */
    inline void SetAppMonitorConfiguration(const AppMonitorConfiguration& value) { m_appMonitorConfigurationHasBeenSet = true; m_appMonitorConfiguration = value; }

    /**
     * <p>A structure that contains much of the configuration data for the app
     * monitor.</p>
     */
    inline void SetAppMonitorConfiguration(AppMonitorConfiguration&& value) { m_appMonitorConfigurationHasBeenSet = true; m_appMonitorConfiguration = std::move(value); }

    /**
     * <p>A structure that contains much of the configuration data for the app
     * monitor.</p>
     */
    inline AppMonitor& WithAppMonitorConfiguration(const AppMonitorConfiguration& value) { SetAppMonitorConfiguration(value); return *this;}

    /**
     * <p>A structure that contains much of the configuration data for the app
     * monitor.</p>
     */
    inline AppMonitor& WithAppMonitorConfiguration(AppMonitorConfiguration&& value) { SetAppMonitorConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline const Aws::String& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline void SetCreated(const Aws::String& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline void SetCreated(Aws::String&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline void SetCreated(const char* value) { m_createdHasBeenSet = true; m_created.assign(value); }

    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline AppMonitor& WithCreated(const Aws::String& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline AppMonitor& WithCreated(Aws::String&& value) { SetCreated(std::move(value)); return *this;}

    /**
     * <p>The date and time that this app monitor was created.</p>
     */
    inline AppMonitor& WithCreated(const char* value) { SetCreated(value); return *this;}


    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events.</p> <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline const CustomEvents& GetCustomEvents() const{ return m_customEvents; }

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events.</p> <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline bool CustomEventsHasBeenSet() const { return m_customEventsHasBeenSet; }

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events.</p> <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline void SetCustomEvents(const CustomEvents& value) { m_customEventsHasBeenSet = true; m_customEvents = value; }

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events.</p> <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline void SetCustomEvents(CustomEvents&& value) { m_customEventsHasBeenSet = true; m_customEvents = std::move(value); }

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events.</p> <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline AppMonitor& WithCustomEvents(const CustomEvents& value) { SetCustomEvents(value); return *this;}

    /**
     * <p>Specifies whether this app monitor allows the web client to define and send
     * custom events.</p> <p>For more information about custom events, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-custom-events.html">Send
     * custom events</a>.</p>
     */
    inline AppMonitor& WithCustomEvents(CustomEvents&& value) { SetCustomEvents(std::move(value)); return *this;}


    /**
     * <p>A structure that contains information about whether this app monitor stores a
     * copy of the telemetry data that RUM collects using CloudWatch Logs.</p>
     */
    inline const DataStorage& GetDataStorage() const{ return m_dataStorage; }

    /**
     * <p>A structure that contains information about whether this app monitor stores a
     * copy of the telemetry data that RUM collects using CloudWatch Logs.</p>
     */
    inline bool DataStorageHasBeenSet() const { return m_dataStorageHasBeenSet; }

    /**
     * <p>A structure that contains information about whether this app monitor stores a
     * copy of the telemetry data that RUM collects using CloudWatch Logs.</p>
     */
    inline void SetDataStorage(const DataStorage& value) { m_dataStorageHasBeenSet = true; m_dataStorage = value; }

    /**
     * <p>A structure that contains information about whether this app monitor stores a
     * copy of the telemetry data that RUM collects using CloudWatch Logs.</p>
     */
    inline void SetDataStorage(DataStorage&& value) { m_dataStorageHasBeenSet = true; m_dataStorage = std::move(value); }

    /**
     * <p>A structure that contains information about whether this app monitor stores a
     * copy of the telemetry data that RUM collects using CloudWatch Logs.</p>
     */
    inline AppMonitor& WithDataStorage(const DataStorage& value) { SetDataStorage(value); return *this;}

    /**
     * <p>A structure that contains information about whether this app monitor stores a
     * copy of the telemetry data that RUM collects using CloudWatch Logs.</p>
     */
    inline AppMonitor& WithDataStorage(DataStorage&& value) { SetDataStorage(std::move(value)); return *this;}


    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline AppMonitor& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline AppMonitor& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The top-level internet domain name for which your application has
     * administrative authority.</p>
     */
    inline AppMonitor& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline AppMonitor& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline AppMonitor& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of this app monitor.</p>
     */
    inline AppMonitor& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline void SetLastModified(Aws::String&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }

    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline AppMonitor& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline AppMonitor& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}

    /**
     * <p>The date and time of the most recent changes to this app monitor's
     * configuration.</p>
     */
    inline AppMonitor& WithLastModified(const char* value) { SetLastModified(value); return *this;}


    /**
     * <p>The name of the app monitor.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the app monitor.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the app monitor.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the app monitor.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the app monitor.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the app monitor.</p>
     */
    inline AppMonitor& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the app monitor.</p>
     */
    inline AppMonitor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the app monitor.</p>
     */
    inline AppMonitor& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current state of the app monitor.</p>
     */
    inline const StateEnum& GetState() const{ return m_state; }

    /**
     * <p>The current state of the app monitor.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the app monitor.</p>
     */
    inline void SetState(const StateEnum& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the app monitor.</p>
     */
    inline void SetState(StateEnum&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the app monitor.</p>
     */
    inline AppMonitor& WithState(const StateEnum& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the app monitor.</p>
     */
    inline AppMonitor& WithState(StateEnum&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this app monitor.</p>
     */
    inline AppMonitor& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AppMonitorConfiguration m_appMonitorConfiguration;
    bool m_appMonitorConfigurationHasBeenSet = false;

    Aws::String m_created;
    bool m_createdHasBeenSet = false;

    CustomEvents m_customEvents;
    bool m_customEventsHasBeenSet = false;

    DataStorage m_dataStorage;
    bool m_dataStorageHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StateEnum m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
