/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/EncryptionConfig.h>
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
namespace XRay
{
namespace Model
{
  class PutEncryptionConfigResult
  {
  public:
    AWS_XRAY_API PutEncryptionConfigResult();
    AWS_XRAY_API PutEncryptionConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API PutEncryptionConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new encryption configuration.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The new encryption configuration.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfig = value; }

    /**
     * <p>The new encryption configuration.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfig = std::move(value); }

    /**
     * <p>The new encryption configuration.</p>
     */
    inline PutEncryptionConfigResult& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The new encryption configuration.</p>
     */
    inline PutEncryptionConfigResult& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutEncryptionConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutEncryptionConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutEncryptionConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EncryptionConfig m_encryptionConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
