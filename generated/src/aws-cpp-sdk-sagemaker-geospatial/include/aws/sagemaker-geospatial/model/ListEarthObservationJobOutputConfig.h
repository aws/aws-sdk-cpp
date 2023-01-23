/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobStatus.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>An object containing information about the output file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListEarthObservationJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class ListEarthObservationJobOutputConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobOutputConfig();
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Earth Observation jobs.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Earth Observation jobs.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Earth Observation jobs.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Earth Observation jobs.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Earth Observation jobs.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the list of the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>The names of the Earth Observation jobs in the list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The names of the Earth Observation jobs in the list.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The names of the Earth Observation jobs in the list.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The names of the Earth Observation jobs in the list.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The names of the Earth Observation jobs in the list.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The names of the Earth Observation jobs in the list.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The names of the Earth Observation jobs in the list.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The names of the Earth Observation jobs in the list.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetOperationType() const{ return m_operationType; }

    /**
     * <p/>
     */
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetOperationType(const Aws::String& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p/>
     */
    inline void SetOperationType(Aws::String&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }

    /**
     * <p/>
     */
    inline void SetOperationType(const char* value) { m_operationTypeHasBeenSet = true; m_operationType.assign(value); }

    /**
     * <p/>
     */
    inline ListEarthObservationJobOutputConfig& WithOperationType(const Aws::String& value) { SetOperationType(value); return *this;}

    /**
     * <p/>
     */
    inline ListEarthObservationJobOutputConfig& WithOperationType(Aws::String&& value) { SetOperationType(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListEarthObservationJobOutputConfig& WithOperationType(const char* value) { SetOperationType(value); return *this;}


    /**
     * <p>The status of the list of the Earth Observation jobs.</p>
     */
    inline const EarthObservationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the list of the Earth Observation jobs.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the list of the Earth Observation jobs.</p>
     */
    inline void SetStatus(const EarthObservationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the list of the Earth Observation jobs.</p>
     */
    inline void SetStatus(EarthObservationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the list of the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithStatus(const EarthObservationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the list of the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithStatus(EarthObservationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline ListEarthObservationJobOutputConfig& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_operationType;
    bool m_operationTypeHasBeenSet = false;

    EarthObservationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
