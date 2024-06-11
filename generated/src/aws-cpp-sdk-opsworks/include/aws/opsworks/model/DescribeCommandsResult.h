/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/Command.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeCommands</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeCommandsResult">AWS
   * API Reference</a></p>
   */
  class DescribeCommandsResult
  {
  public:
    AWS_OPSWORKS_API DescribeCommandsResult();
    AWS_OPSWORKS_API DescribeCommandsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeCommandsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Command</code> objects that describe each of the specified
     * commands.</p>
     */
    inline const Aws::Vector<Command>& GetCommands() const{ return m_commands; }
    inline void SetCommands(const Aws::Vector<Command>& value) { m_commands = value; }
    inline void SetCommands(Aws::Vector<Command>&& value) { m_commands = std::move(value); }
    inline DescribeCommandsResult& WithCommands(const Aws::Vector<Command>& value) { SetCommands(value); return *this;}
    inline DescribeCommandsResult& WithCommands(Aws::Vector<Command>&& value) { SetCommands(std::move(value)); return *this;}
    inline DescribeCommandsResult& AddCommands(const Command& value) { m_commands.push_back(value); return *this; }
    inline DescribeCommandsResult& AddCommands(Command&& value) { m_commands.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCommandsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCommandsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCommandsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Command> m_commands;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
