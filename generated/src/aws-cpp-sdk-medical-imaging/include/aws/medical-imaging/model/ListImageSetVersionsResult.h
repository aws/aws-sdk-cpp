/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/ImageSetProperties.h>
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
namespace MedicalImaging
{
namespace Model
{
  class ListImageSetVersionsResult
  {
  public:
    AWS_MEDICALIMAGING_API ListImageSetVersionsResult();
    AWS_MEDICALIMAGING_API ListImageSetVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API ListImageSetVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists all properties associated with an image set.</p>
     */
    inline const Aws::Vector<ImageSetProperties>& GetImageSetPropertiesList() const{ return m_imageSetPropertiesList; }

    /**
     * <p>Lists all properties associated with an image set.</p>
     */
    inline void SetImageSetPropertiesList(const Aws::Vector<ImageSetProperties>& value) { m_imageSetPropertiesList = value; }

    /**
     * <p>Lists all properties associated with an image set.</p>
     */
    inline void SetImageSetPropertiesList(Aws::Vector<ImageSetProperties>&& value) { m_imageSetPropertiesList = std::move(value); }

    /**
     * <p>Lists all properties associated with an image set.</p>
     */
    inline ListImageSetVersionsResult& WithImageSetPropertiesList(const Aws::Vector<ImageSetProperties>& value) { SetImageSetPropertiesList(value); return *this;}

    /**
     * <p>Lists all properties associated with an image set.</p>
     */
    inline ListImageSetVersionsResult& WithImageSetPropertiesList(Aws::Vector<ImageSetProperties>&& value) { SetImageSetPropertiesList(std::move(value)); return *this;}

    /**
     * <p>Lists all properties associated with an image set.</p>
     */
    inline ListImageSetVersionsResult& AddImageSetPropertiesList(const ImageSetProperties& value) { m_imageSetPropertiesList.push_back(value); return *this; }

    /**
     * <p>Lists all properties associated with an image set.</p>
     */
    inline ListImageSetVersionsResult& AddImageSetPropertiesList(ImageSetProperties&& value) { m_imageSetPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the list of image set versions on the
     * next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the list of image set versions on the
     * next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the list of image set versions on the
     * next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the list of image set versions on the
     * next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the list of image set versions on the
     * next page.</p>
     */
    inline ListImageSetVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the list of image set versions on the
     * next page.</p>
     */
    inline ListImageSetVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the list of image set versions on the
     * next page.</p>
     */
    inline ListImageSetVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListImageSetVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListImageSetVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListImageSetVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ImageSetProperties> m_imageSetPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
