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
  class PublishStateMachineVersionResult
  {
  public:
    AWS_SFN_API PublishStateMachineVersionResult();
    AWS_SFN_API PublishStateMachineVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API PublishStateMachineVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the version was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the version was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the version was created.</p>
     */
    inline PublishStateMachineVersionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the version was created.</p>
     */
    inline PublishStateMachineVersionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) (ARN) that identifies the state machine
     * version.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const{ return m_stateMachineVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) (ARN) that identifies the state machine
     * version.</p>
     */
    inline void SetStateMachineVersionArn(const Aws::String& value) { m_stateMachineVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) (ARN) that identifies the state machine
     * version.</p>
     */
    inline void SetStateMachineVersionArn(Aws::String&& value) { m_stateMachineVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) (ARN) that identifies the state machine
     * version.</p>
     */
    inline void SetStateMachineVersionArn(const char* value) { m_stateMachineVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) (ARN) that identifies the state machine
     * version.</p>
     */
    inline PublishStateMachineVersionResult& WithStateMachineVersionArn(const Aws::String& value) { SetStateMachineVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) (ARN) that identifies the state machine
     * version.</p>
     */
    inline PublishStateMachineVersionResult& WithStateMachineVersionArn(Aws::String&& value) { SetStateMachineVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) (ARN) that identifies the state machine
     * version.</p>
     */
    inline PublishStateMachineVersionResult& WithStateMachineVersionArn(const char* value) { SetStateMachineVersionArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PublishStateMachineVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PublishStateMachineVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PublishStateMachineVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_stateMachineVersionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
