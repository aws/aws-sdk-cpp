/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/SegmentDimensions.h>
#include <aws/pinpoint/model/SegmentImportResource.h>
#include <aws/pinpoint/model/SegmentGroupList.h>
#include <aws/pinpoint/model/SegmentType.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the configuration, dimension, and other settings
   * for a segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentResponse">AWS
   * API Reference</a></p>
   */
  class SegmentResponse
  {
  public:
    AWS_PINPOINT_API SegmentResponse() = default;
    AWS_PINPOINT_API SegmentResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    SegmentResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SegmentResponse& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    SegmentResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension settings for the segment.</p>
     */
    inline const SegmentDimensions& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = SegmentDimensions>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = SegmentDimensions>
    SegmentResponse& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SegmentResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the import job that's associated with the segment.</p>
     */
    inline const SegmentImportResource& GetImportDefinition() const { return m_importDefinition; }
    inline bool ImportDefinitionHasBeenSet() const { return m_importDefinitionHasBeenSet; }
    template<typename ImportDefinitionT = SegmentImportResource>
    void SetImportDefinition(ImportDefinitionT&& value) { m_importDefinitionHasBeenSet = true; m_importDefinition = std::forward<ImportDefinitionT>(value); }
    template<typename ImportDefinitionT = SegmentImportResource>
    SegmentResponse& WithImportDefinition(ImportDefinitionT&& value) { SetImportDefinition(std::forward<ImportDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    SegmentResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the segment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SegmentResponse& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more segment groups that apply to the segment. Each segment
     * group consists of zero or more base segments and the dimensions that are applied
     * to those base segments.</p>
     */
    inline const SegmentGroupList& GetSegmentGroups() const { return m_segmentGroups; }
    inline bool SegmentGroupsHasBeenSet() const { return m_segmentGroupsHasBeenSet; }
    template<typename SegmentGroupsT = SegmentGroupList>
    void SetSegmentGroups(SegmentGroupsT&& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = std::forward<SegmentGroupsT>(value); }
    template<typename SegmentGroupsT = SegmentGroupList>
    SegmentResponse& WithSegmentGroups(SegmentGroupsT&& value) { SetSegmentGroups(std::forward<SegmentGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment type. Valid values are:</p> <ul><li><p>DIMENSIONAL - A dynamic
     * segment, which is a segment that uses selection criteria that you specify and is
     * based on endpoint data that's reported by your app. Dynamic segments can change
     * over time.</p></li> <li><p>IMPORT - A static segment, which is a segment that
     * uses selection criteria that you specify and is based on endpoint definitions
     * that you import from a file. Imported segments are static; they don't change
     * over time.</p></li></ul>
     */
    inline SegmentType GetSegmentType() const { return m_segmentType; }
    inline bool SegmentTypeHasBeenSet() const { return m_segmentTypeHasBeenSet; }
    inline void SetSegmentType(SegmentType value) { m_segmentTypeHasBeenSet = true; m_segmentType = value; }
    inline SegmentResponse& WithSegmentType(SegmentType value) { SetSegmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SegmentResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SegmentResponse& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The version number of the segment.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline SegmentResponse& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    SegmentDimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SegmentImportResource m_importDefinition;
    bool m_importDefinitionHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SegmentGroupList m_segmentGroups;
    bool m_segmentGroupsHasBeenSet = false;

    SegmentType m_segmentType{SegmentType::NOT_SET};
    bool m_segmentTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
