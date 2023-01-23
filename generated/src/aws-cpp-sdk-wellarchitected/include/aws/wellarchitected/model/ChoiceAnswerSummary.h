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
   * <p>A choice summary that has been answered on a question in your
   * workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ChoiceAnswerSummary">AWS
   * API Reference</a></p>
   */
  class ChoiceAnswerSummary
  {
  public:
    AWS_WELLARCHITECTED_API ChoiceAnswerSummary();
    AWS_WELLARCHITECTED_API ChoiceAnswerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ChoiceAnswerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetChoiceId() const{ return m_choiceId; }

    
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }

    
    inline void SetChoiceId(const Aws::String& value) { m_choiceIdHasBeenSet = true; m_choiceId = value; }

    
    inline void SetChoiceId(Aws::String&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::move(value); }

    
    inline void SetChoiceId(const char* value) { m_choiceIdHasBeenSet = true; m_choiceId.assign(value); }

    
    inline ChoiceAnswerSummary& WithChoiceId(const Aws::String& value) { SetChoiceId(value); return *this;}

    
    inline ChoiceAnswerSummary& WithChoiceId(Aws::String&& value) { SetChoiceId(std::move(value)); return *this;}

    
    inline ChoiceAnswerSummary& WithChoiceId(const char* value) { SetChoiceId(value); return *this;}


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
    inline ChoiceAnswerSummary& WithStatus(const ChoiceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a choice.</p>
     */
    inline ChoiceAnswerSummary& WithStatus(ChoiceStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ChoiceAnswerSummary& WithReason(const ChoiceReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason why a choice is non-applicable to a question in your workload.</p>
     */
    inline ChoiceAnswerSummary& WithReason(ChoiceReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    ChoiceStatus m_status;
    bool m_statusHasBeenSet = false;

    ChoiceReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
