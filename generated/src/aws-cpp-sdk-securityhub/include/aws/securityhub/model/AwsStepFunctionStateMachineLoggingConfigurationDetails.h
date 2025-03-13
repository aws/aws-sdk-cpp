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
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineLoggingConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An array of objects that describes where your execution history events will
     * be logged. </p>
     */
    inline const Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>>
    AwsStepFunctionStateMachineLoggingConfigurationDetails& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails>
    AwsStepFunctionStateMachineLoggingConfigurationDetails& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Determines whether execution data is included in your log. When set to
     * false, data is excluded. </p>
     */
    inline bool GetIncludeExecutionData() const { return m_includeExecutionData; }
    inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }
    inline void SetIncludeExecutionData(bool value) { m_includeExecutionDataHasBeenSet = true; m_includeExecutionData = value; }
    inline AwsStepFunctionStateMachineLoggingConfigurationDetails& WithIncludeExecutionData(bool value) { SetIncludeExecutionData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines which category of execution history events are logged. </p>
     */
    inline const Aws::String& GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    template<typename LevelT = Aws::String>
    void SetLevel(LevelT&& value) { m_levelHasBeenSet = true; m_level = std::forward<LevelT>(value); }
    template<typename LevelT = Aws::String>
    AwsStepFunctionStateMachineLoggingConfigurationDetails& WithLevel(LevelT&& value) { SetLevel(std::forward<LevelT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AwsStepFunctionStateMachineLoggingConfigurationDestinationsDetails> m_destinations;
    bool m_destinationsHasBeenSet = false;

    bool m_includeExecutionData{false};
    bool m_includeExecutionDataHasBeenSet = false;

    Aws::String m_level;
    bool m_levelHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
