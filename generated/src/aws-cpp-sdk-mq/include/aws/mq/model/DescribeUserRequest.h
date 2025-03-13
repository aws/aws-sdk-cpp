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
  class DescribeUserRequest : public MQRequest
  {
  public:
    AWS_MQ_API DescribeUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUser"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const { return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    template<typename BrokerIdT = Aws::String>
    void SetBrokerId(BrokerIdT&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::forward<BrokerIdT>(value); }
    template<typename BrokerIdT = Aws::String>
    DescribeUserRequest& WithBrokerId(BrokerIdT&& value) { SetBrokerId(std::forward<BrokerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the ActiveMQ user. This value can contain only alphanumeric
     * characters, dashes, periods, underscores, and tildes (- . _ ~). This value must
     * be 2-100 characters long.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    DescribeUserRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
