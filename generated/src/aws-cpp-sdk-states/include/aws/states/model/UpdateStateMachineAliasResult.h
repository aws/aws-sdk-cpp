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
  class UpdateStateMachineAliasResult
  {
  public:
    AWS_SFN_API UpdateStateMachineAliasResult();
    AWS_SFN_API UpdateStateMachineAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API UpdateStateMachineAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time the state machine alias was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The date and time the state machine alias was updated.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDate = value; }

    /**
     * <p>The date and time the state machine alias was updated.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDate = std::move(value); }

    /**
     * <p>The date and time the state machine alias was updated.</p>
     */
    inline UpdateStateMachineAliasResult& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The date and time the state machine alias was updated.</p>
     */
    inline UpdateStateMachineAliasResult& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateStateMachineAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateStateMachineAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateStateMachineAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_updateDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
