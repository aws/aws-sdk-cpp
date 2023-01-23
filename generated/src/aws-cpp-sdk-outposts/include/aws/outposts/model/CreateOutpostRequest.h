/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/outposts/model/SupportedHardwareType.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class CreateOutpostRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API CreateOutpostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOutpost"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateOutpostRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateOutpostRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateOutpostRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateOutpostRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline CreateOutpostRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline CreateOutpostRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline CreateOutpostRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    
    inline CreateOutpostRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    
    inline CreateOutpostRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    
    inline CreateOutpostRequest& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    
    inline CreateOutpostRequest& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to apply to the Outpost.</p>
     */
    inline CreateOutpostRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline const SupportedHardwareType& GetSupportedHardwareType() const{ return m_supportedHardwareType; }

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline bool SupportedHardwareTypeHasBeenSet() const { return m_supportedHardwareTypeHasBeenSet; }

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline void SetSupportedHardwareType(const SupportedHardwareType& value) { m_supportedHardwareTypeHasBeenSet = true; m_supportedHardwareType = value; }

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline void SetSupportedHardwareType(SupportedHardwareType&& value) { m_supportedHardwareTypeHasBeenSet = true; m_supportedHardwareType = std::move(value); }

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline CreateOutpostRequest& WithSupportedHardwareType(const SupportedHardwareType& value) { SetSupportedHardwareType(value); return *this;}

    /**
     * <p> The type of hardware for this Outpost. </p>
     */
    inline CreateOutpostRequest& WithSupportedHardwareType(SupportedHardwareType&& value) { SetSupportedHardwareType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    SupportedHardwareType m_supportedHardwareType;
    bool m_supportedHardwareTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
