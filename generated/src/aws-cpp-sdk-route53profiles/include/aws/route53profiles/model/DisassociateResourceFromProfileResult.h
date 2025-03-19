/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/model/ProfileResourceAssociation.h>
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
namespace Route53Profiles
{
namespace Model
{
  class DisassociateResourceFromProfileResult
  {
  public:
    AWS_ROUTE53PROFILES_API DisassociateResourceFromProfileResult() = default;
    AWS_ROUTE53PROFILES_API DisassociateResourceFromProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API DisassociateResourceFromProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the <code>DisassociateResourceFromProfile</code> request,
     * including the status of the request. </p>
     */
    inline const ProfileResourceAssociation& GetProfileResourceAssociation() const { return m_profileResourceAssociation; }
    template<typename ProfileResourceAssociationT = ProfileResourceAssociation>
    void SetProfileResourceAssociation(ProfileResourceAssociationT&& value) { m_profileResourceAssociationHasBeenSet = true; m_profileResourceAssociation = std::forward<ProfileResourceAssociationT>(value); }
    template<typename ProfileResourceAssociationT = ProfileResourceAssociation>
    DisassociateResourceFromProfileResult& WithProfileResourceAssociation(ProfileResourceAssociationT&& value) { SetProfileResourceAssociation(std::forward<ProfileResourceAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateResourceFromProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProfileResourceAssociation m_profileResourceAssociation;
    bool m_profileResourceAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
