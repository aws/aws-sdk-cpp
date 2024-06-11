﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/OrganizationalUnit.h>
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
  class DescribeOrganizationalUnitResult
  {
  public:
    AWS_ORGANIZATIONS_API DescribeOrganizationalUnitResult();
    AWS_ORGANIZATIONS_API DescribeOrganizationalUnitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeOrganizationalUnitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains details about the specified OU.</p>
     */
    inline const OrganizationalUnit& GetOrganizationalUnit() const{ return m_organizationalUnit; }
    inline void SetOrganizationalUnit(const OrganizationalUnit& value) { m_organizationalUnit = value; }
    inline void SetOrganizationalUnit(OrganizationalUnit&& value) { m_organizationalUnit = std::move(value); }
    inline DescribeOrganizationalUnitResult& WithOrganizationalUnit(const OrganizationalUnit& value) { SetOrganizationalUnit(value); return *this;}
    inline DescribeOrganizationalUnitResult& WithOrganizationalUnit(OrganizationalUnit&& value) { SetOrganizationalUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOrganizationalUnitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOrganizationalUnitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOrganizationalUnitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    OrganizationalUnit m_organizationalUnit;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
