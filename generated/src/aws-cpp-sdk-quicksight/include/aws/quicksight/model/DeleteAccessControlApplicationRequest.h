/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace QuickSight {
namespace Model {

/**
 */
class DeleteAccessControlApplicationRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API DeleteAccessControlApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessControlApplication"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the Quick Sight
   * account.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  DeleteAccessControlApplicationRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the access control application to delete.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  DeleteAccessControlApplicationRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of an IAM Identity Center application that Quick Sight created for an
   * access control application that has already been deleted. Provide this ARN to
   * clean up the IAM Identity Center application.</p>
   */
  inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
  inline bool IdcApplicationArnHasBeenSet() const { return m_idcApplicationArnHasBeenSet; }
  template <typename IdcApplicationArnT = Aws::String>
  void SetIdcApplicationArn(IdcApplicationArnT&& value) {
    m_idcApplicationArnHasBeenSet = true;
    m_idcApplicationArn = std::forward<IdcApplicationArnT>(value);
  }
  template <typename IdcApplicationArnT = Aws::String>
  DeleteAccessControlApplicationRequest& WithIdcApplicationArn(IdcApplicationArnT&& value) {
    SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_applicationId;

  Aws::String m_idcApplicationArn;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_idcApplicationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
