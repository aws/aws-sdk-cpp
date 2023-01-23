/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SHIELD_API DescribeEmergencyContactSettingsResult();
    AWS_SHIELD_API DescribeEmergencyContactSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeEmergencyContactSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you if you have proactive engagement enabled, for
     * escalations to the SRT and to initiate proactive customer support.</p>
     */
    inline const Aws::Vector<EmergencyContact>& GetEmergencyContactList() const{ return m_emergencyContactList; }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you if you have proactive engagement enabled, for
     * escalations to the SRT and to initiate proactive customer support.</p>
     */
    inline void SetEmergencyContactList(const Aws::Vector<EmergencyContact>& value) { m_emergencyContactList = value; }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you if you have proactive engagement enabled, for
     * escalations to the SRT and to initiate proactive customer support.</p>
     */
    inline void SetEmergencyContactList(Aws::Vector<EmergencyContact>&& value) { m_emergencyContactList = std::move(value); }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you if you have proactive engagement enabled, for
     * escalations to the SRT and to initiate proactive customer support.</p>
     */
    inline DescribeEmergencyContactSettingsResult& WithEmergencyContactList(const Aws::Vector<EmergencyContact>& value) { SetEmergencyContactList(value); return *this;}

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you if you have proactive engagement enabled, for
     * escalations to the SRT and to initiate proactive customer support.</p>
     */
    inline DescribeEmergencyContactSettingsResult& WithEmergencyContactList(Aws::Vector<EmergencyContact>&& value) { SetEmergencyContactList(std::move(value)); return *this;}

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you if you have proactive engagement enabled, for
     * escalations to the SRT and to initiate proactive customer support.</p>
     */
    inline DescribeEmergencyContactSettingsResult& AddEmergencyContactList(const EmergencyContact& value) { m_emergencyContactList.push_back(value); return *this; }

    /**
     * <p>A list of email addresses and phone numbers that the Shield Response Team
     * (SRT) can use to contact you if you have proactive engagement enabled, for
     * escalations to the SRT and to initiate proactive customer support.</p>
     */
    inline DescribeEmergencyContactSettingsResult& AddEmergencyContactList(EmergencyContact&& value) { m_emergencyContactList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EmergencyContact> m_emergencyContactList;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
