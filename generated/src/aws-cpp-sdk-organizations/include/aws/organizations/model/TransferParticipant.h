/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Organizations {
namespace Model {

/**
 * <p>Contains details for a participant in a transfer. A <i>transfer</i> is the
 * arrangement between two management accounts where one account designates the
 * other with specified responsibilities for their organization.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TransferParticipant">AWS
 * API Reference</a></p>
 */
class TransferParticipant {
 public:
  AWS_ORGANIZATIONS_API TransferParticipant() = default;
  AWS_ORGANIZATIONS_API TransferParticipant(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API TransferParticipant& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ID for the management account.</p>
   */
  inline const Aws::String& GetManagementAccountId() const { return m_managementAccountId; }
  inline bool ManagementAccountIdHasBeenSet() const { return m_managementAccountIdHasBeenSet; }
  template <typename ManagementAccountIdT = Aws::String>
  void SetManagementAccountId(ManagementAccountIdT&& value) {
    m_managementAccountIdHasBeenSet = true;
    m_managementAccountId = std::forward<ManagementAccountIdT>(value);
  }
  template <typename ManagementAccountIdT = Aws::String>
  TransferParticipant& WithManagementAccountId(ManagementAccountIdT&& value) {
    SetManagementAccountId(std::forward<ManagementAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Email address for the management account.</p>
   */
  inline const Aws::String& GetManagementAccountEmail() const { return m_managementAccountEmail; }
  inline bool ManagementAccountEmailHasBeenSet() const { return m_managementAccountEmailHasBeenSet; }
  template <typename ManagementAccountEmailT = Aws::String>
  void SetManagementAccountEmail(ManagementAccountEmailT&& value) {
    m_managementAccountEmailHasBeenSet = true;
    m_managementAccountEmail = std::forward<ManagementAccountEmailT>(value);
  }
  template <typename ManagementAccountEmailT = Aws::String>
  TransferParticipant& WithManagementAccountEmail(ManagementAccountEmailT&& value) {
    SetManagementAccountEmail(std::forward<ManagementAccountEmailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managementAccountId;
  bool m_managementAccountIdHasBeenSet = false;

  Aws::String m_managementAccountEmail;
  bool m_managementAccountEmailHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
