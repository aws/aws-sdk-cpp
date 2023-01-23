/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pipes/model/PipeState.h>
#include <aws/pipes/model/RequestedPipeState.h>
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
namespace Pipes
{
namespace Model
{
  class UpdatePipeResult
  {
  public:
    AWS_PIPES_API UpdatePipeResult();
    AWS_PIPES_API UpdatePipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PIPES_API UpdatePipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the pipe.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline UpdatePipeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline UpdatePipeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline UpdatePipeResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time the pipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the pipe was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the pipe was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the pipe was created.</p>
     */
    inline UpdatePipeResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the pipe was created.</p>
     */
    inline UpdatePipeResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The state the pipe is in.</p>
     */
    inline const PipeState& GetCurrentState() const{ return m_currentState; }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline void SetCurrentState(const PipeState& value) { m_currentState = value; }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline void SetCurrentState(PipeState&& value) { m_currentState = std::move(value); }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline UpdatePipeResult& WithCurrentState(const PipeState& value) { SetCurrentState(value); return *this;}

    /**
     * <p>The state the pipe is in.</p>
     */
    inline UpdatePipeResult& WithCurrentState(PipeState&& value) { SetCurrentState(std::move(value)); return *this;}


    /**
     * <p>The state the pipe should be in.</p>
     */
    inline const RequestedPipeState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline void SetDesiredState(const RequestedPipeState& value) { m_desiredState = value; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline void SetDesiredState(RequestedPipeState&& value) { m_desiredState = std::move(value); }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline UpdatePipeResult& WithDesiredState(const RequestedPipeState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline UpdatePipeResult& WithDesiredState(RequestedPipeState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdatePipeResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdatePipeResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the pipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the pipe.</p>
     */
    inline UpdatePipeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipe.</p>
     */
    inline UpdatePipeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipe.</p>
     */
    inline UpdatePipeResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    PipeState m_currentState;

    RequestedPipeState m_desiredState;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_name;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
