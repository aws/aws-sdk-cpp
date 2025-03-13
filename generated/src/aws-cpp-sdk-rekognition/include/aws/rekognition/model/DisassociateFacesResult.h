/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/UserStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/DisassociatedFace.h>
#include <aws/rekognition/model/UnsuccessfulFaceDisassociation.h>
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
  class DisassociateFacesResult
  {
  public:
    AWS_REKOGNITION_API DisassociateFacesResult() = default;
    AWS_REKOGNITION_API DisassociateFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DisassociateFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of DissociatedFace objects containing FaceIds that are successfully
     * disassociated with the UserID is returned. Returned if the DisassociatedFaces
     * action is successful.</p>
     */
    inline const Aws::Vector<DisassociatedFace>& GetDisassociatedFaces() const { return m_disassociatedFaces; }
    template<typename DisassociatedFacesT = Aws::Vector<DisassociatedFace>>
    void SetDisassociatedFaces(DisassociatedFacesT&& value) { m_disassociatedFacesHasBeenSet = true; m_disassociatedFaces = std::forward<DisassociatedFacesT>(value); }
    template<typename DisassociatedFacesT = Aws::Vector<DisassociatedFace>>
    DisassociateFacesResult& WithDisassociatedFaces(DisassociatedFacesT&& value) { SetDisassociatedFaces(std::forward<DisassociatedFacesT>(value)); return *this;}
    template<typename DisassociatedFacesT = DisassociatedFace>
    DisassociateFacesResult& AddDisassociatedFaces(DisassociatedFacesT&& value) { m_disassociatedFacesHasBeenSet = true; m_disassociatedFaces.emplace_back(std::forward<DisassociatedFacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of UnsuccessfulDisassociation objects containing FaceIds that are
     * not successfully associated, along with the reasons for the failure to
     * associate. Returned if the DisassociateFaces action is successful.</p>
     */
    inline const Aws::Vector<UnsuccessfulFaceDisassociation>& GetUnsuccessfulFaceDisassociations() const { return m_unsuccessfulFaceDisassociations; }
    template<typename UnsuccessfulFaceDisassociationsT = Aws::Vector<UnsuccessfulFaceDisassociation>>
    void SetUnsuccessfulFaceDisassociations(UnsuccessfulFaceDisassociationsT&& value) { m_unsuccessfulFaceDisassociationsHasBeenSet = true; m_unsuccessfulFaceDisassociations = std::forward<UnsuccessfulFaceDisassociationsT>(value); }
    template<typename UnsuccessfulFaceDisassociationsT = Aws::Vector<UnsuccessfulFaceDisassociation>>
    DisassociateFacesResult& WithUnsuccessfulFaceDisassociations(UnsuccessfulFaceDisassociationsT&& value) { SetUnsuccessfulFaceDisassociations(std::forward<UnsuccessfulFaceDisassociationsT>(value)); return *this;}
    template<typename UnsuccessfulFaceDisassociationsT = UnsuccessfulFaceDisassociation>
    DisassociateFacesResult& AddUnsuccessfulFaceDisassociations(UnsuccessfulFaceDisassociationsT&& value) { m_unsuccessfulFaceDisassociationsHasBeenSet = true; m_unsuccessfulFaceDisassociations.emplace_back(std::forward<UnsuccessfulFaceDisassociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of an update made to a User. Reflects if the User has been updated
     * for every requested change.</p>
     */
    inline UserStatus GetUserStatus() const { return m_userStatus; }
    inline void SetUserStatus(UserStatus value) { m_userStatusHasBeenSet = true; m_userStatus = value; }
    inline DisassociateFacesResult& WithUserStatus(UserStatus value) { SetUserStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateFacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DisassociatedFace> m_disassociatedFaces;
    bool m_disassociatedFacesHasBeenSet = false;

    Aws::Vector<UnsuccessfulFaceDisassociation> m_unsuccessfulFaceDisassociations;
    bool m_unsuccessfulFaceDisassociationsHasBeenSet = false;

    UserStatus m_userStatus{UserStatus::NOT_SET};
    bool m_userStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
