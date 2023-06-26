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
  class GetEncryptionConfigResult
  {
  public:
    AWS_XRAY_API GetEncryptionConfigResult();
    AWS_XRAY_API GetEncryptionConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetEncryptionConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The encryption configuration document.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The encryption configuration document.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfig = value; }

    /**
     * <p>The encryption configuration document.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfig = std::move(value); }

    /**
     * <p>The encryption configuration document.</p>
     */
    inline GetEncryptionConfigResult& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The encryption configuration document.</p>
     */
    inline GetEncryptionConfigResult& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEncryptionConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEncryptionConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEncryptionConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EncryptionConfig m_encryptionConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
