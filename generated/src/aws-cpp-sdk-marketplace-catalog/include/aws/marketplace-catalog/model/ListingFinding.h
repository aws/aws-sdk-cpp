/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ListingFindingStatus.h>
#include <aws/marketplace-catalog/model/RecommendationSeverity.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>One row of the checklist of criteria for a listing field. A row is either a
 * criterion that the field already meets or advice for a criterion that it
 * doesn't.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListingFinding">AWS
 * API Reference</a></p>
 */
class ListingFinding {
 public:
  AWS_MARKETPLACECATALOG_API ListingFinding() = default;
  AWS_MARKETPLACECATALOG_API ListingFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ListingFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>What you should do to meet the criterion.</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  ListingFinding& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What the criterion asks for. The text is the same for every listing. The
   * reasoning for a specific listing is in the rationale of the alternatives.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ListingFinding& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How much the criterion blocks the listing. It is set on every row. For a row
   * with a status of <code>PASS</code>, it is the weight of a criterion that is
   * already met. Valid values are <code>BLOCKING</code> and
   * <code>ADVISORY</code>.</p>
   */
  inline RecommendationSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(RecommendationSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline ListingFinding& WithSeverity(RecommendationSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result for the criterion. Valid values are:</p> <ul> <li> <p>
   * <code>PASS</code> - The criterion is met and no action is needed.</p> </li> <li>
   * <p> <code>FAIL</code> - The criterion isn't met or wasn't scored.</p> </li>
   * </ul> <p>This value is different from the status of the content
   * recommendation.</p>
   */
  inline ListingFindingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ListingFindingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListingFinding& WithStatus(ListingFindingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_action;

  Aws::String m_description;

  RecommendationSeverity m_severity{RecommendationSeverity::NOT_SET};

  ListingFindingStatus m_status{ListingFindingStatus::NOT_SET};
  bool m_actionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
