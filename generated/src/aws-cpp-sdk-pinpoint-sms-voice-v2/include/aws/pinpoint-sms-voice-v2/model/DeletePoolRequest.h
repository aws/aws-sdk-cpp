﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DeletePoolRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeletePoolRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePool"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The PoolId or PoolArn of the pool to delete. You can use <a>DescribePools</a>
     * to find the values for PoolId and PoolArn .</p>  <p>If you are using
     * a shared AWS End User Messaging SMS and Voice resource then you must use the
     * full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    DeletePoolRequest& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
