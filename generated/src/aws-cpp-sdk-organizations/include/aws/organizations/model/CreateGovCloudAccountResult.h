/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/CreateAccountStatus.h>
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
namespace Organizations
{
namespace Model
{
  class CreateGovCloudAccountResult
  {
  public:
    AWS_ORGANIZATIONS_API CreateGovCloudAccountResult();
    AWS_ORGANIZATIONS_API CreateGovCloudAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API CreateGovCloudAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CreateAccountStatus& GetCreateAccountStatus() const{ return m_createAccountStatus; }

    
    inline void SetCreateAccountStatus(const CreateAccountStatus& value) { m_createAccountStatus = value; }

    
    inline void SetCreateAccountStatus(CreateAccountStatus&& value) { m_createAccountStatus = std::move(value); }

    
    inline CreateGovCloudAccountResult& WithCreateAccountStatus(const CreateAccountStatus& value) { SetCreateAccountStatus(value); return *this;}

    
    inline CreateGovCloudAccountResult& WithCreateAccountStatus(CreateAccountStatus&& value) { SetCreateAccountStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGovCloudAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGovCloudAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGovCloudAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CreateAccountStatus m_createAccountStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
