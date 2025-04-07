/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/AutoTrainingConfig.h>
#include <aws/personalize/model/EventsConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The configuration details of the solution update.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/SolutionUpdateConfig">AWS
   * API Reference</a></p>
   */
  class SolutionUpdateConfig
  {
  public:
    AWS_PERSONALIZE_API SolutionUpdateConfig() = default;
    AWS_PERSONALIZE_API SolutionUpdateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionUpdateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AutoTrainingConfig& GetAutoTrainingConfig() const { return m_autoTrainingConfig; }
    inline bool AutoTrainingConfigHasBeenSet() const { return m_autoTrainingConfigHasBeenSet; }
    template<typename AutoTrainingConfigT = AutoTrainingConfig>
    void SetAutoTrainingConfig(AutoTrainingConfigT&& value) { m_autoTrainingConfigHasBeenSet = true; m_autoTrainingConfig = std::forward<AutoTrainingConfigT>(value); }
    template<typename AutoTrainingConfigT = AutoTrainingConfig>
    SolutionUpdateConfig& WithAutoTrainingConfig(AutoTrainingConfigT&& value) { SetAutoTrainingConfig(std::forward<AutoTrainingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration of an event, which includes a list of event
     * parameters. You can specify up to 10 event parameters. Events are used in
     * solution creation.</p>
     */
    inline const EventsConfig& GetEventsConfig() const { return m_eventsConfig; }
    inline bool EventsConfigHasBeenSet() const { return m_eventsConfigHasBeenSet; }
    template<typename EventsConfigT = EventsConfig>
    void SetEventsConfig(EventsConfigT&& value) { m_eventsConfigHasBeenSet = true; m_eventsConfig = std::forward<EventsConfigT>(value); }
    template<typename EventsConfigT = EventsConfig>
    SolutionUpdateConfig& WithEventsConfig(EventsConfigT&& value) { SetEventsConfig(std::forward<EventsConfigT>(value)); return *this;}
    ///@}
  private:

    AutoTrainingConfig m_autoTrainingConfig;
    bool m_autoTrainingConfigHasBeenSet = false;

    EventsConfig m_eventsConfig;
    bool m_eventsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
