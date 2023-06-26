/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DedicatedTenancySupportResultEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class DescribeAccountResult
  {
  public:
    AWS_WORKSPACES_API DescribeAccountResult();
    AWS_WORKSPACES_API DescribeAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline const DedicatedTenancySupportResultEnum& GetDedicatedTenancySupport() const{ return m_dedicatedTenancySupport; }

    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline void SetDedicatedTenancySupport(const DedicatedTenancySupportResultEnum& value) { m_dedicatedTenancySupport = value; }

    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline void SetDedicatedTenancySupport(DedicatedTenancySupportResultEnum&& value) { m_dedicatedTenancySupport = std::move(value); }

    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancySupport(const DedicatedTenancySupportResultEnum& value) { SetDedicatedTenancySupport(value); return *this;}

    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancySupport(DedicatedTenancySupportResultEnum&& value) { SetDedicatedTenancySupport(std::move(value)); return *this;}


    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline const Aws::String& GetDedicatedTenancyManagementCidrRange() const{ return m_dedicatedTenancyManagementCidrRange; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(const Aws::String& value) { m_dedicatedTenancyManagementCidrRange = value; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(Aws::String&& value) { m_dedicatedTenancyManagementCidrRange = std::move(value); }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(const char* value) { m_dedicatedTenancyManagementCidrRange.assign(value); }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancyManagementCidrRange(const Aws::String& value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancyManagementCidrRange(Aws::String&& value) { SetDedicatedTenancyManagementCidrRange(std::move(value)); return *this;}

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancyManagementCidrRange(const char* value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DedicatedTenancySupportResultEnum m_dedicatedTenancySupport;

    Aws::String m_dedicatedTenancyManagementCidrRange;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
