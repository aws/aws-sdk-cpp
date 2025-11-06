/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DestinationTable.h>
#include <aws/quicksight/model/SourceTable.h>
#include <aws/quicksight/model/TransformStep.h>

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
 * <p>Configuration for data preparation operations, defining the complete pipeline
 * from source tables through transformations to destination tables.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPrepConfiguration">AWS
 * API Reference</a></p>
 */
class DataPrepConfiguration {
 public:
  AWS_QUICKSIGHT_API DataPrepConfiguration() = default;
  AWS_QUICKSIGHT_API DataPrepConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataPrepConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of source tables that provide information about underlying sources.</p>
   */
  inline const Aws::Map<Aws::String, SourceTable>& GetSourceTableMap() const { return m_sourceTableMap; }
  inline bool SourceTableMapHasBeenSet() const { return m_sourceTableMapHasBeenSet; }
  template <typename SourceTableMapT = Aws::Map<Aws::String, SourceTable>>
  void SetSourceTableMap(SourceTableMapT&& value) {
    m_sourceTableMapHasBeenSet = true;
    m_sourceTableMap = std::forward<SourceTableMapT>(value);
  }
  template <typename SourceTableMapT = Aws::Map<Aws::String, SourceTable>>
  DataPrepConfiguration& WithSourceTableMap(SourceTableMapT&& value) {
    SetSourceTableMap(std::forward<SourceTableMapT>(value));
    return *this;
  }
  template <typename SourceTableMapKeyT = Aws::String, typename SourceTableMapValueT = SourceTable>
  DataPrepConfiguration& AddSourceTableMap(SourceTableMapKeyT&& key, SourceTableMapValueT&& value) {
    m_sourceTableMapHasBeenSet = true;
    m_sourceTableMap.emplace(std::forward<SourceTableMapKeyT>(key), std::forward<SourceTableMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of transformation steps that process the data.</p>
   */
  inline const Aws::Map<Aws::String, TransformStep>& GetTransformStepMap() const { return m_transformStepMap; }
  inline bool TransformStepMapHasBeenSet() const { return m_transformStepMapHasBeenSet; }
  template <typename TransformStepMapT = Aws::Map<Aws::String, TransformStep>>
  void SetTransformStepMap(TransformStepMapT&& value) {
    m_transformStepMapHasBeenSet = true;
    m_transformStepMap = std::forward<TransformStepMapT>(value);
  }
  template <typename TransformStepMapT = Aws::Map<Aws::String, TransformStep>>
  DataPrepConfiguration& WithTransformStepMap(TransformStepMapT&& value) {
    SetTransformStepMap(std::forward<TransformStepMapT>(value));
    return *this;
  }
  template <typename TransformStepMapKeyT = Aws::String, typename TransformStepMapValueT = TransformStep>
  DataPrepConfiguration& AddTransformStepMap(TransformStepMapKeyT&& key, TransformStepMapValueT&& value) {
    m_transformStepMapHasBeenSet = true;
    m_transformStepMap.emplace(std::forward<TransformStepMapKeyT>(key), std::forward<TransformStepMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of destination tables that receive the final prepared data.</p>
   */
  inline const Aws::Map<Aws::String, DestinationTable>& GetDestinationTableMap() const { return m_destinationTableMap; }
  inline bool DestinationTableMapHasBeenSet() const { return m_destinationTableMapHasBeenSet; }
  template <typename DestinationTableMapT = Aws::Map<Aws::String, DestinationTable>>
  void SetDestinationTableMap(DestinationTableMapT&& value) {
    m_destinationTableMapHasBeenSet = true;
    m_destinationTableMap = std::forward<DestinationTableMapT>(value);
  }
  template <typename DestinationTableMapT = Aws::Map<Aws::String, DestinationTable>>
  DataPrepConfiguration& WithDestinationTableMap(DestinationTableMapT&& value) {
    SetDestinationTableMap(std::forward<DestinationTableMapT>(value));
    return *this;
  }
  template <typename DestinationTableMapKeyT = Aws::String, typename DestinationTableMapValueT = DestinationTable>
  DataPrepConfiguration& AddDestinationTableMap(DestinationTableMapKeyT&& key, DestinationTableMapValueT&& value) {
    m_destinationTableMapHasBeenSet = true;
    m_destinationTableMap.emplace(std::forward<DestinationTableMapKeyT>(key), std::forward<DestinationTableMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, SourceTable> m_sourceTableMap;
  bool m_sourceTableMapHasBeenSet = false;

  Aws::Map<Aws::String, TransformStep> m_transformStepMap;
  bool m_transformStepMapHasBeenSet = false;

  Aws::Map<Aws::String, DestinationTable> m_destinationTableMap;
  bool m_destinationTableMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
