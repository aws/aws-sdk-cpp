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
  class DeleteTemplateSyncConfigResult
  {
  public:
    AWS_PROTON_API DeleteTemplateSyncConfigResult() = default;
    AWS_PROTON_API DeleteTemplateSyncConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API DeleteTemplateSyncConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The template sync configuration detail data that's returned by Proton.</p>
     */
    inline const TemplateSyncConfig& GetTemplateSyncConfig() const { return m_templateSyncConfig; }
    template<typename TemplateSyncConfigT = TemplateSyncConfig>
    void SetTemplateSyncConfig(TemplateSyncConfigT&& value) { m_templateSyncConfigHasBeenSet = true; m_templateSyncConfig = std::forward<TemplateSyncConfigT>(value); }
    template<typename TemplateSyncConfigT = TemplateSyncConfig>
    DeleteTemplateSyncConfigResult& WithTemplateSyncConfig(TemplateSyncConfigT&& value) { SetTemplateSyncConfig(std::forward<TemplateSyncConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteTemplateSyncConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TemplateSyncConfig m_templateSyncConfig;
    bool m_templateSyncConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
