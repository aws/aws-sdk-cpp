/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicV2DataSetRelationEndpoint.h>

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
 * <p>A structure that represents a relation between two data sets of a
 * topic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicV2DataSetRelation">AWS
 * API Reference</a></p>
 */
class TopicV2DataSetRelation {
 public:
  AWS_QUICKSIGHT_API TopicV2DataSetRelation() = default;
  AWS_QUICKSIGHT_API TopicV2DataSetRelation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TopicV2DataSetRelation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The left endpoint of the data set relation.</p>
   */
  inline const TopicV2DataSetRelationEndpoint& GetLeft() const { return m_left; }
  inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
  template <typename LeftT = TopicV2DataSetRelationEndpoint>
  void SetLeft(LeftT&& value) {
    m_leftHasBeenSet = true;
    m_left = std::forward<LeftT>(value);
  }
  template <typename LeftT = TopicV2DataSetRelationEndpoint>
  TopicV2DataSetRelation& WithLeft(LeftT&& value) {
    SetLeft(std::forward<LeftT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The right endpoint of the data set relation.</p>
   */
  inline const TopicV2DataSetRelationEndpoint& GetRight() const { return m_right; }
  inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }
  template <typename RightT = TopicV2DataSetRelationEndpoint>
  void SetRight(RightT&& value) {
    m_rightHasBeenSet = true;
    m_right = std::forward<RightT>(value);
  }
  template <typename RightT = TopicV2DataSetRelationEndpoint>
  TopicV2DataSetRelation& WithRight(RightT&& value) {
    SetRight(std::forward<RightT>(value));
    return *this;
  }
  ///@}
 private:
  TopicV2DataSetRelationEndpoint m_left;

  TopicV2DataSetRelationEndpoint m_right;
  bool m_leftHasBeenSet = false;
  bool m_rightHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
