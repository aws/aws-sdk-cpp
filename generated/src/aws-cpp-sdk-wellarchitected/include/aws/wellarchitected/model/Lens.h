/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A lens return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Lens">AWS
   * API Reference</a></p>
   */
  class Lens
  {
  public:
    AWS_WELLARCHITECTED_API Lens();
    AWS_WELLARCHITECTED_API Lens(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Lens& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>The ARN of a lens.</p>
     */
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }

    /**
     * <p>The ARN of a lens.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }

    /**
     * <p>The ARN of a lens.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }

    /**
     * <p>The ARN of a lens.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }

    /**
     * <p>The ARN of a lens.</p>
     */
    inline Lens& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN of a lens.</p>
     */
    inline Lens& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a lens.</p>
     */
    inline Lens& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    /**
     * <p>The version of a lens.</p>
     */
    inline const Aws::String& GetLensVersion() const{ return m_lensVersion; }

    /**
     * <p>The version of a lens.</p>
     */
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }

    /**
     * <p>The version of a lens.</p>
     */
    inline void SetLensVersion(const Aws::String& value) { m_lensVersionHasBeenSet = true; m_lensVersion = value; }

    /**
     * <p>The version of a lens.</p>
     */
    inline void SetLensVersion(Aws::String&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::move(value); }

    /**
     * <p>The version of a lens.</p>
     */
    inline void SetLensVersion(const char* value) { m_lensVersionHasBeenSet = true; m_lensVersion.assign(value); }

    /**
     * <p>The version of a lens.</p>
     */
    inline Lens& WithLensVersion(const Aws::String& value) { SetLensVersion(value); return *this;}

    /**
     * <p>The version of a lens.</p>
     */
    inline Lens& WithLensVersion(Aws::String&& value) { SetLensVersion(std::move(value)); return *this;}

    /**
     * <p>The version of a lens.</p>
     */
    inline Lens& WithLensVersion(const char* value) { SetLensVersion(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline Lens& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline Lens& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline Lens& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline Lens& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline Lens& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline Lens& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline Lens& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline Lens& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline Lens& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const{ return m_shareInvitationId; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(const Aws::String& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = value; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(Aws::String&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::move(value); }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(const char* value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId.assign(value); }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline Lens& WithShareInvitationId(const Aws::String& value) { SetShareInvitationId(value); return *this;}

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline Lens& WithShareInvitationId(Aws::String&& value) { SetShareInvitationId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline Lens& WithShareInvitationId(const char* value) { SetShareInvitationId(value); return *this;}


    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline Lens& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_lensVersion;
    bool m_lensVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
