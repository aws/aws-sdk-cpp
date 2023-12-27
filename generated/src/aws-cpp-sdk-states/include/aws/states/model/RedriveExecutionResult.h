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
  class RedriveExecutionResult
  {
  public:
    AWS_SFN_API RedriveExecutionResult();
    AWS_SFN_API RedriveExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API RedriveExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline const Aws::Utils::DateTime& GetRedriveDate() const{ return m_redriveDate; }

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline void SetRedriveDate(const Aws::Utils::DateTime& value) { m_redriveDate = value; }

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline void SetRedriveDate(Aws::Utils::DateTime&& value) { m_redriveDate = std::move(value); }

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline RedriveExecutionResult& WithRedriveDate(const Aws::Utils::DateTime& value) { SetRedriveDate(value); return *this;}

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline RedriveExecutionResult& WithRedriveDate(Aws::Utils::DateTime&& value) { SetRedriveDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RedriveExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RedriveExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RedriveExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_redriveDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
