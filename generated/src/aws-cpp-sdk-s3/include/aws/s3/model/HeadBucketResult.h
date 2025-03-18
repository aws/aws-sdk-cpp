/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/LocationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class HeadBucketResult
  {
  public:
    AWS_S3_API HeadBucketResult() = default;
    AWS_S3_API HeadBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API HeadBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The type of location where the bucket is created.</p>  <p>This
     * functionality is only supported by directory buckets.</p> 
     */
    inline LocationType GetBucketLocationType() const { return m_bucketLocationType; }
    inline void SetBucketLocationType(LocationType value) { m_bucketLocationTypeHasBeenSet = true; m_bucketLocationType = value; }
    inline HeadBucketResult& WithBucketLocationType(LocationType value) { SetBucketLocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the location where the bucket will be created.</p> <p>For
     * directory buckets, the Zone ID of the Availability Zone or the Local Zone where
     * the bucket is created. An example Zone ID value for an Availability Zone is
     * <code>usw2-az1</code>.</p>  <p>This functionality is only supported by
     * directory buckets.</p> 
     */
    inline const Aws::String& GetBucketLocationName() const { return m_bucketLocationName; }
    template<typename BucketLocationNameT = Aws::String>
    void SetBucketLocationName(BucketLocationNameT&& value) { m_bucketLocationNameHasBeenSet = true; m_bucketLocationName = std::forward<BucketLocationNameT>(value); }
    template<typename BucketLocationNameT = Aws::String>
    HeadBucketResult& WithBucketLocationName(BucketLocationNameT&& value) { SetBucketLocationName(std::forward<BucketLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region that the bucket is located.</p>
     */
    inline const Aws::String& GetBucketRegion() const { return m_bucketRegion; }
    template<typename BucketRegionT = Aws::String>
    void SetBucketRegion(BucketRegionT&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::forward<BucketRegionT>(value); }
    template<typename BucketRegionT = Aws::String>
    HeadBucketResult& WithBucketRegion(BucketRegionT&& value) { SetBucketRegion(std::forward<BucketRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the bucket name used in the request is an access point
     * alias.</p>  <p>For directory buckets, the value of this field is
     * <code>false</code>.</p> 
     */
    inline bool GetAccessPointAlias() const { return m_accessPointAlias; }
    inline void SetAccessPointAlias(bool value) { m_accessPointAliasHasBeenSet = true; m_accessPointAlias = value; }
    inline HeadBucketResult& WithAccessPointAlias(bool value) { SetAccessPointAlias(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    HeadBucketResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LocationType m_bucketLocationType{LocationType::NOT_SET};
    bool m_bucketLocationTypeHasBeenSet = false;

    Aws::String m_bucketLocationName;
    bool m_bucketLocationNameHasBeenSet = false;

    Aws::String m_bucketRegion;
    bool m_bucketRegionHasBeenSet = false;

    bool m_accessPointAlias{false};
    bool m_accessPointAliasHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
