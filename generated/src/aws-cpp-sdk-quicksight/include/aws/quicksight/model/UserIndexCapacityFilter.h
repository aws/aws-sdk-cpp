/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CapacityBytesRangeFilter.h>
#include <aws/quicksight/model/UserNameOrEmailFilter.h>

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
 * <p>A filter for user index capacity queries. Only one filter type can be
 * specified per request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UserIndexCapacityFilter">AWS
 * API Reference</a></p>
 */
class UserIndexCapacityFilter {
 public:
  AWS_QUICKSIGHT_API UserIndexCapacityFilter() = default;
  AWS_QUICKSIGHT_API UserIndexCapacityFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API UserIndexCapacityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter users by username or email prefix.</p>
   */
  inline const UserNameOrEmailFilter& GetUserNameOrEmail() const { return m_userNameOrEmail; }
  inline bool UserNameOrEmailHasBeenSet() const { return m_userNameOrEmailHasBeenSet; }
  template <typename UserNameOrEmailT = UserNameOrEmailFilter>
  void SetUserNameOrEmail(UserNameOrEmailT&& value) {
    m_userNameOrEmailHasBeenSet = true;
    m_userNameOrEmail = std::forward<UserNameOrEmailT>(value);
  }
  template <typename UserNameOrEmailT = UserNameOrEmailFilter>
  UserIndexCapacityFilter& WithUserNameOrEmail(UserNameOrEmailT&& value) {
    SetUserNameOrEmail(std::forward<UserNameOrEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter users by total capacity range in bytes.</p>
   */
  inline const CapacityBytesRangeFilter& GetTotalCapacityBytes() const { return m_totalCapacityBytes; }
  inline bool TotalCapacityBytesHasBeenSet() const { return m_totalCapacityBytesHasBeenSet; }
  template <typename TotalCapacityBytesT = CapacityBytesRangeFilter>
  void SetTotalCapacityBytes(TotalCapacityBytesT&& value) {
    m_totalCapacityBytesHasBeenSet = true;
    m_totalCapacityBytes = std::forward<TotalCapacityBytesT>(value);
  }
  template <typename TotalCapacityBytesT = CapacityBytesRangeFilter>
  UserIndexCapacityFilter& WithTotalCapacityBytes(TotalCapacityBytesT&& value) {
    SetTotalCapacityBytes(std::forward<TotalCapacityBytesT>(value));
    return *this;
  }
  ///@}
 private:
  UserNameOrEmailFilter m_userNameOrEmail;

  CapacityBytesRangeFilter m_totalCapacityBytes;
  bool m_userNameOrEmailHasBeenSet = false;
  bool m_totalCapacityBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
