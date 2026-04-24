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
 * <p>The parameters for S3 Tables.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/S3TablesParameters">AWS
 * API Reference</a></p>
 */
class S3TablesParameters {
 public:
  AWS_QUICKSIGHT_API S3TablesParameters() = default;
  AWS_QUICKSIGHT_API S3TablesParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API S3TablesParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 Tables bucket.</p>
   */
  inline const Aws::String& GetTableBucketArn() const { return m_tableBucketArn; }
  inline bool TableBucketArnHasBeenSet() const { return m_tableBucketArnHasBeenSet; }
  template <typename TableBucketArnT = Aws::String>
  void SetTableBucketArn(TableBucketArnT&& value) {
    m_tableBucketArnHasBeenSet = true;
    m_tableBucketArn = std::forward<TableBucketArnT>(value);
  }
  template <typename TableBucketArnT = Aws::String>
  S3TablesParameters& WithTableBucketArn(TableBucketArnT&& value) {
    SetTableBucketArn(std::forward<TableBucketArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableBucketArn;
  bool m_tableBucketArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
