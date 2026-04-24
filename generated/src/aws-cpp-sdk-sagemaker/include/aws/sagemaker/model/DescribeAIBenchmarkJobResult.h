/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIBenchmarkJobStatus.h>
#include <aws/sagemaker/model/AIBenchmarkNetworkConfig.h>
#include <aws/sagemaker/model/AIBenchmarkOutputResult.h>
#include <aws/sagemaker/model/AIBenchmarkTarget.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeAIBenchmarkJobResult {
 public:
  AWS_SAGEMAKER_API DescribeAIBenchmarkJobResult() = default;
  AWS_SAGEMAKER_API DescribeAIBenchmarkJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeAIBenchmarkJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the AI benchmark job.</p>
   */
  inline const Aws::String& GetAIBenchmarkJobName() const { return m_aIBenchmarkJobName; }
  template <typename AIBenchmarkJobNameT = Aws::String>
  void SetAIBenchmarkJobName(AIBenchmarkJobNameT&& value) {
    m_aIBenchmarkJobNameHasBeenSet = true;
    m_aIBenchmarkJobName = std::forward<AIBenchmarkJobNameT>(value);
  }
  template <typename AIBenchmarkJobNameT = Aws::String>
  DescribeAIBenchmarkJobResult& WithAIBenchmarkJobName(AIBenchmarkJobNameT&& value) {
    SetAIBenchmarkJobName(std::forward<AIBenchmarkJobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AI benchmark job.</p>
   */
  inline const Aws::String& GetAIBenchmarkJobArn() const { return m_aIBenchmarkJobArn; }
  template <typename AIBenchmarkJobArnT = Aws::String>
  void SetAIBenchmarkJobArn(AIBenchmarkJobArnT&& value) {
    m_aIBenchmarkJobArnHasBeenSet = true;
    m_aIBenchmarkJobArn = std::forward<AIBenchmarkJobArnT>(value);
  }
  template <typename AIBenchmarkJobArnT = Aws::String>
  DescribeAIBenchmarkJobResult& WithAIBenchmarkJobArn(AIBenchmarkJobArnT&& value) {
    SetAIBenchmarkJobArn(std::forward<AIBenchmarkJobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the AI benchmark job.</p>
   */
  inline AIBenchmarkJobStatus GetAIBenchmarkJobStatus() const { return m_aIBenchmarkJobStatus; }
  inline void SetAIBenchmarkJobStatus(AIBenchmarkJobStatus value) {
    m_aIBenchmarkJobStatusHasBeenSet = true;
    m_aIBenchmarkJobStatus = value;
  }
  inline DescribeAIBenchmarkJobResult& WithAIBenchmarkJobStatus(AIBenchmarkJobStatus value) {
    SetAIBenchmarkJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the benchmark job failed, the reason it failed.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  DescribeAIBenchmarkJobResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target endpoint that was benchmarked.</p>
   */
  inline const AIBenchmarkTarget& GetBenchmarkTarget() const { return m_benchmarkTarget; }
  template <typename BenchmarkTargetT = AIBenchmarkTarget>
  void SetBenchmarkTarget(BenchmarkTargetT&& value) {
    m_benchmarkTargetHasBeenSet = true;
    m_benchmarkTarget = std::forward<BenchmarkTargetT>(value);
  }
  template <typename BenchmarkTargetT = AIBenchmarkTarget>
  DescribeAIBenchmarkJobResult& WithBenchmarkTarget(BenchmarkTargetT&& value) {
    SetBenchmarkTarget(std::forward<BenchmarkTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for the benchmark job, including the Amazon S3
   * output location and CloudWatch log information.</p>
   */
  inline const AIBenchmarkOutputResult& GetOutputConfig() const { return m_outputConfig; }
  template <typename OutputConfigT = AIBenchmarkOutputResult>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = AIBenchmarkOutputResult>
  DescribeAIBenchmarkJobResult& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the AI workload configuration used
   * for this benchmark job.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigIdentifier() const { return m_aIWorkloadConfigIdentifier; }
  template <typename AIWorkloadConfigIdentifierT = Aws::String>
  void SetAIWorkloadConfigIdentifier(AIWorkloadConfigIdentifierT&& value) {
    m_aIWorkloadConfigIdentifierHasBeenSet = true;
    m_aIWorkloadConfigIdentifier = std::forward<AIWorkloadConfigIdentifierT>(value);
  }
  template <typename AIWorkloadConfigIdentifierT = Aws::String>
  DescribeAIBenchmarkJobResult& WithAIWorkloadConfigIdentifier(AIWorkloadConfigIdentifierT&& value) {
    SetAIWorkloadConfigIdentifier(std::forward<AIWorkloadConfigIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role used by the benchmark job.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  DescribeAIBenchmarkJobResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the benchmark job.</p>
   */
  inline const AIBenchmarkNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
  template <typename NetworkConfigT = AIBenchmarkNetworkConfig>
  void SetNetworkConfig(NetworkConfigT&& value) {
    m_networkConfigHasBeenSet = true;
    m_networkConfig = std::forward<NetworkConfigT>(value);
  }
  template <typename NetworkConfigT = AIBenchmarkNetworkConfig>
  DescribeAIBenchmarkJobResult& WithNetworkConfig(NetworkConfigT&& value) {
    SetNetworkConfig(std::forward<NetworkConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the benchmark job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeAIBenchmarkJobResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the benchmark job started running.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  DescribeAIBenchmarkJobResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the benchmark job completed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  DescribeAIBenchmarkJobResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the benchmark job.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  DescribeAIBenchmarkJobResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  DescribeAIBenchmarkJobResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeAIBenchmarkJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_aIBenchmarkJobName;

  Aws::String m_aIBenchmarkJobArn;

  AIBenchmarkJobStatus m_aIBenchmarkJobStatus{AIBenchmarkJobStatus::NOT_SET};

  Aws::String m_failureReason;

  AIBenchmarkTarget m_benchmarkTarget;

  AIBenchmarkOutputResult m_outputConfig;

  Aws::String m_aIWorkloadConfigIdentifier;

  Aws::String m_roleArn;

  AIBenchmarkNetworkConfig m_networkConfig;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Vector<Tag> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aIBenchmarkJobNameHasBeenSet = false;
  bool m_aIBenchmarkJobArnHasBeenSet = false;
  bool m_aIBenchmarkJobStatusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_benchmarkTargetHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_aIWorkloadConfigIdentifierHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_networkConfigHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
