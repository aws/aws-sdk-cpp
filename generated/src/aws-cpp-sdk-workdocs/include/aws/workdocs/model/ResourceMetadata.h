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
    AWS_WORKDOCS_API ResourceMetadata();
    AWS_WORKDOCS_API ResourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API ResourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ResourceMetadata& WithType(const ResourceType& value) { SetType(value); return *this;}
    inline ResourceMetadata& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline const Aws::String& GetOriginalName() const{ return m_originalName; }
    inline bool OriginalNameHasBeenSet() const { return m_originalNameHasBeenSet; }
    inline void SetOriginalName(const Aws::String& value) { m_originalNameHasBeenSet = true; m_originalName = value; }
    inline void SetOriginalName(Aws::String&& value) { m_originalNameHasBeenSet = true; m_originalName = std::move(value); }
    inline void SetOriginalName(const char* value) { m_originalNameHasBeenSet = true; m_originalName.assign(value); }
    inline ResourceMetadata& WithOriginalName(const Aws::String& value) { SetOriginalName(value); return *this;}
    inline ResourceMetadata& WithOriginalName(Aws::String&& value) { SetOriginalName(std::move(value)); return *this;}
    inline ResourceMetadata& WithOriginalName(const char* value) { SetOriginalName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResourceMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResourceMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResourceMetadata& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline ResourceMetadata& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline ResourceMetadata& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline ResourceMetadata& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the resource.</p>
     */
    inline const UserMetadata& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const UserMetadata& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(UserMetadata&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline ResourceMetadata& WithOwner(const UserMetadata& value) { SetOwner(value); return *this;}
    inline ResourceMetadata& WithOwner(UserMetadata&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }
    inline ResourceMetadata& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}
    inline ResourceMetadata& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}
    inline ResourceMetadata& WithParentId(const char* value) { SetParentId(value); return *this;}
    ///@}
  private:

    ResourceType m_type;
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
