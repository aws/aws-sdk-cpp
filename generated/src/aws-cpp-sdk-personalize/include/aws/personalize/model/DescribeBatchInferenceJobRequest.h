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
  class DescribeBatchInferenceJobRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeBatchInferenceJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBatchInferenceJob"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline const Aws::String& GetBatchInferenceJobArn() const { return m_batchInferenceJobArn; }
    inline bool BatchInferenceJobArnHasBeenSet() const { return m_batchInferenceJobArnHasBeenSet; }
    template<typename BatchInferenceJobArnT = Aws::String>
    void SetBatchInferenceJobArn(BatchInferenceJobArnT&& value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn = std::forward<BatchInferenceJobArnT>(value); }
    template<typename BatchInferenceJobArnT = Aws::String>
    DescribeBatchInferenceJobRequest& WithBatchInferenceJobArn(BatchInferenceJobArnT&& value) { SetBatchInferenceJobArn(std::forward<BatchInferenceJobArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_batchInferenceJobArn;
    bool m_batchInferenceJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
