/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>Information about the bot filter that was applied to the request. This
 * structure is populated in the response when you filter by bot category,
 * organization, or name.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FilterSource">AWS
 * API Reference</a></p>
 */
class FilterSource {
 public:
  AWS_WAFV2_API FilterSource() = default;
  AWS_WAFV2_API FilterSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API FilterSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The bot category that was used to filter the results. For example,
   * <code>ai</code> or <code>search_engine</code>.</p>
   */
  inline const Aws::String& GetBotCategory() const { return m_botCategory; }
  inline bool BotCategoryHasBeenSet() const { return m_botCategoryHasBeenSet; }
  template <typename BotCategoryT = Aws::String>
  void SetBotCategory(BotCategoryT&& value) {
    m_botCategoryHasBeenSet = true;
    m_botCategory = std::forward<BotCategoryT>(value);
  }
  template <typename BotCategoryT = Aws::String>
  FilterSource& WithBotCategory(BotCategoryT&& value) {
    SetBotCategory(std::forward<BotCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bot organization that was used to filter the results. For example,
   * <code>OpenAI</code> or <code>Google</code>.</p>
   */
  inline const Aws::String& GetBotOrganization() const { return m_botOrganization; }
  inline bool BotOrganizationHasBeenSet() const { return m_botOrganizationHasBeenSet; }
  template <typename BotOrganizationT = Aws::String>
  void SetBotOrganization(BotOrganizationT&& value) {
    m_botOrganizationHasBeenSet = true;
    m_botOrganization = std::forward<BotOrganizationT>(value);
  }
  template <typename BotOrganizationT = Aws::String>
  FilterSource& WithBotOrganization(BotOrganizationT&& value) {
    SetBotOrganization(std::forward<BotOrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bot name that was used to filter the results. For example,
   * <code>gptbot</code> or <code>googlebot</code>.</p>
   */
  inline const Aws::String& GetBotName() const { return m_botName; }
  inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
  template <typename BotNameT = Aws::String>
  void SetBotName(BotNameT&& value) {
    m_botNameHasBeenSet = true;
    m_botName = std::forward<BotNameT>(value);
  }
  template <typename BotNameT = Aws::String>
  FilterSource& WithBotName(BotNameT&& value) {
    SetBotName(std::forward<BotNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_botCategory;

  Aws::String m_botOrganization;

  Aws::String m_botName;
  bool m_botCategoryHasBeenSet = false;
  bool m_botOrganizationHasBeenSet = false;
  bool m_botNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
