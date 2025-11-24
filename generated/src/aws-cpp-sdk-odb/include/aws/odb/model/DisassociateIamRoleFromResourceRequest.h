/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/SupportedAwsIntegration.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class DisassociateIamRoleFromResourceRequest : public OdbRequest {
 public:
  AWS_ODB_API DisassociateIamRoleFromResourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateIamRoleFromResource"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM service role to disassociate from
   * the resource.</p>
   */
  inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
  inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
  template <typename IamRoleArnT = Aws::String>
  void SetIamRoleArn(IamRoleArnT&& value) {
    m_iamRoleArnHasBeenSet = true;
    m_iamRoleArn = std::forward<IamRoleArnT>(value);
  }
  template <typename IamRoleArnT = Aws::String>
  DisassociateIamRoleFromResourceRequest& WithIamRoleArn(IamRoleArnT&& value) {
    SetIamRoleArn(std::forward<IamRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services integration configuration settings for the IAM
   * service role disassociation.</p>
   */
  inline SupportedAwsIntegration GetAwsIntegration() const { return m_awsIntegration; }
  inline bool AwsIntegrationHasBeenSet() const { return m_awsIntegrationHasBeenSet; }
  inline void SetAwsIntegration(SupportedAwsIntegration value) {
    m_awsIntegrationHasBeenSet = true;
    m_awsIntegration = value;
  }
  inline DisassociateIamRoleFromResourceRequest& WithAwsIntegration(SupportedAwsIntegration value) {
    SetAwsIntegration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the target resource to disassociate from
   * the IAM service role.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  DisassociateIamRoleFromResourceRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_iamRoleArn;
  bool m_iamRoleArnHasBeenSet = false;

  SupportedAwsIntegration m_awsIntegration{SupportedAwsIntegration::NOT_SET};
  bool m_awsIntegrationHasBeenSet = false;

  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
