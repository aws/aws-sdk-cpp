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
  class DescribeAlgorithmRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeAlgorithmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlgorithm"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the algorithm to describe.</p>
     */
    inline const Aws::String& GetAlgorithmName() const { return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    template<typename AlgorithmNameT = Aws::String>
    void SetAlgorithmName(AlgorithmNameT&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::forward<AlgorithmNameT>(value); }
    template<typename AlgorithmNameT = Aws::String>
    DescribeAlgorithmRequest& WithAlgorithmName(AlgorithmNameT&& value) { SetAlgorithmName(std::forward<AlgorithmNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
