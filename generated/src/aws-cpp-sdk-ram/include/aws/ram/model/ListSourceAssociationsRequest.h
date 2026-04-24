/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/RAMRequest.h>
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ResourceShareAssociationStatus.h>

#include <utility>

namespace Aws {
namespace RAM {
namespace Model {

/**
 */
class ListSourceAssociationsRequest : public RAMRequest {
 public:
  AWS_RAM_API ListSourceAssociationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSourceAssociations"; }

  AWS_RAM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the resource shares for which you want to
   * retrieve source associations.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceShareArns() const { return m_resourceShareArns; }
  inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }
  template <typename ResourceShareArnsT = Aws::Vector<Aws::String>>
  void SetResourceShareArns(ResourceShareArnsT&& value) {
    m_resourceShareArnsHasBeenSet = true;
    m_resourceShareArns = std::forward<ResourceShareArnsT>(value);
  }
  template <typename ResourceShareArnsT = Aws::Vector<Aws::String>>
  ListSourceAssociationsRequest& WithResourceShareArns(ResourceShareArnsT&& value) {
    SetResourceShareArns(std::forward<ResourceShareArnsT>(value));
    return *this;
  }
  template <typename ResourceShareArnsT = Aws::String>
  ListSourceAssociationsRequest& AddResourceShareArns(ResourceShareArnsT&& value) {
    m_resourceShareArnsHasBeenSet = true;
    m_resourceShareArns.emplace_back(std::forward<ResourceShareArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the source for which you want to retrieve associations.
   * This can be an account ID, Amazon Resource Name (ARN), organization ID, or
   * organization path.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  ListSourceAssociationsRequest& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of source for which you want to retrieve associations.</p>
   */
  inline const Aws::String& GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  template <typename SourceTypeT = Aws::String>
  void SetSourceType(SourceTypeT&& value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = std::forward<SourceTypeT>(value);
  }
  template <typename SourceTypeT = Aws::String>
  ListSourceAssociationsRequest& WithSourceType(SourceTypeT&& value) {
    SetSourceType(std::forward<SourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the source associations that you want to retrieve.</p>
   */
  inline ResourceShareAssociationStatus GetAssociationStatus() const { return m_associationStatus; }
  inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
  inline void SetAssociationStatus(ResourceShareAssociationStatus value) {
    m_associationStatusHasBeenSet = true;
    m_associationStatus = value;
  }
  inline ListSourceAssociationsRequest& WithAssociationStatus(ResourceShareAssociationStatus value) {
    SetAssociationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token that indicates the next set of results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSourceAssociationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. To retrieve the
   * remaining results, make another call with the returned <code>nextToken</code>
   * value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListSourceAssociationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_resourceShareArns;

  Aws::String m_sourceId;

  Aws::String m_sourceType;

  ResourceShareAssociationStatus m_associationStatus{ResourceShareAssociationStatus::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_resourceShareArnsHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
  bool m_sourceTypeHasBeenSet = false;
  bool m_associationStatusHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
