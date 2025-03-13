/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/states/model/LogDestination.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>The <code>LoggingConfiguration</code> data type is used to set CloudWatch
   * Logs options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_SFN_API LoggingConfiguration() = default;
    AWS_SFN_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines which category of execution history events are logged.</p>
     */
    inline LogLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(LogLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline LoggingConfiguration& WithLevel(LogLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether execution data is included in your log. When set to
     * <code>false</code>, data is excluded.</p>
     */
    inline bool GetIncludeExecutionData() const { return m_includeExecutionData; }
    inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }
    inline void SetIncludeExecutionData(bool value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = value; }
    inline LoggingConfiguration& WithIncludeExecutionData(bool value) { SetIncludeExecutionData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline const Aws::Vector<LogDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<LogDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<LogDestination>>
    LoggingConfiguration& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = LogDestination>
    LoggingConfiguration& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}
  private:

    LogLevel m_level{LogLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    bool m_includeExecutionData{false};
    bool m_includeExecutionDataHasBeenSet = false;

    Aws::Vector<LogDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
