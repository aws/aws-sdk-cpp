/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PrincipalType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A principal that a governance policy is assigned to.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PolicyPrincipal">AWS
 * API Reference</a></p>
 */
class PolicyPrincipal {
 public:
  AWS_QUICKSIGHT_API PolicyPrincipal() = default;
  AWS_QUICKSIGHT_API PolicyPrincipal(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API PolicyPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the user, group, or account.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  PolicyPrincipal& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the principal.</p>
   */
  inline PrincipalType GetPrincipalType() const { return m_principalType; }
  inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
  inline void SetPrincipalType(PrincipalType value) {
    m_principalTypeHasBeenSet = true;
    m_principalType = value;
  }
  inline PolicyPrincipal& WithPrincipalType(PrincipalType value) {
    SetPrincipalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the assignment was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PolicyPrincipal& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current revision of the assignment.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline PolicyPrincipal& WithRevision(long long value) {
    SetRevision(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_principalArn;

  PrincipalType m_principalType{PrincipalType::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  long long m_revision{0};
  bool m_principalArnHasBeenSet = false;
  bool m_principalTypeHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
