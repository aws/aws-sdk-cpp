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
  class DescribeWorldResult
  {
  public:
    AWS_ROBOMAKER_API DescribeWorldResult();
    AWS_ROBOMAKER_API DescribeWorldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API DescribeWorldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (arn) of the world.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (arn) of the world.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world.</p>
     */
    inline DescribeWorldResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world.</p>
     */
    inline DescribeWorldResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world.</p>
     */
    inline DescribeWorldResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (arn) of the world generation job that generated the
     * world.</p>
     */
    inline const Aws::String& GetGenerationJob() const{ return m_generationJob; }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job that generated the
     * world.</p>
     */
    inline void SetGenerationJob(const Aws::String& value) { m_generationJob = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job that generated the
     * world.</p>
     */
    inline void SetGenerationJob(Aws::String&& value) { m_generationJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job that generated the
     * world.</p>
     */
    inline void SetGenerationJob(const char* value) { m_generationJob.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job that generated the
     * world.</p>
     */
    inline DescribeWorldResult& WithGenerationJob(const Aws::String& value) { SetGenerationJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job that generated the
     * world.</p>
     */
    inline DescribeWorldResult& WithGenerationJob(Aws::String&& value) { SetGenerationJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world generation job that generated the
     * world.</p>
     */
    inline DescribeWorldResult& WithGenerationJob(const char* value) { SetGenerationJob(value); return *this;}


    /**
     * <p>The world template.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The world template.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_template = value; }

    /**
     * <p>The world template.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_template = std::move(value); }

    /**
     * <p>The world template.</p>
     */
    inline void SetTemplate(const char* value) { m_template.assign(value); }

    /**
     * <p>The world template.</p>
     */
    inline DescribeWorldResult& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The world template.</p>
     */
    inline DescribeWorldResult& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The world template.</p>
     */
    inline DescribeWorldResult& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline DescribeWorldResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline DescribeWorldResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline DescribeWorldResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Returns the JSON formatted string that describes the contents of your
     * world.</p>
     */
    inline const Aws::String& GetWorldDescriptionBody() const{ return m_worldDescriptionBody; }

    /**
     * <p>Returns the JSON formatted string that describes the contents of your
     * world.</p>
     */
    inline void SetWorldDescriptionBody(const Aws::String& value) { m_worldDescriptionBody = value; }

    /**
     * <p>Returns the JSON formatted string that describes the contents of your
     * world.</p>
     */
    inline void SetWorldDescriptionBody(Aws::String&& value) { m_worldDescriptionBody = std::move(value); }

    /**
     * <p>Returns the JSON formatted string that describes the contents of your
     * world.</p>
     */
    inline void SetWorldDescriptionBody(const char* value) { m_worldDescriptionBody.assign(value); }

    /**
     * <p>Returns the JSON formatted string that describes the contents of your
     * world.</p>
     */
    inline DescribeWorldResult& WithWorldDescriptionBody(const Aws::String& value) { SetWorldDescriptionBody(value); return *this;}

    /**
     * <p>Returns the JSON formatted string that describes the contents of your
     * world.</p>
     */
    inline DescribeWorldResult& WithWorldDescriptionBody(Aws::String&& value) { SetWorldDescriptionBody(std::move(value)); return *this;}

    /**
     * <p>Returns the JSON formatted string that describes the contents of your
     * world.</p>
     */
    inline DescribeWorldResult& WithWorldDescriptionBody(const char* value) { SetWorldDescriptionBody(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_generationJob;

    Aws::String m_template;

    Aws::Utils::DateTime m_createdAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_worldDescriptionBody;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
