/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/EventParameters.h>
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
   * <p>Describes the configuration of events, which are used in solution
   * creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/EventsConfig">AWS
   * API Reference</a></p>
   */
  class EventsConfig
  {
  public:
    AWS_PERSONALIZE_API EventsConfig() = default;
    AWS_PERSONALIZE_API EventsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API EventsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of event parameters, which includes event types and their event value
     * thresholds and weights.</p>
     */
    inline const Aws::Vector<EventParameters>& GetEventParametersList() const { return m_eventParametersList; }
    inline bool EventParametersListHasBeenSet() const { return m_eventParametersListHasBeenSet; }
    template<typename EventParametersListT = Aws::Vector<EventParameters>>
    void SetEventParametersList(EventParametersListT&& value) { m_eventParametersListHasBeenSet = true; m_eventParametersList = std::forward<EventParametersListT>(value); }
    template<typename EventParametersListT = Aws::Vector<EventParameters>>
    EventsConfig& WithEventParametersList(EventParametersListT&& value) { SetEventParametersList(std::forward<EventParametersListT>(value)); return *this;}
    template<typename EventParametersListT = EventParameters>
    EventsConfig& AddEventParametersList(EventParametersListT&& value) { m_eventParametersListHasBeenSet = true; m_eventParametersList.emplace_back(std::forward<EventParametersListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EventParameters> m_eventParametersList;
    bool m_eventParametersListHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
