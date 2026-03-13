/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/AnalyzerType.h>
#include <aws/mgn/model/NetworkMigrationAnalysisResultSource.h>
#include <aws/mgn/model/NetworkMigrationAnalysisResultStatus.h>
#include <aws/mgn/model/NetworkMigrationAnalysisResultTarget.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>The result of a network migration analysis operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationAnalysisResult">AWS
 * API Reference</a></p>
 */
class NetworkMigrationAnalysisResult {
 public:
  AWS_MGN_API NetworkMigrationAnalysisResult() = default;
  AWS_MGN_API NetworkMigrationAnalysisResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationAnalysisResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the analysis job that generated this result.</p>
   */
  inline const Aws::String& GetJobID() const { return m_jobID; }
  inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
  template <typename JobIDT = Aws::String>
  void SetJobID(JobIDT&& value) {
    m_jobIDHasBeenSet = true;
    m_jobID = std::forward<JobIDT>(value);
  }
  template <typename JobIDT = Aws::String>
  NetworkMigrationAnalysisResult& WithJobID(JobIDT&& value) {
    SetJobID(std::forward<JobIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network migration execution.</p>
   */
  inline const Aws::String& GetNetworkMigrationExecutionID() const { return m_networkMigrationExecutionID; }
  inline bool NetworkMigrationExecutionIDHasBeenSet() const { return m_networkMigrationExecutionIDHasBeenSet; }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  void SetNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    m_networkMigrationExecutionIDHasBeenSet = true;
    m_networkMigrationExecutionID = std::forward<NetworkMigrationExecutionIDT>(value);
  }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  NetworkMigrationAnalysisResult& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    SetNetworkMigrationExecutionID(std::forward<NetworkMigrationExecutionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network migration definition.</p>
   */
  inline const Aws::String& GetNetworkMigrationDefinitionID() const { return m_networkMigrationDefinitionID; }
  inline bool NetworkMigrationDefinitionIDHasBeenSet() const { return m_networkMigrationDefinitionIDHasBeenSet; }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  void SetNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    m_networkMigrationDefinitionIDHasBeenSet = true;
    m_networkMigrationDefinitionID = std::forward<NetworkMigrationDefinitionIDT>(value);
  }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  NetworkMigrationAnalysisResult& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of analyzer that generated this result.</p>
   */
  inline AnalyzerType GetAnalyzerType() const { return m_analyzerType; }
  inline bool AnalyzerTypeHasBeenSet() const { return m_analyzerTypeHasBeenSet; }
  inline void SetAnalyzerType(AnalyzerType value) {
    m_analyzerTypeHasBeenSet = true;
    m_analyzerType = value;
  }
  inline NetworkMigrationAnalysisResult& WithAnalyzerType(AnalyzerType value) {
    SetAnalyzerType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source resource that was analyzed.</p>
   */
  inline const NetworkMigrationAnalysisResultSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = NetworkMigrationAnalysisResultSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = NetworkMigrationAnalysisResultSource>
  NetworkMigrationAnalysisResult& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target resource in the analysis.</p>
   */
  inline const NetworkMigrationAnalysisResultTarget& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = NetworkMigrationAnalysisResultTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = NetworkMigrationAnalysisResultTarget>
  NetworkMigrationAnalysisResult& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the analysis result.</p>
   */
  inline NetworkMigrationAnalysisResultStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NetworkMigrationAnalysisResultStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NetworkMigrationAnalysisResult& WithStatus(NetworkMigrationAnalysisResultStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed analysis findings and recommendations.</p>
   */
  inline const Aws::String& GetAnalysisResult() const { return m_analysisResult; }
  inline bool AnalysisResultHasBeenSet() const { return m_analysisResultHasBeenSet; }
  template <typename AnalysisResultT = Aws::String>
  void SetAnalysisResult(AnalysisResultT&& value) {
    m_analysisResultHasBeenSet = true;
    m_analysisResult = std::forward<AnalysisResultT>(value);
  }
  template <typename AnalysisResultT = Aws::String>
  NetworkMigrationAnalysisResult& WithAnalysisResult(AnalysisResultT&& value) {
    SetAnalysisResult(std::forward<AnalysisResultT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobID;

  Aws::String m_networkMigrationExecutionID;

  Aws::String m_networkMigrationDefinitionID;

  AnalyzerType m_analyzerType{AnalyzerType::NOT_SET};

  NetworkMigrationAnalysisResultSource m_source;

  NetworkMigrationAnalysisResultTarget m_target;

  NetworkMigrationAnalysisResultStatus m_status{NetworkMigrationAnalysisResultStatus::NOT_SET};

  Aws::String m_analysisResult;
  bool m_jobIDHasBeenSet = false;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_analyzerTypeHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_analysisResultHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
