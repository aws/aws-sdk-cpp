/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/model/ProfileAssociation.h>
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
  class AssociateProfileResult
  {
  public:
    AWS_ROUTE53PROFILES_API AssociateProfileResult() = default;
    AWS_ROUTE53PROFILES_API AssociateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API AssociateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The association that you just created. The association has an ID that you
     * can use to identify it in other requests, like update and delete. </p>
     */
    inline const ProfileAssociation& GetProfileAssociation() const { return m_profileAssociation; }
    template<typename ProfileAssociationT = ProfileAssociation>
    void SetProfileAssociation(ProfileAssociationT&& value) { m_profileAssociationHasBeenSet = true; m_profileAssociation = std::forward<ProfileAssociationT>(value); }
    template<typename ProfileAssociationT = ProfileAssociation>
    AssociateProfileResult& WithProfileAssociation(ProfileAssociationT&& value) { SetProfileAssociation(std::forward<ProfileAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProfileAssociation m_profileAssociation;
    bool m_profileAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
