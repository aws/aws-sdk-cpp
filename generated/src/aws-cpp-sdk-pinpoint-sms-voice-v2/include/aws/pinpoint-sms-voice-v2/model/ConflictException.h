/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/ConflictExceptionReason.h>
#include <aws/pinpoint-sms-voice-v2/model/ResourceType.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Your request has conflicting operations. This can occur if you're trying to
   * perform more than one operation on the same resource at the same time or it
   * could be that the requested action isn't valid for the current state or
   * configuration of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ConflictException();
    AWS_PINPOINTSMSVOICEV2_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason for the exception.</p>
     */
    inline const ConflictExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline void SetReason(const ConflictExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline void SetReason(ConflictExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the exception.</p>
     */
    inline ConflictException& WithReason(const ConflictExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the exception.</p>
     */
    inline ConflictException& WithReason(ConflictExceptionReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>The type of resource that caused the exception.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource that caused the exception.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource that caused the exception.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource that caused the exception.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource that caused the exception.</p>
     */
    inline ConflictException& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource that caused the exception.</p>
     */
    inline ConflictException& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the request.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier of the request.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the request.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier of the request.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The unique identifier of the request.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique identifier of the request.</p>
     */
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier of the request.</p>
     */
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the request.</p>
     */
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ConflictExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
