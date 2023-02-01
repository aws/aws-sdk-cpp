/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/NumberValidateRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class PhoneNumberValidateRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API PhoneNumberValidateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PhoneNumberValidate"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    
    inline const NumberValidateRequest& GetNumberValidateRequest() const{ return m_numberValidateRequest; }

    
    inline bool NumberValidateRequestHasBeenSet() const { return m_numberValidateRequestHasBeenSet; }

    
    inline void SetNumberValidateRequest(const NumberValidateRequest& value) { m_numberValidateRequestHasBeenSet = true; m_numberValidateRequest = value; }

    
    inline void SetNumberValidateRequest(NumberValidateRequest&& value) { m_numberValidateRequestHasBeenSet = true; m_numberValidateRequest = std::move(value); }

    
    inline PhoneNumberValidateRequest& WithNumberValidateRequest(const NumberValidateRequest& value) { SetNumberValidateRequest(value); return *this;}

    
    inline PhoneNumberValidateRequest& WithNumberValidateRequest(NumberValidateRequest&& value) { SetNumberValidateRequest(std::move(value)); return *this;}

  private:

    NumberValidateRequest m_numberValidateRequest;
    bool m_numberValidateRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
