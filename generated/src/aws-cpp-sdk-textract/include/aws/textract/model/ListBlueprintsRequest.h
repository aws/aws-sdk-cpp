/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ProjectFilter.h>
#include <aws/textract/model/ResourceOwner.h>

#include <utility>

namespace Aws {
namespace Textract {
namespace Model {

/**
 */
class ListBlueprintsRequest : public TextractRequest {
 public:
  AWS_TEXTRACT_API ListBlueprintsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBlueprints"; }

  AWS_TEXTRACT_API Aws::String SerializePayload() const override;

  AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The maximum number of blueprints to return in each page of results. If you
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
  inline ListBlueprintsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned from a previous call to
   * <code>ListBlueprints</code>. Use it to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBlueprintsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a blueprint to filter the results by.</p>
   */
  inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
  inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
  template <typename BlueprintArnT = Aws::String>
  void SetBlueprintArn(BlueprintArnT&& value) {
    m_blueprintArnHasBeenSet = true;
    m_blueprintArn = std::forward<BlueprintArnT>(value);
  }
  template <typename BlueprintArnT = Aws::String>
  ListBlueprintsRequest& WithBlueprintArn(BlueprintArnT&& value) {
    SetBlueprintArn(std::forward<BlueprintArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that limits the results to blueprints associated with the specified
   * project.</p>
   */
  inline const ProjectFilter& GetProjectFilter() const { return m_projectFilter; }
  inline bool ProjectFilterHasBeenSet() const { return m_projectFilterHasBeenSet; }
  template <typename ProjectFilterT = ProjectFilter>
  void SetProjectFilter(ProjectFilterT&& value) {
    m_projectFilterHasBeenSet = true;
    m_projectFilter = std::forward<ProjectFilterT>(value);
  }
  template <typename ProjectFilterT = ProjectFilter>
  ListBlueprintsRequest& WithProjectFilter(ProjectFilterT&& value) {
    SetProjectFilter(std::forward<ProjectFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that limits the results to blueprints owned by your account or to
   * blueprints provided by Amazon Textract.</p>
   */
  inline ResourceOwner GetResourceOwner() const { return m_resourceOwner; }
  inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
  inline void SetResourceOwner(ResourceOwner value) {
    m_resourceOwnerHasBeenSet = true;
    m_resourceOwner = value;
  }
  inline ListBlueprintsRequest& WithResourceOwner(ResourceOwner value) {
    SetResourceOwner(value);
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_blueprintArn;

  ProjectFilter m_projectFilter;

  ResourceOwner m_resourceOwner{ResourceOwner::NOT_SET};
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_blueprintArnHasBeenSet = false;
  bool m_projectFilterHasBeenSet = false;
  bool m_resourceOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
