/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KbTemplateConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The configuration settings for a knowledge base.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KnowledgeBaseConfiguration">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseConfiguration {
 public:
  AWS_QUICKSIGHT_API KnowledgeBaseConfiguration() = default;
  AWS_QUICKSIGHT_API KnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The template configuration for the knowledge base.</p>
   */
  inline const KbTemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
  inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
  template <typename TemplateConfigurationT = KbTemplateConfiguration>
  void SetTemplateConfiguration(TemplateConfigurationT&& value) {
    m_templateConfigurationHasBeenSet = true;
    m_templateConfiguration = std::forward<TemplateConfigurationT>(value);
  }
  template <typename TemplateConfigurationT = KbTemplateConfiguration>
  KnowledgeBaseConfiguration& WithTemplateConfiguration(TemplateConfigurationT&& value) {
    SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether event notifications are enabled for the knowledge base.</p>
   */
  inline bool GetEventEnabled() const { return m_eventEnabled; }
  inline bool EventEnabledHasBeenSet() const { return m_eventEnabledHasBeenSet; }
  inline void SetEventEnabled(bool value) {
    m_eventEnabledHasBeenSet = true;
    m_eventEnabled = value;
  }
  inline KnowledgeBaseConfiguration& WithEventEnabled(bool value) {
    SetEventEnabled(value);
    return *this;
  }
  ///@}
 private:
  KbTemplateConfiguration m_templateConfiguration;

  bool m_eventEnabled{false};
  bool m_templateConfigurationHasBeenSet = false;
  bool m_eventEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
