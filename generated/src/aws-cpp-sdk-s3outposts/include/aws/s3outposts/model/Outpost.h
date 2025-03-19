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
    AWS_S3OUTPOSTS_API Outpost() = default;
    AWS_S3OUTPOSTS_API Outpost(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Outpost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    Outpost& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the unique S3 on Outposts ARN for use with Resource Access Manager
     * (RAM).</p>
     */
    inline const Aws::String& GetS3OutpostArn() const { return m_s3OutpostArn; }
    inline bool S3OutpostArnHasBeenSet() const { return m_s3OutpostArnHasBeenSet; }
    template<typename S3OutpostArnT = Aws::String>
    void SetS3OutpostArn(S3OutpostArnT&& value) { m_s3OutpostArnHasBeenSet = true; m_s3OutpostArn = std::forward<S3OutpostArnT>(value); }
    template<typename S3OutpostArnT = Aws::String>
    Outpost& WithS3OutpostArn(S3OutpostArnT&& value) { SetS3OutpostArn(std::forward<S3OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the unique identifier for the outpost.</p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    Outpost& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the Amazon Web Services account ID of the outpost owner. Useful for
     * comparing owned versus shared outposts.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    Outpost& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 capacity of the outpost in bytes.</p>
     */
    inline long long GetCapacityInBytes() const { return m_capacityInBytes; }
    inline bool CapacityInBytesHasBeenSet() const { return m_capacityInBytesHasBeenSet; }
    inline void SetCapacityInBytes(long long value) { m_capacityInBytesHasBeenSet = true; m_capacityInBytes = value; }
    inline Outpost& WithCapacityInBytes(long long value) { SetCapacityInBytes(value); return *this;}
    ///@}
  private:

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_s3OutpostArn;
    bool m_s3OutpostArnHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    long long m_capacityInBytes{0};
    bool m_capacityInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
