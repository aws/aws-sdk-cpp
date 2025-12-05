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
 * <p>Read-only metadata for IAM-based connections, containing role and source ARN
 * information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadIamConnectionMetadata">AWS
 * API Reference</a></p>
 */
class ReadIamConnectionMetadata {
 public:
  AWS_QUICKSIGHT_API ReadIamConnectionMetadata() = default;
  AWS_QUICKSIGHT_API ReadIamConnectionMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ReadIamConnectionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role to assume for
   * authentication.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  ReadIamConnectionMetadata& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source resource for IAM
   * authentication.</p>
   */
  inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
  inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
  template <typename SourceArnT = Aws::String>
  void SetSourceArn(SourceArnT&& value) {
    m_sourceArnHasBeenSet = true;
    m_sourceArn = std::forward<SourceArnT>(value);
  }
  template <typename SourceArnT = Aws::String>
  ReadIamConnectionMetadata& WithSourceArn(SourceArnT&& value) {
    SetSourceArn(std::forward<SourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  Aws::String m_sourceArn;
  bool m_roleArnHasBeenSet = false;
  bool m_sourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
