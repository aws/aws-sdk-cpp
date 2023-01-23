/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/CreateApplicationRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class CreateAppRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API CreateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApp"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    
    inline const CreateApplicationRequest& GetCreateApplicationRequest() const{ return m_createApplicationRequest; }

    
    inline bool CreateApplicationRequestHasBeenSet() const { return m_createApplicationRequestHasBeenSet; }

    
    inline void SetCreateApplicationRequest(const CreateApplicationRequest& value) { m_createApplicationRequestHasBeenSet = true; m_createApplicationRequest = value; }

    
    inline void SetCreateApplicationRequest(CreateApplicationRequest&& value) { m_createApplicationRequestHasBeenSet = true; m_createApplicationRequest = std::move(value); }

    
    inline CreateAppRequest& WithCreateApplicationRequest(const CreateApplicationRequest& value) { SetCreateApplicationRequest(value); return *this;}

    
    inline CreateAppRequest& WithCreateApplicationRequest(CreateApplicationRequest&& value) { SetCreateApplicationRequest(std::move(value)); return *this;}

  private:

    CreateApplicationRequest m_createApplicationRequest;
    bool m_createApplicationRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
