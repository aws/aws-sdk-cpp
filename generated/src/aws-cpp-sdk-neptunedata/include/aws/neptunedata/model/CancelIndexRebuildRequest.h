/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

#include <utility>

namespace Aws {
namespace neptunedata {
namespace Model {

/**
 */
class CancelIndexRebuildRequest : public NeptunedataRequest {
 public:
  AWS_NEPTUNEDATA_API CancelIndexRebuildRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelIndexRebuild"; }

  AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the index rebuild job to cancel.</p>
   */
  inline const Aws::String& GetRebuildId() const { return m_rebuildId; }
  inline bool RebuildIdHasBeenSet() const { return m_rebuildIdHasBeenSet; }
  template <typename RebuildIdT = Aws::String>
  void SetRebuildId(RebuildIdT&& value) {
    m_rebuildIdHasBeenSet = true;
    m_rebuildId = std::forward<RebuildIdT>(value);
  }
  template <typename RebuildIdT = Aws::String>
  CancelIndexRebuildRequest& WithRebuildId(RebuildIdT&& value) {
    SetRebuildId(std::forward<RebuildIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rebuildId;
  bool m_rebuildIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
