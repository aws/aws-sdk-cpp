/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/InsightLevel.h>
#include <aws/mgn/model/InsightMessage.h>
#include <aws/mgn/model/InsightProducerName.h>
#include <aws/mgn/model/InsightProducerType.h>
#include <aws/mgn/model/InsightType.h>

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
 * <p>An insight produced during a network migration, such as a warning, decision,
 * question, or other context beyond the migrated output.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationInsight">AWS
 * API Reference</a></p>
 */
class NetworkMigrationInsight {
 public:
  AWS_MGN_API NetworkMigrationInsight() = default;
  AWS_MGN_API NetworkMigrationInsight(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationInsight& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the network migration definition the insight belongs
   * to.</p>
   */
  inline const Aws::String& GetNetworkMigrationDefinitionID() const { return m_networkMigrationDefinitionID; }
  inline bool NetworkMigrationDefinitionIDHasBeenSet() const { return m_networkMigrationDefinitionIDHasBeenSet; }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  void SetNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    m_networkMigrationDefinitionIDHasBeenSet = true;
    m_networkMigrationDefinitionID = std::forward<NetworkMigrationDefinitionIDT>(value);
  }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  NetworkMigrationInsight& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network migration execution the insight belongs
   * to.</p>
   */
  inline const Aws::String& GetNetworkMigrationExecutionID() const { return m_networkMigrationExecutionID; }
  inline bool NetworkMigrationExecutionIDHasBeenSet() const { return m_networkMigrationExecutionIDHasBeenSet; }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  void SetNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    m_networkMigrationExecutionIDHasBeenSet = true;
    m_networkMigrationExecutionID = std::forward<NetworkMigrationExecutionIDT>(value);
  }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  NetworkMigrationInsight& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    SetNetworkMigrationExecutionID(std::forward<NetworkMigrationExecutionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the job or API request that produced the insight.</p>
   */
  inline const Aws::String& GetProducerID() const { return m_producerID; }
  inline bool ProducerIDHasBeenSet() const { return m_producerIDHasBeenSet; }
  template <typename ProducerIDT = Aws::String>
  void SetProducerID(ProducerIDT&& value) {
    m_producerIDHasBeenSet = true;
    m_producerID = std::forward<ProducerIDT>(value);
  }
  template <typename ProducerIDT = Aws::String>
  NetworkMigrationInsight& WithProducerID(ProducerIDT&& value) {
    SetProducerID(std::forward<ProducerIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the insight was produced by a job or by an API request.</p>
   */
  inline InsightProducerType GetProducerType() const { return m_producerType; }
  inline bool ProducerTypeHasBeenSet() const { return m_producerTypeHasBeenSet; }
  inline void SetProducerType(InsightProducerType value) {
    m_producerTypeHasBeenSet = true;
    m_producerType = value;
  }
  inline NetworkMigrationInsight& WithProducerType(InsightProducerType value) {
    SetProducerType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job type or API name that produced the insight.</p>
   */
  inline InsightProducerName GetProducerName() const { return m_producerName; }
  inline bool ProducerNameHasBeenSet() const { return m_producerNameHasBeenSet; }
  inline void SetProducerName(InsightProducerName value) {
    m_producerNameHasBeenSet = true;
    m_producerName = value;
  }
  inline NetworkMigrationInsight& WithProducerName(InsightProducerName value) {
    SetProducerName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the segment the insight relates to; absent for
   * run-level insights.</p>
   */
  inline const Aws::String& GetSegmentID() const { return m_segmentID; }
  inline bool SegmentIDHasBeenSet() const { return m_segmentIDHasBeenSet; }
  template <typename SegmentIDT = Aws::String>
  void SetSegmentID(SegmentIDT&& value) {
    m_segmentIDHasBeenSet = true;
    m_segmentID = std::forward<SegmentIDT>(value);
  }
  template <typename SegmentIDT = Aws::String>
  NetworkMigrationInsight& WithSegmentID(SegmentIDT&& value) {
    SetSegmentID(std::forward<SegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the construct the insight relates to; absent for
   * run-level and segment-level insights.</p>
   */
  inline const Aws::String& GetConstructID() const { return m_constructID; }
  inline bool ConstructIDHasBeenSet() const { return m_constructIDHasBeenSet; }
  template <typename ConstructIDT = Aws::String>
  void SetConstructID(ConstructIDT&& value) {
    m_constructIDHasBeenSet = true;
    m_constructID = std::forward<ConstructIDT>(value);
  }
  template <typename ConstructIDT = Aws::String>
  NetworkMigrationInsight& WithConstructID(ConstructIDT&& value) {
    SetConstructID(std::forward<ConstructIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the insight.</p>
   */
  inline const Aws::String& GetInsightID() const { return m_insightID; }
  inline bool InsightIDHasBeenSet() const { return m_insightIDHasBeenSet; }
  template <typename InsightIDT = Aws::String>
  void SetInsightID(InsightIDT&& value) {
    m_insightIDHasBeenSet = true;
    m_insightID = std::forward<InsightIDT>(value);
  }
  template <typename InsightIDT = Aws::String>
  NetworkMigrationInsight& WithInsightID(InsightIDT&& value) {
    SetInsightID(std::forward<InsightIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The level that the insight applies to: the run, a segment, or a
   * construct.</p>
   */
  inline InsightLevel GetInsightLevel() const { return m_insightLevel; }
  inline bool InsightLevelHasBeenSet() const { return m_insightLevelHasBeenSet; }
  inline void SetInsightLevel(InsightLevel value) {
    m_insightLevelHasBeenSet = true;
    m_insightLevel = value;
  }
  inline NetworkMigrationInsight& WithInsightLevel(InsightLevel value) {
    SetInsightLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the insight.</p>
   */
  inline InsightType GetInsightType() const { return m_insightType; }
  inline bool InsightTypeHasBeenSet() const { return m_insightTypeHasBeenSet; }
  inline void SetInsightType(InsightType value) {
    m_insightTypeHasBeenSet = true;
    m_insightType = value;
  }
  inline NetworkMigrationInsight& WithInsightType(InsightType value) {
    SetInsightType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the insight.</p>
   */
  inline const InsightMessage& GetInsightMessage() const { return m_insightMessage; }
  inline bool InsightMessageHasBeenSet() const { return m_insightMessageHasBeenSet; }
  template <typename InsightMessageT = InsightMessage>
  void SetInsightMessage(InsightMessageT&& value) {
    m_insightMessageHasBeenSet = true;
    m_insightMessage = std::forward<InsightMessageT>(value);
  }
  template <typename InsightMessageT = InsightMessage>
  NetworkMigrationInsight& WithInsightMessage(InsightMessageT&& value) {
    SetInsightMessage(std::forward<InsightMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the insight was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  NetworkMigrationInsight& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkMigrationDefinitionID;

  Aws::String m_networkMigrationExecutionID;

  Aws::String m_producerID;

  InsightProducerType m_producerType{InsightProducerType::NOT_SET};

  InsightProducerName m_producerName{InsightProducerName::NOT_SET};

  Aws::String m_segmentID;

  Aws::String m_constructID;

  Aws::String m_insightID;

  InsightLevel m_insightLevel{InsightLevel::NOT_SET};

  InsightType m_insightType{InsightType::NOT_SET};

  InsightMessage m_insightMessage;

  Aws::Utils::DateTime m_createdAt{};
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_producerIDHasBeenSet = false;
  bool m_producerTypeHasBeenSet = false;
  bool m_producerNameHasBeenSet = false;
  bool m_segmentIDHasBeenSet = false;
  bool m_constructIDHasBeenSet = false;
  bool m_insightIDHasBeenSet = false;
  bool m_insightLevelHasBeenSet = false;
  bool m_insightTypeHasBeenSet = false;
  bool m_insightMessageHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
