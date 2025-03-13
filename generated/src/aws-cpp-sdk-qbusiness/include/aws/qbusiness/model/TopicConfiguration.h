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
    AWS_QBUSINESS_API TopicConfiguration() = default;
    AWS_QBUSINESS_API TopicConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API TopicConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for your topic control configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TopicConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for your topic control configuration. Use this to outline how
     * the large language model (LLM) should use this topic control configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TopicConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of example phrases that you expect the end user to use in relation to
     * the topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExampleChatMessages() const { return m_exampleChatMessages; }
    inline bool ExampleChatMessagesHasBeenSet() const { return m_exampleChatMessagesHasBeenSet; }
    template<typename ExampleChatMessagesT = Aws::Vector<Aws::String>>
    void SetExampleChatMessages(ExampleChatMessagesT&& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages = std::forward<ExampleChatMessagesT>(value); }
    template<typename ExampleChatMessagesT = Aws::Vector<Aws::String>>
    TopicConfiguration& WithExampleChatMessages(ExampleChatMessagesT&& value) { SetExampleChatMessages(std::forward<ExampleChatMessagesT>(value)); return *this;}
    template<typename ExampleChatMessagesT = Aws::String>
    TopicConfiguration& AddExampleChatMessages(ExampleChatMessagesT&& value) { m_exampleChatMessagesHasBeenSet = true; m_exampleChatMessages.emplace_back(std::forward<ExampleChatMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Rules defined for a topic configuration.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    TopicConfiguration& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    TopicConfiguration& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
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
