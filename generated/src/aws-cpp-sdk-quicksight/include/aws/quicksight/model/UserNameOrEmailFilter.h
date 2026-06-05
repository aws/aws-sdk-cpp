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
 * <p>A filter that matches users by username or email prefix.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UserNameOrEmailFilter">AWS
 * API Reference</a></p>
 */
class UserNameOrEmailFilter {
 public:
  AWS_QUICKSIGHT_API UserNameOrEmailFilter() = default;
  AWS_QUICKSIGHT_API UserNameOrEmailFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API UserNameOrEmailFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The prefix to match against username or email (starts-with match).</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  UserNameOrEmailFilter& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_prefix;
  bool m_prefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
