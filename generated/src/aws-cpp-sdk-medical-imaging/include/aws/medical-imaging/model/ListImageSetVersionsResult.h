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
    AWS_MEDICALIMAGING_API ListImageSetVersionsResult() = default;
    AWS_MEDICALIMAGING_API ListImageSetVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API ListImageSetVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all properties associated with an image set.</p>
     */
    inline const Aws::Vector<ImageSetProperties>& GetImageSetPropertiesList() const { return m_imageSetPropertiesList; }
    template<typename ImageSetPropertiesListT = Aws::Vector<ImageSetProperties>>
    void SetImageSetPropertiesList(ImageSetPropertiesListT&& value) { m_imageSetPropertiesListHasBeenSet = true; m_imageSetPropertiesList = std::forward<ImageSetPropertiesListT>(value); }
    template<typename ImageSetPropertiesListT = Aws::Vector<ImageSetProperties>>
    ListImageSetVersionsResult& WithImageSetPropertiesList(ImageSetPropertiesListT&& value) { SetImageSetPropertiesList(std::forward<ImageSetPropertiesListT>(value)); return *this;}
    template<typename ImageSetPropertiesListT = ImageSetProperties>
    ListImageSetVersionsResult& AddImageSetPropertiesList(ImageSetPropertiesListT&& value) { m_imageSetPropertiesListHasBeenSet = true; m_imageSetPropertiesList.emplace_back(std::forward<ImageSetPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the list of image set versions on the
     * next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImageSetVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImageSetVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImageSetProperties> m_imageSetPropertiesList;
    bool m_imageSetPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
