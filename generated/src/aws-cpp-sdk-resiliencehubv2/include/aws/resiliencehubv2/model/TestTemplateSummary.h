/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains summary information about a test template.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestTemplateSummary">AWS
 * API Reference</a></p>
 */
class TestTemplateSummary {
 public:
  AWS_RESILIENCEHUBV2_API TestTemplateSummary() = default;
  AWS_RESILIENCEHUBV2_API TestTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the test template.</p>
   */
  inline const Aws::String& GetTestTemplateArn() const { return m_testTemplateArn; }
  inline bool TestTemplateArnHasBeenSet() const { return m_testTemplateArnHasBeenSet; }
  template <typename TestTemplateArnT = Aws::String>
  void SetTestTemplateArn(TestTemplateArnT&& value) {
    m_testTemplateArnHasBeenSet = true;
    m_testTemplateArn = std::forward<TestTemplateArnT>(value);
  }
  template <typename TestTemplateArnT = Aws::String>
  TestTemplateSummary& WithTestTemplateArn(TestTemplateArnT&& value) {
    SetTestTemplateArn(std::forward<TestTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the test template.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TestTemplateSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the test template.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TestTemplateSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testTemplateArn;

  Aws::String m_name;

  Aws::String m_description;
  bool m_testTemplateArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
