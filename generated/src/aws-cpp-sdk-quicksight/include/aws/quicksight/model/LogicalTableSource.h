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
    AWS_QUICKSIGHT_API LogicalTableSource();
    AWS_QUICKSIGHT_API LogicalTableSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LogicalTableSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the result of a join of two logical tables.</p>
     */
    inline const JoinInstruction& GetJoinInstruction() const{ return m_joinInstruction; }

    /**
     * <p>Specifies the result of a join of two logical tables.</p>
     */
    inline bool JoinInstructionHasBeenSet() const { return m_joinInstructionHasBeenSet; }

    /**
     * <p>Specifies the result of a join of two logical tables.</p>
     */
    inline void SetJoinInstruction(const JoinInstruction& value) { m_joinInstructionHasBeenSet = true; m_joinInstruction = value; }

    /**
     * <p>Specifies the result of a join of two logical tables.</p>
     */
    inline void SetJoinInstruction(JoinInstruction&& value) { m_joinInstructionHasBeenSet = true; m_joinInstruction = std::move(value); }

    /**
     * <p>Specifies the result of a join of two logical tables.</p>
     */
    inline LogicalTableSource& WithJoinInstruction(const JoinInstruction& value) { SetJoinInstruction(value); return *this;}

    /**
     * <p>Specifies the result of a join of two logical tables.</p>
     */
    inline LogicalTableSource& WithJoinInstruction(JoinInstruction&& value) { SetJoinInstruction(std::move(value)); return *this;}


    /**
     * <p>Physical table ID.</p>
     */
    inline const Aws::String& GetPhysicalTableId() const{ return m_physicalTableId; }

    /**
     * <p>Physical table ID.</p>
     */
    inline bool PhysicalTableIdHasBeenSet() const { return m_physicalTableIdHasBeenSet; }

    /**
     * <p>Physical table ID.</p>
     */
    inline void SetPhysicalTableId(const Aws::String& value) { m_physicalTableIdHasBeenSet = true; m_physicalTableId = value; }

    /**
     * <p>Physical table ID.</p>
     */
    inline void SetPhysicalTableId(Aws::String&& value) { m_physicalTableIdHasBeenSet = true; m_physicalTableId = std::move(value); }

    /**
     * <p>Physical table ID.</p>
     */
    inline void SetPhysicalTableId(const char* value) { m_physicalTableIdHasBeenSet = true; m_physicalTableId.assign(value); }

    /**
     * <p>Physical table ID.</p>
     */
    inline LogicalTableSource& WithPhysicalTableId(const Aws::String& value) { SetPhysicalTableId(value); return *this;}

    /**
     * <p>Physical table ID.</p>
     */
    inline LogicalTableSource& WithPhysicalTableId(Aws::String&& value) { SetPhysicalTableId(std::move(value)); return *this;}

    /**
     * <p>Physical table ID.</p>
     */
    inline LogicalTableSource& WithPhysicalTableId(const char* value) { SetPhysicalTableId(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline const Aws::String& GetDataSetArn() const{ return m_dataSetArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline void SetDataSetArn(const Aws::String& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline void SetDataSetArn(Aws::String&& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline void SetDataSetArn(const char* value) { m_dataSetArnHasBeenSet = true; m_dataSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline LogicalTableSource& WithDataSetArn(const Aws::String& value) { SetDataSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline LogicalTableSource& WithDataSetArn(Aws::String&& value) { SetDataSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the parent dataset.</p>
     */
    inline LogicalTableSource& WithDataSetArn(const char* value) { SetDataSetArn(value); return *this;}

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
