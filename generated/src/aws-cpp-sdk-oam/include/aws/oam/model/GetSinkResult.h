/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace OAM
{
namespace Model
{
  class GetSinkResult
  {
  public:
    AWS_OAM_API GetSinkResult();
    AWS_OAM_API GetSinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OAM_API GetSinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the sink.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the sink.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the sink.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the sink.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the sink.</p>
     */
    inline GetSinkResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the sink.</p>
     */
    inline GetSinkResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the sink.</p>
     */
    inline GetSinkResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline GetSinkResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline GetSinkResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline GetSinkResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the sink.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the sink.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the sink.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the sink.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the sink.</p>
     */
    inline GetSinkResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the sink.</p>
     */
    inline GetSinkResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the sink.</p>
     */
    inline GetSinkResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the sink.</p>
     */
    inline GetSinkResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
