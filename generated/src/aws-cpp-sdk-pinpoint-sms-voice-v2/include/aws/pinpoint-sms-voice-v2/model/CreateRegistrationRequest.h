/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class CreateRegistrationRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRegistration"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const{ return m_registrationType; }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const Aws::String& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(Aws::String&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline void SetRegistrationType(const char* value) { m_registrationTypeHasBeenSet = true; m_registrationType.assign(value); }

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline CreateRegistrationRequest& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline CreateRegistrationRequest& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}

    /**
     * <p>The type of registration form to create. The list of <b>RegistrationTypes</b>
     * can be found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline CreateRegistrationRequest& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}


    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline CreateRegistrationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline CreateRegistrationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline CreateRegistrationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of tags (key and value pairs) to associate with the
     * registration.</p>
     */
    inline CreateRegistrationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline CreateRegistrationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline CreateRegistrationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don't specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p>
     */
    inline CreateRegistrationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
