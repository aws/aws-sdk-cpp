/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ErrorDetail.h>
#include <aws/rtbfabric/model/UpdateParameters.h>
#include <aws/rtbfabric/model/UpdateStatus.h>
#include <aws/rtbfabric/model/UpdateTarget.h>
#include <aws/rtbfabric/model/UpdateType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>An accepted configuration change and its status.</p><p><h3>See Also:</h3>
 * <a href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/Update">AWS
 * API Reference</a></p>
 */
class Update {
 public:
  AWS_RTBFABRIC_API Update() = default;
  AWS_RTBFABRIC_API Update(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Update& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the update.</p>
   */
  inline const Aws::String& GetUpdateId() const { return m_updateId; }
  inline bool UpdateIdHasBeenSet() const { return m_updateIdHasBeenSet; }
  template <typename UpdateIdT = Aws::String>
  void SetUpdateId(UpdateIdT&& value) {
    m_updateIdHasBeenSet = true;
    m_updateId = std::forward<UpdateIdT>(value);
  }
  template <typename UpdateIdT = Aws::String>
  Update& WithUpdateId(UpdateIdT&& value) {
    SetUpdateId(std::forward<UpdateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of change.</p>
   */
  inline UpdateType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(UpdateType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Update& WithType(UpdateType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the update.</p>
   */
  inline UpdateStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(UpdateStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Update& WithStatus(UpdateStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource that the update targeted.</p>
   */
  inline const UpdateTarget& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = UpdateTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = UpdateTarget>
  Update& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the update was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Update& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The changes that the update requested.</p>
   */
  inline const UpdateParameters& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = UpdateParameters>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = UpdateParameters>
  Update& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The causes of the failure. Present only when the update has failed.</p>
   */
  inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const { return m_errorDetails; }
  inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
  template <typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
  Update& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  template <typename ErrorDetailsT = ErrorDetail>
  Update& AddErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_updateId;

  UpdateType m_type{UpdateType::NOT_SET};

  UpdateStatus m_status{UpdateStatus::NOT_SET};

  UpdateTarget m_target;

  Aws::Utils::DateTime m_createdAt{};

  UpdateParameters m_parameters;

  Aws::Vector<ErrorDetail> m_errorDetails;
  bool m_updateIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
