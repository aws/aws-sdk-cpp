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
   * <p>The topic specific controls configured for an Amazon Q Business
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


    ///@{
    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TopicConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TopicConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TopicConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TopicConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TopicConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TopicConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExampleChatMessages() const{ return m_exampleChatMessages; }
    inline bool ExampleChatMessagesHasBeenSet() const { return m_exampleChatMessagesHasBeenSet; }
    inline void SetExampleChatMessages(const Aws::Vector<Aws::String>& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages = value; }
    inline void SetExampleChatMessages(Aws::Vector<Aws::String>&& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages = std::move(value); }
    inline TopicConfiguration& WithExampleChatMessages(const Aws::Vector<Aws::String>& value) { SetExampleChatMessages(value); return *this;}
    inline TopicConfiguration& WithExampleChatMessages(Aws::Vector<Aws::String>&& value) { SetExampleChatMessages(std::move(value)); return *this;}
    inline TopicConfiguration& AddExampleChatMessages(const Aws::String& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages.push_back(value); return *this; }
    inline TopicConfiguration& AddExampleChatMessages(Aws::String&& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages.push_back(std::move(value)); return *this; }
    inline TopicConfiguration& AddExampleChatMessages(const char* value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline TopicConfiguration& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}
    inline TopicConfiguration& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}
    inline TopicConfiguration& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline TopicConfiguration& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_exampleChatMessages;
    bool m_exampleChatMessagesHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
