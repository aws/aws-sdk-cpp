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
  class CreateRotationOverrideResult
  {
  public:
    AWS_SSMCONTACTS_API CreateRotationOverrideResult();
    AWS_SSMCONTACTS_API CreateRotationOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API CreateRotationOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation override.</p>
     */
    inline const Aws::String& GetRotationOverrideId() const{ return m_rotationOverrideId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation override.</p>
     */
    inline void SetRotationOverrideId(const Aws::String& value) { m_rotationOverrideId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation override.</p>
     */
    inline void SetRotationOverrideId(Aws::String&& value) { m_rotationOverrideId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation override.</p>
     */
    inline void SetRotationOverrideId(const char* value) { m_rotationOverrideId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation override.</p>
     */
    inline CreateRotationOverrideResult& WithRotationOverrideId(const Aws::String& value) { SetRotationOverrideId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation override.</p>
     */
    inline CreateRotationOverrideResult& WithRotationOverrideId(Aws::String&& value) { SetRotationOverrideId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created rotation override.</p>
     */
    inline CreateRotationOverrideResult& WithRotationOverrideId(const char* value) { SetRotationOverrideId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRotationOverrideResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRotationOverrideResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRotationOverrideResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_rotationOverrideId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
