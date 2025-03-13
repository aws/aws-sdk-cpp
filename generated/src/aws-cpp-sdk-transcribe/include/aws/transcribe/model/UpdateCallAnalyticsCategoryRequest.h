/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/InputType.h>
#include <aws/transcribe/model/Rule.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class UpdateCallAnalyticsCategoryRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API UpdateCallAnalyticsCategoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCallAnalyticsCategory"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline const Aws::String& GetCategoryName() const { return m_categoryName; }
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }
    template<typename CategoryNameT = Aws::String>
    void SetCategoryName(CategoryNameT&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::forward<CategoryNameT>(value); }
    template<typename CategoryNameT = Aws::String>
    UpdateCallAnalyticsCategoryRequest& WithCategoryName(CategoryNameT&& value) { SetCategoryName(std::forward<CategoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    UpdateCallAnalyticsCategoryRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    UpdateCallAnalyticsCategoryRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Choose whether you want to update a real-time or a post-call category. The
     * input type you specify must match the input type specified when the category was
     * created. For example, if you created a category with the <code>POST_CALL</code>
     * input type, you must use <code>POST_CALL</code> as the input type when updating
     * this category.</p>
     */
    inline InputType GetInputType() const { return m_inputType; }
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
    inline void SetInputType(InputType value) { m_inputTypeHasBeenSet = true; m_inputType = value; }
    inline UpdateCallAnalyticsCategoryRequest& WithInputType(InputType value) { SetInputType(value); return *this;}
    ///@}
  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    InputType m_inputType{InputType::NOT_SET};
    bool m_inputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
