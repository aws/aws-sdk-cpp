/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StudioComponentSubtype.h>
#include <aws/nimble/model/StudioComponentType.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The studio component's summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StudioComponentSummary">AWS
   * API Reference</a></p>
   */
  class StudioComponentSummary
  {
  public:
    AWS_NIMBLESTUDIO_API StudioComponentSummary();
    AWS_NIMBLESTUDIO_API StudioComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StudioComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline StudioComponentSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline StudioComponentSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline StudioComponentSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline StudioComponentSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that created the studio component.</p>
     */
    inline StudioComponentSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline StudioComponentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline StudioComponentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline StudioComponentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name for the studio component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the studio component.</p>
     */
    inline StudioComponentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the studio component.</p>
     */
    inline StudioComponentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the studio component.</p>
     */
    inline StudioComponentSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline const Aws::String& GetStudioComponentId() const{ return m_studioComponentId; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline bool StudioComponentIdHasBeenSet() const { return m_studioComponentIdHasBeenSet; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(const Aws::String& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = value; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(Aws::String&& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = std::move(value); }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(const char* value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId.assign(value); }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline StudioComponentSummary& WithStudioComponentId(const Aws::String& value) { SetStudioComponentId(value); return *this;}

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline StudioComponentSummary& WithStudioComponentId(Aws::String&& value) { SetStudioComponentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline StudioComponentSummary& WithStudioComponentId(const char* value) { SetStudioComponentId(value); return *this;}


    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline const StudioComponentSubtype& GetSubtype() const{ return m_subtype; }

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline void SetSubtype(const StudioComponentSubtype& value) { m_subtypeHasBeenSet = true; m_subtype = value; }

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline void SetSubtype(StudioComponentSubtype&& value) { m_subtypeHasBeenSet = true; m_subtype = std::move(value); }

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline StudioComponentSummary& WithSubtype(const StudioComponentSubtype& value) { SetSubtype(value); return *this;}

    /**
     * <p>The specific subtype of a studio component.</p>
     */
    inline StudioComponentSummary& WithSubtype(StudioComponentSubtype&& value) { SetSubtype(std::move(value)); return *this;}


    /**
     * <p>The type of the studio component.</p>
     */
    inline const StudioComponentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the studio component.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the studio component.</p>
     */
    inline void SetType(const StudioComponentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the studio component.</p>
     */
    inline void SetType(StudioComponentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the studio component.</p>
     */
    inline StudioComponentSummary& WithType(const StudioComponentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the studio component.</p>
     */
    inline StudioComponentSummary& WithType(StudioComponentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline StudioComponentSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline StudioComponentSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline StudioComponentSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline StudioComponentSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline StudioComponentSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_studioComponentId;
    bool m_studioComponentIdHasBeenSet = false;

    StudioComponentSubtype m_subtype;
    bool m_subtypeHasBeenSet = false;

    StudioComponentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
