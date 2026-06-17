/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Source code file supporting a threat.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ThreatEvidenceShape">AWS
 * API Reference</a></p>
 */
class ThreatEvidenceShape {
 public:
  AWS_SECURITYAGENT_API ThreatEvidenceShape() = default;
  AWS_SECURITYAGENT_API ThreatEvidenceShape(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ThreatEvidenceShape& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The package identifier containing the evidence file.</p>
   */
  inline const Aws::String& GetPackageId() const { return m_packageId; }
  inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }
  template <typename PackageIdT = Aws::String>
  void SetPackageId(PackageIdT&& value) {
    m_packageIdHasBeenSet = true;
    m_packageId = std::forward<PackageIdT>(value);
  }
  template <typename PackageIdT = Aws::String>
  ThreatEvidenceShape& WithPackageId(PackageIdT&& value) {
    SetPackageId(std::forward<PackageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file path of the evidence.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  ThreatEvidenceShape& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_packageId;

  Aws::String m_path;
  bool m_packageIdHasBeenSet = false;
  bool m_pathHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
