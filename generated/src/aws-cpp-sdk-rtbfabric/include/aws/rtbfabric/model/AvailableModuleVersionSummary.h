/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ModuleVersionStatus.h>

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
 * <p>A version of a module that you can attach, as ListAvailableModuleVersions
 * returns it. ListAvailableModuleVersions and GetAvailableModuleVersion never
 * return how a version is implemented.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/AvailableModuleVersionSummary">AWS
 * API Reference</a></p>
 */
class AvailableModuleVersionSummary {
 public:
  AWS_RTBFABRIC_API AvailableModuleVersionSummary() = default;
  AWS_RTBFABRIC_API AvailableModuleVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API AvailableModuleVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  AvailableModuleVersionSummary& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version's ARN.</p>
   */
  inline const Aws::String& GetModuleVersionArn() const { return m_moduleVersionArn; }
  inline bool ModuleVersionArnHasBeenSet() const { return m_moduleVersionArnHasBeenSet; }
  template <typename ModuleVersionArnT = Aws::String>
  void SetModuleVersionArn(ModuleVersionArnT&& value) {
    m_moduleVersionArnHasBeenSet = true;
    m_moduleVersionArn = std::forward<ModuleVersionArnT>(value);
  }
  template <typename ModuleVersionArnT = Aws::String>
  AvailableModuleVersionSummary& WithModuleVersionArn(ModuleVersionArnT&& value) {
    SetModuleVersionArn(std::forward<ModuleVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ACTIVE or DEPRECATED.</p>
   */
  inline ModuleVersionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ModuleVersionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AvailableModuleVersionSummary& WithStatus(ModuleVersionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AvailableModuleVersionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::String m_moduleVersionArn;

  ModuleVersionStatus m_status{ModuleVersionStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};
  bool m_versionHasBeenSet = false;
  bool m_moduleVersionArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
