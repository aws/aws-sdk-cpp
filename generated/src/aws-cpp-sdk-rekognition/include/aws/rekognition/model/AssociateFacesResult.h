/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/UserStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/AssociatedFace.h>
#include <aws/rekognition/model/UnsuccessfulFaceAssociation.h>
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
  class AssociateFacesResult
  {
  public:
    AWS_REKOGNITION_API AssociateFacesResult() = default;
    AWS_REKOGNITION_API AssociateFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API AssociateFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of AssociatedFace objects containing FaceIDs that have been
     * successfully associated with the UserID. Returned if the AssociateFaces action
     * is successful.</p>
     */
    inline const Aws::Vector<AssociatedFace>& GetAssociatedFaces() const { return m_associatedFaces; }
    template<typename AssociatedFacesT = Aws::Vector<AssociatedFace>>
    void SetAssociatedFaces(AssociatedFacesT&& value) { m_associatedFacesHasBeenSet = true; m_associatedFaces = std::forward<AssociatedFacesT>(value); }
    template<typename AssociatedFacesT = Aws::Vector<AssociatedFace>>
    AssociateFacesResult& WithAssociatedFaces(AssociatedFacesT&& value) { SetAssociatedFaces(std::forward<AssociatedFacesT>(value)); return *this;}
    template<typename AssociatedFacesT = AssociatedFace>
    AssociateFacesResult& AddAssociatedFaces(AssociatedFacesT&& value) { m_associatedFacesHasBeenSet = true; m_associatedFaces.emplace_back(std::forward<AssociatedFacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of UnsuccessfulAssociation objects containing FaceIDs that are not
     * successfully associated along with the reasons. Returned if the AssociateFaces
     * action is successful.</p>
     */
    inline const Aws::Vector<UnsuccessfulFaceAssociation>& GetUnsuccessfulFaceAssociations() const { return m_unsuccessfulFaceAssociations; }
    template<typename UnsuccessfulFaceAssociationsT = Aws::Vector<UnsuccessfulFaceAssociation>>
    void SetUnsuccessfulFaceAssociations(UnsuccessfulFaceAssociationsT&& value) { m_unsuccessfulFaceAssociationsHasBeenSet = true; m_unsuccessfulFaceAssociations = std::forward<UnsuccessfulFaceAssociationsT>(value); }
    template<typename UnsuccessfulFaceAssociationsT = Aws::Vector<UnsuccessfulFaceAssociation>>
    AssociateFacesResult& WithUnsuccessfulFaceAssociations(UnsuccessfulFaceAssociationsT&& value) { SetUnsuccessfulFaceAssociations(std::forward<UnsuccessfulFaceAssociationsT>(value)); return *this;}
    template<typename UnsuccessfulFaceAssociationsT = UnsuccessfulFaceAssociation>
    AssociateFacesResult& AddUnsuccessfulFaceAssociations(UnsuccessfulFaceAssociationsT&& value) { m_unsuccessfulFaceAssociationsHasBeenSet = true; m_unsuccessfulFaceAssociations.emplace_back(std::forward<UnsuccessfulFaceAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of an update made to a UserID. Reflects if the UserID has been
     * updated for every requested change.</p>
     */
    inline UserStatus GetUserStatus() const { return m_userStatus; }
    inline void SetUserStatus(UserStatus value) { m_userStatusHasBeenSet = true; m_userStatus = value; }
    inline AssociateFacesResult& WithUserStatus(UserStatus value) { SetUserStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateFacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedFace> m_associatedFaces;
    bool m_associatedFacesHasBeenSet = false;

    Aws::Vector<UnsuccessfulFaceAssociation> m_unsuccessfulFaceAssociations;
    bool m_unsuccessfulFaceAssociationsHasBeenSet = false;

    UserStatus m_userStatus{UserStatus::NOT_SET};
    bool m_userStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
