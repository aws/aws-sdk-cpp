/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{
  class StartDataSourceSyncJobResult
  {
  public:
    AWS_QBUSINESS_API StartDataSourceSyncJobResult();
    AWS_QBUSINESS_API StartDataSourceSyncJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API StartDataSourceSyncJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for a particular synchronization job.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The identifier for a particular synchronization job.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }

    /**
     * <p>The identifier for a particular synchronization job.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }

    /**
     * <p>The identifier for a particular synchronization job.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }

    /**
     * <p>The identifier for a particular synchronization job.</p>
     */
    inline StartDataSourceSyncJobResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The identifier for a particular synchronization job.</p>
     */
    inline StartDataSourceSyncJobResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a particular synchronization job.</p>
     */
    inline StartDataSourceSyncJobResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDataSourceSyncJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDataSourceSyncJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDataSourceSyncJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_executionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
