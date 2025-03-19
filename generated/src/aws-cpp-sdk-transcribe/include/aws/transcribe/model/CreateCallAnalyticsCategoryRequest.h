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
#include <aws/transcribe/model/Tag.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class CreateCallAnalyticsCategoryRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCallAnalyticsCategory"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline const Aws::String& GetCategoryName() const { return m_categoryName; }
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }
    template<typename CategoryNameT = Aws::String>
    void SetCategoryName(CategoryNameT&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::forward<CategoryNameT>(value); }
    template<typename CategoryNameT = Aws::String>
    CreateCallAnalyticsCategoryRequest& WithCategoryName(CategoryNameT&& value) { SetCategoryName(std::forward<CategoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    CreateCallAnalyticsCategoryRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    CreateCallAnalyticsCategoryRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * call analytics category at the time you start this new job.</p> <p>To learn more
     * about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCallAnalyticsCategoryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCallAnalyticsCategoryRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Choose whether you want to create a real-time or a post-call category for
     * your Call Analytics transcription.</p> <p>Specifying <code>POST_CALL</code>
     * assigns your category to post-call transcriptions; categories with this input
     * type cannot be applied to streaming (real-time) transcriptions.</p>
     * <p>Specifying <code>REAL_TIME</code> assigns your category to streaming
     * transcriptions; categories with this input type cannot be applied to post-call
     * transcriptions.</p> <p>If you do not include <code>InputType</code>, your
     * category is created as a post-call category by default.</p>
     */
    inline InputType GetInputType() const { return m_inputType; }
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
    inline void SetInputType(InputType value) { m_inputTypeHasBeenSet = true; m_inputType = value; }
    inline CreateCallAnalyticsCategoryRequest& WithInputType(InputType value) { SetInputType(value); return *this;}
    ///@}
  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    InputType m_inputType{InputType::NOT_SET};
    bool m_inputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
