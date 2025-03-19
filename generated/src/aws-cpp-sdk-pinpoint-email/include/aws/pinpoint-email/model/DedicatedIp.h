/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/WarmupStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Contains information about a dedicated IP address that is associated with
   * your Amazon Pinpoint account.</p> <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DedicatedIp">AWS
   * API Reference</a></p>
   */
  class DedicatedIp
  {
  public:
    AWS_PINPOINTEMAIL_API DedicatedIp() = default;
    AWS_PINPOINTEMAIL_API DedicatedIp(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API DedicatedIp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline const Aws::String& GetIp() const { return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    template<typename IpT = Aws::String>
    void SetIp(IpT&& value) { m_ipHasBeenSet = true; m_ip = std::forward<IpT>(value); }
    template<typename IpT = Aws::String>
    DedicatedIp& WithIp(IpT&& value) { SetIp(std::forward<IpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warm-up status of a dedicated IP address. The status can have one of the
     * following values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> – The IP address
     * isn't ready to use because the dedicated IP warm-up process is ongoing.</p>
     * </li> <li> <p> <code>DONE</code> – The dedicated IP warm-up process is complete,
     * and the IP address is ready to use.</p> </li> </ul>
     */
    inline WarmupStatus GetWarmupStatus() const { return m_warmupStatus; }
    inline bool WarmupStatusHasBeenSet() const { return m_warmupStatusHasBeenSet; }
    inline void SetWarmupStatus(WarmupStatus value) { m_warmupStatusHasBeenSet = true; m_warmupStatus = value; }
    inline DedicatedIp& WithWarmupStatus(WarmupStatus value) { SetWarmupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how complete the dedicated IP warm-up process is. When this value
     * equals 1, the address has completed the warm-up process and is ready for
     * use.</p>
     */
    inline int GetWarmupPercentage() const { return m_warmupPercentage; }
    inline bool WarmupPercentageHasBeenSet() const { return m_warmupPercentageHasBeenSet; }
    inline void SetWarmupPercentage(int value) { m_warmupPercentageHasBeenSet = true; m_warmupPercentage = value; }
    inline DedicatedIp& WithWarmupPercentage(int value) { SetWarmupPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline const Aws::String& GetPoolName() const { return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    template<typename PoolNameT = Aws::String>
    void SetPoolName(PoolNameT&& value) { m_poolNameHasBeenSet = true; m_poolName = std::forward<PoolNameT>(value); }
    template<typename PoolNameT = Aws::String>
    DedicatedIp& WithPoolName(PoolNameT&& value) { SetPoolName(std::forward<PoolNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    WarmupStatus m_warmupStatus{WarmupStatus::NOT_SET};
    bool m_warmupStatusHasBeenSet = false;

    int m_warmupPercentage{0};
    bool m_warmupPercentageHasBeenSet = false;

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
