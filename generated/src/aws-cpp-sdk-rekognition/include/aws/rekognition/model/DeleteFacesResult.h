/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/UnsuccessfulFaceDeletion.h>
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
namespace Rekognition
{
namespace Model
{
  class DeleteFacesResult
  {
  public:
    AWS_REKOGNITION_API DeleteFacesResult() = default;
    AWS_REKOGNITION_API DeleteFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DeleteFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletedFaces() const { return m_deletedFaces; }
    template<typename DeletedFacesT = Aws::Vector<Aws::String>>
    void SetDeletedFaces(DeletedFacesT&& value) { m_deletedFacesHasBeenSet = true; m_deletedFaces = std::forward<DeletedFacesT>(value); }
    template<typename DeletedFacesT = Aws::Vector<Aws::String>>
    DeleteFacesResult& WithDeletedFaces(DeletedFacesT&& value) { SetDeletedFaces(std::forward<DeletedFacesT>(value)); return *this;}
    template<typename DeletedFacesT = Aws::String>
    DeleteFacesResult& AddDeletedFaces(DeletedFacesT&& value) { m_deletedFacesHasBeenSet = true; m_deletedFaces.emplace_back(std::forward<DeletedFacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of any faces that weren't deleted.</p>
     */
    inline const Aws::Vector<UnsuccessfulFaceDeletion>& GetUnsuccessfulFaceDeletions() const { return m_unsuccessfulFaceDeletions; }
    template<typename UnsuccessfulFaceDeletionsT = Aws::Vector<UnsuccessfulFaceDeletion>>
    void SetUnsuccessfulFaceDeletions(UnsuccessfulFaceDeletionsT&& value) { m_unsuccessfulFaceDeletionsHasBeenSet = true; m_unsuccessfulFaceDeletions = std::forward<UnsuccessfulFaceDeletionsT>(value); }
    template<typename UnsuccessfulFaceDeletionsT = Aws::Vector<UnsuccessfulFaceDeletion>>
    DeleteFacesResult& WithUnsuccessfulFaceDeletions(UnsuccessfulFaceDeletionsT&& value) { SetUnsuccessfulFaceDeletions(std::forward<UnsuccessfulFaceDeletionsT>(value)); return *this;}
    template<typename UnsuccessfulFaceDeletionsT = UnsuccessfulFaceDeletion>
    DeleteFacesResult& AddUnsuccessfulFaceDeletions(UnsuccessfulFaceDeletionsT&& value) { m_unsuccessfulFaceDeletionsHasBeenSet = true; m_unsuccessfulFaceDeletions.emplace_back(std::forward<UnsuccessfulFaceDeletionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteFacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deletedFaces;
    bool m_deletedFacesHasBeenSet = false;

    Aws::Vector<UnsuccessfulFaceDeletion> m_unsuccessfulFaceDeletions;
    bool m_unsuccessfulFaceDeletionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
