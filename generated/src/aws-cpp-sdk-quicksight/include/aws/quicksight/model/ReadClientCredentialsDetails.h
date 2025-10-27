/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ReadClientCredentialsGrantDetails.h>

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
 * <p>Read-only details for OAuth2 client credentials, containing non-sensitive
 * configuration information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadClientCredentialsDetails">AWS
 * API Reference</a></p>
 */
class ReadClientCredentialsDetails {
 public:
  AWS_QUICKSIGHT_API ReadClientCredentialsDetails() = default;
  AWS_QUICKSIGHT_API ReadClientCredentialsDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ReadClientCredentialsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The read-only client credentials grant configuration details.</p>
   */
  inline const ReadClientCredentialsGrantDetails& GetReadClientCredentialsGrantDetails() const {
    return m_readClientCredentialsGrantDetails;
  }
  inline bool ReadClientCredentialsGrantDetailsHasBeenSet() const { return m_readClientCredentialsGrantDetailsHasBeenSet; }
  template <typename ReadClientCredentialsGrantDetailsT = ReadClientCredentialsGrantDetails>
  void SetReadClientCredentialsGrantDetails(ReadClientCredentialsGrantDetailsT&& value) {
    m_readClientCredentialsGrantDetailsHasBeenSet = true;
    m_readClientCredentialsGrantDetails = std::forward<ReadClientCredentialsGrantDetailsT>(value);
  }
  template <typename ReadClientCredentialsGrantDetailsT = ReadClientCredentialsGrantDetails>
  ReadClientCredentialsDetails& WithReadClientCredentialsGrantDetails(ReadClientCredentialsGrantDetailsT&& value) {
    SetReadClientCredentialsGrantDetails(std::forward<ReadClientCredentialsGrantDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  ReadClientCredentialsGrantDetails m_readClientCredentialsGrantDetails;
  bool m_readClientCredentialsGrantDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
