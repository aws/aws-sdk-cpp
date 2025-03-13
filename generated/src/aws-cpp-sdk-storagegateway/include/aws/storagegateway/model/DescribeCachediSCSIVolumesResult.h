/**
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
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult() = default;
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeCachediSCSIVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects where each object contains metadata about one cached
     * volume.</p>
     */
    inline const Aws::Vector<CachediSCSIVolume>& GetCachediSCSIVolumes() const { return m_cachediSCSIVolumes; }
    template<typename CachediSCSIVolumesT = Aws::Vector<CachediSCSIVolume>>
    void SetCachediSCSIVolumes(CachediSCSIVolumesT&& value) { m_cachediSCSIVolumesHasBeenSet = true; m_cachediSCSIVolumes = std::forward<CachediSCSIVolumesT>(value); }
    template<typename CachediSCSIVolumesT = Aws::Vector<CachediSCSIVolume>>
    DescribeCachediSCSIVolumesResult& WithCachediSCSIVolumes(CachediSCSIVolumesT&& value) { SetCachediSCSIVolumes(std::forward<CachediSCSIVolumesT>(value)); return *this;}
    template<typename CachediSCSIVolumesT = CachediSCSIVolume>
    DescribeCachediSCSIVolumesResult& AddCachediSCSIVolumes(CachediSCSIVolumesT&& value) { m_cachediSCSIVolumesHasBeenSet = true; m_cachediSCSIVolumes.emplace_back(std::forward<CachediSCSIVolumesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCachediSCSIVolumesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CachediSCSIVolume> m_cachediSCSIVolumes;
    bool m_cachediSCSIVolumesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
