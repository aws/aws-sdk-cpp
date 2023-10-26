/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/AdapterVersionStatus.h>
#include <aws/textract/model/FeatureType.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Summary info for an adapter version. Contains information on the AdapterId,
   * AdapterVersion, CreationTime, FeatureTypes, and Status.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AdapterVersionOverview">AWS
   * API Reference</a></p>
   */
  class AdapterVersionOverview
  {
  public:
    AWS_TEXTRACT_API AdapterVersionOverview();
    AWS_TEXTRACT_API AdapterVersionOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AdapterVersionOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the adapter associated with a given adapter
     * version.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A unique identifier for the adapter associated with a given adapter
     * version.</p>
     */
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }

    /**
     * <p>A unique identifier for the adapter associated with a given adapter
     * version.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterIdHasBeenSet = true; m_adapterId = value; }

    /**
     * <p>A unique identifier for the adapter associated with a given adapter
     * version.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::move(value); }

    /**
     * <p>A unique identifier for the adapter associated with a given adapter
     * version.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterIdHasBeenSet = true; m_adapterId.assign(value); }

    /**
     * <p>A unique identifier for the adapter associated with a given adapter
     * version.</p>
     */
    inline AdapterVersionOverview& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A unique identifier for the adapter associated with a given adapter
     * version.</p>
     */
    inline AdapterVersionOverview& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the adapter associated with a given adapter
     * version.</p>
     */
    inline AdapterVersionOverview& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>An identified for a given adapter version.</p>
     */
    inline const Aws::String& GetAdapterVersion() const{ return m_adapterVersion; }

    /**
     * <p>An identified for a given adapter version.</p>
     */
    inline bool AdapterVersionHasBeenSet() const { return m_adapterVersionHasBeenSet; }

    /**
     * <p>An identified for a given adapter version.</p>
     */
    inline void SetAdapterVersion(const Aws::String& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = value; }

    /**
     * <p>An identified for a given adapter version.</p>
     */
    inline void SetAdapterVersion(Aws::String&& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = std::move(value); }

    /**
     * <p>An identified for a given adapter version.</p>
     */
    inline void SetAdapterVersion(const char* value) { m_adapterVersionHasBeenSet = true; m_adapterVersion.assign(value); }

    /**
     * <p>An identified for a given adapter version.</p>
     */
    inline AdapterVersionOverview& WithAdapterVersion(const Aws::String& value) { SetAdapterVersion(value); return *this;}

    /**
     * <p>An identified for a given adapter version.</p>
     */
    inline AdapterVersionOverview& WithAdapterVersion(Aws::String&& value) { SetAdapterVersion(std::move(value)); return *this;}

    /**
     * <p>An identified for a given adapter version.</p>
     */
    inline AdapterVersionOverview& WithAdapterVersion(const char* value) { SetAdapterVersion(value); return *this;}


    /**
     * <p>The date and time that a given adapter version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that a given adapter version was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that a given adapter version was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that a given adapter version was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that a given adapter version was created.</p>
     */
    inline AdapterVersionOverview& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that a given adapter version was created.</p>
     */
    inline AdapterVersionOverview& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The feature types that the adapter version is operating on.</p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>The feature types that the adapter version is operating on.</p>
     */
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }

    /**
     * <p>The feature types that the adapter version is operating on.</p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }

    /**
     * <p>The feature types that the adapter version is operating on.</p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }

    /**
     * <p>The feature types that the adapter version is operating on.</p>
     */
    inline AdapterVersionOverview& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>The feature types that the adapter version is operating on.</p>
     */
    inline AdapterVersionOverview& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>The feature types that the adapter version is operating on.</p>
     */
    inline AdapterVersionOverview& AddFeatureTypes(const FeatureType& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }

    /**
     * <p>The feature types that the adapter version is operating on.</p>
     */
    inline AdapterVersionOverview& AddFeatureTypes(FeatureType&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains information on the status of a given adapter version.</p>
     */
    inline const AdapterVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Contains information on the status of a given adapter version.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Contains information on the status of a given adapter version.</p>
     */
    inline void SetStatus(const AdapterVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Contains information on the status of a given adapter version.</p>
     */
    inline void SetStatus(AdapterVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Contains information on the status of a given adapter version.</p>
     */
    inline AdapterVersionOverview& WithStatus(const AdapterVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Contains information on the status of a given adapter version.</p>
     */
    inline AdapterVersionOverview& WithStatus(AdapterVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message explaining the status of a given adapter vesion.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message explaining the status of a given adapter vesion.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message explaining the status of a given adapter vesion.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message explaining the status of a given adapter vesion.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message explaining the status of a given adapter vesion.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message explaining the status of a given adapter vesion.</p>
     */
    inline AdapterVersionOverview& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message explaining the status of a given adapter vesion.</p>
     */
    inline AdapterVersionOverview& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message explaining the status of a given adapter vesion.</p>
     */
    inline AdapterVersionOverview& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_adapterVersion;
    bool m_adapterVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;

    AdapterVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
