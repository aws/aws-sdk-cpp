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
    AWS_REKOGNITION_API DisassociateFacesResult();
    AWS_REKOGNITION_API DisassociateFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DisassociateFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of DissociatedFace objects containing FaceIds that are successfully
     * disassociated with the UserID is returned. Returned if the DisassociatedFaces
     * action is successful.</p>
     */
    inline const Aws::Vector<DisassociatedFace>& GetDisassociatedFaces() const{ return m_disassociatedFaces; }

    /**
     * <p>An array of DissociatedFace objects containing FaceIds that are successfully
     * disassociated with the UserID is returned. Returned if the DisassociatedFaces
     * action is successful.</p>
     */
    inline void SetDisassociatedFaces(const Aws::Vector<DisassociatedFace>& value) { m_disassociatedFaces = value; }

    /**
     * <p>An array of DissociatedFace objects containing FaceIds that are successfully
     * disassociated with the UserID is returned. Returned if the DisassociatedFaces
     * action is successful.</p>
     */
    inline void SetDisassociatedFaces(Aws::Vector<DisassociatedFace>&& value) { m_disassociatedFaces = std::move(value); }

    /**
     * <p>An array of DissociatedFace objects containing FaceIds that are successfully
     * disassociated with the UserID is returned. Returned if the DisassociatedFaces
     * action is successful.</p>
     */
    inline DisassociateFacesResult& WithDisassociatedFaces(const Aws::Vector<DisassociatedFace>& value) { SetDisassociatedFaces(value); return *this;}

    /**
     * <p>An array of DissociatedFace objects containing FaceIds that are successfully
     * disassociated with the UserID is returned. Returned if the DisassociatedFaces
     * action is successful.</p>
     */
    inline DisassociateFacesResult& WithDisassociatedFaces(Aws::Vector<DisassociatedFace>&& value) { SetDisassociatedFaces(std::move(value)); return *this;}

    /**
     * <p>An array of DissociatedFace objects containing FaceIds that are successfully
     * disassociated with the UserID is returned. Returned if the DisassociatedFaces
     * action is successful.</p>
     */
    inline DisassociateFacesResult& AddDisassociatedFaces(const DisassociatedFace& value) { m_disassociatedFaces.push_back(value); return *this; }

    /**
     * <p>An array of DissociatedFace objects containing FaceIds that are successfully
     * disassociated with the UserID is returned. Returned if the DisassociatedFaces
     * action is successful.</p>
     */
    inline DisassociateFacesResult& AddDisassociatedFaces(DisassociatedFace&& value) { m_disassociatedFaces.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of UnsuccessfulDisassociation objects containing FaceIds that are
     * not successfully associated, along with the reasons for the failure to
     * associate. Returned if the DisassociateFaces action is successful.</p>
     */
    inline const Aws::Vector<UnsuccessfulFaceDisassociation>& GetUnsuccessfulFaceDisassociations() const{ return m_unsuccessfulFaceDisassociations; }

    /**
     * <p>An array of UnsuccessfulDisassociation objects containing FaceIds that are
     * not successfully associated, along with the reasons for the failure to
     * associate. Returned if the DisassociateFaces action is successful.</p>
     */
    inline void SetUnsuccessfulFaceDisassociations(const Aws::Vector<UnsuccessfulFaceDisassociation>& value) { m_unsuccessfulFaceDisassociations = value; }

    /**
     * <p>An array of UnsuccessfulDisassociation objects containing FaceIds that are
     * not successfully associated, along with the reasons for the failure to
     * associate. Returned if the DisassociateFaces action is successful.</p>
     */
    inline void SetUnsuccessfulFaceDisassociations(Aws::Vector<UnsuccessfulFaceDisassociation>&& value) { m_unsuccessfulFaceDisassociations = std::move(value); }

    /**
     * <p>An array of UnsuccessfulDisassociation objects containing FaceIds that are
     * not successfully associated, along with the reasons for the failure to
     * associate. Returned if the DisassociateFaces action is successful.</p>
     */
    inline DisassociateFacesResult& WithUnsuccessfulFaceDisassociations(const Aws::Vector<UnsuccessfulFaceDisassociation>& value) { SetUnsuccessfulFaceDisassociations(value); return *this;}

    /**
     * <p>An array of UnsuccessfulDisassociation objects containing FaceIds that are
     * not successfully associated, along with the reasons for the failure to
     * associate. Returned if the DisassociateFaces action is successful.</p>
     */
    inline DisassociateFacesResult& WithUnsuccessfulFaceDisassociations(Aws::Vector<UnsuccessfulFaceDisassociation>&& value) { SetUnsuccessfulFaceDisassociations(std::move(value)); return *this;}

    /**
     * <p>An array of UnsuccessfulDisassociation objects containing FaceIds that are
     * not successfully associated, along with the reasons for the failure to
     * associate. Returned if the DisassociateFaces action is successful.</p>
     */
    inline DisassociateFacesResult& AddUnsuccessfulFaceDisassociations(const UnsuccessfulFaceDisassociation& value) { m_unsuccessfulFaceDisassociations.push_back(value); return *this; }

    /**
     * <p>An array of UnsuccessfulDisassociation objects containing FaceIds that are
     * not successfully associated, along with the reasons for the failure to
     * associate. Returned if the DisassociateFaces action is successful.</p>
     */
    inline DisassociateFacesResult& AddUnsuccessfulFaceDisassociations(UnsuccessfulFaceDisassociation&& value) { m_unsuccessfulFaceDisassociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of an update made to a User. Reflects if the User has been updated
     * for every requested change.</p>
     */
    inline const UserStatus& GetUserStatus() const{ return m_userStatus; }

    /**
     * <p>The status of an update made to a User. Reflects if the User has been updated
     * for every requested change.</p>
     */
    inline void SetUserStatus(const UserStatus& value) { m_userStatus = value; }

    /**
     * <p>The status of an update made to a User. Reflects if the User has been updated
     * for every requested change.</p>
     */
    inline void SetUserStatus(UserStatus&& value) { m_userStatus = std::move(value); }

    /**
     * <p>The status of an update made to a User. Reflects if the User has been updated
     * for every requested change.</p>
     */
    inline DisassociateFacesResult& WithUserStatus(const UserStatus& value) { SetUserStatus(value); return *this;}

    /**
     * <p>The status of an update made to a User. Reflects if the User has been updated
     * for every requested change.</p>
     */
    inline DisassociateFacesResult& WithUserStatus(UserStatus&& value) { SetUserStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateFacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateFacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateFacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DisassociatedFace> m_disassociatedFaces;

    Aws::Vector<UnsuccessfulFaceDisassociation> m_unsuccessfulFaceDisassociations;

    UserStatus m_userStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
