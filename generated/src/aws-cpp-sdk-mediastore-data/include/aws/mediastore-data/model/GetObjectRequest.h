/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/MediaStoreDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaStoreData
{
namespace Model
{

  /**
   */
  class GetObjectRequest : public MediaStoreDataRequest
  {
  public:
    AWS_MEDIASTOREDATA_API GetObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetObject"; }

    AWS_MEDIASTOREDATA_API Aws::String SerializePayload() const override;

    AWS_MEDIASTOREDATA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline GetObjectRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline GetObjectRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline GetObjectRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The range bytes of an object to retrieve. For more information about the
     * <code>Range</code> header, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35</a>.
     * AWS Elemental MediaStore ignores this header for partially uploaded objects that
     * have streaming upload availability.</p>
     */
    inline const Aws::String& GetRange() const{ return m_range; }

    /**
     * <p>The range bytes of an object to retrieve. For more information about the
     * <code>Range</code> header, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35</a>.
     * AWS Elemental MediaStore ignores this header for partially uploaded objects that
     * have streaming upload availability.</p>
     */
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }

    /**
     * <p>The range bytes of an object to retrieve. For more information about the
     * <code>Range</code> header, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35</a>.
     * AWS Elemental MediaStore ignores this header for partially uploaded objects that
     * have streaming upload availability.</p>
     */
    inline void SetRange(const Aws::String& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * <p>The range bytes of an object to retrieve. For more information about the
     * <code>Range</code> header, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35</a>.
     * AWS Elemental MediaStore ignores this header for partially uploaded objects that
     * have streaming upload availability.</p>
     */
    inline void SetRange(Aws::String&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }

    /**
     * <p>The range bytes of an object to retrieve. For more information about the
     * <code>Range</code> header, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35</a>.
     * AWS Elemental MediaStore ignores this header for partially uploaded objects that
     * have streaming upload availability.</p>
     */
    inline void SetRange(const char* value) { m_rangeHasBeenSet = true; m_range.assign(value); }

    /**
     * <p>The range bytes of an object to retrieve. For more information about the
     * <code>Range</code> header, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35</a>.
     * AWS Elemental MediaStore ignores this header for partially uploaded objects that
     * have streaming upload availability.</p>
     */
    inline GetObjectRequest& WithRange(const Aws::String& value) { SetRange(value); return *this;}

    /**
     * <p>The range bytes of an object to retrieve. For more information about the
     * <code>Range</code> header, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35</a>.
     * AWS Elemental MediaStore ignores this header for partially uploaded objects that
     * have streaming upload availability.</p>
     */
    inline GetObjectRequest& WithRange(Aws::String&& value) { SetRange(std::move(value)); return *this;}

    /**
     * <p>The range bytes of an object to retrieve. For more information about the
     * <code>Range</code> header, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35</a>.
     * AWS Elemental MediaStore ignores this header for partially uploaded objects that
     * have streaming upload availability.</p>
     */
    inline GetObjectRequest& WithRange(const char* value) { SetRange(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_range;
    bool m_rangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
