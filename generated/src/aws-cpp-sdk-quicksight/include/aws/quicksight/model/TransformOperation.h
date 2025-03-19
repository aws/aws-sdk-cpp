/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ProjectOperation.h>
#include <aws/quicksight/model/FilterOperation.h>
#include <aws/quicksight/model/CreateColumnsOperation.h>
#include <aws/quicksight/model/RenameColumnOperation.h>
#include <aws/quicksight/model/CastColumnTypeOperation.h>
#include <aws/quicksight/model/TagColumnOperation.h>
#include <aws/quicksight/model/UntagColumnOperation.h>
#include <aws/quicksight/model/OverrideDatasetParameterOperation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A data transformation on a logical table. This is a variant type structure.
   * For this structure to be valid, only one of the attributes can be
   * non-null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TransformOperation">AWS
   * API Reference</a></p>
   */
  class TransformOperation
  {
  public:
    AWS_QUICKSIGHT_API TransformOperation() = default;
    AWS_QUICKSIGHT_API TransformOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TransformOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An operation that projects columns. Operations that come after a projection
     * can only refer to projected columns.</p>
     */
    inline const ProjectOperation& GetProjectOperation() const { return m_projectOperation; }
    inline bool ProjectOperationHasBeenSet() const { return m_projectOperationHasBeenSet; }
    template<typename ProjectOperationT = ProjectOperation>
    void SetProjectOperation(ProjectOperationT&& value) { m_projectOperationHasBeenSet = true; m_projectOperation = std::forward<ProjectOperationT>(value); }
    template<typename ProjectOperationT = ProjectOperation>
    TransformOperation& WithProjectOperation(ProjectOperationT&& value) { SetProjectOperation(std::forward<ProjectOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation that filters rows based on some condition.</p>
     */
    inline const FilterOperation& GetFilterOperation() const { return m_filterOperation; }
    inline bool FilterOperationHasBeenSet() const { return m_filterOperationHasBeenSet; }
    template<typename FilterOperationT = FilterOperation>
    void SetFilterOperation(FilterOperationT&& value) { m_filterOperationHasBeenSet = true; m_filterOperation = std::forward<FilterOperationT>(value); }
    template<typename FilterOperationT = FilterOperation>
    TransformOperation& WithFilterOperation(FilterOperationT&& value) { SetFilterOperation(std::forward<FilterOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation that creates calculated columns. Columns created in one such
     * operation form a lexical closure.</p>
     */
    inline const CreateColumnsOperation& GetCreateColumnsOperation() const { return m_createColumnsOperation; }
    inline bool CreateColumnsOperationHasBeenSet() const { return m_createColumnsOperationHasBeenSet; }
    template<typename CreateColumnsOperationT = CreateColumnsOperation>
    void SetCreateColumnsOperation(CreateColumnsOperationT&& value) { m_createColumnsOperationHasBeenSet = true; m_createColumnsOperation = std::forward<CreateColumnsOperationT>(value); }
    template<typename CreateColumnsOperationT = CreateColumnsOperation>
    TransformOperation& WithCreateColumnsOperation(CreateColumnsOperationT&& value) { SetCreateColumnsOperation(std::forward<CreateColumnsOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation that renames a column.</p>
     */
    inline const RenameColumnOperation& GetRenameColumnOperation() const { return m_renameColumnOperation; }
    inline bool RenameColumnOperationHasBeenSet() const { return m_renameColumnOperationHasBeenSet; }
    template<typename RenameColumnOperationT = RenameColumnOperation>
    void SetRenameColumnOperation(RenameColumnOperationT&& value) { m_renameColumnOperationHasBeenSet = true; m_renameColumnOperation = std::forward<RenameColumnOperationT>(value); }
    template<typename RenameColumnOperationT = RenameColumnOperation>
    TransformOperation& WithRenameColumnOperation(RenameColumnOperationT&& value) { SetRenameColumnOperation(std::forward<RenameColumnOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A transform operation that casts a column to a different type.</p>
     */
    inline const CastColumnTypeOperation& GetCastColumnTypeOperation() const { return m_castColumnTypeOperation; }
    inline bool CastColumnTypeOperationHasBeenSet() const { return m_castColumnTypeOperationHasBeenSet; }
    template<typename CastColumnTypeOperationT = CastColumnTypeOperation>
    void SetCastColumnTypeOperation(CastColumnTypeOperationT&& value) { m_castColumnTypeOperationHasBeenSet = true; m_castColumnTypeOperation = std::forward<CastColumnTypeOperationT>(value); }
    template<typename CastColumnTypeOperationT = CastColumnTypeOperation>
    TransformOperation& WithCastColumnTypeOperation(CastColumnTypeOperationT&& value) { SetCastColumnTypeOperation(std::forward<CastColumnTypeOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operation that tags a column with additional information.</p>
     */
    inline const TagColumnOperation& GetTagColumnOperation() const { return m_tagColumnOperation; }
    inline bool TagColumnOperationHasBeenSet() const { return m_tagColumnOperationHasBeenSet; }
    template<typename TagColumnOperationT = TagColumnOperation>
    void SetTagColumnOperation(TagColumnOperationT&& value) { m_tagColumnOperationHasBeenSet = true; m_tagColumnOperation = std::forward<TagColumnOperationT>(value); }
    template<typename TagColumnOperationT = TagColumnOperation>
    TransformOperation& WithTagColumnOperation(TagColumnOperationT&& value) { SetTagColumnOperation(std::forward<TagColumnOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UntagColumnOperation& GetUntagColumnOperation() const { return m_untagColumnOperation; }
    inline bool UntagColumnOperationHasBeenSet() const { return m_untagColumnOperationHasBeenSet; }
    template<typename UntagColumnOperationT = UntagColumnOperation>
    void SetUntagColumnOperation(UntagColumnOperationT&& value) { m_untagColumnOperationHasBeenSet = true; m_untagColumnOperation = std::forward<UntagColumnOperationT>(value); }
    template<typename UntagColumnOperationT = UntagColumnOperation>
    TransformOperation& WithUntagColumnOperation(UntagColumnOperationT&& value) { SetUntagColumnOperation(std::forward<UntagColumnOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OverrideDatasetParameterOperation& GetOverrideDatasetParameterOperation() const { return m_overrideDatasetParameterOperation; }
    inline bool OverrideDatasetParameterOperationHasBeenSet() const { return m_overrideDatasetParameterOperationHasBeenSet; }
    template<typename OverrideDatasetParameterOperationT = OverrideDatasetParameterOperation>
    void SetOverrideDatasetParameterOperation(OverrideDatasetParameterOperationT&& value) { m_overrideDatasetParameterOperationHasBeenSet = true; m_overrideDatasetParameterOperation = std::forward<OverrideDatasetParameterOperationT>(value); }
    template<typename OverrideDatasetParameterOperationT = OverrideDatasetParameterOperation>
    TransformOperation& WithOverrideDatasetParameterOperation(OverrideDatasetParameterOperationT&& value) { SetOverrideDatasetParameterOperation(std::forward<OverrideDatasetParameterOperationT>(value)); return *this;}
    ///@}
  private:

    ProjectOperation m_projectOperation;
    bool m_projectOperationHasBeenSet = false;

    FilterOperation m_filterOperation;
    bool m_filterOperationHasBeenSet = false;

    CreateColumnsOperation m_createColumnsOperation;
    bool m_createColumnsOperationHasBeenSet = false;

    RenameColumnOperation m_renameColumnOperation;
    bool m_renameColumnOperationHasBeenSet = false;

    CastColumnTypeOperation m_castColumnTypeOperation;
    bool m_castColumnTypeOperationHasBeenSet = false;

    TagColumnOperation m_tagColumnOperation;
    bool m_tagColumnOperationHasBeenSet = false;

    UntagColumnOperation m_untagColumnOperation;
    bool m_untagColumnOperationHasBeenSet = false;

    OverrideDatasetParameterOperation m_overrideDatasetParameterOperation;
    bool m_overrideDatasetParameterOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
