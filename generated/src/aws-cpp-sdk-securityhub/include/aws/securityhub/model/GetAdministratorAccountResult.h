/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/Invitation.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetAdministratorAccountResult
  {
  public:
    AWS_SECURITYHUB_API GetAdministratorAccountResult();
    AWS_SECURITYHUB_API GetAdministratorAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetAdministratorAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Invitation& GetAdministrator() const{ return m_administrator; }

    
    inline void SetAdministrator(const Invitation& value) { m_administrator = value; }

    
    inline void SetAdministrator(Invitation&& value) { m_administrator = std::move(value); }

    
    inline GetAdministratorAccountResult& WithAdministrator(const Invitation& value) { SetAdministrator(value); return *this;}

    
    inline GetAdministratorAccountResult& WithAdministrator(Invitation&& value) { SetAdministrator(std::move(value)); return *this;}

  private:

    Invitation m_administrator;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
