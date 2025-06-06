﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/VmServerAddress.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class GetServersRequest : public SMSRequest
  {
  public:
    AWS_SMS_API GetServersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServers"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetServersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 50. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server addresses.</p>
     */
    inline const Aws::Vector<VmServerAddress>& GetVmServerAddressList() const { return m_vmServerAddressList; }
    inline bool VmServerAddressListHasBeenSet() const { return m_vmServerAddressListHasBeenSet; }
    template<typename VmServerAddressListT = Aws::Vector<VmServerAddress>>
    void SetVmServerAddressList(VmServerAddressListT&& value) { m_vmServerAddressListHasBeenSet = true; m_vmServerAddressList = std::forward<VmServerAddressListT>(value); }
    template<typename VmServerAddressListT = Aws::Vector<VmServerAddress>>
    GetServersRequest& WithVmServerAddressList(VmServerAddressListT&& value) { SetVmServerAddressList(std::forward<VmServerAddressListT>(value)); return *this;}
    template<typename VmServerAddressListT = VmServerAddress>
    GetServersRequest& AddVmServerAddressList(VmServerAddressListT&& value) { m_vmServerAddressListHasBeenSet = true; m_vmServerAddressList.emplace_back(std::forward<VmServerAddressListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<VmServerAddress> m_vmServerAddressList;
    bool m_vmServerAddressListHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
