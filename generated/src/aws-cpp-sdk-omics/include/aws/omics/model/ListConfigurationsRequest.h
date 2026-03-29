/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/Omics_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Omics {
namespace Model {

/**
 */
class ListConfigurationsRequest : public OmicsRequest {
 public:
  AWS_OMICS_API ListConfigurationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListConfigurations"; }

  AWS_OMICS_API Aws::String SerializePayload() const override;

  AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Maximum number of results to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListConfigurationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for retrieving next page of results.</p>
   */
  inline const Aws::String& GetStartingToken() const { return m_startingToken; }
  inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
  template <typename StartingTokenT = Aws::String>
  void SetStartingToken(StartingTokenT&& value) {
    m_startingTokenHasBeenSet = true;
    m_startingToken = std::forward<StartingTokenT>(value);
  }
  template <typename StartingTokenT = Aws::String>
  ListConfigurationsRequest& WithStartingToken(StartingTokenT&& value) {
    SetStartingToken(std::forward<StartingTokenT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_startingToken;
  bool m_maxResultsHasBeenSet = false;
  bool m_startingTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
