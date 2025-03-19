/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ChoiceStatus.h>
#include <aws/wellarchitected/model/ChoiceReason.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A list of choices to be updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ChoiceUpdate">AWS
   * API Reference</a></p>
   */
  class ChoiceUpdate
  {
  public:
    AWS_WELLARCHITECTED_API ChoiceUpdate() = default;
    AWS_WELLARCHITECTED_API ChoiceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ChoiceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of a choice.</p>
     */
    inline ChoiceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChoiceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChoiceUpdate& WithStatus(ChoiceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline ChoiceReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ChoiceReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ChoiceUpdate& WithReason(ChoiceReason value) { SetReason(value); return *this;}
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
    ChoiceUpdate& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}
  private:

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
