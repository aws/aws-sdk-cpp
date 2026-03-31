/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/BatchStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Omics {
namespace Model {

/**
 */
class ListBatchRequest : public OmicsRequest {
 public:
  AWS_OMICS_API ListBatchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBatch"; }

  AWS_OMICS_API Aws::String SerializePayload() const override;

  AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The maximum number of batches to return. If not specified, defaults to
   * 100.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline ListBatchRequest& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned from a prior <code>ListBatch</code> call.</p>
   */
  inline const Aws::String& GetStartingToken() const { return m_startingToken; }
  inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
  template <typename StartingTokenT = Aws::String>
  void SetStartingToken(StartingTokenT&& value) {
    m_startingTokenHasBeenSet = true;
    m_startingToken = std::forward<StartingTokenT>(value);
  }
  template <typename StartingTokenT = Aws::String>
  ListBatchRequest& WithStartingToken(StartingTokenT&& value) {
    SetStartingToken(std::forward<StartingTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter batches by status.</p>
   */
  inline BatchStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BatchStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListBatchRequest& WithStatus(BatchStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter batches by name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListBatchRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter batches by run group ID.</p>
   */
  inline const Aws::String& GetRunGroupId() const { return m_runGroupId; }
  inline bool RunGroupIdHasBeenSet() const { return m_runGroupIdHasBeenSet; }
  template <typename RunGroupIdT = Aws::String>
  void SetRunGroupId(RunGroupIdT&& value) {
    m_runGroupIdHasBeenSet = true;
    m_runGroupId = std::forward<RunGroupIdT>(value);
  }
  template <typename RunGroupIdT = Aws::String>
  ListBatchRequest& WithRunGroupId(RunGroupIdT&& value) {
    SetRunGroupId(std::forward<RunGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxItems{0};

  Aws::String m_startingToken;

  BatchStatus m_status{BatchStatus::NOT_SET};

  Aws::String m_name;

  Aws::String m_runGroupId;
  bool m_maxItemsHasBeenSet = false;
  bool m_startingTokenHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_runGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
