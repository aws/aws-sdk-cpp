/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Information about the deleted object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeletedObject">AWS
   * API Reference</a></p>
   */
  class DeletedObject
  {
  public:
    AWS_S3_API DeletedObject() = default;
    AWS_S3_API DeletedObject(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API DeletedObject& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the deleted object.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DeletedObject& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the deleted object.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    DeletedObject& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the specified object version that was permanently deleted
     * was (true) or was not (false) a delete marker before deletion. In a simple
     * DELETE, this header indicates whether (true) or not (false) the current version
     * of the object is a delete marker. To learn more about delete markers, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/DeleteMarker.html">Working
     * with delete markers</a>.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline bool GetDeleteMarker() const { return m_deleteMarker; }
    inline bool DeleteMarkerHasBeenSet() const { return m_deleteMarkerHasBeenSet; }
    inline void SetDeleteMarker(bool value) { m_deleteMarkerHasBeenSet = true; m_deleteMarker = value; }
    inline DeletedObject& WithDeleteMarker(bool value) { SetDeleteMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the delete marker created as a result of the DELETE
     * operation. If you delete a specific object version, the value returned by this
     * header is the version ID of the object version deleted.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetDeleteMarkerVersionId() const { return m_deleteMarkerVersionId; }
    inline bool DeleteMarkerVersionIdHasBeenSet() const { return m_deleteMarkerVersionIdHasBeenSet; }
    template<typename DeleteMarkerVersionIdT = Aws::String>
    void SetDeleteMarkerVersionId(DeleteMarkerVersionIdT&& value) { m_deleteMarkerVersionIdHasBeenSet = true; m_deleteMarkerVersionId = std::forward<DeleteMarkerVersionIdT>(value); }
    template<typename DeleteMarkerVersionIdT = Aws::String>
    DeletedObject& WithDeleteMarkerVersionId(DeleteMarkerVersionIdT&& value) { SetDeleteMarkerVersionId(std::forward<DeleteMarkerVersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    bool m_deleteMarker{false};
    bool m_deleteMarkerHasBeenSet = false;

    Aws::String m_deleteMarkerVersionId;
    bool m_deleteMarkerVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
