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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetAdapterResult
  {
  public:
    AWS_TEXTRACT_API GetAdapterResult();
    AWS_TEXTRACT_API GetAdapterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API GetAdapterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string identifying the adapter that information has been retrieved for.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string identifying the adapter that information has been retrieved for.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterId = value; }

    /**
     * <p>A string identifying the adapter that information has been retrieved for.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterId = std::move(value); }

    /**
     * <p>A string identifying the adapter that information has been retrieved for.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterId.assign(value); }

    /**
     * <p>A string identifying the adapter that information has been retrieved for.</p>
     */
    inline GetAdapterResult& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string identifying the adapter that information has been retrieved for.</p>
     */
    inline GetAdapterResult& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string identifying the adapter that information has been retrieved for.</p>
     */
    inline GetAdapterResult& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>The name of the requested adapter.</p>
     */
    inline const Aws::String& GetAdapterName() const{ return m_adapterName; }

    /**
     * <p>The name of the requested adapter.</p>
     */
    inline void SetAdapterName(const Aws::String& value) { m_adapterName = value; }

    /**
     * <p>The name of the requested adapter.</p>
     */
    inline void SetAdapterName(Aws::String&& value) { m_adapterName = std::move(value); }

    /**
     * <p>The name of the requested adapter.</p>
     */
    inline void SetAdapterName(const char* value) { m_adapterName.assign(value); }

    /**
     * <p>The name of the requested adapter.</p>
     */
    inline GetAdapterResult& WithAdapterName(const Aws::String& value) { SetAdapterName(value); return *this;}

    /**
     * <p>The name of the requested adapter.</p>
     */
    inline GetAdapterResult& WithAdapterName(Aws::String&& value) { SetAdapterName(std::move(value)); return *this;}

    /**
     * <p>The name of the requested adapter.</p>
     */
    inline GetAdapterResult& WithAdapterName(const char* value) { SetAdapterName(value); return *this;}


    /**
     * <p>The date and time the requested adapter was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the requested adapter was created at.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time the requested adapter was created at.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time the requested adapter was created at.</p>
     */
    inline GetAdapterResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the requested adapter was created at.</p>
     */
    inline GetAdapterResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description for the requested adapter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the requested adapter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the requested adapter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the requested adapter.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the requested adapter.</p>
     */
    inline GetAdapterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the requested adapter.</p>
     */
    inline GetAdapterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the requested adapter.</p>
     */
    inline GetAdapterResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>List of the targeted feature types for the requested adapter.</p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>List of the targeted feature types for the requested adapter.</p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypes = value; }

    /**
     * <p>List of the targeted feature types for the requested adapter.</p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypes = std::move(value); }

    /**
     * <p>List of the targeted feature types for the requested adapter.</p>
     */
    inline GetAdapterResult& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>List of the targeted feature types for the requested adapter.</p>
     */
    inline GetAdapterResult& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>List of the targeted feature types for the requested adapter.</p>
     */
    inline GetAdapterResult& AddFeatureTypes(const FeatureType& value) { m_featureTypes.push_back(value); return *this; }

    /**
     * <p>List of the targeted feature types for the requested adapter.</p>
     */
    inline GetAdapterResult& AddFeatureTypes(FeatureType&& value) { m_featureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Binary value indicating if the adapter is being automatically updated or
     * not.</p>
     */
    inline const AutoUpdate& GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>Binary value indicating if the adapter is being automatically updated or
     * not.</p>
     */
    inline void SetAutoUpdate(const AutoUpdate& value) { m_autoUpdate = value; }

    /**
     * <p>Binary value indicating if the adapter is being automatically updated or
     * not.</p>
     */
    inline void SetAutoUpdate(AutoUpdate&& value) { m_autoUpdate = std::move(value); }

    /**
     * <p>Binary value indicating if the adapter is being automatically updated or
     * not.</p>
     */
    inline GetAdapterResult& WithAutoUpdate(const AutoUpdate& value) { SetAutoUpdate(value); return *this;}

    /**
     * <p>Binary value indicating if the adapter is being automatically updated or
     * not.</p>
     */
    inline GetAdapterResult& WithAutoUpdate(AutoUpdate&& value) { SetAutoUpdate(std::move(value)); return *this;}


    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) associated with the adapter that has been
     * retrieved.</p>
     */
    inline GetAdapterResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAdapterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAdapterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAdapterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_adapterId;

    Aws::String m_adapterName;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    Aws::Vector<FeatureType> m_featureTypes;

    AutoUpdate m_autoUpdate;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
