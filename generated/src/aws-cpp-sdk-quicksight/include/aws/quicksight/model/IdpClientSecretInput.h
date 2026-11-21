/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>An IdP-provided client secret that you store in Amazon Web Services Secrets
 * Manager.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IdpClientSecretInput">AWS
 * API Reference</a></p>
 */
class IdpClientSecretInput {
 public:
  AWS_QUICKSIGHT_API IdpClientSecretInput() = default;
  AWS_QUICKSIGHT_API IdpClientSecretInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API IdpClientSecretInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Secrets Manager secret that holds the
   * client secret, for each Region.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetRegionalSecretManagerArns() const { return m_regionalSecretManagerArns; }
  inline bool RegionalSecretManagerArnsHasBeenSet() const { return m_regionalSecretManagerArnsHasBeenSet; }
  template <typename RegionalSecretManagerArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetRegionalSecretManagerArns(RegionalSecretManagerArnsT&& value) {
    m_regionalSecretManagerArnsHasBeenSet = true;
    m_regionalSecretManagerArns = std::forward<RegionalSecretManagerArnsT>(value);
  }
  template <typename RegionalSecretManagerArnsT = Aws::Map<Aws::String, Aws::String>>
  IdpClientSecretInput& WithRegionalSecretManagerArns(RegionalSecretManagerArnsT&& value) {
    SetRegionalSecretManagerArns(std::forward<RegionalSecretManagerArnsT>(value));
    return *this;
  }
  template <typename RegionalSecretManagerArnsKeyT = Aws::String, typename RegionalSecretManagerArnsValueT = Aws::String>
  IdpClientSecretInput& AddRegionalSecretManagerArns(RegionalSecretManagerArnsKeyT&& key, RegionalSecretManagerArnsValueT&& value) {
    m_regionalSecretManagerArnsHasBeenSet = true;
    m_regionalSecretManagerArns.emplace(std::forward<RegionalSecretManagerArnsKeyT>(key),
                                        std::forward<RegionalSecretManagerArnsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_regionalSecretManagerArns;
  bool m_regionalSecretManagerArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
