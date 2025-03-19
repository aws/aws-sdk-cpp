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
  class GetProfileAssociationRequest : public Route53ProfilesRequest
  {
  public:
    AWS_ROUTE53PROFILES_API GetProfileAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProfileAssociation"; }

    AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier of the association you want to get information about. </p>
     */
    inline const Aws::String& GetProfileAssociationId() const { return m_profileAssociationId; }
    inline bool ProfileAssociationIdHasBeenSet() const { return m_profileAssociationIdHasBeenSet; }
    template<typename ProfileAssociationIdT = Aws::String>
    void SetProfileAssociationId(ProfileAssociationIdT&& value) { m_profileAssociationIdHasBeenSet = true; m_profileAssociationId = std::forward<ProfileAssociationIdT>(value); }
    template<typename ProfileAssociationIdT = Aws::String>
    GetProfileAssociationRequest& WithProfileAssociationId(ProfileAssociationIdT&& value) { SetProfileAssociationId(std::forward<ProfileAssociationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileAssociationId;
    bool m_profileAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
