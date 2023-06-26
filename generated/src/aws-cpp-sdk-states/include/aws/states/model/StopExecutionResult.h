/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace SFN
{
namespace Model
{
  class StopExecutionResult
  {
  public:
    AWS_SFN_API StopExecutionResult();
    AWS_SFN_API StopExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API StopExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date the execution is stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const{ return m_stopDate; }

    /**
     * <p>The date the execution is stopped.</p>
     */
    inline void SetStopDate(const Aws::Utils::DateTime& value) { m_stopDate = value; }

    /**
     * <p>The date the execution is stopped.</p>
     */
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDate = std::move(value); }

    /**
     * <p>The date the execution is stopped.</p>
     */
    inline StopExecutionResult& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}

    /**
     * <p>The date the execution is stopped.</p>
     */
    inline StopExecutionResult& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_stopDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
