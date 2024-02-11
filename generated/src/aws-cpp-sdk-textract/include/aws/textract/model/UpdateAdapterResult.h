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
    AWS_TEXTRACT_API UpdateAdapterResult();
    AWS_TEXTRACT_API UpdateAdapterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API UpdateAdapterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string containing a unique ID for the adapter that has been updated.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string containing a unique ID for the adapter that has been updated.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterId = value; }

    /**
     * <p>A string containing a unique ID for the adapter that has been updated.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterId = std::move(value); }

    /**
     * <p>A string containing a unique ID for the adapter that has been updated.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterId.assign(value); }

    /**
     * <p>A string containing a unique ID for the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>A string containing the name of the adapter that has been updated.</p>
     */
    inline const Aws::String& GetAdapterName() const{ return m_adapterName; }

    /**
     * <p>A string containing the name of the adapter that has been updated.</p>
     */
    inline void SetAdapterName(const Aws::String& value) { m_adapterName = value; }

    /**
     * <p>A string containing the name of the adapter that has been updated.</p>
     */
    inline void SetAdapterName(Aws::String&& value) { m_adapterName = std::move(value); }

    /**
     * <p>A string containing the name of the adapter that has been updated.</p>
     */
    inline void SetAdapterName(const char* value) { m_adapterName.assign(value); }

    /**
     * <p>A string containing the name of the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithAdapterName(const Aws::String& value) { SetAdapterName(value); return *this;}

    /**
     * <p>A string containing the name of the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithAdapterName(Aws::String&& value) { SetAdapterName(std::move(value)); return *this;}

    /**
     * <p>A string containing the name of the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithAdapterName(const char* value) { SetAdapterName(value); return *this;}


    /**
     * <p>An object specifying the creation time of the the adapter that has been
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>An object specifying the creation time of the the adapter that has been
     * updated.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>An object specifying the creation time of the the adapter that has been
     * updated.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>An object specifying the creation time of the the adapter that has been
     * updated.</p>
     */
    inline UpdateAdapterResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>An object specifying the creation time of the the adapter that has been
     * updated.</p>
     */
    inline UpdateAdapterResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A string containing the description of the adapter that has been updated.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A string containing the description of the adapter that has been updated.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A string containing the description of the adapter that has been updated.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A string containing the description of the adapter that has been updated.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A string containing the description of the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A string containing the description of the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A string containing the description of the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>List of the targeted feature types for the updated adapter.</p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>List of the targeted feature types for the updated adapter.</p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypes = value; }

    /**
     * <p>List of the targeted feature types for the updated adapter.</p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypes = std::move(value); }

    /**
     * <p>List of the targeted feature types for the updated adapter.</p>
     */
    inline UpdateAdapterResult& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>List of the targeted feature types for the updated adapter.</p>
     */
    inline UpdateAdapterResult& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>List of the targeted feature types for the updated adapter.</p>
     */
    inline UpdateAdapterResult& AddFeatureTypes(const FeatureType& value) { m_featureTypes.push_back(value); return *this; }

    /**
     * <p>List of the targeted feature types for the updated adapter.</p>
     */
    inline UpdateAdapterResult& AddFeatureTypes(FeatureType&& value) { m_featureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The auto-update status of the adapter that has been updated.</p>
     */
    inline const AutoUpdate& GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>The auto-update status of the adapter that has been updated.</p>
     */
    inline void SetAutoUpdate(const AutoUpdate& value) { m_autoUpdate = value; }

    /**
     * <p>The auto-update status of the adapter that has been updated.</p>
     */
    inline void SetAutoUpdate(AutoUpdate&& value) { m_autoUpdate = std::move(value); }

    /**
     * <p>The auto-update status of the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithAutoUpdate(const AutoUpdate& value) { SetAutoUpdate(value); return *this;}

    /**
     * <p>The auto-update status of the adapter that has been updated.</p>
     */
    inline UpdateAdapterResult& WithAutoUpdate(AutoUpdate&& value) { SetAutoUpdate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAdapterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAdapterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAdapterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_adapterId;

    Aws::String m_adapterName;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    Aws::Vector<FeatureType> m_featureTypes;

    AutoUpdate m_autoUpdate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
