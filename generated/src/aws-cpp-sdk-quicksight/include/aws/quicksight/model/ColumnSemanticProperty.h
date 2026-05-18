/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AdditionalNotes.h>
#include <aws/quicksight/model/ColumnDescription.h>
#include <aws/quicksight/model/ColumnSemanticType.h>

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
 * <p>A semantic property for a column.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnSemanticProperty">AWS
 * API Reference</a></p>
 */
class ColumnSemanticProperty {
 public:
  AWS_QUICKSIGHT_API ColumnSemanticProperty() = default;
  AWS_QUICKSIGHT_API ColumnSemanticProperty(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ColumnSemanticProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the column.</p>
   */
  inline const ColumnDescription& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = ColumnDescription>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = ColumnDescription>
  ColumnSemanticProperty& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional notes for the column.</p>
   */
  inline const AdditionalNotes& GetAdditionalNotes() const { return m_additionalNotes; }
  inline bool AdditionalNotesHasBeenSet() const { return m_additionalNotesHasBeenSet; }
  template <typename AdditionalNotesT = AdditionalNotes>
  void SetAdditionalNotes(AdditionalNotesT&& value) {
    m_additionalNotesHasBeenSet = true;
    m_additionalNotes = std::forward<AdditionalNotesT>(value);
  }
  template <typename AdditionalNotesT = AdditionalNotes>
  ColumnSemanticProperty& WithAdditionalNotes(AdditionalNotesT&& value) {
    SetAdditionalNotes(std::forward<AdditionalNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The semantic type of the column.</p>
   */
  inline const ColumnSemanticType& GetSemanticType() const { return m_semanticType; }
  inline bool SemanticTypeHasBeenSet() const { return m_semanticTypeHasBeenSet; }
  template <typename SemanticTypeT = ColumnSemanticType>
  void SetSemanticType(SemanticTypeT&& value) {
    m_semanticTypeHasBeenSet = true;
    m_semanticType = std::forward<SemanticTypeT>(value);
  }
  template <typename SemanticTypeT = ColumnSemanticType>
  ColumnSemanticProperty& WithSemanticType(SemanticTypeT&& value) {
    SetSemanticType(std::forward<SemanticTypeT>(value));
    return *this;
  }
  ///@}
 private:
  ColumnDescription m_description;

  AdditionalNotes m_additionalNotes;

  ColumnSemanticType m_semanticType;
  bool m_descriptionHasBeenSet = false;
  bool m_additionalNotesHasBeenSet = false;
  bool m_semanticTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
