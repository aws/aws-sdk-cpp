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
    AWS_WELLARCHITECTED_API Lens() = default;
    AWS_WELLARCHITECTED_API Lens(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Lens& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a lens.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    Lens& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of a lens.</p>
     */
    inline const Aws::String& GetLensVersion() const { return m_lensVersion; }
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }
    template<typename LensVersionT = Aws::String>
    void SetLensVersion(LensVersionT&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::forward<LensVersionT>(value); }
    template<typename LensVersionT = Aws::String>
    Lens& WithLensVersion(LensVersionT&& value) { SetLensVersion(std::forward<LensVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Lens& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Lens& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the lens.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    Lens& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const { return m_shareInvitationId; }
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }
    template<typename ShareInvitationIdT = Aws::String>
    void SetShareInvitationId(ShareInvitationIdT&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::forward<ShareInvitationIdT>(value); }
    template<typename ShareInvitationIdT = Aws::String>
    Lens& WithShareInvitationId(ShareInvitationIdT&& value) { SetShareInvitationId(std::forward<ShareInvitationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the lens.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Lens& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Lens& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
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
