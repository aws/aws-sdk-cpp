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
  class UpdateStateMachineResult
  {
  public:
    AWS_SFN_API UpdateStateMachineResult();
    AWS_SFN_API UpdateStateMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API UpdateStateMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDate = value; }

    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDate = std::move(value); }

    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline UpdateStateMachineResult& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The date and time the state machine was updated.</p>
     */
    inline UpdateStateMachineResult& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The revision identifier for the updated state machine.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision identifier for the updated state machine.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>The revision identifier for the updated state machine.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>The revision identifier for the updated state machine.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>The revision identifier for the updated state machine.</p>
     */
    inline UpdateStateMachineResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision identifier for the updated state machine.</p>
     */
    inline UpdateStateMachineResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision identifier for the updated state machine.</p>
     */
    inline UpdateStateMachineResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the published state machine version.</p>
     * <p>If the <code>publish</code> parameter isn't set to <code>true</code>, this
     * field returns null.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const{ return m_stateMachineVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the published state machine version.</p>
     * <p>If the <code>publish</code> parameter isn't set to <code>true</code>, this
     * field returns null.</p>
     */
    inline void SetStateMachineVersionArn(const Aws::String& value) { m_stateMachineVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the published state machine version.</p>
     * <p>If the <code>publish</code> parameter isn't set to <code>true</code>, this
     * field returns null.</p>
     */
    inline void SetStateMachineVersionArn(Aws::String&& value) { m_stateMachineVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the published state machine version.</p>
     * <p>If the <code>publish</code> parameter isn't set to <code>true</code>, this
     * field returns null.</p>
     */
    inline void SetStateMachineVersionArn(const char* value) { m_stateMachineVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the published state machine version.</p>
     * <p>If the <code>publish</code> parameter isn't set to <code>true</code>, this
     * field returns null.</p>
     */
    inline UpdateStateMachineResult& WithStateMachineVersionArn(const Aws::String& value) { SetStateMachineVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the published state machine version.</p>
     * <p>If the <code>publish</code> parameter isn't set to <code>true</code>, this
     * field returns null.</p>
     */
    inline UpdateStateMachineResult& WithStateMachineVersionArn(Aws::String&& value) { SetStateMachineVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the published state machine version.</p>
     * <p>If the <code>publish</code> parameter isn't set to <code>true</code>, this
     * field returns null.</p>
     */
    inline UpdateStateMachineResult& WithStateMachineVersionArn(const char* value) { SetStateMachineVersionArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateStateMachineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateStateMachineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateStateMachineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_updateDate;

    Aws::String m_revisionId;

    Aws::String m_stateMachineVersionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
