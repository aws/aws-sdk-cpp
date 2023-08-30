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
  class StartMLModelTransformJobResult
  {
  public:
    AWS_NEPTUNEDATA_API StartMLModelTransformJobResult();
    AWS_NEPTUNEDATA_API StartMLModelTransformJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API StartMLModelTransformJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the new model transform job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the new model transform job.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique ID of the new model transform job.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique ID of the new model transform job.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique ID of the new model transform job.</p>
     */
    inline StartMLModelTransformJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the new model transform job.</p>
     */
    inline StartMLModelTransformJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the new model transform job.</p>
     */
    inline StartMLModelTransformJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN of the model transform job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the model transform job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the model transform job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the model transform job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the model transform job.</p>
     */
    inline StartMLModelTransformJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the model transform job.</p>
     */
    inline StartMLModelTransformJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model transform job.</p>
     */
    inline StartMLModelTransformJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The creation time of the model transform job, in milliseconds.</p>
     */
    inline long long GetCreationTimeInMillis() const{ return m_creationTimeInMillis; }

    /**
     * <p>The creation time of the model transform job, in milliseconds.</p>
     */
    inline void SetCreationTimeInMillis(long long value) { m_creationTimeInMillis = value; }

    /**
     * <p>The creation time of the model transform job, in milliseconds.</p>
     */
    inline StartMLModelTransformJobResult& WithCreationTimeInMillis(long long value) { SetCreationTimeInMillis(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartMLModelTransformJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartMLModelTransformJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartMLModelTransformJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    long long m_creationTimeInMillis;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
