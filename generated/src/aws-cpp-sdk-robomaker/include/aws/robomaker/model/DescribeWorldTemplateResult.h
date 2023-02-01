/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace RoboMaker
{
namespace Model
{
  class DescribeWorldTemplateResult
  {
  public:
    AWS_ROBOMAKER_API DescribeWorldTemplateResult();
    AWS_ROBOMAKER_API DescribeWorldTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API DescribeWorldTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the world template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the world template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world template.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the world template.</p>
     */
    inline DescribeWorldTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world template.</p>
     */
    inline DescribeWorldTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the world template.</p>
     */
    inline DescribeWorldTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline DescribeWorldTemplateResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline DescribeWorldTemplateResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline DescribeWorldTemplateResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The name of the world template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the world template.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the world template.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the world template.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the world template.</p>
     */
    inline DescribeWorldTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the world template.</p>
     */
    inline DescribeWorldTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the world template.</p>
     */
    inline DescribeWorldTemplateResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the world template was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world template was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world template was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the world template was
     * created.</p>
     */
    inline DescribeWorldTemplateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the world template was
     * created.</p>
     */
    inline DescribeWorldTemplateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the world template was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world template was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world template was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the world template was last
     * updated.</p>
     */
    inline DescribeWorldTemplateResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the world template was last
     * updated.</p>
     */
    inline DescribeWorldTemplateResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline DescribeWorldTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The version of the world template that you're using.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the world template that you're using.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the world template that you're using.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the world template that you're using.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the world template that you're using.</p>
     */
    inline DescribeWorldTemplateResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the world template that you're using.</p>
     */
    inline DescribeWorldTemplateResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the world template that you're using.</p>
     */
    inline DescribeWorldTemplateResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_clientRequestToken;

    Aws::String m_name;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_version;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
