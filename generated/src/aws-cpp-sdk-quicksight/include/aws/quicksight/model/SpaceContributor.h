/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>A contributor to an Amazon QuickSight space.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SpaceContributor">AWS
 * API Reference</a></p>
 */
class SpaceContributor {
 public:
  AWS_QUICKSIGHT_API SpaceContributor() = default;
  AWS_QUICKSIGHT_API SpaceContributor(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SpaceContributor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The user name of the contributor.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  SpaceContributor& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The raw file size in bytes contributed by the user.</p>
   */
  inline long long GetRawFileSizeBytes() const { return m_rawFileSizeBytes; }
  inline bool RawFileSizeBytesHasBeenSet() const { return m_rawFileSizeBytesHasBeenSet; }
  inline void SetRawFileSizeBytes(long long value) {
    m_rawFileSizeBytesHasBeenSet = true;
    m_rawFileSizeBytes = value;
  }
  inline SpaceContributor& WithRawFileSizeBytes(long long value) {
    SetRawFileSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of total contributions made by the user.</p>
   */
  inline double GetPercentage() const { return m_percentage; }
  inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
  inline void SetPercentage(double value) {
    m_percentageHasBeenSet = true;
    m_percentage = value;
  }
  inline SpaceContributor& WithPercentage(double value) {
    SetPercentage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userName;

  long long m_rawFileSizeBytes{0};

  double m_percentage{0.0};
  bool m_userNameHasBeenSet = false;
  bool m_rawFileSizeBytesHasBeenSet = false;
  bool m_percentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
