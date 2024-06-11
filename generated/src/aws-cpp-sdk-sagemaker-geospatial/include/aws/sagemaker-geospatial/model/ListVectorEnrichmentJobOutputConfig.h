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
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobOutputConfig();
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Vector Enrichment jobs.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ListVectorEnrichmentJobOutputConfig& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ListVectorEnrichmentJobOutputConfig& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline ListVectorEnrichmentJobOutputConfig& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the Vector Enrichment jobs in the list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListVectorEnrichmentJobOutputConfig& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Vector Enrichment jobs list. </p>
     */
    inline const VectorEnrichmentJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VectorEnrichmentJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VectorEnrichmentJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListVectorEnrichmentJobOutputConfig& WithStatus(const VectorEnrichmentJobStatus& value) { SetStatus(value); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& WithStatus(VectorEnrichmentJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ListVectorEnrichmentJobOutputConfig& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ListVectorEnrichmentJobOutputConfig& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ListVectorEnrichmentJobOutputConfig& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ListVectorEnrichmentJobOutputConfig& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ListVectorEnrichmentJobOutputConfig& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ListVectorEnrichmentJobOutputConfig& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ListVectorEnrichmentJobOutputConfig& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the list of Vector Enrichment jobs.</p>
     */
    inline const VectorEnrichmentJobType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const VectorEnrichmentJobType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(VectorEnrichmentJobType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListVectorEnrichmentJobOutputConfig& WithType(const VectorEnrichmentJobType& value) { SetType(value); return *this;}
    inline ListVectorEnrichmentJobOutputConfig& WithType(VectorEnrichmentJobType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VectorEnrichmentJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VectorEnrichmentJobType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
