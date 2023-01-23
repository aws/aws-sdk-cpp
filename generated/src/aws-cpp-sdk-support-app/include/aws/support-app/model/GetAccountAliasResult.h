/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
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
namespace SupportApp
{
namespace Model
{
  class GetAccountAliasResult
  {
  public:
    AWS_SUPPORTAPP_API GetAccountAliasResult();
    AWS_SUPPORTAPP_API GetAccountAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API GetAccountAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountAlias() const{ return m_accountAlias; }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline void SetAccountAlias(const Aws::String& value) { m_accountAlias = value; }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline void SetAccountAlias(Aws::String&& value) { m_accountAlias = std::move(value); }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline void SetAccountAlias(const char* value) { m_accountAlias.assign(value); }

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline GetAccountAliasResult& WithAccountAlias(const Aws::String& value) { SetAccountAlias(value); return *this;}

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline GetAccountAliasResult& WithAccountAlias(Aws::String&& value) { SetAccountAlias(std::move(value)); return *this;}

    /**
     * <p>An alias or short name for an Amazon Web Services account.</p>
     */
    inline GetAccountAliasResult& WithAccountAlias(const char* value) { SetAccountAlias(value); return *this;}

  private:

    Aws::String m_accountAlias;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
