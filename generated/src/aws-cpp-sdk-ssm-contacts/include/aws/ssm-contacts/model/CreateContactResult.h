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
  class CreateContactResult
  {
  public:
    AWS_SSMCONTACTS_API CreateContactResult();
    AWS_SSMCONTACTS_API CreateContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API CreateContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the created contact or escalation plan.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created contact or escalation plan.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created contact or escalation plan.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created contact or escalation plan.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created contact or escalation plan.</p>
     */
    inline CreateContactResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created contact or escalation plan.</p>
     */
    inline CreateContactResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created contact or escalation plan.</p>
     */
    inline CreateContactResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}

  private:

    Aws::String m_contactArn;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
