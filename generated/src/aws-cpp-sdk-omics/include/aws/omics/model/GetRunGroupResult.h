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


    ///@{
    /**
     * <p>The group's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetRunGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetRunGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetRunGroupResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetRunGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetRunGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetRunGroupResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetRunGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetRunGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetRunGroupResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group's maximum number of CPUs to use.</p>
     */
    inline int GetMaxCpus() const{ return m_maxCpus; }
    inline void SetMaxCpus(int value) { m_maxCpus = value; }
    inline GetRunGroupResult& WithMaxCpus(int value) { SetMaxCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline int GetMaxRuns() const{ return m_maxRuns; }
    inline void SetMaxRuns(int value) { m_maxRuns = value; }
    inline GetRunGroupResult& WithMaxRuns(int value) { SetMaxRuns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group's maximum run time in minutes.</p>
     */
    inline int GetMaxDuration() const{ return m_maxDuration; }
    inline void SetMaxDuration(int value) { m_maxDuration = value; }
    inline GetRunGroupResult& WithMaxDuration(int value) { SetMaxDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetRunGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetRunGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetRunGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetRunGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetRunGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetRunGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRunGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRunGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRunGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRunGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRunGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum GPUs that can be used by a run group.</p>
     */
    inline int GetMaxGpus() const{ return m_maxGpus; }
    inline void SetMaxGpus(int value) { m_maxGpus = value; }
    inline GetRunGroupResult& WithMaxGpus(int value) { SetMaxGpus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRunGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRunGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRunGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_name;

    int m_maxCpus;

    int m_maxRuns;

    int m_maxDuration;

    Aws::Utils::DateTime m_creationTime;

    Aws::Map<Aws::String, Aws::String> m_tags;

    int m_maxGpus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
