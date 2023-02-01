/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/TemplateSyncConfig.h>
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
  class UpdateTemplateSyncConfigResult
  {
  public:
    AWS_PROTON_API UpdateTemplateSyncConfigResult();
    AWS_PROTON_API UpdateTemplateSyncConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateTemplateSyncConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateTemplateSyncConfigResult& WithTemplateSyncConfig(const TemplateSyncConfig& value) { SetTemplateSyncConfig(value); return *this;}

    /**
     * <p>The template sync configuration detail data that's returned by Proton.</p>
     */
    inline UpdateTemplateSyncConfigResult& WithTemplateSyncConfig(TemplateSyncConfig&& value) { SetTemplateSyncConfig(std::move(value)); return *this;}

  private:

    TemplateSyncConfig m_templateSyncConfig;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
