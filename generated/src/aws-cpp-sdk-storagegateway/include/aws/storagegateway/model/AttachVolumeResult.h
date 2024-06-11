﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>AttachVolumeOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AttachVolumeOutput">AWS
   * API Reference</a></p>
   */
  class AttachVolumeResult
  {
  public:
    AWS_STORAGEGATEWAY_API AttachVolumeResult();
    AWS_STORAGEGATEWAY_API AttachVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API AttachVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was attached to the
     * gateway.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }
    inline AttachVolumeResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline AttachVolumeResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline AttachVolumeResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume target, which includes the iSCSI
     * name for the initiator that was used to connect to the target.</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }
    inline void SetTargetARN(const Aws::String& value) { m_targetARN = value; }
    inline void SetTargetARN(Aws::String&& value) { m_targetARN = std::move(value); }
    inline void SetTargetARN(const char* value) { m_targetARN.assign(value); }
    inline AttachVolumeResult& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}
    inline AttachVolumeResult& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}
    inline AttachVolumeResult& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AttachVolumeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AttachVolumeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AttachVolumeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;

    Aws::String m_targetARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
