/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/WarmupStatus.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Contains information about a dedicated IP address that is associated with
   * your Amazon SES account.</p> <p>To learn more about requesting dedicated IP
   * addresses, see <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/dedicated-ip-case.html">Requesting
   * and Relinquishing Dedicated IP Addresses</a> in the <i>Amazon SES Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DedicatedIp">AWS
   * API Reference</a></p>
   */
  class DedicatedIp
  {
  public:
    AWS_SESV2_API DedicatedIp() = default;
    AWS_SESV2_API DedicatedIp(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DedicatedIp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IPv4 address.</p>
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
     * and the IP address is ready to use.</p> </li> <li> <p>
     * <code>NOT_APPLICABLE</code> – The warm-up status doesn't apply to this IP
     * address. This status is used for IP addresses in managed dedicated IP pools,
     * where Amazon SES automatically handles the warm-up process.</p> </li> </ul>
     */
    inline WarmupStatus GetWarmupStatus() const { return m_warmupStatus; }
    inline bool WarmupStatusHasBeenSet() const { return m_warmupStatusHasBeenSet; }
    inline void SetWarmupStatus(WarmupStatus value) { m_warmupStatusHasBeenSet = true; m_warmupStatus = value; }
    inline DedicatedIp& WithWarmupStatus(WarmupStatus value) { SetWarmupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the progress of your dedicated IP warm-up:</p> <ul> <li> <p>
     * <code>0-100</code> – For standard dedicated IP addresses, this shows the warm-up
     * completion percentage. A value of 100 means the IP address is fully warmed up
     * and ready for use.</p> </li> <li> <p> <code>-1</code> – Appears for IP addresses
     * in managed dedicated pools where Amazon SES automatically handles the warm-up
     * process, making the percentage not applicable.</p> </li> </ul>
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
} // namespace SESV2
} // namespace Aws
