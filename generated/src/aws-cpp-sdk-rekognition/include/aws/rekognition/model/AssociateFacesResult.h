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
    AWS_REKOGNITION_API AssociateFacesResult();
    AWS_REKOGNITION_API AssociateFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API AssociateFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of AssociatedFace objects containing FaceIDs that have been
     * successfully associated with the UserID. Returned if the AssociateFaces action
     * is successful.</p>
     */
    inline const Aws::Vector<AssociatedFace>& GetAssociatedFaces() const{ return m_associatedFaces; }

    /**
     * <p>An array of AssociatedFace objects containing FaceIDs that have been
     * successfully associated with the UserID. Returned if the AssociateFaces action
     * is successful.</p>
     */
    inline void SetAssociatedFaces(const Aws::Vector<AssociatedFace>& value) { m_associatedFaces = value; }

    /**
     * <p>An array of AssociatedFace objects containing FaceIDs that have been
     * successfully associated with the UserID. Returned if the AssociateFaces action
     * is successful.</p>
     */
    inline void SetAssociatedFaces(Aws::Vector<AssociatedFace>&& value) { m_associatedFaces = std::move(value); }

    /**
     * <p>An array of AssociatedFace objects containing FaceIDs that have been
     * successfully associated with the UserID. Returned if the AssociateFaces action
     * is successful.</p>
     */
    inline AssociateFacesResult& WithAssociatedFaces(const Aws::Vector<AssociatedFace>& value) { SetAssociatedFaces(value); return *this;}

    /**
     * <p>An array of AssociatedFace objects containing FaceIDs that have been
     * successfully associated with the UserID. Returned if the AssociateFaces action
     * is successful.</p>
     */
    inline AssociateFacesResult& WithAssociatedFaces(Aws::Vector<AssociatedFace>&& value) { SetAssociatedFaces(std::move(value)); return *this;}

    /**
     * <p>An array of AssociatedFace objects containing FaceIDs that have been
     * successfully associated with the UserID. Returned if the AssociateFaces action
     * is successful.</p>
     */
    inline AssociateFacesResult& AddAssociatedFaces(const AssociatedFace& value) { m_associatedFaces.push_back(value); return *this; }

    /**
     * <p>An array of AssociatedFace objects containing FaceIDs that have been
     * successfully associated with the UserID. Returned if the AssociateFaces action
     * is successful.</p>
     */
    inline AssociateFacesResult& AddAssociatedFaces(AssociatedFace&& value) { m_associatedFaces.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of UnsuccessfulAssociation objects containing FaceIDs that are not
     * successfully associated along with the reasons. Returned if the AssociateFaces
     * action is successful.</p>
     */
    inline const Aws::Vector<UnsuccessfulFaceAssociation>& GetUnsuccessfulFaceAssociations() const{ return m_unsuccessfulFaceAssociations; }

    /**
     * <p>An array of UnsuccessfulAssociation objects containing FaceIDs that are not
     * successfully associated along with the reasons. Returned if the AssociateFaces
     * action is successful.</p>
     */
    inline void SetUnsuccessfulFaceAssociations(const Aws::Vector<UnsuccessfulFaceAssociation>& value) { m_unsuccessfulFaceAssociations = value; }

    /**
     * <p>An array of UnsuccessfulAssociation objects containing FaceIDs that are not
     * successfully associated along with the reasons. Returned if the AssociateFaces
     * action is successful.</p>
     */
    inline void SetUnsuccessfulFaceAssociations(Aws::Vector<UnsuccessfulFaceAssociation>&& value) { m_unsuccessfulFaceAssociations = std::move(value); }

    /**
     * <p>An array of UnsuccessfulAssociation objects containing FaceIDs that are not
     * successfully associated along with the reasons. Returned if the AssociateFaces
     * action is successful.</p>
     */
    inline AssociateFacesResult& WithUnsuccessfulFaceAssociations(const Aws::Vector<UnsuccessfulFaceAssociation>& value) { SetUnsuccessfulFaceAssociations(value); return *this;}

    /**
     * <p>An array of UnsuccessfulAssociation objects containing FaceIDs that are not
     * successfully associated along with the reasons. Returned if the AssociateFaces
     * action is successful.</p>
     */
    inline AssociateFacesResult& WithUnsuccessfulFaceAssociations(Aws::Vector<UnsuccessfulFaceAssociation>&& value) { SetUnsuccessfulFaceAssociations(std::move(value)); return *this;}

    /**
     * <p>An array of UnsuccessfulAssociation objects containing FaceIDs that are not
     * successfully associated along with the reasons. Returned if the AssociateFaces
     * action is successful.</p>
     */
    inline AssociateFacesResult& AddUnsuccessfulFaceAssociations(const UnsuccessfulFaceAssociation& value) { m_unsuccessfulFaceAssociations.push_back(value); return *this; }

    /**
     * <p>An array of UnsuccessfulAssociation objects containing FaceIDs that are not
     * successfully associated along with the reasons. Returned if the AssociateFaces
     * action is successful.</p>
     */
    inline AssociateFacesResult& AddUnsuccessfulFaceAssociations(UnsuccessfulFaceAssociation&& value) { m_unsuccessfulFaceAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of an update made to a UserID. Reflects if the UserID has been
     * updated for every requested change.</p>
     */
    inline const UserStatus& GetUserStatus() const{ return m_userStatus; }

    /**
     * <p>The status of an update made to a UserID. Reflects if the UserID has been
     * updated for every requested change.</p>
     */
    inline void SetUserStatus(const UserStatus& value) { m_userStatus = value; }

    /**
     * <p>The status of an update made to a UserID. Reflects if the UserID has been
     * updated for every requested change.</p>
     */
    inline void SetUserStatus(UserStatus&& value) { m_userStatus = std::move(value); }

    /**
     * <p>The status of an update made to a UserID. Reflects if the UserID has been
     * updated for every requested change.</p>
     */
    inline AssociateFacesResult& WithUserStatus(const UserStatus& value) { SetUserStatus(value); return *this;}

    /**
     * <p>The status of an update made to a UserID. Reflects if the UserID has been
     * updated for every requested change.</p>
     */
    inline AssociateFacesResult& WithUserStatus(UserStatus&& value) { SetUserStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateFacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateFacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateFacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AssociatedFace> m_associatedFaces;

    Aws::Vector<UnsuccessfulFaceAssociation> m_unsuccessfulFaceAssociations;

    UserStatus m_userStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
