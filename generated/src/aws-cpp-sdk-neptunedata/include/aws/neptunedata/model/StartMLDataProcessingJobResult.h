/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace neptunedata
{
namespace Model
{
  class StartMLDataProcessingJobResult
  {
  public:
    AWS_NEPTUNEDATA_API StartMLDataProcessingJobResult();
    AWS_NEPTUNEDATA_API StartMLDataProcessingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API StartMLDataProcessingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the new data processing job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the new data processing job.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique ID of the new data processing job.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique ID of the new data processing job.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique ID of the new data processing job.</p>
     */
    inline StartMLDataProcessingJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the new data processing job.</p>
     */
    inline StartMLDataProcessingJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the new data processing job.</p>
     */
    inline StartMLDataProcessingJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN of the data processing job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the data processing job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the data processing job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the data processing job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the data processing job.</p>
     */
    inline StartMLDataProcessingJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the data processing job.</p>
     */
    inline StartMLDataProcessingJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the data processing job.</p>
     */
    inline StartMLDataProcessingJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time it took to create the new processing job, in milliseconds.</p>
     */
    inline long long GetCreationTimeInMillis() const{ return m_creationTimeInMillis; }

    /**
     * <p>The time it took to create the new processing job, in milliseconds.</p>
     */
    inline void SetCreationTimeInMillis(long long value) { m_creationTimeInMillis = value; }

    /**
     * <p>The time it took to create the new processing job, in milliseconds.</p>
     */
    inline StartMLDataProcessingJobResult& WithCreationTimeInMillis(long long value) { SetCreationTimeInMillis(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartMLDataProcessingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartMLDataProcessingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartMLDataProcessingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    long long m_creationTimeInMillis;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
