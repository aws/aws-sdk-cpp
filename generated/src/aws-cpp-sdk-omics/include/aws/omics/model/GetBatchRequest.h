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
namespace Omics {
namespace Model {

/**
 */
class GetBatchRequest : public OmicsRequest {
 public:
  AWS_OMICS_API GetBatchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetBatch"; }

  AWS_OMICS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier portion of the run batch ARN.</p>
   */
  inline const Aws::String& GetBatchId() const { return m_batchId; }
  inline bool BatchIdHasBeenSet() const { return m_batchIdHasBeenSet; }
  template <typename BatchIdT = Aws::String>
  void SetBatchId(BatchIdT&& value) {
    m_batchIdHasBeenSet = true;
    m_batchId = std::forward<BatchIdT>(value);
  }
  template <typename BatchIdT = Aws::String>
  GetBatchRequest& WithBatchId(BatchIdT&& value) {
    SetBatchId(std::forward<BatchIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_batchId;
  bool m_batchIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
