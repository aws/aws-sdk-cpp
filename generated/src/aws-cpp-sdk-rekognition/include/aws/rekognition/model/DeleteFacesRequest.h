/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DeleteFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DeleteFacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFaces"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline const Aws::String& GetCollectionId() const { return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    template<typename CollectionIdT = Aws::String>
    void SetCollectionId(CollectionIdT&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::forward<CollectionIdT>(value); }
    template<typename CollectionIdT = Aws::String>
    DeleteFacesRequest& WithCollectionId(CollectionIdT&& value) { SetCollectionId(std::forward<CollectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceIds() const { return m_faceIds; }
    inline bool FaceIdsHasBeenSet() const { return m_faceIdsHasBeenSet; }
    template<typename FaceIdsT = Aws::Vector<Aws::String>>
    void SetFaceIds(FaceIdsT&& value) { m_faceIdsHasBeenSet = true; m_faceIds = std::forward<FaceIdsT>(value); }
    template<typename FaceIdsT = Aws::Vector<Aws::String>>
    DeleteFacesRequest& WithFaceIds(FaceIdsT&& value) { SetFaceIds(std::forward<FaceIdsT>(value)); return *this;}
    template<typename FaceIdsT = Aws::String>
    DeleteFacesRequest& AddFaceIds(FaceIdsT&& value) { m_faceIdsHasBeenSet = true; m_faceIds.emplace_back(std::forward<FaceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_faceIds;
    bool m_faceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
