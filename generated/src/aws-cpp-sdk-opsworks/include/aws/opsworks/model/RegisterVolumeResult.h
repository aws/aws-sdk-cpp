﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>RegisterVolume</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterVolumeResult">AWS
   * API Reference</a></p>
   */
  class RegisterVolumeResult
  {
  public:
    AWS_OPSWORKS_API RegisterVolumeResult();
    AWS_OPSWORKS_API RegisterVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API RegisterVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The volume ID.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }
    inline RegisterVolumeResult& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline RegisterVolumeResult& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline RegisterVolumeResult& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterVolumeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterVolumeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterVolumeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
