/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/MultiplexSettingsSummary.h>
#include <aws/medialive/model/MultiplexState.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for MultiplexSummary<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexSummary">AWS
   * API Reference</a></p>
   */
  class MultiplexSummary
  {
  public:
    AWS_MEDIALIVE_API MultiplexSummary();
    AWS_MEDIALIVE_API MultiplexSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The unique arn of the multiplex.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline MultiplexSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline MultiplexSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline MultiplexSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of availability zones for the multiplex.
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline MultiplexSummary& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline MultiplexSummary& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline MultiplexSummary& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline MultiplexSummary& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline MultiplexSummary& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The unique id of the multiplex.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline MultiplexSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline MultiplexSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline MultiplexSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * Configuration for a multiplex event.
     */
    inline const MultiplexSettingsSummary& GetMultiplexSettings() const{ return m_multiplexSettings; }
    inline bool MultiplexSettingsHasBeenSet() const { return m_multiplexSettingsHasBeenSet; }
    inline void SetMultiplexSettings(const MultiplexSettingsSummary& value) { m_multiplexSettingsHasBeenSet = true; m_multiplexSettings = value; }
    inline void SetMultiplexSettings(MultiplexSettingsSummary&& value) { m_multiplexSettingsHasBeenSet = true; m_multiplexSettings = std::move(value); }
    inline MultiplexSummary& WithMultiplexSettings(const MultiplexSettingsSummary& value) { SetMultiplexSettings(value); return *this;}
    inline MultiplexSummary& WithMultiplexSettings(MultiplexSettingsSummary&& value) { SetMultiplexSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the multiplex.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MultiplexSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MultiplexSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MultiplexSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }
    inline bool PipelinesRunningCountHasBeenSet() const { return m_pipelinesRunningCountHasBeenSet; }
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCountHasBeenSet = true; m_pipelinesRunningCount = value; }
    inline MultiplexSummary& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of programs in the multiplex.
     */
    inline int GetProgramCount() const{ return m_programCount; }
    inline bool ProgramCountHasBeenSet() const { return m_programCountHasBeenSet; }
    inline void SetProgramCount(int value) { m_programCountHasBeenSet = true; m_programCount = value; }
    inline MultiplexSummary& WithProgramCount(int value) { SetProgramCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the multiplex.
     */
    inline const MultiplexState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const MultiplexState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(MultiplexState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline MultiplexSummary& WithState(const MultiplexState& value) { SetState(value); return *this;}
    inline MultiplexSummary& WithState(MultiplexState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline MultiplexSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline MultiplexSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline MultiplexSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline MultiplexSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline MultiplexSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline MultiplexSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline MultiplexSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline MultiplexSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline MultiplexSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MultiplexSettingsSummary m_multiplexSettings;
    bool m_multiplexSettingsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_pipelinesRunningCount;
    bool m_pipelinesRunningCountHasBeenSet = false;

    int m_programCount;
    bool m_programCountHasBeenSet = false;

    MultiplexState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
