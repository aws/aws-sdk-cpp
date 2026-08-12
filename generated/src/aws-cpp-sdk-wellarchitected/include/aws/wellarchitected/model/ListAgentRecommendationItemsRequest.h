/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/RecommendationItemType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace WellArchitected {
namespace Model {

/**
 */
class ListAgentRecommendationItemsRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API ListAgentRecommendationItemsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAgentRecommendationItems"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recommendation to list items for.</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  ListAgentRecommendationItemsRequest& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to return only recommendation items of the specified
   * type.</p>
   */
  inline RecommendationItemType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RecommendationItemType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ListAgentRecommendationItemsRequest& WithType(RecommendationItemType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of recommendation items to return in a single
   * response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAgentRecommendationItemsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned from a previous call to continue retrieving
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgentRecommendationItemsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendationArn;

  RecommendationItemType m_type{RecommendationItemType::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_recommendationArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
