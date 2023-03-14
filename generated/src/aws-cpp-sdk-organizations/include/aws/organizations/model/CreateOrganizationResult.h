/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Organization.h>
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
  class CreateOrganizationResult
  {
  public:
    AWS_ORGANIZATIONS_API CreateOrganizationResult();
    AWS_ORGANIZATIONS_API CreateOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API CreateOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains details about the newly created organization.</p>
     */
    inline const Organization& GetOrganization() const{ return m_organization; }

    /**
     * <p>A structure that contains details about the newly created organization.</p>
     */
    inline void SetOrganization(const Organization& value) { m_organization = value; }

    /**
     * <p>A structure that contains details about the newly created organization.</p>
     */
    inline void SetOrganization(Organization&& value) { m_organization = std::move(value); }

    /**
     * <p>A structure that contains details about the newly created organization.</p>
     */
    inline CreateOrganizationResult& WithOrganization(const Organization& value) { SetOrganization(value); return *this;}

    /**
     * <p>A structure that contains details about the newly created organization.</p>
     */
    inline CreateOrganizationResult& WithOrganization(Organization&& value) { SetOrganization(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Organization m_organization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
