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
 * <p>A structure that represents a data set reference of a topic.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicV2DataSetReference">AWS
 * API Reference</a></p>
 */
class TopicV2DataSetReference {
 public:
  AWS_QUICKSIGHT_API TopicV2DataSetReference() = default;
  AWS_QUICKSIGHT_API TopicV2DataSetReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TopicV2DataSetReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the data set.</p>
   */
  inline const Aws::String& GetDataSetArn() const { return m_dataSetArn; }
  inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }
  template <typename DataSetArnT = Aws::String>
  void SetDataSetArn(DataSetArnT&& value) {
    m_dataSetArnHasBeenSet = true;
    m_dataSetArn = std::forward<DataSetArnT>(value);
  }
  template <typename DataSetArnT = Aws::String>
  TopicV2DataSetReference& WithDataSetArn(DataSetArnT&& value) {
    SetDataSetArn(std::forward<DataSetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the data set.</p>
   */
  inline const Aws::String& GetDataSetName() const { return m_dataSetName; }
  inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }
  template <typename DataSetNameT = Aws::String>
  void SetDataSetName(DataSetNameT&& value) {
    m_dataSetNameHasBeenSet = true;
    m_dataSetName = std::forward<DataSetNameT>(value);
  }
  template <typename DataSetNameT = Aws::String>
  TopicV2DataSetReference& WithDataSetName(DataSetNameT&& value) {
    SetDataSetName(std::forward<DataSetNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSetArn;

  Aws::String m_dataSetName;
  bool m_dataSetArnHasBeenSet = false;
  bool m_dataSetNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
