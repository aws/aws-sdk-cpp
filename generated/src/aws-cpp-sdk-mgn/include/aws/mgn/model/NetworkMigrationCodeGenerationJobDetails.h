/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/CodeGenerationOutputFormatStatusDetails.h>
#include <aws/mgn/model/CodeGenerationOutputFormatType.h>
#include <aws/mgn/model/NetworkMigrationJobStatus.h>

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
 * <p>Details about a network migration code generation job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationCodeGenerationJobDetails">AWS
 * API Reference</a></p>
 */
class NetworkMigrationCodeGenerationJobDetails {
 public:
  AWS_MGN_API NetworkMigrationCodeGenerationJobDetails() = default;
  AWS_MGN_API NetworkMigrationCodeGenerationJobDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationCodeGenerationJobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the code generation job.</p>
   */
  inline const Aws::String& GetJobID() const { return m_jobID; }
  inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
  template <typename JobIDT = Aws::String>
  void SetJobID(JobIDT&& value) {
    m_jobIDHasBeenSet = true;
    m_jobID = std::forward<JobIDT>(value);
  }
  template <typename JobIDT = Aws::String>
  NetworkMigrationCodeGenerationJobDetails& WithJobID(JobIDT&& value) {
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
  NetworkMigrationCodeGenerationJobDetails& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
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
  NetworkMigrationCodeGenerationJobDetails& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  NetworkMigrationCodeGenerationJobDetails& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job completed or failed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  NetworkMigrationCodeGenerationJobDetails& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the code generation job.</p>
   */
  inline NetworkMigrationJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NetworkMigrationJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NetworkMigrationCodeGenerationJobDetails& WithStatus(NetworkMigrationJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed status information about the job.</p>
   */
  inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
  inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
  template <typename StatusDetailsT = Aws::String>
  void SetStatusDetails(StatusDetailsT&& value) {
    m_statusDetailsHasBeenSet = true;
    m_statusDetails = std::forward<StatusDetailsT>(value);
  }
  template <typename StatusDetailsT = Aws::String>
  NetworkMigrationCodeGenerationJobDetails& WithStatusDetails(StatusDetailsT&& value) {
    SetStatusDetails(std::forward<StatusDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of output format types to their status details.</p>
   */
  inline const Aws::Map<CodeGenerationOutputFormatType, CodeGenerationOutputFormatStatusDetails>&
  GetCodeGenerationOutputFormatStatusDetailsMap() const {
    return m_codeGenerationOutputFormatStatusDetailsMap;
  }
  inline bool CodeGenerationOutputFormatStatusDetailsMapHasBeenSet() const {
    return m_codeGenerationOutputFormatStatusDetailsMapHasBeenSet;
  }
  template <typename CodeGenerationOutputFormatStatusDetailsMapT =
                Aws::Map<CodeGenerationOutputFormatType, CodeGenerationOutputFormatStatusDetails>>
  void SetCodeGenerationOutputFormatStatusDetailsMap(CodeGenerationOutputFormatStatusDetailsMapT&& value) {
    m_codeGenerationOutputFormatStatusDetailsMapHasBeenSet = true;
    m_codeGenerationOutputFormatStatusDetailsMap = std::forward<CodeGenerationOutputFormatStatusDetailsMapT>(value);
  }
  template <typename CodeGenerationOutputFormatStatusDetailsMapT =
                Aws::Map<CodeGenerationOutputFormatType, CodeGenerationOutputFormatStatusDetails>>
  NetworkMigrationCodeGenerationJobDetails& WithCodeGenerationOutputFormatStatusDetailsMap(
      CodeGenerationOutputFormatStatusDetailsMapT&& value) {
    SetCodeGenerationOutputFormatStatusDetailsMap(std::forward<CodeGenerationOutputFormatStatusDetailsMapT>(value));
    return *this;
  }
  inline NetworkMigrationCodeGenerationJobDetails& AddCodeGenerationOutputFormatStatusDetailsMap(
      CodeGenerationOutputFormatType key, CodeGenerationOutputFormatStatusDetails value) {
    m_codeGenerationOutputFormatStatusDetailsMapHasBeenSet = true;
    m_codeGenerationOutputFormatStatusDetailsMap.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobID;

  Aws::String m_networkMigrationExecutionID;

  Aws::String m_networkMigrationDefinitionID;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_endedAt{};

  NetworkMigrationJobStatus m_status{NetworkMigrationJobStatus::NOT_SET};

  Aws::String m_statusDetails;

  Aws::Map<CodeGenerationOutputFormatType, CodeGenerationOutputFormatStatusDetails> m_codeGenerationOutputFormatStatusDetailsMap;
  bool m_jobIDHasBeenSet = false;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusDetailsHasBeenSet = false;
  bool m_codeGenerationOutputFormatStatusDetailsMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
