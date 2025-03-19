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
   * <p>The profile choice.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ProfileChoice">AWS
   * API Reference</a></p>
   */
  class ProfileChoice
  {
  public:
    AWS_WELLARCHITECTED_API ProfileChoice() = default;
    AWS_WELLARCHITECTED_API ProfileChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetChoiceId() const { return m_choiceId; }
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }
    template<typename ChoiceIdT = Aws::String>
    void SetChoiceId(ChoiceIdT&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::forward<ChoiceIdT>(value); }
    template<typename ChoiceIdT = Aws::String>
    ProfileChoice& WithChoiceId(ChoiceIdT&& value) { SetChoiceId(std::forward<ChoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetChoiceTitle() const { return m_choiceTitle; }
    inline bool ChoiceTitleHasBeenSet() const { return m_choiceTitleHasBeenSet; }
    template<typename ChoiceTitleT = Aws::String>
    void SetChoiceTitle(ChoiceTitleT&& value) { m_choiceTitleHasBeenSet = true; m_choiceTitle = std::forward<ChoiceTitleT>(value); }
    template<typename ChoiceTitleT = Aws::String>
    ProfileChoice& WithChoiceTitle(ChoiceTitleT&& value) { SetChoiceTitle(std::forward<ChoiceTitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetChoiceDescription() const { return m_choiceDescription; }
    inline bool ChoiceDescriptionHasBeenSet() const { return m_choiceDescriptionHasBeenSet; }
    template<typename ChoiceDescriptionT = Aws::String>
    void SetChoiceDescription(ChoiceDescriptionT&& value) { m_choiceDescriptionHasBeenSet = true; m_choiceDescription = std::forward<ChoiceDescriptionT>(value); }
    template<typename ChoiceDescriptionT = Aws::String>
    ProfileChoice& WithChoiceDescription(ChoiceDescriptionT&& value) { SetChoiceDescription(std::forward<ChoiceDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    Aws::String m_choiceTitle;
    bool m_choiceTitleHasBeenSet = false;

    Aws::String m_choiceDescription;
    bool m_choiceDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
