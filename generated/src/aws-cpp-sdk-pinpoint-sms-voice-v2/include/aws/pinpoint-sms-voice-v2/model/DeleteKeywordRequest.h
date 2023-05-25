/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DeleteKeywordRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteKeywordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKeyword"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * PoolId or PoolArn. You can use <a>DescribePhoneNumbers</a> to find the values
     * for PhoneNumberId and PhoneNumberArn and <a>DescribePools</a> to find the values
     * of PoolId and PoolArn.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }

    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * PoolId or PoolArn. You can use <a>DescribePhoneNumbers</a> to find the values
     * for PhoneNumberId and PhoneNumberArn and <a>DescribePools</a> to find the values
     * of PoolId and PoolArn.</p>
     */
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }

    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * PoolId or PoolArn. You can use <a>DescribePhoneNumbers</a> to find the values
     * for PhoneNumberId and PhoneNumberArn and <a>DescribePools</a> to find the values
     * of PoolId and PoolArn.</p>
     */
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }

    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * PoolId or PoolArn. You can use <a>DescribePhoneNumbers</a> to find the values
     * for PhoneNumberId and PhoneNumberArn and <a>DescribePools</a> to find the values
     * of PoolId and PoolArn.</p>
     */
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }

    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * PoolId or PoolArn. You can use <a>DescribePhoneNumbers</a> to find the values
     * for PhoneNumberId and PhoneNumberArn and <a>DescribePools</a> to find the values
     * of PoolId and PoolArn.</p>
     */
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }

    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * PoolId or PoolArn. You can use <a>DescribePhoneNumbers</a> to find the values
     * for PhoneNumberId and PhoneNumberArn and <a>DescribePools</a> to find the values
     * of PoolId and PoolArn.</p>
     */
    inline DeleteKeywordRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}

    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * PoolId or PoolArn. You can use <a>DescribePhoneNumbers</a> to find the values
     * for PhoneNumberId and PhoneNumberArn and <a>DescribePools</a> to find the values
     * of PoolId and PoolArn.</p>
     */
    inline DeleteKeywordRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}

    /**
     * <p>The origination identity to use such as a PhoneNumberId, PhoneNumberArn,
     * PoolId or PoolArn. You can use <a>DescribePhoneNumbers</a> to find the values
     * for PhoneNumberId and PhoneNumberArn and <a>DescribePools</a> to find the values
     * of PoolId and PoolArn.</p>
     */
    inline DeleteKeywordRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}


    /**
     * <p>The keyword to delete.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * <p>The keyword to delete.</p>
     */
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }

    /**
     * <p>The keyword to delete.</p>
     */
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }

    /**
     * <p>The keyword to delete.</p>
     */
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }

    /**
     * <p>The keyword to delete.</p>
     */
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }

    /**
     * <p>The keyword to delete.</p>
     */
    inline DeleteKeywordRequest& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * <p>The keyword to delete.</p>
     */
    inline DeleteKeywordRequest& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * <p>The keyword to delete.</p>
     */
    inline DeleteKeywordRequest& WithKeyword(const char* value) { SetKeyword(value); return *this;}

  private:

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
