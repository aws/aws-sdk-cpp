/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/IdpClientSecretInput.h>

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
 * <p>The details of an IdP-provided client secret. Required when
 * <code>ClientSecretSourceType</code> is <code>IDP_PROVIDED</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ClientSecretConfigurationDetail">AWS
 * API Reference</a></p>
 */
class ClientSecretConfigurationDetail {
 public:
  AWS_QUICKSIGHT_API ClientSecretConfigurationDetail() = default;
  AWS_QUICKSIGHT_API ClientSecretConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ClientSecretConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An IdP-provided client secret, with the Amazon Web Services Secrets Manager
   * secret ARN for each Region.</p>
   */
  inline const IdpClientSecretInput& GetIdp() const { return m_idp; }
  inline bool IdpHasBeenSet() const { return m_idpHasBeenSet; }
  template <typename IdpT = IdpClientSecretInput>
  void SetIdp(IdpT&& value) {
    m_idpHasBeenSet = true;
    m_idp = std::forward<IdpT>(value);
  }
  template <typename IdpT = IdpClientSecretInput>
  ClientSecretConfigurationDetail& WithIdp(IdpT&& value) {
    SetIdp(std::forward<IdpT>(value));
    return *this;
  }
  ///@}
 private:
  IdpClientSecretInput m_idp;
  bool m_idpHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
