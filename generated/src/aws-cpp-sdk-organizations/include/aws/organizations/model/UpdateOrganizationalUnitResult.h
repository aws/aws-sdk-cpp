/**
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
  class UpdateOrganizationalUnitResult
  {
  public:
    AWS_ORGANIZATIONS_API UpdateOrganizationalUnitResult() = default;
    AWS_ORGANIZATIONS_API UpdateOrganizationalUnitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API UpdateOrganizationalUnitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains the details about the specified OU, including its
     * new name.</p>
     */
    inline const OrganizationalUnit& GetOrganizationalUnit() const { return m_organizationalUnit; }
    template<typename OrganizationalUnitT = OrganizationalUnit>
    void SetOrganizationalUnit(OrganizationalUnitT&& value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit = std::forward<OrganizationalUnitT>(value); }
    template<typename OrganizationalUnitT = OrganizationalUnit>
    UpdateOrganizationalUnitResult& WithOrganizationalUnit(OrganizationalUnitT&& value) { SetOrganizationalUnit(std::forward<OrganizationalUnitT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateOrganizationalUnitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OrganizationalUnit m_organizationalUnit;
    bool m_organizationalUnitHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
