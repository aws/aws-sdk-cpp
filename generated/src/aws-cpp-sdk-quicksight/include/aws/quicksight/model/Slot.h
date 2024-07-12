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
   * <p>The definition for the slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Slot">AWS API
   * Reference</a></p>
   */
  class Slot
  {
  public:
    AWS_QUICKSIGHT_API Slot();
    AWS_QUICKSIGHT_API Slot(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Slot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The slot ID of the slot.</p>
     */
    inline const Aws::String& GetSlotId() const{ return m_slotId; }
    inline bool SlotIdHasBeenSet() const { return m_slotIdHasBeenSet; }
    inline void SetSlotId(const Aws::String& value) { m_slotIdHasBeenSet = true; m_slotId = value; }
    inline void SetSlotId(Aws::String&& value) { m_slotIdHasBeenSet = true; m_slotId = std::move(value); }
    inline void SetSlotId(const char* value) { m_slotIdHasBeenSet = true; m_slotId.assign(value); }
    inline Slot& WithSlotId(const Aws::String& value) { SetSlotId(value); return *this;}
    inline Slot& WithSlotId(Aws::String&& value) { SetSlotId(std::move(value)); return *this;}
    inline Slot& WithSlotId(const char* value) { SetSlotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual ID for the slot.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }
    inline Slot& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline Slot& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline Slot& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}
  private:

    Aws::String m_slotId;
    bool m_slotIdHasBeenSet = false;

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
