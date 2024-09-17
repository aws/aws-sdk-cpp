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
  class DeleteAlgorithmRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteAlgorithmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlgorithm"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the algorithm to delete.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }
    inline DeleteAlgorithmRequest& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}
    inline DeleteAlgorithmRequest& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}
    inline DeleteAlgorithmRequest& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}
    ///@}
  private:

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
