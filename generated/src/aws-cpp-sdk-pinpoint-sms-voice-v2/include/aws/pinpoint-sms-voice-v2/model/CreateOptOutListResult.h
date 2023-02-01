/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
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
  class CreateOptOutListResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateOptOutListResult();
    AWS_PINPOINTSMSVOICEV2_API CreateOptOutListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API CreateOptOutListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the OptOutList.</p>
     */
    inline const Aws::String& GetOptOutListArn() const{ return m_optOutListArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the OptOutList.</p>
     */
    inline void SetOptOutListArn(const Aws::String& value) { m_optOutListArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the OptOutList.</p>
     */
    inline void SetOptOutListArn(Aws::String&& value) { m_optOutListArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the OptOutList.</p>
     */
    inline void SetOptOutListArn(const char* value) { m_optOutListArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the OptOutList.</p>
     */
    inline CreateOptOutListResult& WithOptOutListArn(const Aws::String& value) { SetOptOutListArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the OptOutList.</p>
     */
    inline CreateOptOutListResult& WithOptOutListArn(Aws::String&& value) { SetOptOutListArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the OptOutList.</p>
     */
    inline CreateOptOutListResult& WithOptOutListArn(const char* value) { SetOptOutListArn(value); return *this;}


    /**
     * <p>The name of the new OptOutList.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }

    /**
     * <p>The name of the new OptOutList.</p>
     */
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }

    /**
     * <p>The name of the new OptOutList.</p>
     */
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }

    /**
     * <p>The name of the new OptOutList.</p>
     */
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }

    /**
     * <p>The name of the new OptOutList.</p>
     */
    inline CreateOptOutListResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}

    /**
     * <p>The name of the new OptOutList.</p>
     */
    inline CreateOptOutListResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}

    /**
     * <p>The name of the new OptOutList.</p>
     */
    inline CreateOptOutListResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}


    /**
     * <p>An array of tags (key and value pairs) associated with the new
     * OptOutList.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tags (key and value pairs) associated with the new
     * OptOutList.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array of tags (key and value pairs) associated with the new
     * OptOutList.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of tags (key and value pairs) associated with the new
     * OptOutList.</p>
     */
    inline CreateOptOutListResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tags (key and value pairs) associated with the new
     * OptOutList.</p>
     */
    inline CreateOptOutListResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tags (key and value pairs) associated with the new
     * OptOutList.</p>
     */
    inline CreateOptOutListResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of tags (key and value pairs) associated with the new
     * OptOutList.</p>
     */
    inline CreateOptOutListResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline CreateOptOutListResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the pool was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline CreateOptOutListResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_optOutListArn;

    Aws::String m_optOutListName;

    Aws::Vector<Tag> m_tags;

    Aws::Utils::DateTime m_createdTimestamp;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
