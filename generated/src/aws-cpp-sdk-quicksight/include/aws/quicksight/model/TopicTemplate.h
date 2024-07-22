/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Slot.h>
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
   * <p>The definition for a <code>TopicTemplate</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicTemplate">AWS
   * API Reference</a></p>
   */
  class TopicTemplate
  {
  public:
    AWS_QUICKSIGHT_API TopicTemplate();
    AWS_QUICKSIGHT_API TopicTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template type for the <code>TopicTemplate</code>.</p>
     */
    inline const Aws::String& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const Aws::String& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(Aws::String&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline void SetTemplateType(const char* value) { m_templateTypeHasBeenSet = true; m_templateType.assign(value); }
    inline TopicTemplate& WithTemplateType(const Aws::String& value) { SetTemplateType(value); return *this;}
    inline TopicTemplate& WithTemplateType(Aws::String&& value) { SetTemplateType(std::move(value)); return *this;}
    inline TopicTemplate& WithTemplateType(const char* value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slots for the <code>TopicTemplate</code>.</p>
     */
    inline const Aws::Vector<Slot>& GetSlots() const{ return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    inline void SetSlots(const Aws::Vector<Slot>& value) { m_slotsHasBeenSet = true; m_slots = value; }
    inline void SetSlots(Aws::Vector<Slot>&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }
    inline TopicTemplate& WithSlots(const Aws::Vector<Slot>& value) { SetSlots(value); return *this;}
    inline TopicTemplate& WithSlots(Aws::Vector<Slot>&& value) { SetSlots(std::move(value)); return *this;}
    inline TopicTemplate& AddSlots(const Slot& value) { m_slotsHasBeenSet = true; m_slots.push_back(value); return *this; }
    inline TopicTemplate& AddSlots(Slot&& value) { m_slotsHasBeenSet = true; m_slots.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_templateType;
    bool m_templateTypeHasBeenSet = false;

    Aws::Vector<Slot> m_slots;
    bool m_slotsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
