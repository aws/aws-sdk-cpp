/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
   * <p>A best practice, or question choice, that has been identified as a risk in
   * this question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/BestPractice">AWS
   * API Reference</a></p>
   */
  class BestPractice
  {
  public:
    AWS_WELLARCHITECTED_API BestPractice() = default;
    AWS_WELLARCHITECTED_API BestPractice(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API BestPractice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetChoiceId() const { return m_choiceId; }
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }
    template<typename ChoiceIdT = Aws::String>
    void SetChoiceId(ChoiceIdT&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::forward<ChoiceIdT>(value); }
    template<typename ChoiceIdT = Aws::String>
    BestPractice& WithChoiceId(ChoiceIdT&& value) { SetChoiceId(std::forward<ChoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetChoiceTitle() const { return m_choiceTitle; }
    inline bool ChoiceTitleHasBeenSet() const { return m_choiceTitleHasBeenSet; }
    template<typename ChoiceTitleT = Aws::String>
    void SetChoiceTitle(ChoiceTitleT&& value) { m_choiceTitleHasBeenSet = true; m_choiceTitle = std::forward<ChoiceTitleT>(value); }
    template<typename ChoiceTitleT = Aws::String>
    BestPractice& WithChoiceTitle(ChoiceTitleT&& value) { SetChoiceTitle(std::forward<ChoiceTitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    Aws::String m_choiceTitle;
    bool m_choiceTitleHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
