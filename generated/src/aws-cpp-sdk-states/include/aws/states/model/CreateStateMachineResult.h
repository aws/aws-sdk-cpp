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
  class CreateStateMachineResult
  {
  public:
    AWS_SFN_API CreateStateMachineResult();
    AWS_SFN_API CreateStateMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API CreateStateMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine.</p>
     */
    inline CreateStateMachineResult& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine.</p>
     */
    inline CreateStateMachineResult& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine.</p>
     */
    inline CreateStateMachineResult& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


    /**
     * <p>The date the state machine is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the state machine is created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the state machine is created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the state machine is created.</p>
     */
    inline CreateStateMachineResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the state machine is created.</p>
     */
    inline CreateStateMachineResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * version. If you do not set the <code>publish</code> parameter to
     * <code>true</code>, this field returns null value.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const{ return m_stateMachineVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * version. If you do not set the <code>publish</code> parameter to
     * <code>true</code>, this field returns null value.</p>
     */
    inline void SetStateMachineVersionArn(const Aws::String& value) { m_stateMachineVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * version. If you do not set the <code>publish</code> parameter to
     * <code>true</code>, this field returns null value.</p>
     */
    inline void SetStateMachineVersionArn(Aws::String&& value) { m_stateMachineVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * version. If you do not set the <code>publish</code> parameter to
     * <code>true</code>, this field returns null value.</p>
     */
    inline void SetStateMachineVersionArn(const char* value) { m_stateMachineVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * version. If you do not set the <code>publish</code> parameter to
     * <code>true</code>, this field returns null value.</p>
     */
    inline CreateStateMachineResult& WithStateMachineVersionArn(const Aws::String& value) { SetStateMachineVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * version. If you do not set the <code>publish</code> parameter to
     * <code>true</code>, this field returns null value.</p>
     */
    inline CreateStateMachineResult& WithStateMachineVersionArn(Aws::String&& value) { SetStateMachineVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the created state machine
     * version. If you do not set the <code>publish</code> parameter to
     * <code>true</code>, this field returns null value.</p>
     */
    inline CreateStateMachineResult& WithStateMachineVersionArn(const char* value) { SetStateMachineVersionArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateStateMachineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateStateMachineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateStateMachineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_stateMachineArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_stateMachineVersionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
