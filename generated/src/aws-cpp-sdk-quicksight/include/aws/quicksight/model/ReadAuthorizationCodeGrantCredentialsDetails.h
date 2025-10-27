/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ReadAuthorizationCodeGrantDetails.h>

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
 * <p>Read-only credentials details for OAuth2 authorization code grant flow,
 * containing non-sensitive configuration information.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadAuthorizationCodeGrantCredentialsDetails">AWS
 * API Reference</a></p>
 */
class ReadAuthorizationCodeGrantCredentialsDetails {
 public:
  AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantCredentialsDetails() = default;
  AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantCredentialsDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantCredentialsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The read-only authorization code grant configuration details.</p>
   */
  inline const ReadAuthorizationCodeGrantDetails& GetReadAuthorizationCodeGrantDetails() const {
    return m_readAuthorizationCodeGrantDetails;
  }
  inline bool ReadAuthorizationCodeGrantDetailsHasBeenSet() const { return m_readAuthorizationCodeGrantDetailsHasBeenSet; }
  template <typename ReadAuthorizationCodeGrantDetailsT = ReadAuthorizationCodeGrantDetails>
  void SetReadAuthorizationCodeGrantDetails(ReadAuthorizationCodeGrantDetailsT&& value) {
    m_readAuthorizationCodeGrantDetailsHasBeenSet = true;
    m_readAuthorizationCodeGrantDetails = std::forward<ReadAuthorizationCodeGrantDetailsT>(value);
  }
  template <typename ReadAuthorizationCodeGrantDetailsT = ReadAuthorizationCodeGrantDetails>
  ReadAuthorizationCodeGrantCredentialsDetails& WithReadAuthorizationCodeGrantDetails(ReadAuthorizationCodeGrantDetailsT&& value) {
    SetReadAuthorizationCodeGrantDetails(std::forward<ReadAuthorizationCodeGrantDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  ReadAuthorizationCodeGrantDetails m_readAuthorizationCodeGrantDetails;
  bool m_readAuthorizationCodeGrantDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
