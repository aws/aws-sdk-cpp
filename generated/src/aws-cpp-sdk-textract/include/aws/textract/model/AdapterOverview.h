/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains information on the adapter, including the adapter ID, Name, Creation
   * time, and feature types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AdapterOverview">AWS
   * API Reference</a></p>
   */
  class AdapterOverview
  {
  public:
    AWS_TEXTRACT_API AdapterOverview();
    AWS_TEXTRACT_API AdapterOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AdapterOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterIdHasBeenSet = true; m_adapterId = value; }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::move(value); }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterIdHasBeenSet = true; m_adapterId.assign(value); }

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline AdapterOverview& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline AdapterOverview& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline AdapterOverview& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline const Aws::String& GetAdapterName() const{ return m_adapterName; }

    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline bool AdapterNameHasBeenSet() const { return m_adapterNameHasBeenSet; }

    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline void SetAdapterName(const Aws::String& value) { m_adapterNameHasBeenSet = true; m_adapterName = value; }

    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline void SetAdapterName(Aws::String&& value) { m_adapterNameHasBeenSet = true; m_adapterName = std::move(value); }

    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline void SetAdapterName(const char* value) { m_adapterNameHasBeenSet = true; m_adapterName.assign(value); }

    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline AdapterOverview& WithAdapterName(const Aws::String& value) { SetAdapterName(value); return *this;}

    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline AdapterOverview& WithAdapterName(Aws::String&& value) { SetAdapterName(std::move(value)); return *this;}

    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline AdapterOverview& WithAdapterName(const char* value) { SetAdapterName(value); return *this;}


    /**
     * <p>The date and time that the adapter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the adapter was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the adapter was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the adapter was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the adapter was created.</p>
     */
    inline AdapterOverview& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the adapter was created.</p>
     */
    inline AdapterOverview& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }

    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }

    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }

    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline AdapterOverview& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline AdapterOverview& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline AdapterOverview& AddFeatureTypes(const FeatureType& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }

    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline AdapterOverview& AddFeatureTypes(FeatureType&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_adapterName;
    bool m_adapterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
