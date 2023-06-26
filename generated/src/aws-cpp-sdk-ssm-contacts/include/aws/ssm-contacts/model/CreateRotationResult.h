/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
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
namespace SSMContacts
{
namespace Model
{
  class CreateRotationResult
  {
  public:
    AWS_SSMCONTACTS_API CreateRotationResult();
    AWS_SSMCONTACTS_API CreateRotationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API CreateRotationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation.</p>
     */
    inline const Aws::String& GetRotationArn() const{ return m_rotationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation.</p>
     */
    inline void SetRotationArn(const Aws::String& value) { m_rotationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation.</p>
     */
    inline void SetRotationArn(Aws::String&& value) { m_rotationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation.</p>
     */
    inline void SetRotationArn(const char* value) { m_rotationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation.</p>
     */
    inline CreateRotationResult& WithRotationArn(const Aws::String& value) { SetRotationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation.</p>
     */
    inline CreateRotationResult& WithRotationArn(Aws::String&& value) { SetRotationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation.</p>
     */
    inline CreateRotationResult& WithRotationArn(const char* value) { SetRotationArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRotationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRotationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRotationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_rotationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
