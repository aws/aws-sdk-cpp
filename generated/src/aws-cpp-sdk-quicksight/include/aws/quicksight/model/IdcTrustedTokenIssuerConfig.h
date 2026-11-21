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
 * <p>A trusted token issuer configuration. When you provide it, Quick Sight
 * authenticates the user with the external IdP and then exchanges the token with
 * IAM Identity Center through the specified trusted token issuer.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IdcTrustedTokenIssuerConfig">AWS
 * API Reference</a></p>
 */
class IdcTrustedTokenIssuerConfig {
 public:
  AWS_QUICKSIGHT_API IdcTrustedTokenIssuerConfig() = default;
  AWS_QUICKSIGHT_API IdcTrustedTokenIssuerConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API IdcTrustedTokenIssuerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the trusted token issuer in IAM Identity Center.</p>
   */
  inline const Aws::String& GetIdcTrustedTokenIssuerArn() const { return m_idcTrustedTokenIssuerArn; }
  inline bool IdcTrustedTokenIssuerArnHasBeenSet() const { return m_idcTrustedTokenIssuerArnHasBeenSet; }
  template <typename IdcTrustedTokenIssuerArnT = Aws::String>
  void SetIdcTrustedTokenIssuerArn(IdcTrustedTokenIssuerArnT&& value) {
    m_idcTrustedTokenIssuerArnHasBeenSet = true;
    m_idcTrustedTokenIssuerArn = std::forward<IdcTrustedTokenIssuerArnT>(value);
  }
  template <typename IdcTrustedTokenIssuerArnT = Aws::String>
  IdcTrustedTokenIssuerConfig& WithIdcTrustedTokenIssuerArn(IdcTrustedTokenIssuerArnT&& value) {
    SetIdcTrustedTokenIssuerArn(std::forward<IdcTrustedTokenIssuerArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idcTrustedTokenIssuerArn;
  bool m_idcTrustedTokenIssuerArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
