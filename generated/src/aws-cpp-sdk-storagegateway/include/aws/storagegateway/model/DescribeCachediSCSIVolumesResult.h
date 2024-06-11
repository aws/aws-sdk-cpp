﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/CachediSCSIVolume.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeCachediSCSIVolumesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeCachediSCSIVolumesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult();
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline const Aws::Vector<CachediSCSIVolume>& GetCachediSCSIVolumes() const{ return m_cachediSCSIVolumes; }
    inline void SetCachediSCSIVolumes(const Aws::Vector<CachediSCSIVolume>& value) { m_cachediSCSIVolumes = value; }
    inline void SetCachediSCSIVolumes(Aws::Vector<CachediSCSIVolume>&& value) { m_cachediSCSIVolumes = std::move(value); }
    inline DescribeCachediSCSIVolumesResult& WithCachediSCSIVolumes(const Aws::Vector<CachediSCSIVolume>& value) { SetCachediSCSIVolumes(value); return *this;}
    inline DescribeCachediSCSIVolumesResult& WithCachediSCSIVolumes(Aws::Vector<CachediSCSIVolume>&& value) { SetCachediSCSIVolumes(std::move(value)); return *this;}
    inline DescribeCachediSCSIVolumesResult& AddCachediSCSIVolumes(const CachediSCSIVolume& value) { m_cachediSCSIVolumes.push_back(value); return *this; }
    inline DescribeCachediSCSIVolumesResult& AddCachediSCSIVolumes(CachediSCSIVolume&& value) { m_cachediSCSIVolumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCachediSCSIVolumesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCachediSCSIVolumesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCachediSCSIVolumesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CachediSCSIVolume> m_cachediSCSIVolumes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
