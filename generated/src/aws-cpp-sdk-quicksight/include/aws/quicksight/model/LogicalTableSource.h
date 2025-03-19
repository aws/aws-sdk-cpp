/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/JoinInstruction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about the source of a logical table. This is a variant type
   * structure. For this structure to be valid, only one of the attributes can be
   * non-null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LogicalTableSource">AWS
   * API Reference</a></p>
   */
  class LogicalTableSource
  {
  public:
    AWS_QUICKSIGHT_API LogicalTableSource() = default;
    AWS_QUICKSIGHT_API LogicalTableSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LogicalTableSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the result of a join of two logical tables.</p>
     */
    inline const JoinInstruction& GetJoinInstruction() const { return m_joinInstruction; }
    inline bool JoinInstructionHasBeenSet() const { return m_joinInstructionHasBeenSet; }
    template<typename JoinInstructionT = JoinInstruction>
    void SetJoinInstruction(JoinInstructionT&& value) { m_joinInstructionHasBeenSet = true; m_joinInstruction = std::forward<JoinInstructionT>(value); }
    template<typename JoinInstructionT = JoinInstruction>
    LogicalTableSource& WithJoinInstruction(JoinInstructionT&& value) { SetJoinInstruction(std::forward<JoinInstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Physical table ID.</p>
     */
    inline const Aws::String& GetPhysicalTableId() const { return m_physicalTableId; }
    inline bool PhysicalTableIdHasBeenSet() const { return m_physicalTableIdHasBeenSet; }
    template<typename PhysicalTableIdT = Aws::String>
    void SetPhysicalTableId(PhysicalTableIdT&& value) { m_physicalTableIdHasBeenSet = true; m_physicalTableId = std::forward<PhysicalTableIdT>(value); }
    template<typename PhysicalTableIdT = Aws::String>
    LogicalTableSource& WithPhysicalTableId(PhysicalTableIdT&& value) { SetPhysicalTableId(std::forward<PhysicalTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline const Aws::String& GetDataSetArn() const { return m_dataSetArn; }
    inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }
    template<typename DataSetArnT = Aws::String>
    void SetDataSetArn(DataSetArnT&& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = std::forward<DataSetArnT>(value); }
    template<typename DataSetArnT = Aws::String>
    LogicalTableSource& WithDataSetArn(DataSetArnT&& value) { SetDataSetArn(std::forward<DataSetArnT>(value)); return *this;}
    ///@}
  private:

    JoinInstruction m_joinInstruction;
    bool m_joinInstructionHasBeenSet = false;

    Aws::String m_physicalTableId;
    bool m_physicalTableIdHasBeenSet = false;

    Aws::String m_dataSetArn;
    bool m_dataSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
