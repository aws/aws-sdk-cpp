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
  class DescribeReservedCapacityRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeReservedCapacityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedCapacity"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ARN of the reserved capacity to describe.</p>
     */
    inline const Aws::String& GetReservedCapacityArn() const { return m_reservedCapacityArn; }
    inline bool ReservedCapacityArnHasBeenSet() const { return m_reservedCapacityArnHasBeenSet; }
    template<typename ReservedCapacityArnT = Aws::String>
    void SetReservedCapacityArn(ReservedCapacityArnT&& value) { m_reservedCapacityArnHasBeenSet = true; m_reservedCapacityArn = std::forward<ReservedCapacityArnT>(value); }
    template<typename ReservedCapacityArnT = Aws::String>
    DescribeReservedCapacityRequest& WithReservedCapacityArn(ReservedCapacityArnT&& value) { SetReservedCapacityArn(std::forward<ReservedCapacityArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedCapacityArn;
    bool m_reservedCapacityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
