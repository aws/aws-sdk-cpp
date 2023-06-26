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
  class CreateContactChannelResult
  {
  public:
    AWS_SSMCONTACTS_API CreateContactChannelResult();
    AWS_SSMCONTACTS_API CreateContactChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API CreateContactChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelArn() const{ return m_contactChannelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelArn(const Aws::String& value) { m_contactChannelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelArn(Aws::String&& value) { m_contactChannelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelArn(const char* value) { m_contactChannelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline CreateContactChannelResult& WithContactChannelArn(const Aws::String& value) { SetContactChannelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline CreateContactChannelResult& WithContactChannelArn(Aws::String&& value) { SetContactChannelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline CreateContactChannelResult& WithContactChannelArn(const char* value) { SetContactChannelArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateContactChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateContactChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateContactChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_contactChannelArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
