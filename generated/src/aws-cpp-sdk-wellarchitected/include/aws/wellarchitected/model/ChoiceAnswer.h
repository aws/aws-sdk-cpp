/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ChoiceStatus.h>
#include <aws/wellarchitected/model/ChoiceReason.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A choice that has been answered on a question in your workload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ChoiceAnswer">AWS
   * API Reference</a></p>
   */
  class ChoiceAnswer
  {
  public:
    AWS_WELLARCHITECTED_API ChoiceAnswer() = default;
    AWS_WELLARCHITECTED_API ChoiceAnswer(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ChoiceAnswer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetChoiceId() const { return m_choiceId; }
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }
    template<typename ChoiceIdT = Aws::String>
    void SetChoiceId(ChoiceIdT&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::forward<ChoiceIdT>(value); }
    template<typename ChoiceIdT = Aws::String>
    ChoiceAnswer& WithChoiceId(ChoiceIdT&& value) { SetChoiceId(std::forward<ChoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a choice.</p>
     */
    inline ChoiceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChoiceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChoiceAnswer& WithStatus(ChoiceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline ChoiceReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ChoiceReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ChoiceAnswer& WithReason(ChoiceReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notes associated with a choice.</p>
     */
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    ChoiceAnswer& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    ChoiceStatus m_status{ChoiceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ChoiceReason m_reason{ChoiceReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
