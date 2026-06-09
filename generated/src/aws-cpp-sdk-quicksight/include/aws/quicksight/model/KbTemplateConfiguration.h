/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>The template configuration for a knowledge base.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KbTemplateConfiguration">AWS
 * API Reference</a></p>
 */
class KbTemplateConfiguration {
 public:
  AWS_QUICKSIGHT_API KbTemplateConfiguration() = default;
  AWS_QUICKSIGHT_API KbTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KbTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The template document that defines the knowledge base behavior.</p>
   */
  inline Aws::Utils::DocumentView GetTemplate() const { return m_template; }
  inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
  template <typename TemplateT = Aws::Utils::Document>
  void SetTemplate(TemplateT&& value) {
    m_templateHasBeenSet = true;
    m_template = std::forward<TemplateT>(value);
  }
  template <typename TemplateT = Aws::Utils::Document>
  KbTemplateConfiguration& WithTemplate(TemplateT&& value) {
    SetTemplate(std::forward<TemplateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Document m_template;
  bool m_templateHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
