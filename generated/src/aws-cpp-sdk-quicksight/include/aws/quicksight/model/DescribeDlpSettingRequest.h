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
class DescribeDlpSettingRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API DescribeDlpSettingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeDlpSetting"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the DLP setting that
   * you want to describe.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  DescribeDlpSettingRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DLP setting that you want to describe.</p>
   */
  inline const Aws::String& GetDlpSettingId() const { return m_dlpSettingId; }
  inline bool DlpSettingIdHasBeenSet() const { return m_dlpSettingIdHasBeenSet; }
  template <typename DlpSettingIdT = Aws::String>
  void SetDlpSettingId(DlpSettingIdT&& value) {
    m_dlpSettingIdHasBeenSet = true;
    m_dlpSettingId = std::forward<DlpSettingIdT>(value);
  }
  template <typename DlpSettingIdT = Aws::String>
  DescribeDlpSettingRequest& WithDlpSettingId(DlpSettingIdT&& value) {
    SetDlpSettingId(std::forward<DlpSettingIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_dlpSettingId;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_dlpSettingIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
