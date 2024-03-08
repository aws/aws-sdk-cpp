/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ImportJobData.h>
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
namespace QConnect
{
namespace Model
{
  class StartImportJobResult
  {
  public:
    AWS_QCONNECT_API StartImportJobResult();
    AWS_QCONNECT_API StartImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API StartImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The import job.</p>
     */
    inline const ImportJobData& GetImportJob() const{ return m_importJob; }

    /**
     * <p>The import job.</p>
     */
    inline void SetImportJob(const ImportJobData& value) { m_importJob = value; }

    /**
     * <p>The import job.</p>
     */
    inline void SetImportJob(ImportJobData&& value) { m_importJob = std::move(value); }

    /**
     * <p>The import job.</p>
     */
    inline StartImportJobResult& WithImportJob(const ImportJobData& value) { SetImportJob(value); return *this;}

    /**
     * <p>The import job.</p>
     */
    inline StartImportJobResult& WithImportJob(ImportJobData&& value) { SetImportJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ImportJobData m_importJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
