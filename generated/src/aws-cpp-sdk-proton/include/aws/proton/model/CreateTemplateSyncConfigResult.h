/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/TemplateSyncConfig.h>
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
namespace Proton
{
namespace Model
{
  class CreateTemplateSyncConfigResult
  {
  public:
    AWS_PROTON_API CreateTemplateSyncConfigResult();
    AWS_PROTON_API CreateTemplateSyncConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CreateTemplateSyncConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The template sync configuration detail data that's returned by Proton.</p>
     */
    inline const TemplateSyncConfig& GetTemplateSyncConfig() const{ return m_templateSyncConfig; }

    /**
     * <p>The template sync configuration detail data that's returned by Proton.</p>
     */
    inline void SetTemplateSyncConfig(const TemplateSyncConfig& value) { m_templateSyncConfig = value; }

    /**
     * <p>The template sync configuration detail data that's returned by Proton.</p>
     */
    inline void SetTemplateSyncConfig(TemplateSyncConfig&& value) { m_templateSyncConfig = std::move(value); }

    /**
     * <p>The template sync configuration detail data that's returned by Proton.</p>
     */
    inline CreateTemplateSyncConfigResult& WithTemplateSyncConfig(const TemplateSyncConfig& value) { SetTemplateSyncConfig(value); return *this;}

    /**
     * <p>The template sync configuration detail data that's returned by Proton.</p>
     */
    inline CreateTemplateSyncConfigResult& WithTemplateSyncConfig(TemplateSyncConfig&& value) { SetTemplateSyncConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTemplateSyncConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTemplateSyncConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTemplateSyncConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TemplateSyncConfig m_templateSyncConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
