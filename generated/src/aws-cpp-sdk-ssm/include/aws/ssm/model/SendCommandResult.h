/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/Command.h>
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
  class SendCommandResult
  {
  public:
    AWS_SSM_API SendCommandResult();
    AWS_SSM_API SendCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API SendCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline const Command& GetCommand() const{ return m_command; }

    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline void SetCommand(const Command& value) { m_command = value; }

    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline void SetCommand(Command&& value) { m_command = std::move(value); }

    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline SendCommandResult& WithCommand(const Command& value) { SetCommand(value); return *this;}

    /**
     * <p>The request as it was received by Systems Manager. Also provides the command
     * ID which can be used future references to this request.</p>
     */
    inline SendCommandResult& WithCommand(Command&& value) { SetCommand(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SendCommandResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SendCommandResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SendCommandResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Command m_command;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
