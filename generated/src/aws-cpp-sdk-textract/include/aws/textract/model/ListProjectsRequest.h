/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/BlueprintFilter.h>

#include <utility>

namespace Aws {
namespace Textract {
namespace Model {

/**
 */
class ListProjectsRequest : public TextractRequest {
 public:
  AWS_TEXTRACT_API ListProjectsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListProjects"; }

  AWS_TEXTRACT_API Aws::String SerializePayload() const override;

  AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The maximum number of projects to return in each page of results. If you
   * don't specify a value, the service selects a default page size. Use the
   * <code>NextToken</code> value in the response to retrieve any remaining
   * results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListProjectsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned from a previous call to
   * <code>ListProjects</code>. Use it to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProjectsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that limits the results to projects associated with the specified
   * blueprint.</p>
   */
  inline const BlueprintFilter& GetBlueprintFilter() const { return m_blueprintFilter; }
  inline bool BlueprintFilterHasBeenSet() const { return m_blueprintFilterHasBeenSet; }
  template <typename BlueprintFilterT = BlueprintFilter>
  void SetBlueprintFilter(BlueprintFilterT&& value) {
    m_blueprintFilterHasBeenSet = true;
    m_blueprintFilter = std::forward<BlueprintFilterT>(value);
  }
  template <typename BlueprintFilterT = BlueprintFilter>
  ListProjectsRequest& WithBlueprintFilter(BlueprintFilterT&& value) {
    SetBlueprintFilter(std::forward<BlueprintFilterT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  BlueprintFilter m_blueprintFilter;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_blueprintFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
