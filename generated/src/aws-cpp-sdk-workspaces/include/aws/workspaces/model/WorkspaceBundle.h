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
    AWS_WORKSPACES_API WorkspaceBundle();
    AWS_WORKSPACES_API WorkspaceBundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline WorkspaceBundle& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline WorkspaceBundle& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline WorkspaceBundle& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bundle.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkspaceBundle& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkspaceBundle& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkspaceBundle& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by Amazon Web Services.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline WorkspaceBundle& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline WorkspaceBundle& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline WorkspaceBundle& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bundle.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WorkspaceBundle& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkspaceBundle& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkspaceBundle& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the image that was used to create the bundle.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline WorkspaceBundle& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline WorkspaceBundle& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline WorkspaceBundle& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the root volume.</p>
     */
    inline const RootStorage& GetRootStorage() const{ return m_rootStorage; }
    inline bool RootStorageHasBeenSet() const { return m_rootStorageHasBeenSet; }
    inline void SetRootStorage(const RootStorage& value) { m_rootStorageHasBeenSet = true; m_rootStorage = value; }
    inline void SetRootStorage(RootStorage&& value) { m_rootStorageHasBeenSet = true; m_rootStorage = std::move(value); }
    inline WorkspaceBundle& WithRootStorage(const RootStorage& value) { SetRootStorage(value); return *this;}
    inline WorkspaceBundle& WithRootStorage(RootStorage&& value) { SetRootStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the user volume.</p>
     */
    inline const UserStorage& GetUserStorage() const{ return m_userStorage; }
    inline bool UserStorageHasBeenSet() const { return m_userStorageHasBeenSet; }
    inline void SetUserStorage(const UserStorage& value) { m_userStorageHasBeenSet = true; m_userStorage = value; }
    inline void SetUserStorage(UserStorage&& value) { m_userStorageHasBeenSet = true; m_userStorage = std::move(value); }
    inline WorkspaceBundle& WithUserStorage(const UserStorage& value) { SetUserStorage(value); return *this;}
    inline WorkspaceBundle& WithUserStorage(UserStorage&& value) { SetUserStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute type of the bundle. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }
    inline WorkspaceBundle& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}
    inline WorkspaceBundle& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the bundle was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline WorkspaceBundle& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline WorkspaceBundle& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the bundle was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline WorkspaceBundle& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline WorkspaceBundle& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the WorkSpace bundle.</p>
     */
    inline const WorkspaceBundleState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkspaceBundleState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkspaceBundleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline WorkspaceBundle& WithState(const WorkspaceBundleState& value) { SetState(value); return *this;}
    inline WorkspaceBundle& WithState(WorkspaceBundleState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of WorkSpace bundle.</p>
     */
    inline const BundleType& GetBundleType() const{ return m_bundleType; }
    inline bool BundleTypeHasBeenSet() const { return m_bundleTypeHasBeenSet; }
    inline void SetBundleType(const BundleType& value) { m_bundleTypeHasBeenSet = true; m_bundleType = value; }
    inline void SetBundleType(BundleType&& value) { m_bundleTypeHasBeenSet = true; m_bundleType = std::move(value); }
    inline WorkspaceBundle& WithBundleType(const BundleType& value) { SetBundleType(value); return *this;}
    inline WorkspaceBundle& WithBundleType(BundleType&& value) { SetBundleType(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    WorkspaceBundleState m_state;
    bool m_stateHasBeenSet = false;

    BundleType m_bundleType;
    bool m_bundleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
