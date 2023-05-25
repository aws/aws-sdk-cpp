/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   */
  class DeleteBrokerRequest : public MQRequest
  {
  public:
    AWS_MQ_API DeleteBrokerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBroker"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DeleteBrokerRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DeleteBrokerRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DeleteBrokerRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}

  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
