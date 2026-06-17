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
 * <p>DFD element that a threat is anchored to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ThreatAnchorShape">AWS
 * API Reference</a></p>
 */
class ThreatAnchorShape {
 public:
  AWS_SECURITYAGENT_API ThreatAnchorShape() = default;
  AWS_SECURITYAGENT_API ThreatAnchorShape(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ThreatAnchorShape& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The kind of DFD element.</p>
   */
  inline const Aws::String& GetKind() const { return m_kind; }
  inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
  template <typename KindT = Aws::String>
  void SetKind(KindT&& value) {
    m_kindHasBeenSet = true;
    m_kind = std::forward<KindT>(value);
  }
  template <typename KindT = Aws::String>
  ThreatAnchorShape& WithKind(KindT&& value) {
    SetKind(std::forward<KindT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the DFD element.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ThreatAnchorShape& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The package identifier containing the DFD element.</p>
   */
  inline const Aws::String& GetPackageId() const { return m_packageId; }
  inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }
  template <typename PackageIdT = Aws::String>
  void SetPackageId(PackageIdT&& value) {
    m_packageIdHasBeenSet = true;
    m_packageId = std::forward<PackageIdT>(value);
  }
  template <typename PackageIdT = Aws::String>
  ThreatAnchorShape& WithPackageId(PackageIdT&& value) {
    SetPackageId(std::forward<PackageIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kind;

  Aws::String m_id;

  Aws::String m_packageId;
  bool m_kindHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_packageIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
