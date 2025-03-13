/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/DifferenceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/QuestionDifference.h>
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
   * <p>A pillar difference return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PillarDifference">AWS
   * API Reference</a></p>
   */
  class PillarDifference
  {
  public:
    AWS_WELLARCHITECTED_API PillarDifference() = default;
    AWS_WELLARCHITECTED_API PillarDifference(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API PillarDifference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    PillarDifference& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPillarName() const { return m_pillarName; }
    inline bool PillarNameHasBeenSet() const { return m_pillarNameHasBeenSet; }
    template<typename PillarNameT = Aws::String>
    void SetPillarName(PillarNameT&& value) { m_pillarNameHasBeenSet = true; m_pillarName = std::forward<PillarNameT>(value); }
    template<typename PillarNameT = Aws::String>
    PillarDifference& WithPillarName(PillarNameT&& value) { SetPillarName(std::forward<PillarNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of change to the pillar.</p>
     */
    inline DifferenceStatus GetDifferenceStatus() const { return m_differenceStatus; }
    inline bool DifferenceStatusHasBeenSet() const { return m_differenceStatusHasBeenSet; }
    inline void SetDifferenceStatus(DifferenceStatus value) { m_differenceStatusHasBeenSet = true; m_differenceStatus = value; }
    inline PillarDifference& WithDifferenceStatus(DifferenceStatus value) { SetDifferenceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of question differences.</p>
     */
    inline const Aws::Vector<QuestionDifference>& GetQuestionDifferences() const { return m_questionDifferences; }
    inline bool QuestionDifferencesHasBeenSet() const { return m_questionDifferencesHasBeenSet; }
    template<typename QuestionDifferencesT = Aws::Vector<QuestionDifference>>
    void SetQuestionDifferences(QuestionDifferencesT&& value) { m_questionDifferencesHasBeenSet = true; m_questionDifferences = std::forward<QuestionDifferencesT>(value); }
    template<typename QuestionDifferencesT = Aws::Vector<QuestionDifference>>
    PillarDifference& WithQuestionDifferences(QuestionDifferencesT&& value) { SetQuestionDifferences(std::forward<QuestionDifferencesT>(value)); return *this;}
    template<typename QuestionDifferencesT = QuestionDifference>
    PillarDifference& AddQuestionDifferences(QuestionDifferencesT&& value) { m_questionDifferencesHasBeenSet = true; m_questionDifferences.emplace_back(std::forward<QuestionDifferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_pillarName;
    bool m_pillarNameHasBeenSet = false;

    DifferenceStatus m_differenceStatus{DifferenceStatus::NOT_SET};
    bool m_differenceStatusHasBeenSet = false;

    Aws::Vector<QuestionDifference> m_questionDifferences;
    bool m_questionDifferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
