/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobType.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>An object containing information about the output file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListVectorEnrichmentJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class ListVectorEnrichmentJobOutputConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobOutputConfig() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Vector Enrichment jobs.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListVectorEnrichmentJobOutputConfig& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ListVectorEnrichmentJobOutputConfig& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline ListVectorEnrichmentJobOutputConfig& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the Vector Enrichment jobs in the list.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListVectorEnrichmentJobOutputConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Vector Enrichment jobs list. </p>
     */
    inline VectorEnrichmentJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VectorEnrichmentJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListVectorEnrichmentJobOutputConfig& WithStatus(VectorEnrichmentJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ListVectorEnrichmentJobOutputConfig& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ListVectorEnrichmentJobOutputConfig& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of the list of Vector Enrichment jobs.</p>
     */
    inline VectorEnrichmentJobType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(VectorEnrichmentJobType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListVectorEnrichmentJobOutputConfig& WithType(VectorEnrichmentJobType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VectorEnrichmentJobStatus m_status{VectorEnrichmentJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VectorEnrichmentJobType m_type{VectorEnrichmentJobType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
