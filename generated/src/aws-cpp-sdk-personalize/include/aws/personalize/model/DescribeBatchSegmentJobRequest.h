/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class DescribeBatchSegmentJobRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeBatchSegmentJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBatchSegmentJob"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the batch segment job to describe.</p>
     */
    inline const Aws::String& GetBatchSegmentJobArn() const { return m_batchSegmentJobArn; }
    inline bool BatchSegmentJobArnHasBeenSet() const { return m_batchSegmentJobArnHasBeenSet; }
    template<typename BatchSegmentJobArnT = Aws::String>
    void SetBatchSegmentJobArn(BatchSegmentJobArnT&& value) { m_batchSegmentJobArnHasBeenSet = true; m_batchSegmentJobArn = std::forward<BatchSegmentJobArnT>(value); }
    template<typename BatchSegmentJobArnT = Aws::String>
    DescribeBatchSegmentJobRequest& WithBatchSegmentJobArn(BatchSegmentJobArnT&& value) { SetBatchSegmentJobArn(std::forward<BatchSegmentJobArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_batchSegmentJobArn;
    bool m_batchSegmentJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
