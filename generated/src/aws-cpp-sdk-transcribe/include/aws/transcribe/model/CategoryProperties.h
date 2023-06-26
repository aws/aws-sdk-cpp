/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/InputType.h>
#include <aws/transcribe/model/Rule.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides you with the properties of the Call Analytics category you specified
   * in your request. This includes the list of rules that define the specified
   * category.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CategoryProperties">AWS
   * API Reference</a></p>
   */
  class CategoryProperties
  {
  public:
    AWS_TRANSCRIBESERVICE_API CategoryProperties();
    AWS_TRANSCRIBESERVICE_API CategoryProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API CategoryProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Call Analytics category. Category names are case sensitive
     * and must be unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetCategoryName() const{ return m_categoryName; }

    /**
     * <p>The name of the Call Analytics category. Category names are case sensitive
     * and must be unique within an Amazon Web Services account.</p>
     */
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }

    /**
     * <p>The name of the Call Analytics category. Category names are case sensitive
     * and must be unique within an Amazon Web Services account.</p>
     */
    inline void SetCategoryName(const Aws::String& value) { m_categoryNameHasBeenSet = true; m_categoryName = value; }

    /**
     * <p>The name of the Call Analytics category. Category names are case sensitive
     * and must be unique within an Amazon Web Services account.</p>
     */
    inline void SetCategoryName(Aws::String&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::move(value); }

    /**
     * <p>The name of the Call Analytics category. Category names are case sensitive
     * and must be unique within an Amazon Web Services account.</p>
     */
    inline void SetCategoryName(const char* value) { m_categoryNameHasBeenSet = true; m_categoryName.assign(value); }

    /**
     * <p>The name of the Call Analytics category. Category names are case sensitive
     * and must be unique within an Amazon Web Services account.</p>
     */
    inline CategoryProperties& WithCategoryName(const Aws::String& value) { SetCategoryName(value); return *this;}

    /**
     * <p>The name of the Call Analytics category. Category names are case sensitive
     * and must be unique within an Amazon Web Services account.</p>
     */
    inline CategoryProperties& WithCategoryName(Aws::String&& value) { SetCategoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the Call Analytics category. Category names are case sensitive
     * and must be unique within an Amazon Web Services account.</p>
     */
    inline CategoryProperties& WithCategoryName(const char* value) { SetCategoryName(value); return *this;}


    /**
     * <p>The rules used to define a Call Analytics category. Each category can have
     * between 1 and 20 rules.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>The rules used to define a Call Analytics category. Each category can have
     * between 1 and 20 rules.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The rules used to define a Call Analytics category. Each category can have
     * between 1 and 20 rules.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The rules used to define a Call Analytics category. Each category can have
     * between 1 and 20 rules.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The rules used to define a Call Analytics category. Each category can have
     * between 1 and 20 rules.</p>
     */
    inline CategoryProperties& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>The rules used to define a Call Analytics category. Each category can have
     * between 1 and 20 rules.</p>
     */
    inline CategoryProperties& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The rules used to define a Call Analytics category. Each category can have
     * between 1 and 20 rules.</p>
     */
    inline CategoryProperties& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The rules used to define a Call Analytics category. Each category can have
     * between 1 and 20 rules.</p>
     */
    inline CategoryProperties& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time the specified Call Analytics category was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time the specified Call Analytics category was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The date and time the specified Call Analytics category was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time the specified Call Analytics category was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The date and time the specified Call Analytics category was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline CategoryProperties& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time the specified Call Analytics category was created.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline CategoryProperties& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified Call Analytics category was last updated.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-05T12:45:32.691000-07:00</code> represents 12:45 PM
     * UTC-7 on May 5, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The date and time the specified Call Analytics category was last updated.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-05T12:45:32.691000-07:00</code> represents 12:45 PM
     * UTC-7 on May 5, 2022.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The date and time the specified Call Analytics category was last updated.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-05T12:45:32.691000-07:00</code> represents 12:45 PM
     * UTC-7 on May 5, 2022.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The date and time the specified Call Analytics category was last updated.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-05T12:45:32.691000-07:00</code> represents 12:45 PM
     * UTC-7 on May 5, 2022.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The date and time the specified Call Analytics category was last updated.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-05T12:45:32.691000-07:00</code> represents 12:45 PM
     * UTC-7 on May 5, 2022.</p>
     */
    inline CategoryProperties& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The date and time the specified Call Analytics category was last updated.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-05T12:45:32.691000-07:00</code> represents 12:45 PM
     * UTC-7 on May 5, 2022.</p>
     */
    inline CategoryProperties& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The input type associated with the specified category. <code>POST_CALL</code>
     * refers to a category that is applied to batch transcriptions;
     * <code>REAL_TIME</code> refers to a category that is applied to streaming
     * transcriptions.</p>
     */
    inline const InputType& GetInputType() const{ return m_inputType; }

    /**
     * <p>The input type associated with the specified category. <code>POST_CALL</code>
     * refers to a category that is applied to batch transcriptions;
     * <code>REAL_TIME</code> refers to a category that is applied to streaming
     * transcriptions.</p>
     */
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }

    /**
     * <p>The input type associated with the specified category. <code>POST_CALL</code>
     * refers to a category that is applied to batch transcriptions;
     * <code>REAL_TIME</code> refers to a category that is applied to streaming
     * transcriptions.</p>
     */
    inline void SetInputType(const InputType& value) { m_inputTypeHasBeenSet = true; m_inputType = value; }

    /**
     * <p>The input type associated with the specified category. <code>POST_CALL</code>
     * refers to a category that is applied to batch transcriptions;
     * <code>REAL_TIME</code> refers to a category that is applied to streaming
     * transcriptions.</p>
     */
    inline void SetInputType(InputType&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::move(value); }

    /**
     * <p>The input type associated with the specified category. <code>POST_CALL</code>
     * refers to a category that is applied to batch transcriptions;
     * <code>REAL_TIME</code> refers to a category that is applied to streaming
     * transcriptions.</p>
     */
    inline CategoryProperties& WithInputType(const InputType& value) { SetInputType(value); return *this;}

    /**
     * <p>The input type associated with the specified category. <code>POST_CALL</code>
     * refers to a category that is applied to batch transcriptions;
     * <code>REAL_TIME</code> refers to a category that is applied to streaming
     * transcriptions.</p>
     */
    inline CategoryProperties& WithInputType(InputType&& value) { SetInputType(std::move(value)); return *this;}

  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    InputType m_inputType;
    bool m_inputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
