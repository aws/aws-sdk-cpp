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
    AWS_TEXTRACT_API AdapterOverview() = default;
    AWS_TEXTRACT_API AdapterOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AdapterOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the adapter resource.</p>
     */
    inline const Aws::String& GetAdapterId() const { return m_adapterId; }
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }
    template<typename AdapterIdT = Aws::String>
    void SetAdapterId(AdapterIdT&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::forward<AdapterIdT>(value); }
    template<typename AdapterIdT = Aws::String>
    AdapterOverview& WithAdapterId(AdapterIdT&& value) { SetAdapterId(std::forward<AdapterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string naming the adapter resource.</p>
     */
    inline const Aws::String& GetAdapterName() const { return m_adapterName; }
    inline bool AdapterNameHasBeenSet() const { return m_adapterNameHasBeenSet; }
    template<typename AdapterNameT = Aws::String>
    void SetAdapterName(AdapterNameT&& value) { m_adapterNameHasBeenSet = true; m_adapterName = std::forward<AdapterNameT>(value); }
    template<typename AdapterNameT = Aws::String>
    AdapterOverview& WithAdapterName(AdapterNameT&& value) { SetAdapterName(std::forward<AdapterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the adapter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AdapterOverview& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature types that the adapter is operating on.</p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const { return m_featureTypes; }
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }
    template<typename FeatureTypesT = Aws::Vector<FeatureType>>
    void SetFeatureTypes(FeatureTypesT&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::forward<FeatureTypesT>(value); }
    template<typename FeatureTypesT = Aws::Vector<FeatureType>>
    AdapterOverview& WithFeatureTypes(FeatureTypesT&& value) { SetFeatureTypes(std::forward<FeatureTypesT>(value)); return *this;}
    inline AdapterOverview& AddFeatureTypes(FeatureType value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_adapterName;
    bool m_adapterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
