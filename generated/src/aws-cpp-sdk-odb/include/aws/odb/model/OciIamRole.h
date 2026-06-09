/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/OciAwsIntegration.h>

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
 * service role used for Autonomous Database integration with Oracle Cloud
 * Infrastructure (OCI).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/OciIamRole">AWS API
 * Reference</a></p>
 */
class OciIamRole {
 public:
  AWS_ODB_API OciIamRole() = default;
  AWS_ODB_API OciIamRole(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API OciIamRole& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
   * Management (IAM) service role.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  OciIamRole& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services integration configuration settings for the Amazon Web
   * Services Identity and Access Management (IAM) service role.</p>
   */
  inline OciAwsIntegration GetAwsIntegration() const { return m_awsIntegration; }
  inline bool AwsIntegrationHasBeenSet() const { return m_awsIntegrationHasBeenSet; }
  inline void SetAwsIntegration(OciAwsIntegration value) {
    m_awsIntegrationHasBeenSet = true;
    m_awsIntegration = value;
  }
  inline OciIamRole& WithAwsIntegration(OciAwsIntegration value) {
    SetAwsIntegration(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_iamRoleArn;

  OciAwsIntegration m_awsIntegration{OciAwsIntegration::NOT_SET};
  bool m_iamRoleArnHasBeenSet = false;
  bool m_awsIntegrationHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
