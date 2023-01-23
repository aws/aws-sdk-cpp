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
    AWS_WELLARCHITECTED_API ChoiceUpdate();
    AWS_WELLARCHITECTED_API ChoiceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ChoiceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of a choice.</p>
     */
    inline const ChoiceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a choice.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a choice.</p>
     */
    inline void SetStatus(const ChoiceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a choice.</p>
     */
    inline void SetStatus(ChoiceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a choice.</p>
     */
    inline ChoiceUpdate& WithStatus(const ChoiceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a choice.</p>
     */
    inline ChoiceUpdate& WithStatus(ChoiceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline const ChoiceReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline void SetReason(const ChoiceReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline void SetReason(ChoiceReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline ChoiceUpdate& WithReason(const ChoiceReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline ChoiceUpdate& WithReason(ChoiceReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>The notes associated with a choice.</p>
     */
    inline const Aws::String& GetNotes() const{ return m_notes; }

    /**
     * <p>The notes associated with a choice.</p>
     */
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    /**
     * <p>The notes associated with a choice.</p>
     */
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p>The notes associated with a choice.</p>
     */
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    /**
     * <p>The notes associated with a choice.</p>
     */
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    /**
     * <p>The notes associated with a choice.</p>
     */
    inline ChoiceUpdate& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    /**
     * <p>The notes associated with a choice.</p>
     */
    inline ChoiceUpdate& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    /**
     * <p>The notes associated with a choice.</p>
     */
    inline ChoiceUpdate& WithNotes(const char* value) { SetNotes(value); return *this;}

  private:

    ChoiceStatus m_status;
    bool m_statusHasBeenSet = false;

    ChoiceReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
