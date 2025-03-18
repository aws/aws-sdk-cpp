/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/EmergencyContact.h>
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
namespace Shield
{
namespace Model
{
  class DescribeEmergencyContactSettingsResult
  {
  public:
    AWS_SHIELD_API DescribeEmergencyContactSettingsResult() = default;
    AWS_SHIELD_API DescribeEmergencyContactSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeEmergencyContactSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you if you have proactive engagement enabled, for
     * escalations to the SRT and to initiate proactive customer support.</p>
     */
    inline const Aws::Vector<EmergencyContact>& GetEmergencyContactList() const { return m_emergencyContactList; }
    template<typename EmergencyContactListT = Aws::Vector<EmergencyContact>>
    void SetEmergencyContactList(EmergencyContactListT&& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList = std::forward<EmergencyContactListT>(value); }
    template<typename EmergencyContactListT = Aws::Vector<EmergencyContact>>
    DescribeEmergencyContactSettingsResult& WithEmergencyContactList(EmergencyContactListT&& value) { SetEmergencyContactList(std::forward<EmergencyContactListT>(value)); return *this;}
    template<typename EmergencyContactListT = EmergencyContact>
    DescribeEmergencyContactSettingsResult& AddEmergencyContactList(EmergencyContactListT&& value) { m_emergencyContactListHasBeenSet = true; m_emergencyContactList.emplace_back(std::forward<EmergencyContactListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEmergencyContactSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EmergencyContact> m_emergencyContactList;
    bool m_emergencyContactListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
