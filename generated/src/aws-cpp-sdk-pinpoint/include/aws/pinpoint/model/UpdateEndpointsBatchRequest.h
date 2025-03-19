/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EndpointBatchRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateEndpointsBatchRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateEndpointsBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpointsBatch"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateEndpointsBatchRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EndpointBatchRequest& GetEndpointBatchRequest() const { return m_endpointBatchRequest; }
    inline bool EndpointBatchRequestHasBeenSet() const { return m_endpointBatchRequestHasBeenSet; }
    template<typename EndpointBatchRequestT = EndpointBatchRequest>
    void SetEndpointBatchRequest(EndpointBatchRequestT&& value) { m_endpointBatchRequestHasBeenSet = true; m_endpointBatchRequest = std::forward<EndpointBatchRequestT>(value); }
    template<typename EndpointBatchRequestT = EndpointBatchRequest>
    UpdateEndpointsBatchRequest& WithEndpointBatchRequest(EndpointBatchRequestT&& value) { SetEndpointBatchRequest(std::forward<EndpointBatchRequestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    EndpointBatchRequest m_endpointBatchRequest;
    bool m_endpointBatchRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
