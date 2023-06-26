/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/AccessStatus.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class GetAWSOrganizationsAccessStatusResult
  {
  public:
    AWS_SERVICECATALOG_API GetAWSOrganizationsAccessStatusResult();
    AWS_SERVICECATALOG_API GetAWSOrganizationsAccessStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API GetAWSOrganizationsAccessStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline const AccessStatus& GetAccessStatus() const{ return m_accessStatus; }

    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline void SetAccessStatus(const AccessStatus& value) { m_accessStatus = value; }

    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline void SetAccessStatus(AccessStatus&& value) { m_accessStatus = std::move(value); }

    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline GetAWSOrganizationsAccessStatusResult& WithAccessStatus(const AccessStatus& value) { SetAccessStatus(value); return *this;}

    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline GetAWSOrganizationsAccessStatusResult& WithAccessStatus(AccessStatus&& value) { SetAccessStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAWSOrganizationsAccessStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAWSOrganizationsAccessStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAWSOrganizationsAccessStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccessStatus m_accessStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
