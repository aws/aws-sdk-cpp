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
  class CancelMLModelTransformJobResult
  {
  public:
    AWS_NEPTUNEDATA_API CancelMLModelTransformJobResult();
    AWS_NEPTUNEDATA_API CancelMLModelTransformJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API CancelMLModelTransformJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>the status of the cancelation.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>the status of the cancelation.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>the status of the cancelation.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>the status of the cancelation.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>the status of the cancelation.</p>
     */
    inline CancelMLModelTransformJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>the status of the cancelation.</p>
     */
    inline CancelMLModelTransformJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>the status of the cancelation.</p>
     */
    inline CancelMLModelTransformJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelMLModelTransformJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelMLModelTransformJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelMLModelTransformJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
