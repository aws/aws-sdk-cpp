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
    AWS_WELLARCHITECTED_API ProfileChoice();
    AWS_WELLARCHITECTED_API ProfileChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetChoiceId() const{ return m_choiceId; }

    
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }

    
    inline void SetChoiceId(const Aws::String& value) { m_choiceIdHasBeenSet = true; m_choiceId = value; }

    
    inline void SetChoiceId(Aws::String&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::move(value); }

    
    inline void SetChoiceId(const char* value) { m_choiceIdHasBeenSet = true; m_choiceId.assign(value); }

    
    inline ProfileChoice& WithChoiceId(const Aws::String& value) { SetChoiceId(value); return *this;}

    
    inline ProfileChoice& WithChoiceId(Aws::String&& value) { SetChoiceId(std::move(value)); return *this;}

    
    inline ProfileChoice& WithChoiceId(const char* value) { SetChoiceId(value); return *this;}


    
    inline const Aws::String& GetChoiceTitle() const{ return m_choiceTitle; }

    
    inline bool ChoiceTitleHasBeenSet() const { return m_choiceTitleHasBeenSet; }

    
    inline void SetChoiceTitle(const Aws::String& value) { m_choiceTitleHasBeenSet = true; m_choiceTitle = value; }

    
    inline void SetChoiceTitle(Aws::String&& value) { m_choiceTitleHasBeenSet = true; m_choiceTitle = std::move(value); }

    
    inline void SetChoiceTitle(const char* value) { m_choiceTitleHasBeenSet = true; m_choiceTitle.assign(value); }

    
    inline ProfileChoice& WithChoiceTitle(const Aws::String& value) { SetChoiceTitle(value); return *this;}

    
    inline ProfileChoice& WithChoiceTitle(Aws::String&& value) { SetChoiceTitle(std::move(value)); return *this;}

    
    inline ProfileChoice& WithChoiceTitle(const char* value) { SetChoiceTitle(value); return *this;}


    
    inline const Aws::String& GetChoiceDescription() const{ return m_choiceDescription; }

    
    inline bool ChoiceDescriptionHasBeenSet() const { return m_choiceDescriptionHasBeenSet; }

    
    inline void SetChoiceDescription(const Aws::String& value) { m_choiceDescriptionHasBeenSet = true; m_choiceDescription = value; }

    
    inline void SetChoiceDescription(Aws::String&& value) { m_choiceDescriptionHasBeenSet = true; m_choiceDescription = std::move(value); }

    
    inline void SetChoiceDescription(const char* value) { m_choiceDescriptionHasBeenSet = true; m_choiceDescription.assign(value); }

    
    inline ProfileChoice& WithChoiceDescription(const Aws::String& value) { SetChoiceDescription(value); return *this;}

    
    inline ProfileChoice& WithChoiceDescription(Aws::String&& value) { SetChoiceDescription(std::move(value)); return *this;}

    
    inline ProfileChoice& WithChoiceDescription(const char* value) { SetChoiceDescription(value); return *this;}

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
