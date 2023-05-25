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
    AWS_SFN_API LoggingConfiguration();
    AWS_SFN_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines which category of execution history events are logged.</p>
     */
    inline const LogLevel& GetLevel() const{ return m_level; }

    /**
     * <p>Defines which category of execution history events are logged.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>Defines which category of execution history events are logged.</p>
     */
    inline void SetLevel(const LogLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>Defines which category of execution history events are logged.</p>
     */
    inline void SetLevel(LogLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>Defines which category of execution history events are logged.</p>
     */
    inline LoggingConfiguration& WithLevel(const LogLevel& value) { SetLevel(value); return *this;}

    /**
     * <p>Defines which category of execution history events are logged.</p>
     */
    inline LoggingConfiguration& WithLevel(LogLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * <p>Determines whether execution data is included in your log. When set to
     * <code>false</code>, data is excluded.</p>
     */
    inline bool GetIncludeExecutionData() const{ return m_includeExecutionData; }

    /**
     * <p>Determines whether execution data is included in your log. When set to
     * <code>false</code>, data is excluded.</p>
     */
    inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }

    /**
     * <p>Determines whether execution data is included in your log. When set to
     * <code>false</code>, data is excluded.</p>
     */
    inline void SetIncludeExecutionData(bool value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = value; }

    /**
     * <p>Determines whether execution data is included in your log. When set to
     * <code>false</code>, data is excluded.</p>
     */
    inline LoggingConfiguration& WithIncludeExecutionData(bool value) { SetIncludeExecutionData(value); return *this;}


    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline const Aws::Vector<LogDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline void SetDestinations(const Aws::Vector<LogDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline void SetDestinations(Aws::Vector<LogDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline LoggingConfiguration& WithDestinations(const Aws::Vector<LogDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline LoggingConfiguration& WithDestinations(Aws::Vector<LogDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline LoggingConfiguration& AddDestinations(const LogDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>An array of objects that describes where your execution history events will
     * be logged. Limited to size 1. Required, if your log level is not set to
     * <code>OFF</code>.</p>
     */
    inline LoggingConfiguration& AddDestinations(LogDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

  private:

    LogLevel m_level;
    bool m_levelHasBeenSet = false;

    bool m_includeExecutionData;
    bool m_includeExecutionDataHasBeenSet = false;

    Aws::Vector<LogDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
