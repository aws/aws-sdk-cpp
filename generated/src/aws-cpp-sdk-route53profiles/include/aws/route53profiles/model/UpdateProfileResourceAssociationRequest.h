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
    AWS_ROUTE53PROFILES_API UpdateProfileResourceAssociationRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateProfileResourceAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateProfileResourceAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateProfileResourceAssociationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> ID of the resource association. </p>
     */
    inline const Aws::String& GetProfileResourceAssociationId() const{ return m_profileResourceAssociationId; }
    inline bool ProfileResourceAssociationIdHasBeenSet() const { return m_profileResourceAssociationIdHasBeenSet; }
    inline void SetProfileResourceAssociationId(const Aws::String& value) { m_profileResourceAssociationIdHasBeenSet = true; m_profileResourceAssociationId = value; }
    inline void SetProfileResourceAssociationId(Aws::String&& value) { m_profileResourceAssociationIdHasBeenSet = true; m_profileResourceAssociationId = std::move(value); }
    inline void SetProfileResourceAssociationId(const char* value) { m_profileResourceAssociationIdHasBeenSet = true; m_profileResourceAssociationId.assign(value); }
    inline UpdateProfileResourceAssociationRequest& WithProfileResourceAssociationId(const Aws::String& value) { SetProfileResourceAssociationId(value); return *this;}
    inline UpdateProfileResourceAssociationRequest& WithProfileResourceAssociationId(Aws::String&& value) { SetProfileResourceAssociationId(std::move(value)); return *this;}
    inline UpdateProfileResourceAssociationRequest& WithProfileResourceAssociationId(const char* value) { SetProfileResourceAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you are adding a DNS Firewall rule group, include also a priority. The
     * priority indicates the processing order for the rule groups, starting with the
     * priority assinged the lowest value. </p> <p>The allowed values for priority are
     * between 100 and 9900.</p>
     */
    inline const Aws::String& GetResourceProperties() const{ return m_resourceProperties; }
    inline bool ResourcePropertiesHasBeenSet() const { return m_resourcePropertiesHasBeenSet; }
    inline void SetResourceProperties(const Aws::String& value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties = value; }
    inline void SetResourceProperties(Aws::String&& value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties = std::move(value); }
    inline void SetResourceProperties(const char* value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties.assign(value); }
    inline UpdateProfileResourceAssociationRequest& WithResourceProperties(const Aws::String& value) { SetResourceProperties(value); return *this;}
    inline UpdateProfileResourceAssociationRequest& WithResourceProperties(Aws::String&& value) { SetResourceProperties(std::move(value)); return *this;}
    inline UpdateProfileResourceAssociationRequest& WithResourceProperties(const char* value) { SetResourceProperties(value); return *this;}
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
