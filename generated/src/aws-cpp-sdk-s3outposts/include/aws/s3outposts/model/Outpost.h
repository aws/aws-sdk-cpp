/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace S3Outposts
{
namespace Model
{

  /**
   * <p>Contains the details for the Outpost object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/Outpost">AWS
   * API Reference</a></p>
   */
  class Outpost
  {
  public:
    AWS_S3OUTPOSTS_API Outpost();
    AWS_S3OUTPOSTS_API Outpost(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Outpost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline Outpost& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline Outpost& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline Outpost& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline const Aws::String& GetS3OutpostArn() const{ return m_s3OutpostArn; }

    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline bool S3OutpostArnHasBeenSet() const { return m_s3OutpostArnHasBeenSet; }

    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline void SetS3OutpostArn(const Aws::String& value) { m_s3OutpostArnHasBeenSet = true; m_s3OutpostArn = value; }

    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline void SetS3OutpostArn(Aws::String&& value) { m_s3OutpostArnHasBeenSet = true; m_s3OutpostArn = std::move(value); }

    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline void SetS3OutpostArn(const char* value) { m_s3OutpostArnHasBeenSet = true; m_s3OutpostArn.assign(value); }

    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline Outpost& WithS3OutpostArn(const Aws::String& value) { SetS3OutpostArn(value); return *this;}

    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline Outpost& WithS3OutpostArn(Aws::String&& value) { SetS3OutpostArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline Outpost& WithS3OutpostArn(const char* value) { SetS3OutpostArn(value); return *this;}


    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline Outpost& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline Outpost& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline Outpost& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline Outpost& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline Outpost& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline Outpost& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The Amazon S3 capacity of the outpost in bytes.</p>
     */
    inline long long GetCapacityInBytes() const{ return m_capacityInBytes; }

    /**
     * <p>The Amazon S3 capacity of the outpost in bytes.</p>
     */
    inline bool CapacityInBytesHasBeenSet() const { return m_capacityInBytesHasBeenSet; }

    /**
     * <p>The Amazon S3 capacity of the outpost in bytes.</p>
     */
    inline void SetCapacityInBytes(long long value) { m_capacityInBytesHasBeenSet = true; m_capacityInBytes = value; }

    /**
     * <p>The Amazon S3 capacity of the outpost in bytes.</p>
     */
    inline Outpost& WithCapacityInBytes(long long value) { SetCapacityInBytes(value); return *this;}

  private:

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_s3OutpostArn;
    bool m_s3OutpostArnHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    long long m_capacityInBytes;
    bool m_capacityInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
