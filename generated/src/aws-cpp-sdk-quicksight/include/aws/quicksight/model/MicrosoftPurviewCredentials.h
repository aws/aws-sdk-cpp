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
 * <p>The credentials for Microsoft Purview DLP integration. The credentials are
 * stored in Amazon Web Services Secrets Manager and referenced by
 * ARN.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MicrosoftPurviewCredentials">AWS
 * API Reference</a></p>
 */
class MicrosoftPurviewCredentials {
 public:
  AWS_QUICKSIGHT_API MicrosoftPurviewCredentials() = default;
  AWS_QUICKSIGHT_API MicrosoftPurviewCredentials(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API MicrosoftPurviewCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Secrets Manager secret that contains the
   * Microsoft Purview OAuth credentials. The secret includes the Azure tenant ID,
   * client ID, and client secret or certificate.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  MicrosoftPurviewCredentials& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
