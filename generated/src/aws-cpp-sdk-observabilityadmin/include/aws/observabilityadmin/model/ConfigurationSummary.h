/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/DataSource.h>
#include <aws/observabilityadmin/model/Source.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Provides a summary of pipeline configuration components including sources,
 * processors, and destinations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ConfigurationSummary">AWS
 * API Reference</a></p>
 */
class ConfigurationSummary {
 public:
  AWS_OBSERVABILITYADMIN_API ConfigurationSummary() = default;
  AWS_OBSERVABILITYADMIN_API ConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API ConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of data sources configured in the pipeline.</p>
   */
  inline const Aws::Vector<Source>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<Source>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<Source>>
  ConfigurationSummary& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  template <typename SourcesT = Source>
  ConfigurationSummary& AddSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources.emplace_back(std::forward<SourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of data sources that provide telemetry data to the pipeline.</p>
   */
  inline const Aws::Vector<DataSource>& GetDataSources() const { return m_dataSources; }
  inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
  template <typename DataSourcesT = Aws::Vector<DataSource>>
  void SetDataSources(DataSourcesT&& value) {
    m_dataSourcesHasBeenSet = true;
    m_dataSources = std::forward<DataSourcesT>(value);
  }
  template <typename DataSourcesT = Aws::Vector<DataSource>>
  ConfigurationSummary& WithDataSources(DataSourcesT&& value) {
    SetDataSources(std::forward<DataSourcesT>(value));
    return *this;
  }
  template <typename DataSourcesT = DataSource>
  ConfigurationSummary& AddDataSources(DataSourcesT&& value) {
    m_dataSourcesHasBeenSet = true;
    m_dataSources.emplace_back(std::forward<DataSourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of processors configured in the pipeline for data
   * transformation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetProcessors() const { return m_processors; }
  inline bool ProcessorsHasBeenSet() const { return m_processorsHasBeenSet; }
  template <typename ProcessorsT = Aws::Vector<Aws::String>>
  void SetProcessors(ProcessorsT&& value) {
    m_processorsHasBeenSet = true;
    m_processors = std::forward<ProcessorsT>(value);
  }
  template <typename ProcessorsT = Aws::Vector<Aws::String>>
  ConfigurationSummary& WithProcessors(ProcessorsT&& value) {
    SetProcessors(std::forward<ProcessorsT>(value));
    return *this;
  }
  template <typename ProcessorsT = Aws::String>
  ConfigurationSummary& AddProcessors(ProcessorsT&& value) {
    m_processorsHasBeenSet = true;
    m_processors.emplace_back(std::forward<ProcessorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of processors configured in the pipeline.</p>
   */
  inline int GetProcessorCount() const { return m_processorCount; }
  inline bool ProcessorCountHasBeenSet() const { return m_processorCountHasBeenSet; }
  inline void SetProcessorCount(int value) {
    m_processorCountHasBeenSet = true;
    m_processorCount = value;
  }
  inline ConfigurationSummary& WithProcessorCount(int value) {
    SetProcessorCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of destinations where processed data is sent.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSinks() const { return m_sinks; }
  inline bool SinksHasBeenSet() const { return m_sinksHasBeenSet; }
  template <typename SinksT = Aws::Vector<Aws::String>>
  void SetSinks(SinksT&& value) {
    m_sinksHasBeenSet = true;
    m_sinks = std::forward<SinksT>(value);
  }
  template <typename SinksT = Aws::Vector<Aws::String>>
  ConfigurationSummary& WithSinks(SinksT&& value) {
    SetSinks(std::forward<SinksT>(value));
    return *this;
  }
  template <typename SinksT = Aws::String>
  ConfigurationSummary& AddSinks(SinksT&& value) {
    m_sinksHasBeenSet = true;
    m_sinks.emplace_back(std::forward<SinksT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Source> m_sources;

  Aws::Vector<DataSource> m_dataSources;

  Aws::Vector<Aws::String> m_processors;

  int m_processorCount{0};

  Aws::Vector<Aws::String> m_sinks;
  bool m_sourcesHasBeenSet = false;
  bool m_dataSourcesHasBeenSet = false;
  bool m_processorsHasBeenSet = false;
  bool m_processorCountHasBeenSet = false;
  bool m_sinksHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
