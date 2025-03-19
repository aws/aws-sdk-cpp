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
    AWS_QUICKSIGHT_API TopicTemplate() = default;
    AWS_QUICKSIGHT_API TopicTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template type for the <code>TopicTemplate</code>.</p>
     */
    inline const Aws::String& GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    template<typename TemplateTypeT = Aws::String>
    void SetTemplateType(TemplateTypeT&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::forward<TemplateTypeT>(value); }
    template<typename TemplateTypeT = Aws::String>
    TopicTemplate& WithTemplateType(TemplateTypeT&& value) { SetTemplateType(std::forward<TemplateTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slots for the <code>TopicTemplate</code>.</p>
     */
    inline const Aws::Vector<Slot>& GetSlots() const { return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    template<typename SlotsT = Aws::Vector<Slot>>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::Vector<Slot>>
    TopicTemplate& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsT = Slot>
    TopicTemplate& AddSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots.emplace_back(std::forward<SlotsT>(value)); return *this; }
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
