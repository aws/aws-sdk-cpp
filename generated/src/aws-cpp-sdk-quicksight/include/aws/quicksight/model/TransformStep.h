/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AggregateOperation.h>
#include <aws/quicksight/model/AppendOperation.h>
#include <aws/quicksight/model/CastColumnTypesOperation.h>
#include <aws/quicksight/model/CreateColumnsOperation.h>
#include <aws/quicksight/model/FiltersOperation.h>
#include <aws/quicksight/model/ImportTableOperation.h>
#include <aws/quicksight/model/JoinOperation.h>
#include <aws/quicksight/model/PivotOperation.h>
#include <aws/quicksight/model/ProjectOperation.h>
#include <aws/quicksight/model/RenameColumnsOperation.h>
#include <aws/quicksight/model/UnpivotOperation.h>

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
 * <p>A step in data preparation that performs a specific operation on the
 * data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TransformStep">AWS
 * API Reference</a></p>
 */
class TransformStep {
 public:
  AWS_QUICKSIGHT_API TransformStep() = default;
  AWS_QUICKSIGHT_API TransformStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TransformStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A transform step that brings data from a source table.</p>
   */
  inline const ImportTableOperation& GetImportTableStep() const { return m_importTableStep; }
  inline bool ImportTableStepHasBeenSet() const { return m_importTableStepHasBeenSet; }
  template <typename ImportTableStepT = ImportTableOperation>
  void SetImportTableStep(ImportTableStepT&& value) {
    m_importTableStepHasBeenSet = true;
    m_importTableStep = std::forward<ImportTableStepT>(value);
  }
  template <typename ImportTableStepT = ImportTableOperation>
  TransformStep& WithImportTableStep(ImportTableStepT&& value) {
    SetImportTableStep(std::forward<ImportTableStepT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ProjectOperation& GetProjectStep() const { return m_projectStep; }
  inline bool ProjectStepHasBeenSet() const { return m_projectStepHasBeenSet; }
  template <typename ProjectStepT = ProjectOperation>
  void SetProjectStep(ProjectStepT&& value) {
    m_projectStepHasBeenSet = true;
    m_projectStep = std::forward<ProjectStepT>(value);
  }
  template <typename ProjectStepT = ProjectOperation>
  TransformStep& WithProjectStep(ProjectStepT&& value) {
    SetProjectStep(std::forward<ProjectStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A transform step that applies filter conditions.</p>
   */
  inline const FiltersOperation& GetFiltersStep() const { return m_filtersStep; }
  inline bool FiltersStepHasBeenSet() const { return m_filtersStepHasBeenSet; }
  template <typename FiltersStepT = FiltersOperation>
  void SetFiltersStep(FiltersStepT&& value) {
    m_filtersStepHasBeenSet = true;
    m_filtersStep = std::forward<FiltersStepT>(value);
  }
  template <typename FiltersStepT = FiltersOperation>
  TransformStep& WithFiltersStep(FiltersStepT&& value) {
    SetFiltersStep(std::forward<FiltersStepT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CreateColumnsOperation& GetCreateColumnsStep() const { return m_createColumnsStep; }
  inline bool CreateColumnsStepHasBeenSet() const { return m_createColumnsStepHasBeenSet; }
  template <typename CreateColumnsStepT = CreateColumnsOperation>
  void SetCreateColumnsStep(CreateColumnsStepT&& value) {
    m_createColumnsStepHasBeenSet = true;
    m_createColumnsStep = std::forward<CreateColumnsStepT>(value);
  }
  template <typename CreateColumnsStepT = CreateColumnsOperation>
  TransformStep& WithCreateColumnsStep(CreateColumnsStepT&& value) {
    SetCreateColumnsStep(std::forward<CreateColumnsStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A transform step that changes the names of one or more columns.</p>
   */
  inline const RenameColumnsOperation& GetRenameColumnsStep() const { return m_renameColumnsStep; }
  inline bool RenameColumnsStepHasBeenSet() const { return m_renameColumnsStepHasBeenSet; }
  template <typename RenameColumnsStepT = RenameColumnsOperation>
  void SetRenameColumnsStep(RenameColumnsStepT&& value) {
    m_renameColumnsStepHasBeenSet = true;
    m_renameColumnsStep = std::forward<RenameColumnsStepT>(value);
  }
  template <typename RenameColumnsStepT = RenameColumnsOperation>
  TransformStep& WithRenameColumnsStep(RenameColumnsStepT&& value) {
    SetRenameColumnsStep(std::forward<RenameColumnsStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A transform step that changes the data types of one or more columns.</p>
   */
  inline const CastColumnTypesOperation& GetCastColumnTypesStep() const { return m_castColumnTypesStep; }
  inline bool CastColumnTypesStepHasBeenSet() const { return m_castColumnTypesStepHasBeenSet; }
  template <typename CastColumnTypesStepT = CastColumnTypesOperation>
  void SetCastColumnTypesStep(CastColumnTypesStepT&& value) {
    m_castColumnTypesStepHasBeenSet = true;
    m_castColumnTypesStep = std::forward<CastColumnTypesStepT>(value);
  }
  template <typename CastColumnTypesStepT = CastColumnTypesOperation>
  TransformStep& WithCastColumnTypesStep(CastColumnTypesStepT&& value) {
    SetCastColumnTypesStep(std::forward<CastColumnTypesStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A transform step that combines data from two sources based on specified join
   * conditions.</p>
   */
  inline const JoinOperation& GetJoinStep() const { return m_joinStep; }
  inline bool JoinStepHasBeenSet() const { return m_joinStepHasBeenSet; }
  template <typename JoinStepT = JoinOperation>
  void SetJoinStep(JoinStepT&& value) {
    m_joinStepHasBeenSet = true;
    m_joinStep = std::forward<JoinStepT>(value);
  }
  template <typename JoinStepT = JoinOperation>
  TransformStep& WithJoinStep(JoinStepT&& value) {
    SetJoinStep(std::forward<JoinStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A transform step that groups data and applies aggregation functions to
   * calculate summary values.</p>
   */
  inline const AggregateOperation& GetAggregateStep() const { return m_aggregateStep; }
  inline bool AggregateStepHasBeenSet() const { return m_aggregateStepHasBeenSet; }
  template <typename AggregateStepT = AggregateOperation>
  void SetAggregateStep(AggregateStepT&& value) {
    m_aggregateStepHasBeenSet = true;
    m_aggregateStep = std::forward<AggregateStepT>(value);
  }
  template <typename AggregateStepT = AggregateOperation>
  TransformStep& WithAggregateStep(AggregateStepT&& value) {
    SetAggregateStep(std::forward<AggregateStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A transform step that converts row values into columns to reshape the data
   * structure.</p>
   */
  inline const PivotOperation& GetPivotStep() const { return m_pivotStep; }
  inline bool PivotStepHasBeenSet() const { return m_pivotStepHasBeenSet; }
  template <typename PivotStepT = PivotOperation>
  void SetPivotStep(PivotStepT&& value) {
    m_pivotStepHasBeenSet = true;
    m_pivotStep = std::forward<PivotStepT>(value);
  }
  template <typename PivotStepT = PivotOperation>
  TransformStep& WithPivotStep(PivotStepT&& value) {
    SetPivotStep(std::forward<PivotStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A transform step that converts columns into rows to normalize the data
   * structure.</p>
   */
  inline const UnpivotOperation& GetUnpivotStep() const { return m_unpivotStep; }
  inline bool UnpivotStepHasBeenSet() const { return m_unpivotStepHasBeenSet; }
  template <typename UnpivotStepT = UnpivotOperation>
  void SetUnpivotStep(UnpivotStepT&& value) {
    m_unpivotStepHasBeenSet = true;
    m_unpivotStep = std::forward<UnpivotStepT>(value);
  }
  template <typename UnpivotStepT = UnpivotOperation>
  TransformStep& WithUnpivotStep(UnpivotStepT&& value) {
    SetUnpivotStep(std::forward<UnpivotStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A transform step that combines rows from multiple sources by stacking them
   * vertically.</p>
   */
  inline const AppendOperation& GetAppendStep() const { return m_appendStep; }
  inline bool AppendStepHasBeenSet() const { return m_appendStepHasBeenSet; }
  template <typename AppendStepT = AppendOperation>
  void SetAppendStep(AppendStepT&& value) {
    m_appendStepHasBeenSet = true;
    m_appendStep = std::forward<AppendStepT>(value);
  }
  template <typename AppendStepT = AppendOperation>
  TransformStep& WithAppendStep(AppendStepT&& value) {
    SetAppendStep(std::forward<AppendStepT>(value));
    return *this;
  }
  ///@}
 private:
  ImportTableOperation m_importTableStep;

  ProjectOperation m_projectStep;

  FiltersOperation m_filtersStep;

  CreateColumnsOperation m_createColumnsStep;

  RenameColumnsOperation m_renameColumnsStep;

  CastColumnTypesOperation m_castColumnTypesStep;

  JoinOperation m_joinStep;

  AggregateOperation m_aggregateStep;

  PivotOperation m_pivotStep;

  UnpivotOperation m_unpivotStep;

  AppendOperation m_appendStep;
  bool m_importTableStepHasBeenSet = false;
  bool m_projectStepHasBeenSet = false;
  bool m_filtersStepHasBeenSet = false;
  bool m_createColumnsStepHasBeenSet = false;
  bool m_renameColumnsStepHasBeenSet = false;
  bool m_castColumnTypesStepHasBeenSet = false;
  bool m_joinStepHasBeenSet = false;
  bool m_aggregateStepHasBeenSet = false;
  bool m_pivotStepHasBeenSet = false;
  bool m_unpivotStepHasBeenSet = false;
  bool m_appendStepHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
