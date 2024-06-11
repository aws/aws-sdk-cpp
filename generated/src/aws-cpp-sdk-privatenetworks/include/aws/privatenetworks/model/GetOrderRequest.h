﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class GetOrderRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API GetOrderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOrder"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline const Aws::String& GetOrderArn() const{ return m_orderArn; }
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }
    inline void SetOrderArn(const Aws::String& value) { m_orderArnHasBeenSet = true; m_orderArn = value; }
    inline void SetOrderArn(Aws::String&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::move(value); }
    inline void SetOrderArn(const char* value) { m_orderArnHasBeenSet = true; m_orderArn.assign(value); }
    inline GetOrderRequest& WithOrderArn(const Aws::String& value) { SetOrderArn(value); return *this;}
    inline GetOrderRequest& WithOrderArn(Aws::String&& value) { SetOrderArn(std::move(value)); return *this;}
    inline GetOrderRequest& WithOrderArn(const char* value) { SetOrderArn(value); return *this;}
    ///@}
  private:

    Aws::String m_orderArn;
    bool m_orderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
