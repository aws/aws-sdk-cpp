/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ContentBlockerRule.h>
#include <aws/qbusiness/model/ContentRetrievalRule.h>
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
   * <p>Provides configuration information about a rule.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/RuleConfiguration">AWS
   * API Reference</a></p>
   */
  class RuleConfiguration
  {
  public:
    AWS_QBUSINESS_API RuleConfiguration() = default;
    AWS_QBUSINESS_API RuleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API RuleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A rule for configuring how Amazon Q Business responds when it encounters a a
     * blocked topic.</p>
     */
    inline const ContentBlockerRule& GetContentBlockerRule() const { return m_contentBlockerRule; }
    inline bool ContentBlockerRuleHasBeenSet() const { return m_contentBlockerRuleHasBeenSet; }
    template<typename ContentBlockerRuleT = ContentBlockerRule>
    void SetContentBlockerRule(ContentBlockerRuleT&& value) { m_contentBlockerRuleHasBeenSet = true; m_contentBlockerRule = std::forward<ContentBlockerRuleT>(value); }
    template<typename ContentBlockerRuleT = ContentBlockerRule>
    RuleConfiguration& WithContentBlockerRule(ContentBlockerRuleT&& value) { SetContentBlockerRule(std::forward<ContentBlockerRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ContentRetrievalRule& GetContentRetrievalRule() const { return m_contentRetrievalRule; }
    inline bool ContentRetrievalRuleHasBeenSet() const { return m_contentRetrievalRuleHasBeenSet; }
    template<typename ContentRetrievalRuleT = ContentRetrievalRule>
    void SetContentRetrievalRule(ContentRetrievalRuleT&& value) { m_contentRetrievalRuleHasBeenSet = true; m_contentRetrievalRule = std::forward<ContentRetrievalRuleT>(value); }
    template<typename ContentRetrievalRuleT = ContentRetrievalRule>
    RuleConfiguration& WithContentRetrievalRule(ContentRetrievalRuleT&& value) { SetContentRetrievalRule(std::forward<ContentRetrievalRuleT>(value)); return *this;}
    ///@}
  private:

    ContentBlockerRule m_contentBlockerRule;
    bool m_contentBlockerRuleHasBeenSet = false;

    ContentRetrievalRule m_contentRetrievalRule;
    bool m_contentRetrievalRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
