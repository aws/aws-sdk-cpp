/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/OutpostGeneration.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Outposts {
namespace Model {

/**
 */
class ListOrderableInstanceTypesRequest : public OutpostsRequest {
 public:
  AWS_OUTPOSTS_API ListOrderableInstanceTypesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListOrderableInstanceTypes"; }

  AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

  AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Filters the results by Outpost generation. Specify <code>GENERATION_1</code>
   * for first-generation rack deployments or <code>GENERATION_2</code> for
   * second-generation rack deployments.</p>
   */
  inline OutpostGeneration GetOutpostGenerationFilter() const { return m_outpostGenerationFilter; }
  inline bool OutpostGenerationFilterHasBeenSet() const { return m_outpostGenerationFilterHasBeenSet; }
  inline void SetOutpostGenerationFilter(OutpostGeneration value) {
    m_outpostGenerationFilterHasBeenSet = true;
    m_outpostGenerationFilter = value;
  }
  inline ListOrderableInstanceTypesRequest& WithOutpostGenerationFilter(OutpostGeneration value) {
    SetOutpostGenerationFilter(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum page size.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListOrderableInstanceTypesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOrderableInstanceTypesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  OutpostGeneration m_outpostGenerationFilter{OutpostGeneration::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_outpostGenerationFilterHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
