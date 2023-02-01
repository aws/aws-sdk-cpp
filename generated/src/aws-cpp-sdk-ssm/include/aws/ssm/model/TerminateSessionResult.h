/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class TerminateSessionResult
  {
  public:
    AWS_SSM_API TerminateSessionResult();
    AWS_SSM_API TerminateSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API TerminateSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the session that has been terminated.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The ID of the session that has been terminated.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The ID of the session that has been terminated.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The ID of the session that has been terminated.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The ID of the session that has been terminated.</p>
     */
    inline TerminateSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The ID of the session that has been terminated.</p>
     */
    inline TerminateSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the session that has been terminated.</p>
     */
    inline TerminateSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_sessionId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
