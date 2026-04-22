/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Details about the rollback options for a service software
 * update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RollbackServiceSoftwareOptions">AWS
 * API Reference</a></p>
 */
class RollbackServiceSoftwareOptions {
 public:
  AWS_OPENSEARCHSERVICE_API RollbackServiceSoftwareOptions() = default;
  AWS_OPENSEARCHSERVICE_API RollbackServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API RollbackServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current service software version on the domain.</p>
   */
  inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
  inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
  template <typename CurrentVersionT = Aws::String>
  void SetCurrentVersion(CurrentVersionT&& value) {
    m_currentVersionHasBeenSet = true;
    m_currentVersion = std::forward<CurrentVersionT>(value);
  }
  template <typename CurrentVersionT = Aws::String>
  RollbackServiceSoftwareOptions& WithCurrentVersion(CurrentVersionT&& value) {
    SetCurrentVersion(std::forward<CurrentVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service software version that the domain will roll back to.</p>
   */
  inline const Aws::String& GetNewVersion() const { return m_newVersion; }
  inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }
  template <typename NewVersionT = Aws::String>
  void SetNewVersion(NewVersionT&& value) {
    m_newVersionHasBeenSet = true;
    m_newVersion = std::forward<NewVersionT>(value);
  }
  template <typename NewVersionT = Aws::String>
  RollbackServiceSoftwareOptions& WithNewVersion(NewVersionT&& value) {
    SetNewVersion(std::forward<NewVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether a service software rollback is available for the domain.</p>
   */
  inline bool GetRollbackAvailable() const { return m_rollbackAvailable; }
  inline bool RollbackAvailableHasBeenSet() const { return m_rollbackAvailableHasBeenSet; }
  inline void SetRollbackAvailable(bool value) {
    m_rollbackAvailableHasBeenSet = true;
    m_rollbackAvailable = value;
  }
  inline RollbackServiceSoftwareOptions& WithRollbackAvailable(bool value) {
    SetRollbackAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the rollback status.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RollbackServiceSoftwareOptions& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_currentVersion;

  Aws::String m_newVersion;

  bool m_rollbackAvailable{false};

  Aws::String m_description;
  bool m_currentVersionHasBeenSet = false;
  bool m_newVersionHasBeenSet = false;
  bool m_rollbackAvailableHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
