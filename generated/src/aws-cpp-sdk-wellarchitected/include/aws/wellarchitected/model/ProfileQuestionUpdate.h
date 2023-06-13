/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An update to a profile question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ProfileQuestionUpdate">AWS
   * API Reference</a></p>
   */
  class ProfileQuestionUpdate
  {
  public:
    AWS_WELLARCHITECTED_API ProfileQuestionUpdate();
    AWS_WELLARCHITECTED_API ProfileQuestionUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileQuestionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline ProfileQuestionUpdate& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline ProfileQuestionUpdate& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline ProfileQuestionUpdate& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    /**
     * <p>The selected choices.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedChoiceIds() const{ return m_selectedChoiceIds; }

    /**
     * <p>The selected choices.</p>
     */
    inline bool SelectedChoiceIdsHasBeenSet() const { return m_selectedChoiceIdsHasBeenSet; }

    /**
     * <p>The selected choices.</p>
     */
    inline void SetSelectedChoiceIds(const Aws::Vector<Aws::String>& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds = value; }

    /**
     * <p>The selected choices.</p>
     */
    inline void SetSelectedChoiceIds(Aws::Vector<Aws::String>&& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds = std::move(value); }

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestionUpdate& WithSelectedChoiceIds(const Aws::Vector<Aws::String>& value) { SetSelectedChoiceIds(value); return *this;}

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestionUpdate& WithSelectedChoiceIds(Aws::Vector<Aws::String>&& value) { SetSelectedChoiceIds(std::move(value)); return *this;}

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestionUpdate& AddSelectedChoiceIds(const Aws::String& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds.push_back(value); return *this; }

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestionUpdate& AddSelectedChoiceIds(Aws::String&& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestionUpdate& AddSelectedChoiceIds(const char* value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds.push_back(value); return *this; }

  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedChoiceIds;
    bool m_selectedChoiceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
