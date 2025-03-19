/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wellarchitected/model/LensStatus.h>
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
   * <p>A lens summary of a lens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/LensSummary">AWS
   * API Reference</a></p>
   */
  class LensSummary
  {
  public:
    AWS_WELLARCHITECTED_API LensSummary() = default;
    AWS_WELLARCHITECTED_API LensSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the lens.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    LensSummary& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    LensSummary& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensName() const { return m_lensName; }
    inline bool LensNameHasBeenSet() const { return m_lensNameHasBeenSet; }
    template<typename LensNameT = Aws::String>
    void SetLensName(LensNameT&& value) { m_lensNameHasBeenSet = true; m_lensName = std::forward<LensNameT>(value); }
    template<typename LensNameT = Aws::String>
    LensSummary& WithLensName(LensNameT&& value) { SetLensName(std::forward<LensNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the lens.</p>
     */
    inline LensType GetLensType() const { return m_lensType; }
    inline bool LensTypeHasBeenSet() const { return m_lensTypeHasBeenSet; }
    inline void SetLensType(LensType value) { m_lensTypeHasBeenSet = true; m_lensType = value; }
    inline LensSummary& WithLensType(LensType value) { SetLensType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    LensSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LensSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    LensSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the lens.</p>
     */
    inline const Aws::String& GetLensVersion() const { return m_lensVersion; }
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }
    template<typename LensVersionT = Aws::String>
    void SetLensVersion(LensVersionT&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::forward<LensVersionT>(value); }
    template<typename LensVersionT = Aws::String>
    LensSummary& WithLensVersion(LensVersionT&& value) { SetLensVersion(std::forward<LensVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    LensSummary& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the lens.</p>
     */
    inline LensStatus GetLensStatus() const { return m_lensStatus; }
    inline bool LensStatusHasBeenSet() const { return m_lensStatusHasBeenSet; }
    inline void SetLensStatus(LensStatus value) { m_lensStatusHasBeenSet = true; m_lensStatus = value; }
    inline LensSummary& WithLensStatus(LensStatus value) { SetLensStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensName;
    bool m_lensNameHasBeenSet = false;

    LensType m_lensType{LensType::NOT_SET};
    bool m_lensTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_lensVersion;
    bool m_lensVersionHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    LensStatus m_lensStatus{LensStatus::NOT_SET};
    bool m_lensStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
