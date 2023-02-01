/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/User.h>
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
namespace WorkDocs
{
namespace Model
{
  class ActivateUserResult
  {
  public:
    AWS_WORKDOCS_API ActivateUserResult();
    AWS_WORKDOCS_API ActivateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API ActivateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user information.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>The user information.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>The user information.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>The user information.</p>
     */
    inline ActivateUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>The user information.</p>
     */
    inline ActivateUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}

  private:

    User m_user;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
