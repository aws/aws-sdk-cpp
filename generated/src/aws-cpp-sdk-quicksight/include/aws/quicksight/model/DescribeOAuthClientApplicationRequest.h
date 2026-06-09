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
namespace QuickSight {
namespace Model {

/**
 */
class DescribeOAuthClientApplicationRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API DescribeOAuthClientApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeOAuthClientApplication"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  DescribeOAuthClientApplicationRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the OAuthClientApplication that you want to describe.</p>
   */
  inline const Aws::String& GetOAuthClientApplicationId() const { return m_oAuthClientApplicationId; }
  inline bool OAuthClientApplicationIdHasBeenSet() const { return m_oAuthClientApplicationIdHasBeenSet; }
  template <typename OAuthClientApplicationIdT = Aws::String>
  void SetOAuthClientApplicationId(OAuthClientApplicationIdT&& value) {
    m_oAuthClientApplicationIdHasBeenSet = true;
    m_oAuthClientApplicationId = std::forward<OAuthClientApplicationIdT>(value);
  }
  template <typename OAuthClientApplicationIdT = Aws::String>
  DescribeOAuthClientApplicationRequest& WithOAuthClientApplicationId(OAuthClientApplicationIdT&& value) {
    SetOAuthClientApplicationId(std::forward<OAuthClientApplicationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_oAuthClientApplicationId;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_oAuthClientApplicationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
