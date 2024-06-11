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
  class AssociateResourceToProfileRequest : public Route53ProfilesRequest
  {
  public:
    AWS_ROUTE53PROFILES_API AssociateResourceToProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResourceToProfile"; }

    AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Name for the resource association. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssociateResourceToProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssociateResourceToProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssociateResourceToProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> ID of the Profile. </p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline AssociateResourceToProfileRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline AssociateResourceToProfileRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline AssociateResourceToProfileRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Amazon resource number, ARN, of the DNS resource. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline AssociateResourceToProfileRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline AssociateResourceToProfileRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline AssociateResourceToProfileRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
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
    inline AssociateResourceToProfileRequest& WithResourceProperties(const Aws::String& value) { SetResourceProperties(value); return *this;}
    inline AssociateResourceToProfileRequest& WithResourceProperties(Aws::String&& value) { SetResourceProperties(std::move(value)); return *this;}
    inline AssociateResourceToProfileRequest& WithResourceProperties(const char* value) { SetResourceProperties(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceProperties;
    bool m_resourcePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
