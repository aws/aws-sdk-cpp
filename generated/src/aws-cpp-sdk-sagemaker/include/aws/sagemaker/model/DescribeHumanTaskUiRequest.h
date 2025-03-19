/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeHumanTaskUiRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeHumanTaskUiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHumanTaskUi"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the human task user interface (worker task template) you want
     * information about.</p>
     */
    inline const Aws::String& GetHumanTaskUiName() const { return m_humanTaskUiName; }
    inline bool HumanTaskUiNameHasBeenSet() const { return m_humanTaskUiNameHasBeenSet; }
    template<typename HumanTaskUiNameT = Aws::String>
    void SetHumanTaskUiName(HumanTaskUiNameT&& value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName = std::forward<HumanTaskUiNameT>(value); }
    template<typename HumanTaskUiNameT = Aws::String>
    DescribeHumanTaskUiRequest& WithHumanTaskUiName(HumanTaskUiNameT&& value) { SetHumanTaskUiName(std::forward<HumanTaskUiNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanTaskUiName;
    bool m_humanTaskUiNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
