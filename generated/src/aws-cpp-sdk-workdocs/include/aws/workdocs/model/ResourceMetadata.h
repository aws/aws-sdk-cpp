/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserMetadata.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the metadata of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ResourceMetadata">AWS
   * API Reference</a></p>
   */
  class ResourceMetadata
  {
  public:
    AWS_WORKDOCS_API ResourceMetadata() = default;
    AWS_WORKDOCS_API ResourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API ResourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline ResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ResourceMetadata& WithType(ResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResourceMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline const Aws::String& GetOriginalName() const { return m_originalName; }
    inline bool OriginalNameHasBeenSet() const { return m_originalNameHasBeenSet; }
    template<typename OriginalNameT = Aws::String>
    void SetOriginalName(OriginalNameT&& value) { m_originalNameHasBeenSet = true; m_originalName = std::forward<OriginalNameT>(value); }
    template<typename OriginalNameT = Aws::String>
    ResourceMetadata& WithOriginalName(OriginalNameT&& value) { SetOriginalName(std::forward<OriginalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResourceMetadata& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    ResourceMetadata& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the resource.</p>
     */
    inline const UserMetadata& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = UserMetadata>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = UserMetadata>
    ResourceMetadata& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline const Aws::String& GetParentId() const { return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    template<typename ParentIdT = Aws::String>
    void SetParentId(ParentIdT&& value) { m_parentIdHasBeenSet = true; m_parentId = std::forward<ParentIdT>(value); }
    template<typename ParentIdT = Aws::String>
    ResourceMetadata& WithParentId(ParentIdT&& value) { SetParentId(std::forward<ParentIdT>(value)); return *this;}
    ///@}
  private:

    ResourceType m_type{ResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_originalName;
    bool m_originalNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    UserMetadata m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
