/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/Rule.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The topic specific controls configured for an Amazon Q
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/TopicConfiguration">AWS
   * API Reference</a></p>
   */
  class TopicConfiguration
  {
  public:
    AWS_QBUSINESS_API TopicConfiguration();
    AWS_QBUSINESS_API TopicConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API TopicConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline TopicConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline TopicConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline TopicConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExampleChatMessages() const{ return m_exampleChatMessages; }

    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline bool ExampleChatMessagesHasBeenSet() const { return m_exampleChatMessagesHasBeenSet; }

    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline void SetExampleChatMessages(const Aws::Vector<Aws::String>& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages = value; }

    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline void SetExampleChatMessages(Aws::Vector<Aws::String>&& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages = std::move(value); }

    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline TopicConfiguration& WithExampleChatMessages(const Aws::Vector<Aws::String>& value) { SetExampleChatMessages(value); return *this;}

    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline TopicConfiguration& WithExampleChatMessages(Aws::Vector<Aws::String>&& value) { SetExampleChatMessages(std::move(value)); return *this;}

    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline TopicConfiguration& AddExampleChatMessages(const Aws::String& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages.push_back(value); return *this; }

    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline TopicConfiguration& AddExampleChatMessages(Aws::String&& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline TopicConfiguration& AddExampleChatMessages(const char* value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages.push_back(value); return *this; }


    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline TopicConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline TopicConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline TopicConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline TopicConfiguration& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline TopicConfiguration& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline TopicConfiguration& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline TopicConfiguration& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_exampleChatMessages;
    bool m_exampleChatMessagesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
