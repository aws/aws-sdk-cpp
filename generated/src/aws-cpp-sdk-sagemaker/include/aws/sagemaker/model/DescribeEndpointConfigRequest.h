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
  class DescribeEndpointConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeEndpointConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEndpointConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const { return m_endpointConfigName; }
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }
    template<typename EndpointConfigNameT = Aws::String>
    void SetEndpointConfigName(EndpointConfigNameT&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::forward<EndpointConfigNameT>(value); }
    template<typename EndpointConfigNameT = Aws::String>
    DescribeEndpointConfigRequest& WithEndpointConfigName(EndpointConfigNameT&& value) { SetEndpointConfigName(std::forward<EndpointConfigNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
