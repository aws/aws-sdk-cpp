/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DedicatedTenancySupportResultEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/DedicatedTenancyAccountType.h>
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
    AWS_WORKSPACES_API DescribeAccountResult() = default;
    AWS_WORKSPACES_API DescribeAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline DedicatedTenancySupportResultEnum GetDedicatedTenancySupport() const { return m_dedicatedTenancySupport; }
    inline void SetDedicatedTenancySupport(DedicatedTenancySupportResultEnum value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = value; }
    inline DescribeAccountResult& WithDedicatedTenancySupport(DedicatedTenancySupportResultEnum value) { SetDedicatedTenancySupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline const Aws::String& GetDedicatedTenancyManagementCidrRange() const { return m_dedicatedTenancyManagementCidrRange; }
    template<typename DedicatedTenancyManagementCidrRangeT = Aws::String>
    void SetDedicatedTenancyManagementCidrRange(DedicatedTenancyManagementCidrRangeT&& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = std::forward<DedicatedTenancyManagementCidrRangeT>(value); }
    template<typename DedicatedTenancyManagementCidrRangeT = Aws::String>
    DescribeAccountResult& WithDedicatedTenancyManagementCidrRange(DedicatedTenancyManagementCidrRangeT&& value) { SetDedicatedTenancyManagementCidrRange(std::forward<DedicatedTenancyManagementCidrRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of linked account.</p>
     */
    inline DedicatedTenancyAccountType GetDedicatedTenancyAccountType() const { return m_dedicatedTenancyAccountType; }
    inline void SetDedicatedTenancyAccountType(DedicatedTenancyAccountType value) { m_dedicatedTenancyAccountTypeHasBeenSet = true; m_dedicatedTenancyAccountType = value; }
    inline DescribeAccountResult& WithDedicatedTenancyAccountType(DedicatedTenancyAccountType value) { SetDedicatedTenancyAccountType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text message to describe the status of BYOL.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeAccountResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DedicatedTenancySupportResultEnum m_dedicatedTenancySupport{DedicatedTenancySupportResultEnum::NOT_SET};
    bool m_dedicatedTenancySupportHasBeenSet = false;

    Aws::String m_dedicatedTenancyManagementCidrRange;
    bool m_dedicatedTenancyManagementCidrRangeHasBeenSet = false;

    DedicatedTenancyAccountType m_dedicatedTenancyAccountType{DedicatedTenancyAccountType::NOT_SET};
    bool m_dedicatedTenancyAccountTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
