/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicV2DataSetReference.h>
#include <aws/quicksight/model/TopicV2DataSetRelation.h>

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
 * <p>The definition of a topic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicV2Details">AWS
 * API Reference</a></p>
 */
class TopicV2Details {
 public:
  AWS_QUICKSIGHT_API TopicV2Details() = default;
  AWS_QUICKSIGHT_API TopicV2Details(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TopicV2Details& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the topic.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TopicV2Details& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the topic.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TopicV2Details& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data sets that the topic is associated with.</p>
   */
  inline const Aws::Vector<TopicV2DataSetReference>& GetDataSets() const { return m_dataSets; }
  inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
  template <typename DataSetsT = Aws::Vector<TopicV2DataSetReference>>
  void SetDataSets(DataSetsT&& value) {
    m_dataSetsHasBeenSet = true;
    m_dataSets = std::forward<DataSetsT>(value);
  }
  template <typename DataSetsT = Aws::Vector<TopicV2DataSetReference>>
  TopicV2Details& WithDataSets(DataSetsT&& value) {
    SetDataSets(std::forward<DataSetsT>(value));
    return *this;
  }
  template <typename DataSetsT = TopicV2DataSetReference>
  TopicV2Details& AddDataSets(DataSetsT&& value) {
    m_dataSetsHasBeenSet = true;
    m_dataSets.emplace_back(std::forward<DataSetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The relations between the data sets that the topic is associated with.</p>
   */
  inline const Aws::Vector<TopicV2DataSetRelation>& GetDataSetRelations() const { return m_dataSetRelations; }
  inline bool DataSetRelationsHasBeenSet() const { return m_dataSetRelationsHasBeenSet; }
  template <typename DataSetRelationsT = Aws::Vector<TopicV2DataSetRelation>>
  void SetDataSetRelations(DataSetRelationsT&& value) {
    m_dataSetRelationsHasBeenSet = true;
    m_dataSetRelations = std::forward<DataSetRelationsT>(value);
  }
  template <typename DataSetRelationsT = Aws::Vector<TopicV2DataSetRelation>>
  TopicV2Details& WithDataSetRelations(DataSetRelationsT&& value) {
    SetDataSetRelations(std::forward<DataSetRelationsT>(value));
    return *this;
  }
  template <typename DataSetRelationsT = TopicV2DataSetRelation>
  TopicV2Details& AddDataSetRelations(DataSetRelationsT&& value) {
    m_dataSetRelationsHasBeenSet = true;
    m_dataSetRelations.emplace_back(std::forward<DataSetRelationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<TopicV2DataSetReference> m_dataSets;

  Aws::Vector<TopicV2DataSetRelation> m_dataSetRelations;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dataSetsHasBeenSet = false;
  bool m_dataSetRelationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
