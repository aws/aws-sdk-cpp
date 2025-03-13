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
  class UpdateProfileResourceAssociationRequest : public Route53ProfilesRequest
  {
  public:
    AWS_ROUTE53PROFILES_API UpdateProfileResourceAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfileResourceAssociation"; }

    AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Name of the resource association. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateProfileResourceAssociationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> ID of the resource association. </p>
     */
    inline const Aws::String& GetProfileResourceAssociationId() const { return m_profileResourceAssociationId; }
    inline bool ProfileResourceAssociationIdHasBeenSet() const { return m_profileResourceAssociationIdHasBeenSet; }
    template<typename ProfileResourceAssociationIdT = Aws::String>
    void SetProfileResourceAssociationId(ProfileResourceAssociationIdT&& value) { m_profileResourceAssociationIdHasBeenSet = true; m_profileResourceAssociationId = std::forward<ProfileResourceAssociationIdT>(value); }
    template<typename ProfileResourceAssociationIdT = Aws::String>
    UpdateProfileResourceAssociationRequest& WithProfileResourceAssociationId(ProfileResourceAssociationIdT&& value) { SetProfileResourceAssociationId(std::forward<ProfileResourceAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you are adding a DNS Firewall rule group, include also a priority. The
     * priority indicates the processing order for the rule groups, starting with the
     * priority assinged the lowest value. </p> <p>The allowed values for priority are
     * between 100 and 9900.</p>
     */
    inline const Aws::String& GetResourceProperties() const { return m_resourceProperties; }
    inline bool ResourcePropertiesHasBeenSet() const { return m_resourcePropertiesHasBeenSet; }
    template<typename ResourcePropertiesT = Aws::String>
    void SetResourceProperties(ResourcePropertiesT&& value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties = std::forward<ResourcePropertiesT>(value); }
    template<typename ResourcePropertiesT = Aws::String>
    UpdateProfileResourceAssociationRequest& WithResourceProperties(ResourcePropertiesT&& value) { SetResourceProperties(std::forward<ResourcePropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_profileResourceAssociationId;
    bool m_profileResourceAssociationIdHasBeenSet = false;

    Aws::String m_resourceProperties;
    bool m_resourcePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
