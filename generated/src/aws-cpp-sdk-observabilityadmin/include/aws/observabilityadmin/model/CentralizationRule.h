/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/CentralizationRuleSource.h>
#include <aws/observabilityadmin/model/CentralizationRuleDestination.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p>Defines how telemetry data should be centralized across an Amazon Web
   * Services Organization, including source and destination
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CentralizationRule">AWS
   * API Reference</a></p>
   */
  class CentralizationRule
  {
  public:
    AWS_OBSERVABILITYADMIN_API CentralizationRule() = default;
    AWS_OBSERVABILITYADMIN_API CentralizationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API CentralizationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration determining the source of the telemetry data to be
     * centralized.</p>
     */
    inline const CentralizationRuleSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = CentralizationRuleSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = CentralizationRuleSource>
    CentralizationRule& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration determining where the telemetry data should be centralized,
     * backed up, as well as encryption configuration for the primary and backup
     * destinations.</p>
     */
    inline const CentralizationRuleDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = CentralizationRuleDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = CentralizationRuleDestination>
    CentralizationRule& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    CentralizationRuleSource m_source;
    bool m_sourceHasBeenSet = false;

    CentralizationRuleDestination m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
