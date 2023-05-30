/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The <code>LoggingConfiguration</code> data type is used to set CloudWatch
   * Logs options. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsStepFunctionStateMachineLoggingConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsStepFunctionStateMachineLoggingConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDetails();
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline const Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>& GetDestinations() const{ return m_destinations; }

    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline void SetDestinations(const Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline void SetDestinations(Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& WithDestinations(const Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>& value) { SetDestinations(value); return *this;}

    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& WithDestinations(Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& AddDestinations(const AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& AddDestinations(AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p> Determines whether execution data is included in your log. When set to
     * false, data is excluded. </p>
     */
    inline bool GetIncludeExecutionData() const{ return m_includeExecutionData; }

    /**
     * <p> Determines whether execution data is included in your log. When set to
     * false, data is excluded. </p>
     */
    inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }

    /**
     * <p> Determines whether execution data is included in your log. When set to
     * false, data is excluded. </p>
     */
    inline void SetIncludeExecutionData(bool value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = value; }

    /**
     * <p> Determines whether execution data is included in your log. When set to
     * false, data is excluded. </p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& WithIncludeExecutionData(bool value) { SetIncludeExecutionData(value); return *this;}


    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline const Aws::String& GetLevel() const{ return m_level; }

    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline void SetLevel(const Aws::String& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline void SetLevel(Aws::String&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline void SetLevel(const char* value) { m_levelHasBeenSet = true; m_level.assign(value); }

    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& WithLevel(const Aws::String& value) { SetLevel(value); return *this;}

    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& WithLevel(Aws::String&& value) { SetLevel(std::move(value)); return *this;}

    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& WithLevel(const char* value) { SetLevel(value); return *this;}

  private:

    Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails> m_destinations;
    bool m_destinationsHasBeenSet = false;

    bool m_includeExecutionData;
    bool m_includeExecutionDataHasBeenSet = false;

    Aws::String m_level;
    bool m_levelHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
