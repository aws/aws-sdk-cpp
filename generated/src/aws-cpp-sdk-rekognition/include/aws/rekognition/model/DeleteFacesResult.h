/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_REKOGNITION_API DeleteFacesResult();
    AWS_REKOGNITION_API DeleteFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DeleteFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletedFaces() const{ return m_deletedFaces; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline void SetDeletedFaces(const Aws::Vector<Aws::String>& value) { m_deletedFaces = value; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline void SetDeletedFaces(Aws::Vector<Aws::String>&& value) { m_deletedFaces = std::move(value); }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& WithDeletedFaces(const Aws::Vector<Aws::String>& value) { SetDeletedFaces(value); return *this;}

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& WithDeletedFaces(Aws::Vector<Aws::String>&& value) { SetDeletedFaces(std::move(value)); return *this;}

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& AddDeletedFaces(const Aws::String& value) { m_deletedFaces.push_back(value); return *this; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& AddDeletedFaces(Aws::String&& value) { m_deletedFaces.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& AddDeletedFaces(const char* value) { m_deletedFaces.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_deletedFaces;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
