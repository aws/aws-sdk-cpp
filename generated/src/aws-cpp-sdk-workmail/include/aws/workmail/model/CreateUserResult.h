/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class CreateUserResult
  {
  public:
    AWS_WORKMAIL_API CreateUserResult();
    AWS_WORKMAIL_API CreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API CreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the new user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for the new user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The identifier for the new user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The identifier for the new user.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The identifier for the new user.</p>
     */
    inline CreateUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for the new user.</p>
     */
    inline CreateUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the new user.</p>
     */
    inline CreateUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_userId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
