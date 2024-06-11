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


    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeWorldResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeWorldResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeWorldResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world generation job that generated the
     * world.</p>
     */
    inline const Aws::String& GetGenerationJob() const{ return m_generationJob; }
    inline void SetGenerationJob(const Aws::String& value) { m_generationJob = value; }
    inline void SetGenerationJob(Aws::String&& value) { m_generationJob = std::move(value); }
    inline void SetGenerationJob(const char* value) { m_generationJob.assign(value); }
    inline DescribeWorldResult& WithGenerationJob(const Aws::String& value) { SetGenerationJob(value); return *this;}
    inline DescribeWorldResult& WithGenerationJob(Aws::String&& value) { SetGenerationJob(std::move(value)); return *this;}
    inline DescribeWorldResult& WithGenerationJob(const char* value) { SetGenerationJob(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The world template.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }
    inline void SetTemplate(const Aws::String& value) { m_template = value; }
    inline void SetTemplate(Aws::String&& value) { m_template = std::move(value); }
    inline void SetTemplate(const char* value) { m_template.assign(value); }
    inline DescribeWorldResult& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}
    inline DescribeWorldResult& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}
    inline DescribeWorldResult& WithTemplate(const char* value) { SetTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the world was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeWorldResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeWorldResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * world.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeWorldResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeWorldResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeWorldResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeWorldResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeWorldResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeWorldResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeWorldResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeWorldResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeWorldResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the JSON formatted string that describes the contents of your
     * world.</p>
     */
    inline const Aws::String& GetWorldDescriptionBody() const{ return m_worldDescriptionBody; }
    inline void SetWorldDescriptionBody(const Aws::String& value) { m_worldDescriptionBody = value; }
    inline void SetWorldDescriptionBody(Aws::String&& value) { m_worldDescriptionBody = std::move(value); }
    inline void SetWorldDescriptionBody(const char* value) { m_worldDescriptionBody.assign(value); }
    inline DescribeWorldResult& WithWorldDescriptionBody(const Aws::String& value) { SetWorldDescriptionBody(value); return *this;}
    inline DescribeWorldResult& WithWorldDescriptionBody(Aws::String&& value) { SetWorldDescriptionBody(std::move(value)); return *this;}
    inline DescribeWorldResult& WithWorldDescriptionBody(const char* value) { SetWorldDescriptionBody(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorldResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorldResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorldResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_generationJob;

    Aws::String m_template;

    Aws::Utils::DateTime m_createdAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_worldDescriptionBody;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
