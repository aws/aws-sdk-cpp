/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/IamRoleStatus.h>
#include <aws/odb/model/SupportedAwsIntegration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>Information about an Amazon Web Services Identity and Access Management (IAM)
 * service role associated with a resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/IamRole">AWS API
 * Reference</a></p>
 */
class IamRole {
 public:
  AWS_ODB_API IamRole() = default;
  AWS_ODB_API IamRole(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API IamRole& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM service role.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  IamRole& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the IAM service role.</p>
   */
  inline IamRoleStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IamRoleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IamRole& WithStatus(IamRoleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current status of the IAM service role, if
   * applicable.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  IamRole& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services integration configuration settings for the IAM
   * service role.</p>
   */
  inline SupportedAwsIntegration GetAwsIntegration() const { return m_awsIntegration; }
  inline bool AwsIntegrationHasBeenSet() const { return m_awsIntegrationHasBeenSet; }
  inline void SetAwsIntegration(SupportedAwsIntegration value) {
    m_awsIntegrationHasBeenSet = true;
    m_awsIntegration = value;
  }
  inline IamRole& WithAwsIntegration(SupportedAwsIntegration value) {
    SetAwsIntegration(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_iamRoleArn;

  IamRoleStatus m_status{IamRoleStatus::NOT_SET};

  Aws::String m_statusReason;

  SupportedAwsIntegration m_awsIntegration{SupportedAwsIntegration::NOT_SET};
  bool m_iamRoleArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_awsIntegrationHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
