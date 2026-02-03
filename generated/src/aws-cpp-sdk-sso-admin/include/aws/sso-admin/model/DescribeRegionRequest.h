/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SSOAdmin {
namespace Model {

/**
 */
class DescribeRegionRequest : public SSOAdminRequest {
 public:
  AWS_SSOADMIN_API DescribeRegionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeRegion"; }

  AWS_SSOADMIN_API Aws::String SerializePayload() const override;

  AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance.</p>
   */
  inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
  inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
  template <typename InstanceArnT = Aws::String>
  void SetInstanceArn(InstanceArnT&& value) {
    m_instanceArnHasBeenSet = true;
    m_instanceArn = std::forward<InstanceArnT>(value);
  }
  template <typename InstanceArnT = Aws::String>
  DescribeRegionRequest& WithInstanceArn(InstanceArnT&& value) {
    SetInstanceArn(std::forward<InstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon Web Services Region to retrieve information about. The
   * Region name must be 1-32 characters long and follow the pattern of Amazon Web
   * Services Region names (for example, us-east-1).</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  DescribeRegionRequest& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceArn;

  Aws::String m_regionName;
  bool m_instanceArnHasBeenSet = false;
  bool m_regionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
