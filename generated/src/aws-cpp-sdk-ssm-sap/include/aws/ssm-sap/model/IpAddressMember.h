/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/AllocationType.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>Provides information of the IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/IpAddressMember">AWS
   * API Reference</a></p>
   */
  class IpAddressMember
  {
  public:
    AWS_SSMSAP_API IpAddressMember();
    AWS_SSMSAP_API IpAddressMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API IpAddressMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address.</p>
     */
    inline IpAddressMember& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address.</p>
     */
    inline IpAddressMember& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address.</p>
     */
    inline IpAddressMember& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The primary IP address.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }

    /**
     * <p>The primary IP address.</p>
     */
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }

    /**
     * <p>The primary IP address.</p>
     */
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>The primary IP address.</p>
     */
    inline IpAddressMember& WithPrimary(bool value) { SetPrimary(value); return *this;}


    /**
     * <p>The type of allocation for the IP address.</p>
     */
    inline const AllocationType& GetAllocationType() const{ return m_allocationType; }

    /**
     * <p>The type of allocation for the IP address.</p>
     */
    inline bool AllocationTypeHasBeenSet() const { return m_allocationTypeHasBeenSet; }

    /**
     * <p>The type of allocation for the IP address.</p>
     */
    inline void SetAllocationType(const AllocationType& value) { m_allocationTypeHasBeenSet = true; m_allocationType = value; }

    /**
     * <p>The type of allocation for the IP address.</p>
     */
    inline void SetAllocationType(AllocationType&& value) { m_allocationTypeHasBeenSet = true; m_allocationType = std::move(value); }

    /**
     * <p>The type of allocation for the IP address.</p>
     */
    inline IpAddressMember& WithAllocationType(const AllocationType& value) { SetAllocationType(value); return *this;}

    /**
     * <p>The type of allocation for the IP address.</p>
     */
    inline IpAddressMember& WithAllocationType(AllocationType&& value) { SetAllocationType(std::move(value)); return *this;}

  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    bool m_primary;
    bool m_primaryHasBeenSet = false;

    AllocationType m_allocationType;
    bool m_allocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
