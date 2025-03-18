/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/AutoUpdate.h>
#include <aws/textract/model/FeatureType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Textract
{
namespace Model
{
  class UpdateAdapterResult
  {
  public:
    AWS_TEXTRACT_API UpdateAdapterResult() = default;
    AWS_TEXTRACT_API UpdateAdapterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API UpdateAdapterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A string containing a unique ID for the adapter that has been updated.</p>
     */
    inline const Aws::String& GetAdapterId() const { return m_adapterId; }
    template<typename AdapterIdT = Aws::String>
    void SetAdapterId(AdapterIdT&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::forward<AdapterIdT>(value); }
    template<typename AdapterIdT = Aws::String>
    UpdateAdapterResult& WithAdapterId(AdapterIdT&& value) { SetAdapterId(std::forward<AdapterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the name of the adapter that has been updated.</p>
     */
    inline const Aws::String& GetAdapterName() const { return m_adapterName; }
    template<typename AdapterNameT = Aws::String>
    void SetAdapterName(AdapterNameT&& value) { m_adapterNameHasBeenSet = true; m_adapterName = std::forward<AdapterNameT>(value); }
    template<typename AdapterNameT = Aws::String>
    UpdateAdapterResult& WithAdapterName(AdapterNameT&& value) { SetAdapterName(std::forward<AdapterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object specifying the creation time of the the adapter that has been
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    UpdateAdapterResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the description of the adapter that has been updated.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAdapterResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the targeted feature types for the updated adapter.</p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const { return m_featureTypes; }
    template<typename FeatureTypesT = Aws::Vector<FeatureType>>
    void SetFeatureTypes(FeatureTypesT&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::forward<FeatureTypesT>(value); }
    template<typename FeatureTypesT = Aws::Vector<FeatureType>>
    UpdateAdapterResult& WithFeatureTypes(FeatureTypesT&& value) { SetFeatureTypes(std::forward<FeatureTypesT>(value)); return *this;}
    inline UpdateAdapterResult& AddFeatureTypes(FeatureType value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The auto-update status of the adapter that has been updated.</p>
     */
    inline AutoUpdate GetAutoUpdate() const { return m_autoUpdate; }
    inline void SetAutoUpdate(AutoUpdate value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline UpdateAdapterResult& WithAutoUpdate(AutoUpdate value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAdapterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_adapterName;
    bool m_adapterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;

    AutoUpdate m_autoUpdate{AutoUpdate::NOT_SET};
    bool m_autoUpdateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
