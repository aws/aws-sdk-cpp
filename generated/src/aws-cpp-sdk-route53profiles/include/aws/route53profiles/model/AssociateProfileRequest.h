/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/Route53ProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53profiles/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53Profiles
{
namespace Model
{

  /**
   */
  class AssociateProfileRequest : public Route53ProfilesRequest
  {
  public:
    AWS_ROUTE53PROFILES_API AssociateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateProfile"; }

    AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p> A name for the association. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> A name for the association. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> A name for the association. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> A name for the association. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> A name for the association. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> A name for the association. </p>
     */
    inline AssociateProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> A name for the association. </p>
     */
    inline AssociateProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> A name for the association. </p>
     */
    inline AssociateProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> ID of the Profile. </p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p> ID of the Profile. </p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p> ID of the Profile. </p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p> ID of the Profile. </p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p> ID of the Profile. </p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p> ID of the Profile. </p>
     */
    inline AssociateProfileRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p> ID of the Profile. </p>
     */
    inline AssociateProfileRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p> ID of the Profile. </p>
     */
    inline AssociateProfileRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p> The ID of the VPC. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p> The ID of the VPC. </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p> The ID of the VPC. </p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p> The ID of the VPC. </p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p> The ID of the VPC. </p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p> The ID of the VPC. </p>
     */
    inline AssociateProfileRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p> The ID of the VPC. </p>
     */
    inline AssociateProfileRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p> The ID of the VPC. </p>
     */
    inline AssociateProfileRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p> A list of the tag keys and values that you want to identify the Profile
     * association. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of the tag keys and values that you want to identify the Profile
     * association. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of the tag keys and values that you want to identify the Profile
     * association. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of the tag keys and values that you want to identify the Profile
     * association. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of the tag keys and values that you want to identify the Profile
     * association. </p>
     */
    inline AssociateProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of the tag keys and values that you want to identify the Profile
     * association. </p>
     */
    inline AssociateProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of the tag keys and values that you want to identify the Profile
     * association. </p>
     */
    inline AssociateProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> A list of the tag keys and values that you want to identify the Profile
     * association. </p>
     */
    inline AssociateProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
