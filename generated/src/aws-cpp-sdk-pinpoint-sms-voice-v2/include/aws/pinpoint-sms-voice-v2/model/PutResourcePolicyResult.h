/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutResourcePolicyResult();
    AWS_PINPOINTSMSVOICEV2_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS End User Messaging SMS and Voice
     * resource attached to the resource-based policy.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline PutResourcePolicyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline PutResourcePolicyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline PutResourcePolicyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON formatted Resource Policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline PutResourcePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline PutResourcePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline PutResourcePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the resource-based policy was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline PutResourcePolicyResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline PutResourcePolicyResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;

    Aws::String m_policy;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
