/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/UpdateStatus.h>
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
 * <p>A summary of an update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/UpdateSummary">AWS
 * API Reference</a></p>
 */
class UpdateSummary {
 public:
  AWS_RTBFABRIC_API UpdateSummary() = default;
  AWS_RTBFABRIC_API UpdateSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API UpdateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  UpdateSummary& WithUpdateId(UpdateIdT&& value) {
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
  inline UpdateSummary& WithType(UpdateType value) {
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
  inline UpdateSummary& WithStatus(UpdateStatus value) {
    SetStatus(value);
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
  UpdateSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_updateId;

  UpdateType m_type{UpdateType::NOT_SET};

  UpdateStatus m_status{UpdateStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};
  bool m_updateIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
