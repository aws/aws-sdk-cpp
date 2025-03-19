/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/Route53ProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Profiles
{
namespace Model
{

  /**
   */
  class GetProfileResourceAssociationRequest : public Route53ProfilesRequest
  {
  public:
    AWS_ROUTE53PROFILES_API GetProfileResourceAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProfileResourceAssociation"; }

    AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> <p>The ID of the profile resource association that you want to get
     * information about.</p> </p>
     */
    inline const Aws::String& GetProfileResourceAssociationId() const { return m_profileResourceAssociationId; }
    inline bool ProfileResourceAssociationIdHasBeenSet() const { return m_profileResourceAssociationIdHasBeenSet; }
    template<typename ProfileResourceAssociationIdT = Aws::String>
    void SetProfileResourceAssociationId(ProfileResourceAssociationIdT&& value) { m_profileResourceAssociationIdHasBeenSet = true; m_profileResourceAssociationId = std::forward<ProfileResourceAssociationIdT>(value); }
    template<typename ProfileResourceAssociationIdT = Aws::String>
    GetProfileResourceAssociationRequest& WithProfileResourceAssociationId(ProfileResourceAssociationIdT&& value) { SetProfileResourceAssociationId(std::forward<ProfileResourceAssociationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileResourceAssociationId;
    bool m_profileResourceAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
