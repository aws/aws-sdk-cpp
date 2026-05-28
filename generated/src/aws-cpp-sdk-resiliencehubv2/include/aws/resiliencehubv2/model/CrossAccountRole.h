/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Specifies a cross-account IAM role ARN and optional external
 * ID.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/CrossAccountRole">AWS
 * API Reference</a></p>
 */
class CrossAccountRole {
 public:
  AWS_RESILIENCEHUBV2_API CrossAccountRole() = default;
  AWS_RESILIENCEHUBV2_API CrossAccountRole(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API CrossAccountRole& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetCrossAccountRoleArn() const { return m_crossAccountRoleArn; }
  inline bool CrossAccountRoleArnHasBeenSet() const { return m_crossAccountRoleArnHasBeenSet; }
  template <typename CrossAccountRoleArnT = Aws::String>
  void SetCrossAccountRoleArn(CrossAccountRoleArnT&& value) {
    m_crossAccountRoleArnHasBeenSet = true;
    m_crossAccountRoleArn = std::forward<CrossAccountRoleArnT>(value);
  }
  template <typename CrossAccountRoleArnT = Aws::String>
  CrossAccountRole& WithCrossAccountRoleArn(CrossAccountRoleArnT&& value) {
    SetCrossAccountRoleArn(std::forward<CrossAccountRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external ID used for assuming the cross-account role.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  CrossAccountRole& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_crossAccountRoleArn;

  Aws::String m_externalId;
  bool m_crossAccountRoleArnHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
