/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/OrganizationalUnit.h>
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
  class UpdateOrganizationalUnitResult
  {
  public:
    AWS_ORGANIZATIONS_API UpdateOrganizationalUnitResult();
    AWS_ORGANIZATIONS_API UpdateOrganizationalUnitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API UpdateOrganizationalUnitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the details about the specified OU, including its
     * new name.</p>
     */
    inline const OrganizationalUnit& GetOrganizationalUnit() const{ return m_organizationalUnit; }

    /**
     * <p>A structure that contains the details about the specified OU, including its
     * new name.</p>
     */
    inline void SetOrganizationalUnit(const OrganizationalUnit& value) { m_organizationalUnit = value; }

    /**
     * <p>A structure that contains the details about the specified OU, including its
     * new name.</p>
     */
    inline void SetOrganizationalUnit(OrganizationalUnit&& value) { m_organizationalUnit = std::move(value); }

    /**
     * <p>A structure that contains the details about the specified OU, including its
     * new name.</p>
     */
    inline UpdateOrganizationalUnitResult& WithOrganizationalUnit(const OrganizationalUnit& value) { SetOrganizationalUnit(value); return *this;}

    /**
     * <p>A structure that contains the details about the specified OU, including its
     * new name.</p>
     */
    inline UpdateOrganizationalUnitResult& WithOrganizationalUnit(OrganizationalUnit&& value) { SetOrganizationalUnit(std::move(value)); return *this;}

  private:

    OrganizationalUnit m_organizationalUnit;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
