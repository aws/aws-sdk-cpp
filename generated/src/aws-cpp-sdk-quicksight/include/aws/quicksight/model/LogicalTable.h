/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/LogicalTableSource.h>
#include <aws/quicksight/model/TransformOperation.h>
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
   * <p>A <i>logical table</i> is a unit that joins and that data transformations
   * operate on. A logical table has a source, which can be either a physical table
   * or result of a join. When a logical table points to a physical table, the
   * logical table acts as a mutable copy of that physical table through transform
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LogicalTable">AWS
   * API Reference</a></p>
   */
  class LogicalTable
  {
  public:
    AWS_QUICKSIGHT_API LogicalTable() = default;
    AWS_QUICKSIGHT_API LogicalTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LogicalTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A display name for the logical table.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    LogicalTable& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Transform operations that act on this logical table. For this structure to be
     * valid, only one of the attributes can be non-null. </p>
     */
    inline const Aws::Vector<TransformOperation>& GetDataTransforms() const { return m_dataTransforms; }
    inline bool DataTransformsHasBeenSet() const { return m_dataTransformsHasBeenSet; }
    template<typename DataTransformsT = Aws::Vector<TransformOperation>>
    void SetDataTransforms(DataTransformsT&& value) { m_dataTransformsHasBeenSet = true; m_dataTransforms = std::forward<DataTransformsT>(value); }
    template<typename DataTransformsT = Aws::Vector<TransformOperation>>
    LogicalTable& WithDataTransforms(DataTransformsT&& value) { SetDataTransforms(std::forward<DataTransformsT>(value)); return *this;}
    template<typename DataTransformsT = TransformOperation>
    LogicalTable& AddDataTransforms(DataTransformsT&& value) { m_dataTransformsHasBeenSet = true; m_dataTransforms.emplace_back(std::forward<DataTransformsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source of this logical table.</p>
     */
    inline const LogicalTableSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = LogicalTableSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = LogicalTableSource>
    LogicalTable& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Vector<TransformOperation> m_dataTransforms;
    bool m_dataTransformsHasBeenSet = false;

    LogicalTableSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
