/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ProfileCatalogItem.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Contains information about a recommendation that is associated with a
 * customer profile, including the relevance score and the associated catalog
 * item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ProfileRecommendation">AWS
 * API Reference</a></p>
 */
class ProfileRecommendation {
 public:
  AWS_QCONNECT_API ProfileRecommendation() = default;
  AWS_QCONNECT_API ProfileRecommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ProfileRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The relevance score of the recommendation.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline ProfileRecommendation& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog item that is associated with the recommendation.</p>
   */
  inline const ProfileCatalogItem& GetCatalogItem() const { return m_catalogItem; }
  inline bool CatalogItemHasBeenSet() const { return m_catalogItemHasBeenSet; }
  template <typename CatalogItemT = ProfileCatalogItem>
  void SetCatalogItem(CatalogItemT&& value) {
    m_catalogItemHasBeenSet = true;
    m_catalogItem = std::forward<CatalogItemT>(value);
  }
  template <typename CatalogItemT = ProfileCatalogItem>
  ProfileRecommendation& WithCatalogItem(CatalogItemT&& value) {
    SetCatalogItem(std::forward<CatalogItemT>(value));
    return *this;
  }
  ///@}
 private:
  double m_score{0.0};

  ProfileCatalogItem m_catalogItem;
  bool m_scoreHasBeenSet = false;
  bool m_catalogItemHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
