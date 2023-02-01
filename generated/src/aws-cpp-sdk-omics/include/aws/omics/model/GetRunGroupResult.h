/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{
  class GetRunGroupResult
  {
  public:
    AWS_OMICS_API GetRunGroupResult();
    AWS_OMICS_API GetRunGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetRunGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The group's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The group's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The group's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The group's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The group's ARN.</p>
     */
    inline GetRunGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The group's ARN.</p>
     */
    inline GetRunGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The group's ARN.</p>
     */
    inline GetRunGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the group was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the group was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the group was created.</p>
     */
    inline GetRunGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the group was created.</p>
     */
    inline GetRunGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The group's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The group's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The group's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The group's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The group's ID.</p>
     */
    inline GetRunGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The group's ID.</p>
     */
    inline GetRunGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The group's ID.</p>
     */
    inline GetRunGroupResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The group's maximum number of CPUs to use.</p>
     */
    inline int GetMaxCpus() const{ return m_maxCpus; }

    /**
     * <p>The group's maximum number of CPUs to use.</p>
     */
    inline void SetMaxCpus(int value) { m_maxCpus = value; }

    /**
     * <p>The group's maximum number of CPUs to use.</p>
     */
    inline GetRunGroupResult& WithMaxCpus(int value) { SetMaxCpus(value); return *this;}


    /**
     * <p>The group's maximum run duration.</p>
     */
    inline int GetMaxDuration() const{ return m_maxDuration; }

    /**
     * <p>The group's maximum run duration.</p>
     */
    inline void SetMaxDuration(int value) { m_maxDuration = value; }

    /**
     * <p>The group's maximum run duration.</p>
     */
    inline GetRunGroupResult& WithMaxDuration(int value) { SetMaxDuration(value); return *this;}


    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline int GetMaxRuns() const{ return m_maxRuns; }

    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline void SetMaxRuns(int value) { m_maxRuns = value; }

    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline GetRunGroupResult& WithMaxRuns(int value) { SetMaxRuns(value); return *this;}


    /**
     * <p>The group's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The group's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The group's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The group's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The group's name.</p>
     */
    inline GetRunGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The group's name.</p>
     */
    inline GetRunGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The group's name.</p>
     */
    inline GetRunGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The group's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The group's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The group's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The group's tags.</p>
     */
    inline GetRunGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_id;

    int m_maxCpus;

    int m_maxDuration;

    int m_maxRuns;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
