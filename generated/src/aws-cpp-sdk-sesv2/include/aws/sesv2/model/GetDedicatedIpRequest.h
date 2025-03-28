﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to obtain more information about a dedicated IP
   * address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpRequest">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetDedicatedIpRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDedicatedIp"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The IP address that you want to obtain more information about. The value you
     * specify has to be a dedicated IP address that's assocaited with your Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetIp() const { return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    template<typename IpT = Aws::String>
    void SetIp(IpT&& value) { m_ipHasBeenSet = true; m_ip = std::forward<IpT>(value); }
    template<typename IpT = Aws::String>
    GetDedicatedIpRequest& WithIp(IpT&& value) { SetIp(std::forward<IpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
