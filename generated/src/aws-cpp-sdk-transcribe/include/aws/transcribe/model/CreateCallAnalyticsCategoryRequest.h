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
  class CreateCallAnalyticsCategoryRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCallAnalyticsCategory"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline const Aws::String& GetCategoryName() const{ return m_categoryName; }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline void SetCategoryName(const Aws::String& value) { m_categoryNameHasBeenSet = true; m_categoryName = value; }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline void SetCategoryName(Aws::String&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline void SetCategoryName(const char* value) { m_categoryNameHasBeenSet = true; m_categoryName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithCategoryName(const Aws::String& value) { SetCategoryName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithCategoryName(Aws::String&& value) { SetCategoryName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your Call Analytics category. It's helpful
     * to use a detailed naming system that will make sense to you in the future. For
     * example, it's better to use <code>sentiment-positive-last30seconds</code> for a
     * category over a generic name like <code>test-category</code>.</p> <p>Category
     * names are case sensitive.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithCategoryName(const char* value) { SetCategoryName(value); return *this;}


    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>Rules define a Call Analytics category. When creating a new category, you
     * must create between 1 and 20 rules for that category. For each rule, you specify
     * a filter you want applied to the attributes of a call. For example, you can
     * choose a sentiment filter that detects if a customer's sentiment was positive
     * during the last 30 seconds of the call.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>Choose whether you want to create a streaming or a batch category for your
     * Call Analytics transcription.</p> <p>Specifying <code>POST_CALL</code> assigns
     * your category to batch transcriptions; categories with this input type cannot be
     * applied to streaming (real-time) transcriptions.</p> <p>Specifying
     * <code>REAL_TIME</code> assigns your category to streaming transcriptions;
     * categories with this input type cannot be applied to batch (post-call)
     * transcriptions.</p> <p>If you do not include <code>InputType</code>, your
     * category is created as a batch category by default.</p>
     */
    inline const InputType& GetInputType() const{ return m_inputType; }

    /**
     * <p>Choose whether you want to create a streaming or a batch category for your
     * Call Analytics transcription.</p> <p>Specifying <code>POST_CALL</code> assigns
     * your category to batch transcriptions; categories with this input type cannot be
     * applied to streaming (real-time) transcriptions.</p> <p>Specifying
     * <code>REAL_TIME</code> assigns your category to streaming transcriptions;
     * categories with this input type cannot be applied to batch (post-call)
     * transcriptions.</p> <p>If you do not include <code>InputType</code>, your
     * category is created as a batch category by default.</p>
     */
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }

    /**
     * <p>Choose whether you want to create a streaming or a batch category for your
     * Call Analytics transcription.</p> <p>Specifying <code>POST_CALL</code> assigns
     * your category to batch transcriptions; categories with this input type cannot be
     * applied to streaming (real-time) transcriptions.</p> <p>Specifying
     * <code>REAL_TIME</code> assigns your category to streaming transcriptions;
     * categories with this input type cannot be applied to batch (post-call)
     * transcriptions.</p> <p>If you do not include <code>InputType</code>, your
     * category is created as a batch category by default.</p>
     */
    inline void SetInputType(const InputType& value) { m_inputTypeHasBeenSet = true; m_inputType = value; }

    /**
     * <p>Choose whether you want to create a streaming or a batch category for your
     * Call Analytics transcription.</p> <p>Specifying <code>POST_CALL</code> assigns
     * your category to batch transcriptions; categories with this input type cannot be
     * applied to streaming (real-time) transcriptions.</p> <p>Specifying
     * <code>REAL_TIME</code> assigns your category to streaming transcriptions;
     * categories with this input type cannot be applied to batch (post-call)
     * transcriptions.</p> <p>If you do not include <code>InputType</code>, your
     * category is created as a batch category by default.</p>
     */
    inline void SetInputType(InputType&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::move(value); }

    /**
     * <p>Choose whether you want to create a streaming or a batch category for your
     * Call Analytics transcription.</p> <p>Specifying <code>POST_CALL</code> assigns
     * your category to batch transcriptions; categories with this input type cannot be
     * applied to streaming (real-time) transcriptions.</p> <p>Specifying
     * <code>REAL_TIME</code> assigns your category to streaming transcriptions;
     * categories with this input type cannot be applied to batch (post-call)
     * transcriptions.</p> <p>If you do not include <code>InputType</code>, your
     * category is created as a batch category by default.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithInputType(const InputType& value) { SetInputType(value); return *this;}

    /**
     * <p>Choose whether you want to create a streaming or a batch category for your
     * Call Analytics transcription.</p> <p>Specifying <code>POST_CALL</code> assigns
     * your category to batch transcriptions; categories with this input type cannot be
     * applied to streaming (real-time) transcriptions.</p> <p>Specifying
     * <code>REAL_TIME</code> assigns your category to streaming transcriptions;
     * categories with this input type cannot be applied to batch (post-call)
     * transcriptions.</p> <p>If you do not include <code>InputType</code>, your
     * category is created as a batch category by default.</p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithInputType(InputType&& value) { SetInputType(std::move(value)); return *this;}

  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    InputType m_inputType;
    bool m_inputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
