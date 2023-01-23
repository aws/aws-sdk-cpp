/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The optional configuration of subtotals cells.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableFieldSubtotalOptions">AWS
   * API Reference</a></p>
   */
  class PivotTableFieldSubtotalOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTableFieldSubtotalOptions();
    AWS_QUICKSIGHT_API PivotTableFieldSubtotalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableFieldSubtotalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field ID of the subtotal options.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The field ID of the subtotal options.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The field ID of the subtotal options.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The field ID of the subtotal options.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The field ID of the subtotal options.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The field ID of the subtotal options.</p>
     */
    inline PivotTableFieldSubtotalOptions& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The field ID of the subtotal options.</p>
     */
    inline PivotTableFieldSubtotalOptions& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The field ID of the subtotal options.</p>
     */
    inline PivotTableFieldSubtotalOptions& WithFieldId(const char* value) { SetFieldId(value); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
