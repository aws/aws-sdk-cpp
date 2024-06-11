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
  class DeleteEndpointConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteEndpointConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEndpointConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the endpoint configuration that you want to delete.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }
    inline DeleteEndpointConfigRequest& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}
    inline DeleteEndpointConfigRequest& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}
    inline DeleteEndpointConfigRequest& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
