/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/RootStorage.h>
#include <aws/workspaces/model/UserStorage.h>
#include <aws/workspaces/model/ComputeType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces/model/WorkspaceBundleState.h>
#include <aws/workspaces/model/BundleType.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a WorkSpace bundle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceBundle">AWS
   * API Reference</a></p>
   */
  class WorkspaceBundle
  {
  public:
    AWS_WORKSPACES_API WorkspaceBundle() = default;
    AWS_WORKSPACES_API WorkspaceBundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    WorkspaceBundle& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bundle.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkspaceBundle& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by Amazon Web Services.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    WorkspaceBundle& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bundle.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkspaceBundle& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the image that was used to create the bundle.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    WorkspaceBundle& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the root volume.</p>
     */
    inline const RootStorage& GetRootStorage() const { return m_rootStorage; }
    inline bool RootStorageHasBeenSet() const { return m_rootStorageHasBeenSet; }
    template<typename RootStorageT = RootStorage>
    void SetRootStorage(RootStorageT&& value) { m_rootStorageHasBeenSet = true; m_rootStorage = std::forward<RootStorageT>(value); }
    template<typename RootStorageT = RootStorage>
    WorkspaceBundle& WithRootStorage(RootStorageT&& value) { SetRootStorage(std::forward<RootStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the user volume.</p>
     */
    inline const UserStorage& GetUserStorage() const { return m_userStorage; }
    inline bool UserStorageHasBeenSet() const { return m_userStorageHasBeenSet; }
    template<typename UserStorageT = UserStorage>
    void SetUserStorage(UserStorageT&& value) { m_userStorageHasBeenSet = true; m_userStorage = std::forward<UserStorageT>(value); }
    template<typename UserStorageT = UserStorage>
    WorkspaceBundle& WithUserStorage(UserStorageT&& value) { SetUserStorage(std::forward<UserStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute type of the bundle. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline const ComputeType& GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    template<typename ComputeTypeT = ComputeType>
    void SetComputeType(ComputeTypeT&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::forward<ComputeTypeT>(value); }
    template<typename ComputeTypeT = ComputeType>
    WorkspaceBundle& WithComputeType(ComputeTypeT&& value) { SetComputeType(std::forward<ComputeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the bundle was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    WorkspaceBundle& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the bundle was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    WorkspaceBundle& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the WorkSpace bundle.</p>
     */
    inline WorkspaceBundleState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(WorkspaceBundleState value) { m_stateHasBeenSet = true; m_state = value; }
    inline WorkspaceBundle& WithState(WorkspaceBundleState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of WorkSpace bundle.</p>
     */
    inline BundleType GetBundleType() const { return m_bundleType; }
    inline bool BundleTypeHasBeenSet() const { return m_bundleTypeHasBeenSet; }
    inline void SetBundleType(BundleType value) { m_bundleTypeHasBeenSet = true; m_bundleType = value; }
    inline WorkspaceBundle& WithBundleType(BundleType value) { SetBundleType(value); return *this;}
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    RootStorage m_rootStorage;
    bool m_rootStorageHasBeenSet = false;

    UserStorage m_userStorage;
    bool m_userStorageHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    WorkspaceBundleState m_state{WorkspaceBundleState::NOT_SET};
    bool m_stateHasBeenSet = false;

    BundleType m_bundleType{BundleType::NOT_SET};
    bool m_bundleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
