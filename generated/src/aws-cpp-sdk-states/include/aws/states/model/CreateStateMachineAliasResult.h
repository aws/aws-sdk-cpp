/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateStateMachineAliasResult
  {
  public:
    AWS_SFN_API CreateStateMachineAliasResult();
    AWS_SFN_API CreateStateMachineAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API CreateStateMachineAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * alias.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const{ return m_stateMachineAliasArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * alias.</p>
     */
    inline void SetStateMachineAliasArn(const Aws::String& value) { m_stateMachineAliasArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * alias.</p>
     */
    inline void SetStateMachineAliasArn(Aws::String&& value) { m_stateMachineAliasArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * alias.</p>
     */
    inline void SetStateMachineAliasArn(const char* value) { m_stateMachineAliasArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * alias.</p>
     */
    inline CreateStateMachineAliasResult& WithStateMachineAliasArn(const Aws::String& value) { SetStateMachineAliasArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * alias.</p>
     */
    inline CreateStateMachineAliasResult& WithStateMachineAliasArn(Aws::String&& value) { SetStateMachineAliasArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * alias.</p>
     */
    inline CreateStateMachineAliasResult& WithStateMachineAliasArn(const char* value) { SetStateMachineAliasArn(value); return *this;}


    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline CreateStateMachineAliasResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the state machine alias was created.</p>
     */
    inline CreateStateMachineAliasResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateStateMachineAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateStateMachineAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateStateMachineAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_stateMachineAliasArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
