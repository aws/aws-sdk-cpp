/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/Job.h>
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
namespace mgn
{
namespace Model
{
  class StartTestResult
  {
  public:
    AWS_MGN_API StartTestResult();
    AWS_MGN_API StartTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API StartTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Start Test Job response.</p>
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * <p>Start Test Job response.</p>
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * <p>Start Test Job response.</p>
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * <p>Start Test Job response.</p>
     */
    inline StartTestResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * <p>Start Test Job response.</p>
     */
    inline StartTestResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartTestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartTestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartTestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Job m_job;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
